# MITgcm_BGC_Model_Config
MITgcm model configurations, mainly utilizing the existing ocean biogeochemistry model.

## Model Setup: global_ocn3deg_bgcv0 (use MITgcm checkpoint 68r)
## Forward Configuration
MITgcm global ocean biogeochemistry model configurations based on a verification (/tutorial_global_oce_biogeo),
2.8 degrees, 15 non-uniform vertical levels. This configuration turns on KPP scheme (which is different from
the verification) and code includes preformed and ideal age tracers (dic/code_preform_agev0 in my other repository).
This configuration starts from spun-up initial conditions (3000 years) and can run with constant atmospheric CO<sub>2</sub>
or transient atmospheric CO<sub>2</sub> from an input file (co2atmos.dat). However, for the adjoint simulations (test),
we are not using the transient atmospheric CO<sub>2</sub>.

## Adjoint Configuration
Global ocean biogeochemical adjoint configuration

### Possible objective functions

We are potentially interested in using the following as objective functions (i.e. quantities of interest):

- Heat content in the region of the North Atlantic anthropogenic carbon sink
- Air-Sea CO<sub>2</sub> flux and DIC in the region of the North Atlantic anthropogenic carbon sink

Eventually, we will aim to include sample masks of each type in this repository. 

### Possible independent variables

We are also potentially interested in examining the following independent variables (i.e. controls):

- Kinematic sensitivity
- Dynamic sensitivity
- Carbonate chemistry sensitivity 
- Wind stress
- Net heat flux

### Installation 
Below is an example of how to check out this code and set up MCS within it. 
```
git clone https://github.com/MITgcm/MITgcm.git
cd MITgcm
git checkout checkpoint68r
mkdir experiments
cd experiments
git clone https://github.com/ytakano3/MITgcm_BGC_Model_Config
git remote add upstream [https://github.com/mhaigh/MCS.git ](https://github.com/ytakano3/MITgcm_BGC_Model_Config)
git fetch upstream
```
You'll also need to download the large input files and place them in the `input_files` directory. 

#### Installation for code development
In addition to the above steps, to propose new code modifications, first create a new branch:
```
git checkout -b «YOUR_NEWBRANCH_NAME»
```
One useful naming convention to consider is to star the branch name with your initials and to tie it to a specific issue (e.g. `dcj_issue03`). That way there is a clear connection between the issue and the branch that has been creaetd to address that issue. Next, modify the source code as needed to get the adjoint to compile. Then do the usual git adds and git commits. When ready, push the new branch onto the origin remote (fork).
```
git push -u origin «YOUR_NEWBRANCH_NAME»
```
#### Code modification for adjoint configuration
DIC_OPTIONS.h: You need to `#undef CARBONCHEM_SOLVESAPHE` (and `#define CARBONCHEM_TOTALPHSCALE`) to compile the model for adjoint configuration. New carbonate chemistry options does not work at this point (March, 2024).  
DIC_VARS.h: You need to change the name of COMMON BLOCK, now `COMMON /CARBONCHEM_SAPHE/`, TAF will not be able to compile.  
GMREDI_OPTIONS.h: You need to turn off submesoscale eddies (parameterization) `#define GM_EXCLUDE_SUBMESO` and BVP method `#undef GM_BOLUS_BVP`.  
SIZE.h, PTRACERS_SIZE.h: Minor modification (see the header files, different from the one in verification).  
packages.conf: Add necessary packages for adjoint configuration (`ecco, autodiff, cost, ctrl, grdchk`).  

### Compiling
To compile the adjoint code, one needs access to the `staf` script, which can be obtained via FastOpt. The forward code will be put together and sent to the FastOpt servers in Germany, where it will be passed through the TAF tool. Algorithmically differentiated adjoint code will then be returned and then compiled.

Once `staf` is available, then you can use the script in the `build_ad` directory, which works for adjoint compilation. It assumes the default modules, which at present does not include NetCDF. For more information, see the MITgcm documentation on ARCHER2:

https://docs.archer2.ac.uk/research-software/mitgcm/

Also see the TAF manual, which is available via the `staf` script using the following command:
```
staf -get manual
```

### Checkpointing

In an adjoint run, there is a balance between storage (i.e. saving the model state to disk) and recomputation (i.e. integrating the model forward from a stored state). Changing the `nchklev` parameters in the `tamc.h` file is how you control the relative balance between storage and recomputation. 

A suggested strategy that has been used on a variety of HPC platforms is as follows. 

1. Set `nchklev_1` as large as possible, up to the size allowed by memory on your machine. (Use the `size` command to estimate the memory per process. This should be just a little bit less than the maximum allowed on the machine).
2. Next, set `nchklev_2` and `nchklev_3` to be large enough to accomodate the entire run. A common strategy is to set `nchklev_2 = nchklev_3 = sqrt(numsteps/nchklev_1) + 1`. 
3. If the `nchklev_2` files get too big, then you may have to add a fourth level (i.e. `nchklev_4`), but this is unlikely.

Note that we need the product `nchklev_1*nchklev_2*nchklev_3` to be greater than the anticipated number of timesteps in the forward model run. So `nchklev_1*nchklev_2*nchklev_3>numsteps`.

This strategy allows you to keep as much in memory as possible, minimising the I/O requirements for the disk. This is useful, as I/O is often the bottleneck for MITgcm runs on HPC. 

Another way to adjust performance is to adjust how tapelevel I/O is handled. Although it is machine dependent, the following strategy by Gael Forget has worked well in the past:
```
C o Tape settings
#define ALLOW_AUTODIFF_WHTAPEIO
#define AUTODIFF_USE_OLDSTORE_2D
#define AUTODIFF_USE_OLDSTORE_3D
#define EXCLUDE_WHIO_GLOBUFF_2D
#define ALLOW_INIT_WHTAPEIO
```

### Defining the masks 
The generic cost function approach allows one to define the objective function as an integral over space and time. We include some example scripts for creating masks in this repository. For more information, see this part of the MITgcm documentation:

https://mitgcm.readthedocs.io/en/latest/ocean_state_est/ocean_state_est.html#generic-cost-function

