#!/bin/bash

# set environment variables
#export MITGCM_ROOTDIR=../../../../MITgcm/
#export PATH=$MITGCM_ROOTDIR/tools:$PATH
#export MITGCM_OPT=$MITGCM_ROOTDIR/tools/build_options/XXX

# run genmake and make
#../../../tools/genmake2 -mpi -mods=../code/ -optfile $MITGCM_OPT
#../../../tools/genmake2 -mods=../code -mpi -of=../../../tools/build_options/linux_amd64_scihub2
../../../tools/genmake2 -mods=../code -mpi -enable=mnc -of=../../../tools/build_options/linux_amd64_scihub2
make depend
make -j 2
