!/bin/bash

ln -s ../build_ad/mitgcmuv_ad .
ln -s ../input_ad/input_kpp_atmco2pv0/* .
ln -s ../input_ad/input_kpp_atmco2pv0/ocean_bgc/*.bin .
ln -s ../input_ad/input_kpp_atmco2pv0/ocean_phys/*.bin .
ln -s ../input_ad/input_kpp_atmco2pv0/pickup/* .
ln -s ../input_ad/input_kpp_atmco2pv0/adjoint/* .

# The idea would be to run this before submitting a slurm script
