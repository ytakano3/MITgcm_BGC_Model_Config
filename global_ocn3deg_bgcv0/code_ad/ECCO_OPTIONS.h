C $Header: /u/gcmpack/MITgcm_contrib/gael/verification/ECCO_v4_r2/code/ECCO_OPTIONS.h,v 1.5 2016/09/21 19:20:34 gforget Exp $
C $Name:  $

CBOP
C !ROUTINE: ECCO_OPTIONS.h
C !INTERFACE:
C #include "ECCO_OPTIONS.h"

C !DESCRIPTION:
C *==================================================================*
C | CPP options file for ECCO (ecco) package:
C | Control which optional features to compile in this package code.
C *==================================================================*
CEOP

#ifndef ECCO_OPTIONS_H
#define ECCO_OPTIONS_H
#include "PACKAGES_CONFIG.h"
#include "CPP_OPTIONS.h"

#ifdef ALLOW_ECCO
#ifdef ECCO_CPPOPTIONS_H

C-- When multi-package option-file ECCO_CPPOPTIONS.h is used (directly included
C   in CPP_OPTIONS.h), this option file is left empty since all options that
C   are specific to this package are assumed to be set in ECCO_CPPOPTIONS.h

#else /* ndef ECCO_CPPOPTIONS_H */

C-- Package-specific Options & Macros go here

C Allow for generic cost function and integral terms
#define ALLOW_GENCOST_CONTRIBUTION
C Allow for 3 dimensional generic terms
#define ALLOW_GENCOST3D
C GENCOST usage ... (c68r)
C # undef ALLOW_GENCOST_1D
C # undef ALLOW_GENCOST_SSTV4_OUTPUT

C Allow Open-Boundary cost contributions (c68r) (not included)

C Include global mean steric sea level correction
#undef ALLOW_PSBAR_STERIC
C #ifdef ATMOSPHERIC_LOADING
C     Apply inverse barometer correction (c68r)
C # define ALLOW_IB_CORR
C #endif

C Allow for near-shore and high-latitude altimetry
#undef ALLOW_SHALLOW_ALTIMETRY
#undef ALLOW_HIGHLAT_ALTIMETRY

C Allow for In-Situ Profiles cost function contribution
#undef ALLOW_PROFILES_CONTRIBUTION

C Cost function output format
#define ALLOW_ECCO_OLD_FC_PRINT

C Re-activate deprecated codes (just in case ... but not recommended)
#undef ECCO_CTRL_DEPRECATED

C o Generate more text in STDOUT (c68r)
C #undef ECCO_VERBOSE
C #undef ALLOW_ECCO_DEBUG

#endif /* ndef ECCO_CPPOPTIONS_H */
#endif /* ALLOW_ECCO */
#endif /* ECCO_OPTIONS_H */

