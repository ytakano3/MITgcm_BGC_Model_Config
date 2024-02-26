#!/bin/bash

# set environment variables
export MITGCM_ROOTDIR=../../../../../MITgcm 
export PATH=$MITGCM_ROOTDIR/tools:$PATH
export MITGCM_OPT=$MITGCM_ROOTDIR/tools/build_options/linux_ia64_cray_archer2

# run genmake and make
../../../../tools/genmake2 -ieee -mpi -mods=../code_ad/ -optfile $MITGCM_OPT
make depend 
make adtaf 
make adall
