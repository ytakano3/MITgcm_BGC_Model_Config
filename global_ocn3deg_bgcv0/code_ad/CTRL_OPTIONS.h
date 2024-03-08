C $Header: /u/gcmpack/MITgcm_contrib/gael/verification/ECCO_v4_r2/code/CTRL_OPTIONS.h,v 1.2 2015/10/23 19:25:16 gforget Exp $
C $Name:  $

CBOP
C !ROUTINE: CTRL_OPTIONS.h
C !INTERFACE:
C #include "CTRL_OPTIONS.h"

C !DESCRIPTION:
C *==================================================================*
C | CPP options file for Control (ctrl) package:
C | Control which optional features to compile in this package code.
C *==================================================================*
CEOP

#ifndef CTRL_OPTIONS_H
#define CTRL_OPTIONS_H
#include "PACKAGES_CONFIG.h"
#include "CPP_OPTIONS.h"

#ifdef ALLOW_CTRL
#ifdef ECCO_CPPOPTIONS_H

C-- When multi-package option-file ECCO_CPPOPTIONS.h is used (directly included
C    in CPP_OPTIONS.h), this option file is left empty since all options that
C   are specific to this package are assumed to be set in ECCO_CPPOPTIONS.h

#else /* ndef ECCO_CPPOPTIONS_H */
C   ==================================================================
C-- Package-specific Options & Macros go here

C o I/O and pack settings
#define CTRL_SET_PREC_32
C undef CTRL_SET_PREC_32 (c68r)
C o This option is only relevant (for pack/unpack) with OBCS_CONTROL: (c68r)
#define ALLOW_NONDIMENSIONAL_CONTROL_IO
#define ALLOW_PACKUNPACK_METHOD2
C #undef ALLOW_NONDIMENSIONAL_CONTROL_IO (c68r)
C #undef EXCLUDE_CTRL_PACK
C #undef ALLOW_PACKUNPACK_METHOD2 (c68r)
C #undef CTRL_DO_PACK_UNPACK_ONLY
C #undef CTRL_PACK_PRECISE
C #undef CTRL_UNPACK_PRECISE
C #undef CTRL_DELZNORM
C #undef ALLOW_CTRL_WETV
  
C This allows for GMREDI controls
#define ALLOW_KAPGM_CONTROL
#undef ALLOW_KAPGM_CONTROL_OLD
#define ALLOW_KAPREDI_CONTROL
#undef ALLOW_KAPREDI_CONTROL_OLD
C #undef ALLOW_KAPGM_CONTROL
C #undef ALLOW_KAPREDI_CONTROL
C #undef ALLOW_BOTTOMDRAG_CONTROL
C #undef ALLOW_DIC_CONTROL

C Allows bathymetry as a control vector (c68r) (no options)
C #undef ALLOW_DEPTH_CONTROL
C #ifdef ALLOW_DEPTH_CONTROL
C   Only relevant within DEPTH_CONTROL code:
C # define USE_SMOOTH_MIN
C # undef ALLOW_HFACC_CONTROL
C # undef ALLOW_HFACC3D_CONTROL
C #endif /* ALLOW_DEPTH_CONTROL */

C o Sets of controls (objective function)
#define ALLOW_GENTIM2D_CONTROL
#define ALLOW_GENARR2D_CONTROL
#define ALLOW_GENARR3D_CONTROL
C # undef ALLOW_UVEL0_CONTROL
C # undef ALLOW_VVEL0_CONTROL
C # undef CTRL_SET_OLD_MAXCVARS_30
C # undef CTRL_SET_OLD_MAXCVARS_40

C o OPEN BOUNDARIES OPTION (c68r), (not included here)

C  o use pkg/smooth correlation operator (incl. smoother) for 3D controls (Weaver, Courtier 01)
C    This CPP option just sets the default for ctrlSmoothCorrel23 to .TRUE.
#define ALLOW_SMOOTH_CORREL3D
C  o use pkg/smooth correlation operator (incl. smoother) for 2D controls (Weaver, Courtier 01)
C    This CPP option just sets the default for ctrlSmoothCorrel2D to .TRUE.
#define ALLOW_SMOOTH_CORREL2D

C  o Impose bounds on controls
#define ALLOW_ADCTRLBOUND

C   o Rotate u/v vector control to zonal/meridional 
C   components
#define ALLOW_ROTATE_UV_CONTROLS

C  o Originally the first two time-reccords of control
C    variable tau u and tau v were skipped.
C    The CTRL_SKIP_FIRST_TWO_ATM_REC_ALL option extends this
C    to the other the time variable atmospheric controls.
C #undef CTRL_SKIP_FIRST_TWO_ATM_REC_ALL (c68r)

C  o Print more debug info to STDOUT (c68r)
C #undef ALLOW_CTRL_DEBUG

C   ==================================================================
#endif /* ndef ECCO_CPPOPTIONS_H */
#endif /* ALLOW_CTRL */
#endif /* CTRL_OPTIONS_H */

