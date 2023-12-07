# MITgcm_BGC_Model_Config
MITgcm model configurations, mainly utilizing the existing ocean biogeochemistry model.

## global_ocn3deg_bgcv0 (use MITgcm checkpoint 68r)
MITgcm global ocean biogeochemistry model configurations based on a verification (/tutorial_global_oce_biogeo),
2.8 degrees, 15 non-uniform vertical levels. This configuration turns on KPP scheme (which is different from
the verification) and code includes preformed and ideal age tracers (dic/code_preform_agev0 in my other repository).
This configuration starts from spun-up initial conditions (3000 years) and can run with constant atmospheric CO<sub>2</sub>
or transient atmospheric CO<sub>2</sub> from an input file (co2atmos.dat).
