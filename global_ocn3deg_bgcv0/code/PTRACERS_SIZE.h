#ifdef ALLOW_PTRACERS

CBOP
C    !ROUTINE: PTRACERS_SIZE.h
C    !INTERFACE:
C #include PTRACERS_SIZE.h
 
C    !DESCRIPTION:
C Contains passive tracer array size (number of tracers).

C PTRACERS_num defines how many passive tracers are allocated/exist.
C  and is set here (default 1)
C Note (Y.T): the number of ptracers is 10, (dic package default is 4-6)
C           : preformed trcers (DICpre, ALKpre, PO4pre, O2pre) are implemented
C           : add ideal age tracer is 11
C
C     Number of tracers
      INTEGER PTRACERS_num
      PARAMETER(PTRACERS_num = 11 )

CEOP
#endif /* ALLOW_PTRACERS */
