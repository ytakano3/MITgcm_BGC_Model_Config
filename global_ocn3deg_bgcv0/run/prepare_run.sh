!/bin/bash

ln -s ../build/mitgcmuv .
ln -s ../input/input_kpp_atmco2pv0/* .
#ln -s ../input/input_kpp_atmco2pv0/ocean_bgc/*.bin .
#ln -s ../input/input_kpp_atmco2pv0/ocean_phys/*.bin .
ln -s ../input/input_kpp_atmco2pv0/pickup/* .

# The idea would be to run this before submitting a slurm script
# No need to copy binary files from ocean_XXX, set to directly read these files
