# Multithreaded + multi-processing makefile for:
#    Linux ln01 5.14.21-150400.24.46_12.0.70-cray_shasta_c #1 SMP Wed Apr 26 21:31:55 UTC 2023 (d00f98e) x86_64 x86_64 x86_64 GNU/Linux
# This makefile was generated automatically on
#    Mon 26 Feb 14:45:07 GMT 2024
# by the command:
#    ../../../../tools/genmake2 -ieee -mpi -mods=../code_ad/ -optfile ../../../../../MITgcm/tools/build_options/linux_ia64_cray_archer2
# executed by:
#    dannes1@ln01:/home/n01/n01/dannes1/work/MITgcm_cstreams/MITgcm/experiments/MITgcm_BGC_Model_Config/global_ocn3deg_bgcv0/build_ad
#
# OPTFILE="../../../../../MITgcm/tools/build_options/linux_ia64_cray_archer2"
#
# BUILDDIR     : Directory where object files are written
# SOURCEDIRS   : Directories containing the source (.F) files
# INCLUDEDIRS  : Directories containing the header-source (.h) files
# EXEDIR       : Directory where executable that is generated is written
# EXECUTABLE   : Full path of executable binary
#
# CPP          : C-preprocessor command
# INCLUDES     : Directories searched for header files
# DEFINES      : Macro definitions for CPP
# MAKEDEPEND   : Dependency generator
# FC           : Fortran compiler command
# FFLAGS       : Configuration/debugging options for FC
# FOPTIM       : Optimization options for FC
# LINK         : Command for link editor program
# LIBS         : Library flags /or/ additional optimization/debugging flags

ROOTDIR     = ../../../../../MITgcm
BUILDDIR    = .
SOURCEDIRS  =  ../code_ad/ $(ROOTDIR)/pkg/autodiff $(ROOTDIR)/pkg/cd_code $(ROOTDIR)/pkg/cost $(ROOTDIR)/pkg/ctrl $(ROOTDIR)/pkg/debug $(ROOTDIR)/pkg/diagnostics $(ROOTDIR)/pkg/ecco $(ROOTDIR)/pkg/gchem $(ROOTDIR)/pkg/generic_advdiff $(ROOTDIR)/pkg/grdchk $(ROOTDIR)/pkg/kpp $(ROOTDIR)/pkg/mdsio $(ROOTDIR)/pkg/mom_common $(ROOTDIR)/pkg/mom_fluxform $(ROOTDIR)/pkg/mom_vecinv $(ROOTDIR)/pkg/monitor $(ROOTDIR)/pkg/ptracers $(ROOTDIR)/pkg/rw $(ROOTDIR)/pkg/timeave $(ROOTDIR)/pkg/cal $(ROOTDIR)/eesupp/src $(ROOTDIR)/model/src
INCLUDEDIRS =  ../code_ad/ $(ROOTDIR)/pkg/autodiff $(ROOTDIR)/pkg/cd_code $(ROOTDIR)/pkg/cost $(ROOTDIR)/pkg/ctrl $(ROOTDIR)/pkg/debug $(ROOTDIR)/pkg/diagnostics $(ROOTDIR)/pkg/ecco $(ROOTDIR)/pkg/gchem $(ROOTDIR)/pkg/generic_advdiff $(ROOTDIR)/pkg/grdchk $(ROOTDIR)/pkg/kpp $(ROOTDIR)/pkg/mdsio $(ROOTDIR)/pkg/mom_common $(ROOTDIR)/pkg/mom_fluxform $(ROOTDIR)/pkg/mom_vecinv $(ROOTDIR)/pkg/monitor $(ROOTDIR)/pkg/ptracers $(ROOTDIR)/pkg/rw $(ROOTDIR)/pkg/timeave $(ROOTDIR)/pkg/cal $(ROOTDIR)/eesupp/inc $(ROOTDIR)/model/inc
EXEDIR      = .
EXECUTABLE  = $(EXEDIR)/mitgcmuv
TOOLSDIR    = $(ROOTDIR)/tools
OADTOOLS    = 

#eh3  new defines for the adjoint work
AUTODIFF    = $(ROOTDIR)/pkg/autodiff
EXE_ADJ     = mitgcmuv_ad
EXE_TLM     = mitgcmuv_ftl
EXE_SVD     = mitgcmuv_svd

ENABLED_PACKAGES =  -DALLOW_AUTODIFF -DALLOW_CD_CODE -DALLOW_COST -DALLOW_CTRL -DALLOW_DEBUG -DALLOW_DIAGNOSTICS -DALLOW_ECCO -DALLOW_GCHEM -DALLOW_GENERIC_ADVDIFF -DALLOW_GRDCHK -DALLOW_KPP -DALLOW_MDSIO -DALLOW_MOM_COMMON -DALLOW_MOM_FLUXFORM -DALLOW_MOM_VECINV -DALLOW_MONITOR -DALLOW_PTRACERS -DALLOW_RW -DALLOW_TIMEAVE -DALLOW_CAL
DISABLED_PACKAGES =  -UALLOW_ADMTLM -UALLOW_AIM_V23 -UALLOW_ATM2D -UALLOW_ATM_COMMON -UALLOW_ATM_COMPON_INTERF -UALLOW_ATM_OCN_COUPLER -UALLOW_ATM_PHYS -UALLOW_BBL -UALLOW_BLING -UALLOW_BULK_FORCE -UALLOW_CFC -UALLOW_CHEAPAML -UALLOW_CHRONOS -UALLOW_COMPON_COMMUNIC -UALLOW_DIC -UALLOW_DOWN_SLOPE -UALLOW_EBM -UALLOW_EMBED_FILES -UALLOW_EXCH2 -UALLOW_EXF -UALLOW_FIZHI -UALLOW_FLT -UALLOW_FRAZIL -UALLOW_GGL90 -UALLOW_GMREDI -UALLOW_GRIDALT -UALLOW_ICEFRONT -UALLOW_KL10 -UALLOW_LAND -UALLOW_LAYERS -UALLOW_LONGSTEP -UALLOW_MATRIX -UALLOW_MNC -UALLOW_MY82 -UALLOW_MYPACKAGE -UALLOW_OBCS -UALLOW_OCN_COMPON_INTERF -UALLOW_OFFLINE -UALLOW_OPENAD -UALLOW_OPPS -UALLOW_PP81 -UALLOW_PROFILES -UALLOW_RBCS -UALLOW_REGRID -UALLOW_RUNCLOCK -UALLOW_SALT_PLUME -UALLOW_SBO -UALLOW_SEAICE -UALLOW_SHAP_FILT -UALLOW_SHELFICE -UALLOW_SHOWFLOPS -UALLOW_SMOOTH -UALLOW_SPHERE -UALLOW_STREAMICE -UALLOW_TAPENADE -UALLOW_THSICE -UALLOW_ZONAL_FILT

# These files are created by Makefile
SPECIAL_FILES = PACKAGES_CONFIG.h AD_CONFIG.h FC_NAMEMANGLE.h BUILD_INFO.h
EMBEDDED_FILES = 
# Unix ln (link)
LN = ln -s
# Dependency generator
MAKEDEPEND = $(TOOLSDIR)/xmakedepend
# Special preprocessor (KAP on DECs, FPP on Crays)
KPP = 
# Fortran compiler
FC = ftn
# Fortran compiler
F90C = ftn
# C compiler
CC = cc
# Link editor
LINK = ftn 

# Defines for CPP
DEFINES = -DWORDLENGTH=4 -D_BYTESWAPIO -DHAVE_LAPACK -DNML_TERMINATOR -DALLOW_USE_MPI -DHAVE_SYSTEM -DHAVE_FDATE -DHAVE_CLOC -DHAVE_SETRLSTK -DHAVE_SIGREG -DHAVE_STAT -DHAVE_LAPACK -DHAVE_FLUSH 
# Includes for CPP
INCLUDES = -I${NETCDF_DIR}/include -I${CRAY_MPICH_DIR}/include
# default CPP includes for makedepend
CPPINCLUDES =  -I/usr/lib64/gcc/x86_64-suse-linux/7/include -I/usr/local/include -I/usr/lib64/gcc/x86_64-suse-linux/7/include-fixed -I/usr/lib64/gcc/x86_64-suse-linux/7/../../../../x86_64-suse-linux/include -I/usr/include
# Flags for KPP
KFLAGS1 = 
KFLAGS2 = 
# Optim./debug for FC
FFLAGS =  -em -ef -dynamic  -h pic
FOPTIM = -O0  -hfp0 
# Optim./debug for FC
F90FLAGS = 
F90OPTIM = 
F90FIXEDFORMAT = 
# Flags for CC
CFLAGS =  -h pic -dynamic
# Files that should not be optimized
NOOPTFILES = 
NOOPTFLAGS = -O0
# Flags and libraries needed for linking
LIBS = -L${NETCDF_DIR}/lib -L${CRAY_MPICH_DIR}/include/lib
# Name of the makefile
MAKEFILE = Makefile
# Name of the make program
MAKE = make

F77_SRC_FILES =  \
 dic_biotic_forcing.F \
 gchem_forcing_sep.F \
 ptracers_apply_forcing.F \
 active_file_ad.F \
 active_file_control.F \
 active_file_control_slice.F \
 active_file.F \
 active_file_gen_ad.F \
 active_file_gen.F \
 active_file_gen_g.F \
 active_file_g.F \
 active_file_loc_ad.F \
 active_file_loc.F \
 active_file_loc_g.F \
 adautodiff_whtapeio_sync.F \
 addamp_adj.F \
 add_prefix.F \
 addummy_for_etan.F \
 addummy_in_dynamics.F \
 addummy_in_stepping.F \
 adopen_adclose.F \
 adread_adwrite.F \
 adread_adwrite_i.F \
 adzero_adj.F \
 autodiff_check.F \
 autodiff_findunit.F \
 autodiff_inadmode_set_ad.F \
 autodiff_inadmode_set.F \
 autodiff_inadmode_set_g.F \
 autodiff_inadmode_unset_ad.F \
 autodiff_inadmode_unset.F \
 autodiff_inadmode_unset_g.F \
 autodiff_ini_model_io.F \
 autodiff_init_varia.F \
 autodiff_readparms.F \
 autodiff_restore.F \
 autodiff_store.F \
 autodiff_whtapeio_sync.F \
 cg2d_mad.F \
 copy_ad_uv_outp.F \
 copy_advar_outp.F \
 damp_adj.F \
 dummy_for_etan.F \
 dummy_in_dynamics.F \
 dummy_in_stepping.F \
 dump_adj_xy.F \
 dump_adj_xy_uv.F \
 dump_adj_xyz.F \
 dump_adj_xyz_uv.F \
 g_dummy_for_etan.F \
 g_dummy_in_dynamics.F \
 g_dummy_in_stepping.F \
 global_max_ad.F \
 global_sum_ad.F \
 global_sum_tile_ad.F \
 myactivefunction_ad.F \
 myactivefunction.F \
 zero_adj.F \
 cd_code_init_fixed.F \
 cd_code_ini_vars.F \
 cd_code_read_pickup.F \
 cd_code_scheme.F \
 cd_code_write_pickup.F \
 cost_accumulate_mean.F \
 cost_atlantic_heat.F \
 cost_check.F \
 cost_dependent_init.F \
 cost_depth.F \
 cost_final.F \
 cost_final_restore.F \
 cost_final_store.F \
 cost_init_varia.F \
 cost_readparms.F \
 cost_state_final.F \
 cost_test.F \
 cost_tile.F \
 cost_tracer.F \
 cost_vector.F \
 adctrl_bound.F \
 ctrl_bound.F \
 ctrl_bound_tl.F \
 ctrl_check.F \
 ctrl_cost_driver.F \
 ctrl_cost_gen.F \
 ctrl_depth_ini.F \
 ctrl_get_gen.F \
 ctrl_get_gen_rec.F \
 ctrl_get_mask.F \
 ctrl_getobcse.F \
 ctrl_getobcsn.F \
 ctrl_getobcss.F \
 ctrl_getobcsw.F \
 ctrl_hfacc_ini.F \
 ctrl_init_ctrlvar.F \
 ctrl_init.F \
 ctrl_init_obcs_variables.F \
 ctrl_init_rec.F \
 ctrl_init_variables.F \
 ctrl_init_wet.F \
 ctrl_map_forcing.F \
 ctrl_map_genarr.F \
 ctrl_map_gentim2d.F \
 ctrl_map_ini_genarr.F \
 ctrl_map_ini_gentim2d.F \
 ctrl_mask_set_xz.F \
 ctrl_mask_set_yz.F \
 ctrl_pack.F \
 ctrl_readparms.F \
 ctrl_set_fname.F \
 ctrl_set_globfld_xy.F \
 ctrl_set_globfld_xyz.F \
 ctrl_set_globfld_xz.F \
 ctrl_set_globfld_yz.F \
 ctrl_set_pack_xy.F \
 ctrl_set_pack_xyz.F \
 ctrl_set_pack_xz.F \
 ctrl_set_pack_yz.F \
 ctrl_set_unpack_xy.F \
 ctrl_set_unpack_xyz.F \
 ctrl_set_unpack_xz.F \
 ctrl_set_unpack_yz.F \
 ctrl_summary.F \
 ctrl_swapffields.F \
 ctrl_toolbox.F \
 ctrl_unpack.F \
 optim_readparms.F \
 chksum_tiled.F \
 debug_call.F \
 debug_cs_corner_uv.F \
 debug_enter.F \
 debug_fld_stats_rl.F \
 debug_fld_stats_rs.F \
 debug_leave.F \
 debug_msg.F \
 debug_stats_rl.F \
 debug_stats_rs.F \
 fill_in_corners_rl.F \
 write_fullarray_rl.F \
 write_fullarray_rs.F \
 diag_calc_psivel.F \
 diag_cg2d.F \
 diagnostics_addtolist.F \
 diagnostics_calc_phivel.F \
 diagnostics_check.F \
 diagnostics_clear.F \
 diagnostics_fill.F \
 diagnostics_fill_field.F \
 diagnostics_fill_rs.F \
 diagnostics_fill_state.F \
 diagnostics_fract_fill.F \
 diagnostics_ini_io.F \
 diagnostics_init_early.F \
 diagnostics_init_fixed.F \
 diagnostics_init_varia.F \
 diagnostics_interp_p2p.F \
 diagnostics_interp_vert.F \
 diagnostics_is_on.F \
 diagnostics_list_check.F \
 diagnostics_main_init.F \
 diagnostics_mnc_out.F \
 diagnostics_out.F \
 diagnostics_readparms.F \
 diagnostics_read_pickup.F \
 diagnostics_scale_fill.F \
 diagnostics_scale_fill_rs.F \
 diagnostics_set_calc.F \
 diagnostics_setdiag.F \
 diagnostics_set_levels.F \
 diagnostics_set_pointers.F \
 diagnostics_status_error.F \
 diagnostics_sum_levels.F \
 diagnostics_summary.F \
 diagnostics_switch_onoff.F \
 diagnostics_utils.F \
 diagnostics_write_adj.F \
 diagnostics_write.F \
 diagnostics_write_pickup.F \
 diagstats_ascii_out.F \
 diagstats_calc.F \
 diagstats_clear.F \
 diagstats_close_io.F \
 diagstats_fill.F \
 diagstats_global.F \
 diagstats_ini_io.F \
 diagstats_local.F \
 diagstats_mnc_out.F \
 diagstats_others_calc.F \
 diagstats_output.F \
 diagstats_setdiag.F \
 diagstats_set_pointers.F \
 diagstats_set_regions.F \
 diag_vegtile_fill.F \
 cost_averagesfields.F \
 cost_averagesflags.F \
 cost_averagesgeneric.F \
 cost_averagesinit.F \
 cost_bp_read.F \
 cost_gencal.F \
 cost_gencost_all.F \
 cost_gencost_assignperiod.F \
 cost_gencost_boxmean.F \
 cost_gencost_bpv4.F \
 cost_gencost_customize.F \
 cost_gencost_glbmean.F \
 cost_gencost_moc.F \
 cost_gencost_seaicev4.F \
 cost_gencost_sshv4.F \
 cost_gencost_sstv4.F \
 cost_gencost_transp.F \
 cost_generic.F \
 cost_genread.F \
 cost_obcs_ageos.F \
 cost_obcse.F \
 cost_obcs.F \
 cost_obcsn.F \
 cost_obcss.F \
 cost_obcsvol.F \
 cost_obcsw.F \
 cost_sla_read.F \
 cost_sla_read_yd.F \
 ecco_check.F \
 ecco_cost_driver.F \
 ecco_cost_final.F \
 ecco_cost_init_barfiles.F \
 ecco_cost_init_fixed.F \
 ecco_cost_init_varia.F \
 ecco_cost_weights.F \
 ecco_diagnostics_init.F \
 ecco_init_fixed.F \
 ecco_init_varia.F \
 ecco_phys.F \
 ecco_readparms.F \
 ecco_read_pickup.F \
 ecco_summary.F \
 ecco_toolbox.F \
 ecco_write_pickup.F \
 stergloh_output.F \
 gchem_add_tendency.F \
 gchem_calc_tendency.F \
 gchem_check.F \
 gchem_diagnostics_init.F \
 gchem_fields_load.F \
 gchem_init_fixed.F \
 gchem_init_vari.F \
 gchem_output.F \
 gchem_readparms.F \
 gchem_surfmean.F \
 gchem_tr_register.F \
 gchem_write_pickup.F \
 gad_advection.F \
 gad_advscheme.F \
 gad_biharm_r.F \
 gad_biharm_x.F \
 gad_biharm_y.F \
 gad_c2_adv_r.F \
 gad_c2_adv_x.F \
 gad_c2_adv_y.F \
 gad_c2_impl_r.F \
 gad_c4_adv_r.F \
 gad_c4_adv_x.F \
 gad_c4_adv_y.F \
 gad_calc_rhs.F \
 gad_check.F \
 gad_del2.F \
 gad_diagnostics_init.F \
 gad_diagnostics_state.F \
 gad_diff_r.F \
 gad_diff_x.F \
 gad_diff_y.F \
 gad_dst2u1_adv_r.F \
 gad_dst2u1_adv_x.F \
 gad_dst2u1_adv_y.F \
 gad_dst2u1_impl_r.F \
 gad_dst3_adv_r.F \
 gad_dst3_adv_x.F \
 gad_dst3_adv_y.F \
 gad_dst3fl_adv_r.F \
 gad_dst3fl_adv_x.F \
 gad_dst3fl_adv_y.F \
 gad_dst3fl_impl_r.F \
 gad_exch_som.F \
 gad_fluxlimit_adv_r.F \
 gad_fluxlimit_adv_x.F \
 gad_fluxlimit_adv_y.F \
 gad_fluxlimit_impl_r.F \
 gad_grad_x.F \
 gad_grad_y.F \
 gad_implicit_r.F \
 gad_init_fixed.F \
 gad_init_varia.F \
 gad_os7mp_adv_r.F \
 gad_os7mp_adv_x.F \
 gad_os7mp_adv_y.F \
 gad_osc_hat_r.F \
 gad_osc_hat_x.F \
 gad_osc_hat_y.F \
 gad_osc_mul_r.F \
 gad_osc_mul_x.F \
 gad_osc_mul_y.F \
 gad_plm_fun.F \
 gad_ppm_adv_r.F \
 gad_ppm_adv_x.F \
 gad_ppm_adv_y.F \
 gad_ppm_flx_r.F \
 gad_ppm_flx_x.F \
 gad_ppm_flx_y.F \
 gad_ppm_fun.F \
 gad_ppm_hat_r.F \
 gad_ppm_hat_x.F \
 gad_ppm_hat_y.F \
 gad_ppm_p3e_r.F \
 gad_ppm_p3e_x.F \
 gad_ppm_p3e_y.F \
 gad_pqm_adv_r.F \
 gad_pqm_adv_x.F \
 gad_pqm_adv_y.F \
 gad_pqm_flx_r.F \
 gad_pqm_flx_x.F \
 gad_pqm_flx_y.F \
 gad_pqm_fun.F \
 gad_pqm_hat_r.F \
 gad_pqm_hat_x.F \
 gad_pqm_hat_y.F \
 gad_pqm_p5e_r.F \
 gad_pqm_p5e_x.F \
 gad_pqm_p5e_y.F \
 gad_read_pickup.F \
 gad_som_advect.F \
 gad_som_adv_r.F \
 gad_som_adv_x.F \
 gad_som_adv_y.F \
 gad_som_exchanges.F \
 gad_som_fill_cs_corner.F \
 gad_som_lim_r.F \
 gad_som_prep_cs_corner.F \
 gad_u3_adv_r.F \
 gad_u3_adv_x.F \
 gad_u3_adv_y.F \
 gad_u3c4_impl_r.F \
 gad_write_pickup.F \
 salt_fill.F \
 grdchk_check.F \
 grdchk_getadxx.F \
 grdchk_get_obcs_mask.F \
 grdchk_get_position.F \
 grdchk_getxx.F \
 grdchk_init.F \
 grdchk_loc.F \
 grdchk_main.F \
 grdchk_print.F \
 grdchk_readparms.F \
 grdchk_setxx.F \
 grdchk_summary.F \
 kpp_calc_diff_ptr.F \
 kpp_calc_diff_s.F \
 kpp_calc_diff_t.F \
 kpp_calc.F \
 kpp_calc_visc.F \
 kpp_check.F \
 kpp_diagnostics_init.F \
 kpp_do_exch.F \
 kpp_forcing_surf.F \
 kpp_init_fixed.F \
 kpp_init_varia.F \
 kpp_output.F \
 kpp_readparms.F \
 kpp_routines.F \
 kpp_transport_ptr.F \
 kpp_transport_s.F \
 kpp_transport_t.F \
 mdsio_buffertorl.F \
 mdsio_buffertors.F \
 mdsio_check4file.F \
 mdsio_facef_read.F \
 mdsio_gl.F \
 mdsio_gl_slice.F \
 mdsio_pass_r4torl.F \
 mdsio_pass_r4tors.F \
 mdsio_pass_r8torl.F \
 mdsio_pass_r8tors.F \
 mdsio_rd_rec_rl.F \
 mdsio_rd_rec_rs.F \
 mdsio_read_field.F \
 mdsio_read_meta.F \
 mdsio_read_section.F \
 mdsio_read_tape.F \
 mdsio_readvec_loc.F \
 mdsio_read_whalos.F \
 mdsio_rw_field.F \
 mdsio_rw_slice.F \
 mdsio_seg4torl.F \
 mdsio_seg4tors.F \
 mdsio_seg8torl.F \
 mdsio_seg8tors.F \
 mdsio_segxtorx_2d.F \
 mdsio_write_field.F \
 mdsio_writelocal.F \
 mdsio_write_meta.F \
 mdsio_write_section.F \
 mdsio_write_tape.F \
 mdsio_writevec_loc.F \
 mdsio_write_whalos.F \
 mdsio_wr_metafiles.F \
 mdsio_wr_rec_rl.F \
 mdsio_wr_rec_rs.F \
 mom_calc_3d_strain.F \
 mom_calc_absvort3.F \
 mom_calc_hdiv.F \
 mom_calc_hfacz.F \
 mom_calc_ke.F \
 mom_calc_relvort3.F \
 mom_calc_smag_3d.F \
 mom_calc_strain.F \
 mom_calc_tension.F \
 mom_calc_visc.F \
 mom_diagnostics_init.F \
 mom_hdissip.F \
 mom_init_fixed.F \
 mom_quasihydrostatic.F \
 mom_u_botdrag_coeff.F \
 mom_u_coriolis_nh.F \
 mom_u_implicit_r.F \
 mom_u_metric_nh.F \
 mom_u_rviscflux.F \
 mom_u_sidedrag.F \
 mom_uv_smag_3d.F \
 mom_v_botdrag_coeff.F \
 mom_v_coriolis_nh.F \
 mom_v_implicit_r.F \
 mom_visc_qgl_limit.F \
 mom_visc_qgl_stretch.F \
 mom_v_metric_nh.F \
 mom_v_rviscflux.F \
 mom_v_sidedrag.F \
 mom_w_coriolis_nh.F \
 mom_w_metric_nh.F \
 mom_w_sidedrag.F \
 mom_w_smag_3d.F \
 mom_calc_rtrans.F \
 mom_fluxform.F \
 mom_u_adv_uu.F \
 mom_u_adv_vu.F \
 mom_u_adv_wu.F \
 mom_u_coriolis.F \
 mom_u_del2u.F \
 mom_u_metric_cylinder.F \
 mom_u_metric_sphere.F \
 mom_uv_boundary.F \
 mom_u_xviscflux.F \
 mom_u_yviscflux.F \
 mom_v_adv_uv.F \
 mom_v_adv_vv.F \
 mom_v_adv_wv.F \
 mom_v_coriolis.F \
 mom_v_del2v.F \
 mom_v_metric_cylinder.F \
 mom_v_metric_sphere.F \
 mom_v_xviscflux.F \
 mom_v_yviscflux.F \
 mom_vecinv.F \
 mom_vi_coriolis.F \
 mom_vi_del2uv.F \
 mom_vi_hdissip.F \
 mom_vi_u_coriolis_c4.F \
 mom_vi_u_coriolis.F \
 mom_vi_u_grad_ke.F \
 mom_vi_u_vertshear.F \
 mom_vi_v_coriolis_c4.F \
 mom_vi_v_coriolis.F \
 mom_vi_v_grad_ke.F \
 mom_vi_v_vertshear.F \
 mon_advcfl.F \
 mon_advcflw2.F \
 mon_advcflw.F \
 mon_calc_advcfl.F \
 mon_calc_stats_rl.F \
 mon_calc_stats_rs.F \
 mon_init.F \
 monitor_ad.F \
 monitor.F \
 monitor_g.F \
 mon_ke.F \
 mon_out.F \
 mon_printstats_rl.F \
 mon_printstats_rs.F \
 mon_set_iounit.F \
 mon_set_pref.F \
 mon_solution.F \
 mon_stats_latbnd_rl.F \
 mon_stats_rl.F \
 mon_stats_rs.F \
 mon_surfcor.F \
 mon_vort3.F \
 mon_writestats_rl.F \
 mon_writestats_rs.F \
 ptracers_ad_dump.F \
 ptracers_calc_wsurf_tr.F \
 ptracers_check.F \
 ptracers_check_pickup.F \
 ptracers_convect.F \
 ptracers_debug.F \
 ptracers_diagnostics_init.F \
 ptracers_diagnostics_state.F \
 ptracers_dyn_state_data_mod.F \
 ptracers_dyn_state_mod.F \
 ptracers_fields_blocking_exch.F \
 ptracers_forcing_surf.F \
 ptracers_init_fixed.F \
 ptracers_init_varia.F \
 ptracers_integrate.F \
 ptracers_mnc_init.F \
 ptracers_monitor_ad.F \
 ptracers_monitor.F \
 ptracers_output.F \
 ptracers_readparms.F \
 ptracers_read_pickup.F \
 ptracers_reset.F \
 ptracers_set_iolabel.F \
 ptracers_switch_onoff.F \
 ptracers_timeave.F \
 ptracers_turnoff_io.F \
 ptracers_write_pickup.F \
 ptracers_write_state.F \
 ptracers_write_timeave.F \
 ptracers_zonal_filt_apply.F \
 get_write_global_fld.F \
 read_fld_xy_rl.F \
 read_fld_xy_rs.F \
 read_fld_xyz_rl.F \
 read_fld_xyz_rs.F \
 read_glvec_rl.F \
 read_glvec_rs.F \
 read_mflds.F \
 read_rec.F \
 rw_get_suffix.F \
 set_write_global_fld.F \
 write_fld_3d_rl.F \
 write_fld_3d_rs.F \
 write_fld_s3d_rl.F \
 write_fld_s3d_rs.F \
 write_fld_xy_rl.F \
 write_fld_xy_rs.F \
 write_fld_xyz_rl.F \
 write_fld_xyz_rs.F \
 write_glvec_rl.F \
 write_glvec_rs.F \
 write_local_rl.F \
 write_local_rs.F \
 write_rec.F \
 timeave_cumul_1k1t.F \
 timeave_cumul_1t.F \
 timeave_cumul_1vfc.F \
 timeave_cumul_2v.F \
 timeave_cumul_2vfc.F \
 timeave_cumulate.F \
 timeave_cumul_dif_1t.F \
 timeave_init_fixed.F \
 timeave_norma_2v.F \
 timeave_normalize.F \
 timeave_reset.F \
 timeave_statvars.F \
 timeave_statv_write.F \
 timeave_surf_flux.F \
 cal_addtime.F \
 cal_checkdate.F \
 cal_compdates.F \
 cal_convdate.F \
 cal_copydate.F \
 cal_daysformonth.F \
 cal_dayspermonth.F \
 cal_fulldate.F \
 cal_getdate.F \
 cal_getmonthsrec.F \
 cal_init_fixed.F \
 cal_intdays.F \
 cal_intmonths.F \
 cal_intyears.F \
 cal_isleap.F \
 cal_monthsforyear.F \
 cal_monthsperyear.F \
 cal_numints.F \
 cal_printdate.F \
 cal_printerror.F \
 cal_readparms.F \
 cal_set.F \
 cal_stepsforday.F \
 cal_stepsperday.F \
 cal_subdates.F \
 cal_summary.F \
 cal_time2dump.F \
 cal_timeinterval.F \
 cal_timepassed.F \
 cal_timestamp.F \
 cal_toseconds.F \
 cal_weekday.F \
 all_proc_die.F \
 bar2.F \
 bar_check.F \
 barrier.F \
 check_threads.F \
 comm_stats.F \
 cumulsum_z_tile.F \
 different_multiple.F \
 diff_phase_multiple.F \
 eeboot.F \
 eeboot_minimal.F \
 eedata_example.F \
 eedie.F \
 eeintro_msg.F \
 eeset_parms.F \
 eewrite_eeenv.F \
 exch0_r4.F \
 exch0_r8.F \
 exch0_rl.F \
 exch0_rs.F \
 exch1_bg_r4_cube.F \
 exch1_bg_r8_cube.F \
 exch1_bg_rl_cube.F \
 exch1_bg_rs_cube.F \
 exch1_r4_cube.F \
 exch1_r4.F \
 exch1_r8_cube.F \
 exch1_r8.F \
 exch1_rl_ad.F \
 exch1_rl_cube_ad.F \
 exch1_rl_cube.F \
 exch1_rl.F \
 exch1_rs_ad.F \
 exch1_rs_cube_ad.F \
 exch1_rs_cube.F \
 exch1_rs.F \
 exch1_uv_r4_cube.F \
 exch1_uv_r8_cube.F \
 exch1_uv_rl_cube.F \
 exch1_uv_rs_cube.F \
 exch1_z_r4_cube.F \
 exch1_z_r8_cube.F \
 exch1_z_rl_cube.F \
 exch1_z_rs_cube.F \
 exch_3d_r4.F \
 exch_3d_r8.F \
 exch_3d_rl.F \
 exch_3d_rs.F \
 exch_cycle_ebl.F \
 exch_init.F \
 exch_r4_recv_get_x.F \
 exch_r4_recv_get_y.F \
 exch_r4_send_put_x.F \
 exch_r4_send_put_y.F \
 exch_r8_recv_get_x.F \
 exch_r8_recv_get_y.F \
 exch_r8_send_put_x.F \
 exch_r8_send_put_y.F \
 exch_rl_recv_get_x.F \
 exch_rl_recv_get_y.F \
 exch_rl_send_put_x.F \
 exch_rl_send_put_y.F \
 exch_rs_recv_get_x.F \
 exch_rs_recv_get_y.F \
 exch_rs_send_put_x.F \
 exch_rs_send_put_y.F \
 exch_s3d_r4.F \
 exch_s3d_r8.F \
 exch_s3d_rl.F \
 exch_s3d_rs.F \
 exch_sm_3d_r4.F \
 exch_sm_3d_r8.F \
 exch_sm_3d_rl.F \
 exch_sm_3d_rs.F \
 exch_tap_b.F \
 exch_tap_d.F \
 exch_uv_3d_r4.F \
 exch_uv_3d_r8.F \
 exch_uv_3d_rl.F \
 exch_uv_3d_rs.F \
 exch_uv_agrid_3d_r4.F \
 exch_uv_agrid_3d_r8.F \
 exch_uv_agrid_3d_rl.F \
 exch_uv_agrid_3d_rs.F \
 exch_uv_bgrid_3d_r4.F \
 exch_uv_bgrid_3d_r8.F \
 exch_uv_bgrid_3d_rl.F \
 exch_uv_bgrid_3d_rs.F \
 exch_uv_dgrid_3d_r4.F \
 exch_uv_dgrid_3d_r8.F \
 exch_uv_dgrid_3d_rl.F \
 exch_uv_dgrid_3d_rs.F \
 exch_uv_xy_r4.F \
 exch_uv_xy_r8.F \
 exch_uv_xy_rl.F \
 exch_uv_xy_rs.F \
 exch_uv_xyz_r4.F \
 exch_uv_xyz_r8.F \
 exch_uv_xyz_rl.F \
 exch_uv_xyz_rs.F \
 exch_xy_r4.F \
 exch_xy_r8.F \
 exch_xy_rl.F \
 exch_xy_rs.F \
 exch_xyz_r4.F \
 exch_xyz_r8.F \
 exch_xyz_rl.F \
 exch_xyz_rs.F \
 exch_z_3d_r4.F \
 exch_z_3d_r8.F \
 exch_z_3d_rl.F \
 exch_z_3d_rs.F \
 fill_cs_corner_ag_rl.F \
 fill_cs_corner_tr_rl.F \
 fill_cs_corner_uv_rl.F \
 fill_cs_corner_uv_rs.F \
 fool_the_compiler.F \
 gather_2d_r4.F \
 gather_2d_r8.F \
 gather_2d_wh_r4.F \
 gather_2d_wh_r8.F \
 gather_vec_r4.F \
 gather_vec_r8.F \
 gather_xz.F \
 gather_yz.F \
 get_periodic_interval.F \
 global_max.F \
 global_sum.F \
 global_sum_singlecpu.F \
 global_sum_tile.F \
 global_vec_sum.F \
 gsum.F \
 ini_communication_patterns.F \
 ini_procs.F \
 ini_threading_environment.F \
 lef_zero.F \
 main.F \
 master_cpu_io.F \
 master_cpu_thread.F \
 mds_byteswapi4.F \
 mds_byteswapr4.F \
 mds_byteswapr8.F \
 mdsfindunit.F \
 mds_flush.F \
 mds_reclen.F \
 memsync.F \
 nml_change_syntax.F \
 nml_set_terminator.F \
 open_copy_data_file.F \
 print.F \
 reset_halo.F \
 scatter_2d_r4.F \
 scatter_2d_r8.F \
 scatter_2d_wh_r4.F \
 scatter_2d_wh_r8.F \
 scatter_vec_r4.F \
 scatter_vec_r8.F \
 scatter_xz.F \
 scatter_yz.F \
 stop_if_error.F \
 timers.F \
 utils.F \
 write_utils.F \
 adams_bashforth2.F \
 adams_bashforth3.F \
 add_walls2masks.F \
 apply_forcing.F \
 calc_3d_diffusivity.F \
 calc_adv_flow.F \
 calc_div_ghat.F \
 calc_eddy_stress.F \
 calc_grad_phi_fv.F \
 calc_grad_phi_hyd.F \
 calc_grad_phi_surf.F \
 calc_grid_angles.F \
 calc_gw.F \
 calc_ivdc.F \
 calc_oce_mxlayer.F \
 calc_phi_hyd.F \
 calc_r_star.F \
 calc_surf_dr.F \
 calc_viscosity.F \
 calc_wsurf_tr.F \
 cg2d_ex0.F \
 cg2d.F \
 cg2d_nsa.F \
 cg2d_sr.F \
 cg3d_ex0.F \
 cg3d.F \
 check_pickup.F \
 config_check.F \
 config_summary.F \
 convective_adjustment.F \
 convective_adjustment_ini.F \
 convectively_mixtracer.F \
 convective_weights.F \
 correction_step.F \
 cycle_ab_tracer.F \
 cycle_tracer.F \
 diags_oceanic_surf_flux.F \
 diags_phi_hyd.F \
 diags_phi_rlow.F \
 diags_rho.F \
 diags_sound_speed.F \
 do_atmospheric_phys.F \
 do_fields_blocking_exchanges.F \
 do_oceanic_phys.F \
 do_stagger_fields_exchanges.F \
 do_statevars_diags.F \
 do_statevars_tave.F \
 do_the_model_io.F \
 do_write_pickup.F \
 dynamics.F \
 external_fields_load.F \
 external_forcing.F \
 external_forcing_surf.F \
 find_alpha.F \
 find_hyd_press_1d.F \
 find_rho.F \
 forcing_surf_relax.F \
 forward_step.F \
 freesurf_rescale_g.F \
 freeze_surface.F \
 grad_sigma.F \
 gsw_teos10.F \
 impldiff.F \
 ini_cartesian_grid.F \
 ini_cg2d.F \
 ini_cg3d.F \
 ini_cori.F \
 ini_curvilinear_grid.F \
 ini_cylinder_grid.F \
 ini_depths.F \
 ini_dynvars.F \
 ini_eos.F \
 ini_ffields.F \
 ini_fields.F \
 ini_forcing.F \
 ini_global_domain.F \
 ini_grid.F \
 ini_linear_phisurf.F \
 ini_local_grid.F \
 ini_masks_etc.F \
 ini_mixing.F \
 ini_mnc_vars.F \
 ini_model_io.F \
 ini_nh_fields.F \
 ini_nh_vars.F \
 ini_nlfs_vars.F \
 ini_parms.F \
 ini_p_ground.F \
 ini_pressure.F \
 ini_psurf.F \
 ini_salt.F \
 ini_sigma_hfac.F \
 ini_spherical_polar_grid.F \
 ini_theta.F \
 initialise_fixed.F \
 initialise_varia.F \
 ini_vel.F \
 ini_vertical_grid.F \
 integrate_for_w.F \
 integr_continuity.F \
 load_fields_driver.F \
 load_grid_spacing.F \
 load_ref_files.F \
 main_do_loop.F \
 momentum_correction_step.F \
 packages_boot.F \
 packages_check.F \
 packages_error_msg.F \
 packages_init_fixed.F \
 packages_init_variables.F \
 packages_print_msg.F \
 packages_readparms.F \
 packages_unused_msg.F \
 packages_write_pickup.F \
 plot_field.F \
 port_rand.F \
 post_cg3d.F \
 pre_cg3d.F \
 pressure_for_eos.F \
 read_pickup.F \
 remove_mean.F \
 reset_nlfs_vars.F \
 rotate_spherical_polar_grid.F \
 rotate_uv2en.F \
 salt_integrate.F \
 seawater.F \
 set_defaults.F \
 set_grid_factors.F \
 set_parms.F \
 set_ref_state.F \
 solve_for_pressure.F \
 solve_pentadiagonal.F \
 solve_tridiagonal.F \
 solve_uv_tridiago.F \
 state_summary.F \
 swfrac.F \
 taueddy_init_varia.F \
 taueddy_tendency_apply.F \
 temp_integrate.F \
 the_main_loop.F \
 the_model_main.F \
 thermodynamics.F \
 timestep.F \
 timestep_tracer.F \
 timestep_wvel.F \
 tracers_correction_step.F \
 tracers_iigw_correction.F \
 turnoff_model_io.F \
 update_cg2d.F \
 update_etah.F \
 update_etaws.F \
 update_masks_etc.F \
 update_r_star.F \
 update_sigma.F \
 update_surf_dr.F \
 write_grid.F \
 write_pickup.F \
 write_state.F
NON_AD_F77_SRC_FILES =  \
 dic_biotic_forcing.F \
 active_file_ad.F \
 active_file_control.F \
 active_file_control_slice.F \
 active_file.F \
 active_file_gen_ad.F \
 active_file_gen.F \
 active_file_gen_g.F \
 active_file_g.F \
 active_file_loc_ad.F \
 active_file_loc.F \
 active_file_loc_g.F \
 adautodiff_whtapeio_sync.F \
 addamp_adj.F \
 add_prefix.F \
 addummy_for_etan.F \
 addummy_in_dynamics.F \
 addummy_in_stepping.F \
 adopen_adclose.F \
 adread_adwrite.F \
 adread_adwrite_i.F \
 adzero_adj.F \
 autodiff_check.F \
 autodiff_findunit.F \
 autodiff_inadmode_set_ad.F \
 autodiff_inadmode_set.F \
 autodiff_inadmode_set_g.F \
 autodiff_inadmode_unset_ad.F \
 autodiff_inadmode_unset.F \
 autodiff_inadmode_unset_g.F \
 autodiff_ini_model_io.F \
 autodiff_readparms.F \
 autodiff_whtapeio_sync.F \
 cg2d_mad.F \
 copy_ad_uv_outp.F \
 copy_advar_outp.F \
 damp_adj.F \
 dummy_for_etan.F \
 dummy_in_dynamics.F \
 dummy_in_stepping.F \
 dump_adj_xy.F \
 dump_adj_xy_uv.F \
 dump_adj_xyz.F \
 dump_adj_xyz_uv.F \
 g_dummy_for_etan.F \
 g_dummy_in_dynamics.F \
 g_dummy_in_stepping.F \
 global_max_ad.F \
 global_sum_ad.F \
 global_sum_tile_ad.F \
 myactivefunction_ad.F \
 myactivefunction.F \
 zero_adj.F \
 cd_code_init_fixed.F \
 cd_code_write_pickup.F \
 cost_check.F \
 cost_dependent_init.F \
 cost_final_restore.F \
 cost_final_store.F \
 cost_readparms.F \
 adctrl_bound.F \
 ctrl_bound.F \
 ctrl_bound_tl.F \
 ctrl_check.F \
 ctrl_hfacc_ini.F \
 ctrl_init_ctrlvar.F \
 ctrl_init.F \
 ctrl_init_wet.F \
 ctrl_mask_set_xz.F \
 ctrl_mask_set_yz.F \
 ctrl_pack.F \
 ctrl_readparms.F \
 ctrl_set_fname.F \
 ctrl_set_globfld_xy.F \
 ctrl_set_globfld_xyz.F \
 ctrl_set_globfld_xz.F \
 ctrl_set_globfld_yz.F \
 ctrl_set_pack_xy.F \
 ctrl_set_pack_xyz.F \
 ctrl_set_pack_xz.F \
 ctrl_set_pack_yz.F \
 ctrl_set_unpack_xy.F \
 ctrl_set_unpack_xyz.F \
 ctrl_set_unpack_xz.F \
 ctrl_set_unpack_yz.F \
 ctrl_summary.F \
 ctrl_unpack.F \
 optim_readparms.F \
 chksum_tiled.F \
 debug_call.F \
 debug_cs_corner_uv.F \
 debug_enter.F \
 debug_fld_stats_rl.F \
 debug_fld_stats_rs.F \
 debug_leave.F \
 debug_msg.F \
 debug_stats_rl.F \
 debug_stats_rs.F \
 fill_in_corners_rl.F \
 write_fullarray_rl.F \
 write_fullarray_rs.F \
 diag_calc_psivel.F \
 diag_cg2d.F \
 diagnostics_addtolist.F \
 diagnostics_calc_phivel.F \
 diagnostics_check.F \
 diagnostics_clear.F \
 diagnostics_fill.F \
 diagnostics_fill_field.F \
 diagnostics_fill_rs.F \
 diagnostics_fill_state.F \
 diagnostics_fract_fill.F \
 diagnostics_ini_io.F \
 diagnostics_init_early.F \
 diagnostics_init_fixed.F \
 diagnostics_init_varia.F \
 diagnostics_interp_p2p.F \
 diagnostics_interp_vert.F \
 diagnostics_list_check.F \
 diagnostics_main_init.F \
 diagnostics_mnc_out.F \
 diagnostics_out.F \
 diagnostics_readparms.F \
 diagnostics_read_pickup.F \
 diagnostics_scale_fill.F \
 diagnostics_scale_fill_rs.F \
 diagnostics_set_calc.F \
 diagnostics_setdiag.F \
 diagnostics_set_levels.F \
 diagnostics_set_pointers.F \
 diagnostics_status_error.F \
 diagnostics_sum_levels.F \
 diagnostics_summary.F \
 diagnostics_switch_onoff.F \
 diagnostics_utils.F \
 diagnostics_write_adj.F \
 diagnostics_write.F \
 diagnostics_write_pickup.F \
 diagstats_ascii_out.F \
 diagstats_calc.F \
 diagstats_clear.F \
 diagstats_close_io.F \
 diagstats_fill.F \
 diagstats_global.F \
 diagstats_ini_io.F \
 diagstats_local.F \
 diagstats_mnc_out.F \
 diagstats_others_calc.F \
 diagstats_output.F \
 diagstats_setdiag.F \
 diagstats_set_pointers.F \
 diagstats_set_regions.F \
 diag_vegtile_fill.F \
 ecco_check.F \
 ecco_cost_init_barfiles.F \
 ecco_cost_init_fixed.F \
 ecco_cost_weights.F \
 ecco_diagnostics_init.F \
 ecco_init_fixed.F \
 ecco_readparms.F \
 ecco_summary.F \
 ecco_write_pickup.F \
 stergloh_output.F \
 gchem_check.F \
 gchem_diagnostics_init.F \
 gchem_init_fixed.F \
 gchem_output.F \
 gchem_readparms.F \
 gchem_tr_register.F \
 gchem_write_pickup.F \
 gad_advscheme.F \
 gad_check.F \
 gad_diagnostics_init.F \
 gad_diagnostics_state.F \
 gad_init_fixed.F \
 gad_osc_hat_r.F \
 gad_osc_hat_x.F \
 gad_osc_hat_y.F \
 gad_osc_mul_r.F \
 gad_osc_mul_x.F \
 gad_osc_mul_y.F \
 gad_plm_fun.F \
 gad_ppm_adv_r.F \
 gad_ppm_adv_x.F \
 gad_ppm_adv_y.F \
 gad_ppm_flx_r.F \
 gad_ppm_flx_x.F \
 gad_ppm_flx_y.F \
 gad_ppm_fun.F \
 gad_ppm_hat_r.F \
 gad_ppm_hat_x.F \
 gad_ppm_hat_y.F \
 gad_ppm_p3e_r.F \
 gad_ppm_p3e_x.F \
 gad_ppm_p3e_y.F \
 gad_pqm_adv_r.F \
 gad_pqm_adv_x.F \
 gad_pqm_adv_y.F \
 gad_pqm_flx_r.F \
 gad_pqm_flx_x.F \
 gad_pqm_flx_y.F \
 gad_pqm_fun.F \
 gad_pqm_hat_r.F \
 gad_pqm_hat_x.F \
 gad_pqm_hat_y.F \
 gad_pqm_p5e_r.F \
 gad_pqm_p5e_x.F \
 gad_pqm_p5e_y.F \
 gad_write_pickup.F \
 salt_fill.F \
 grdchk_check.F \
 grdchk_getadxx.F \
 grdchk_get_obcs_mask.F \
 grdchk_get_position.F \
 grdchk_getxx.F \
 grdchk_init.F \
 grdchk_loc.F \
 grdchk_main.F \
 grdchk_print.F \
 grdchk_readparms.F \
 grdchk_setxx.F \
 grdchk_summary.F \
 kpp_check.F \
 kpp_diagnostics_init.F \
 kpp_init_fixed.F \
 kpp_readparms.F \
 mdsio_buffertorl.F \
 mdsio_buffertors.F \
 mdsio_check4file.F \
 mdsio_facef_read.F \
 mdsio_gl.F \
 mdsio_gl_slice.F \
 mdsio_pass_r4torl.F \
 mdsio_pass_r4tors.F \
 mdsio_pass_r8torl.F \
 mdsio_pass_r8tors.F \
 mdsio_rd_rec_rl.F \
 mdsio_rd_rec_rs.F \
 mdsio_read_field.F \
 mdsio_read_meta.F \
 mdsio_read_section.F \
 mdsio_read_tape.F \
 mdsio_readvec_loc.F \
 mdsio_read_whalos.F \
 mdsio_rw_field.F \
 mdsio_rw_slice.F \
 mdsio_seg4torl.F \
 mdsio_seg4tors.F \
 mdsio_seg8torl.F \
 mdsio_seg8tors.F \
 mdsio_segxtorx_2d.F \
 mdsio_write_field.F \
 mdsio_writelocal.F \
 mdsio_write_meta.F \
 mdsio_write_section.F \
 mdsio_write_tape.F \
 mdsio_writevec_loc.F \
 mdsio_write_whalos.F \
 mdsio_wr_metafiles.F \
 mdsio_wr_rec_rl.F \
 mdsio_wr_rec_rs.F \
 mom_calc_3d_strain.F \
 mom_calc_smag_3d.F \
 mom_diagnostics_init.F \
 mom_init_fixed.F \
 mom_u_implicit_r.F \
 mom_uv_smag_3d.F \
 mom_v_implicit_r.F \
 mom_w_coriolis_nh.F \
 mom_w_metric_nh.F \
 mom_w_sidedrag.F \
 mom_w_smag_3d.F \
 mom_uv_boundary.F \
 mon_advcfl.F \
 mon_advcflw2.F \
 mon_advcflw.F \
 mon_calc_advcfl.F \
 mon_calc_stats_rl.F \
 mon_calc_stats_rs.F \
 mon_init.F \
 monitor_ad.F \
 monitor.F \
 monitor_g.F \
 mon_ke.F \
 mon_out.F \
 mon_printstats_rl.F \
 mon_printstats_rs.F \
 mon_set_iounit.F \
 mon_set_pref.F \
 mon_solution.F \
 mon_stats_latbnd_rl.F \
 mon_stats_rl.F \
 mon_stats_rs.F \
 mon_surfcor.F \
 mon_vort3.F \
 mon_writestats_rl.F \
 mon_writestats_rs.F \
 ptracers_ad_dump.F \
 ptracers_check.F \
 ptracers_check_pickup.F \
 ptracers_debug.F \
 ptracers_diagnostics_init.F \
 ptracers_diagnostics_state.F \
 ptracers_dyn_state_data_mod.F \
 ptracers_dyn_state_mod.F \
 ptracers_init_fixed.F \
 ptracers_mnc_init.F \
 ptracers_monitor_ad.F \
 ptracers_monitor.F \
 ptracers_output.F \
 ptracers_readparms.F \
 ptracers_set_iolabel.F \
 ptracers_timeave.F \
 ptracers_turnoff_io.F \
 ptracers_write_pickup.F \
 ptracers_write_state.F \
 ptracers_write_timeave.F \
 ptracers_zonal_filt_apply.F \
 get_write_global_fld.F \
 read_glvec_rl.F \
 read_glvec_rs.F \
 read_mflds.F \
 rw_get_suffix.F \
 set_write_global_fld.F \
 write_fld_3d_rl.F \
 write_fld_3d_rs.F \
 write_fld_s3d_rl.F \
 write_fld_s3d_rs.F \
 write_fld_xy_rl.F \
 write_fld_xy_rs.F \
 write_fld_xyz_rl.F \
 write_fld_xyz_rs.F \
 write_glvec_rl.F \
 write_glvec_rs.F \
 write_local_rl.F \
 write_local_rs.F \
 write_rec.F \
 timeave_init_fixed.F \
 cal_daysformonth.F \
 cal_dayspermonth.F \
 cal_init_fixed.F \
 cal_monthsforyear.F \
 cal_monthsperyear.F \
 cal_readparms.F \
 cal_set.F \
 cal_stepsforday.F \
 cal_stepsperday.F \
 cal_summary.F \
 cal_weekday.F \
 all_proc_die.F \
 bar2.F \
 bar_check.F \
 barrier.F \
 check_threads.F \
 comm_stats.F \
 cumulsum_z_tile.F \
 diff_phase_multiple.F \
 eeboot.F \
 eeboot_minimal.F \
 eedata_example.F \
 eedie.F \
 eeintro_msg.F \
 eeset_parms.F \
 eewrite_eeenv.F \
 exch0_r4.F \
 exch0_r8.F \
 exch0_rl.F \
 exch0_rs.F \
 exch1_bg_r4_cube.F \
 exch1_bg_r8_cube.F \
 exch1_bg_rl_cube.F \
 exch1_bg_rs_cube.F \
 exch1_r4_cube.F \
 exch1_r4.F \
 exch1_r8_cube.F \
 exch1_r8.F \
 exch1_rl_ad.F \
 exch1_rl_cube_ad.F \
 exch1_rl_cube.F \
 exch1_rl.F \
 exch1_rs_ad.F \
 exch1_rs_cube_ad.F \
 exch1_rs_cube.F \
 exch1_rs.F \
 exch1_uv_r4_cube.F \
 exch1_uv_r8_cube.F \
 exch1_uv_rl_cube.F \
 exch1_uv_rs_cube.F \
 exch1_z_r4_cube.F \
 exch1_z_r8_cube.F \
 exch1_z_rl_cube.F \
 exch1_z_rs_cube.F \
 exch_3d_r4.F \
 exch_3d_r8.F \
 exch_cycle_ebl.F \
 exch_init.F \
 exch_r4_recv_get_x.F \
 exch_r4_recv_get_y.F \
 exch_r4_send_put_x.F \
 exch_r4_send_put_y.F \
 exch_r8_recv_get_x.F \
 exch_r8_recv_get_y.F \
 exch_r8_send_put_x.F \
 exch_r8_send_put_y.F \
 exch_rl_recv_get_x.F \
 exch_rl_recv_get_y.F \
 exch_rl_send_put_x.F \
 exch_rl_send_put_y.F \
 exch_rs_recv_get_x.F \
 exch_rs_recv_get_y.F \
 exch_rs_send_put_x.F \
 exch_rs_send_put_y.F \
 exch_s3d_r4.F \
 exch_s3d_r8.F \
 exch_s3d_rl.F \
 exch_s3d_rs.F \
 exch_sm_3d_r4.F \
 exch_sm_3d_r8.F \
 exch_sm_3d_rs.F \
 exch_tap_b.F \
 exch_tap_d.F \
 exch_uv_3d_r4.F \
 exch_uv_3d_r8.F \
 exch_uv_agrid_3d_r4.F \
 exch_uv_agrid_3d_r8.F \
 exch_uv_bgrid_3d_r4.F \
 exch_uv_bgrid_3d_r8.F \
 exch_uv_bgrid_3d_rl.F \
 exch_uv_bgrid_3d_rs.F \
 exch_uv_dgrid_3d_r4.F \
 exch_uv_dgrid_3d_r8.F \
 exch_uv_xy_r4.F \
 exch_uv_xy_r8.F \
 exch_uv_xyz_r4.F \
 exch_uv_xyz_r8.F \
 exch_xy_r4.F \
 exch_xy_r8.F \
 exch_xyz_r4.F \
 exch_xyz_r8.F \
 exch_z_3d_r4.F \
 exch_z_3d_r8.F \
 exch_z_3d_rl.F \
 exch_z_3d_rs.F \
 fool_the_compiler.F \
 gather_2d_r4.F \
 gather_2d_r8.F \
 gather_2d_wh_r4.F \
 gather_2d_wh_r8.F \
 gather_vec_r4.F \
 gather_vec_r8.F \
 gather_xz.F \
 gather_yz.F \
 global_max.F \
 global_sum.F \
 global_sum_singlecpu.F \
 global_sum_tile.F \
 global_vec_sum.F \
 gsum.F \
 ini_communication_patterns.F \
 ini_procs.F \
 ini_threading_environment.F \
 main.F \
 master_cpu_io.F \
 master_cpu_thread.F \
 mds_byteswapi4.F \
 mds_byteswapr4.F \
 mds_byteswapr8.F \
 mdsfindunit.F \
 mds_flush.F \
 mds_reclen.F \
 memsync.F \
 nml_change_syntax.F \
 nml_set_terminator.F \
 open_copy_data_file.F \
 print.F \
 reset_halo.F \
 scatter_2d_r4.F \
 scatter_2d_r8.F \
 scatter_2d_wh_r4.F \
 scatter_2d_wh_r8.F \
 scatter_vec_r4.F \
 scatter_vec_r8.F \
 scatter_xz.F \
 scatter_yz.F \
 stop_if_error.F \
 timers.F \
 utils.F \
 write_utils.F \
 add_walls2masks.F \
 calc_eddy_stress.F \
 calc_grid_angles.F \
 calc_gw.F \
 calc_oce_mxlayer.F \
 cg2d_ex0.F \
 cg2d.F \
 cg2d_sr.F \
 cg3d_ex0.F \
 cg3d.F \
 check_pickup.F \
 config_check.F \
 config_summary.F \
 diags_oceanic_surf_flux.F \
 do_statevars_diags.F \
 do_statevars_tave.F \
 do_the_model_io.F \
 do_write_pickup.F \
 external_forcing.F \
 find_hyd_press_1d.F \
 gsw_teos10.F \
 ini_cartesian_grid.F \
 ini_cg3d.F \
 ini_cori.F \
 ini_curvilinear_grid.F \
 ini_cylinder_grid.F \
 ini_eos.F \
 ini_global_domain.F \
 ini_grid.F \
 ini_linear_phisurf.F \
 ini_local_grid.F \
 ini_masks_etc.F \
 ini_mnc_vars.F \
 ini_model_io.F \
 ini_nh_vars.F \
 ini_parms.F \
 ini_sigma_hfac.F \
 ini_spherical_polar_grid.F \
 initialise_fixed.F \
 ini_vertical_grid.F \
 load_ref_files.F \
 packages_boot.F \
 packages_check.F \
 packages_error_msg.F \
 packages_init_fixed.F \
 packages_print_msg.F \
 packages_readparms.F \
 packages_unused_msg.F \
 packages_write_pickup.F \
 plot_field.F \
 port_rand.F \
 post_cg3d.F \
 pre_cg3d.F \
 rotate_spherical_polar_grid.F \
 set_defaults.F \
 set_grid_factors.F \
 set_parms.F \
 set_ref_state.F \
 solve_uv_tridiago.F \
 the_model_main.F \
 timestep_wvel.F \
 tracers_iigw_correction.F \
 turnoff_model_io.F \
 write_grid.F \
 write_pickup.F \
 write_state.F
C_SRC_FILES =  \
 gsl_ieee_env.c \
 ptwrapper.c \
 setdir.c \
 setrlstk.c \
 sigreg.c \
 tim.c \
 timer_stats.c
F90_SRC_FILES = 
H_SRC_FILES =  \
 AUTODIFF_OPTIONS.h \
 CPP_OPTIONS.h \
 CTRL_OPTIONS.h \
 CTRL_SIZE.h \
 DIAGNOSTICS_SIZE.h \
 DIAG_OPTIONS.h \
 DIC_OPTIONS.h \
 DIC_VARS.h \
 ECCO_OPTIONS.h \
 PTRACERS_SIZE.h \
 SIZE.h \
 tamc.h \
 adcommon.h \
 AUTODIFF.h \
 AUTODIFF_MYFIELDS.h \
 AUTODIFF_PARAMS.h \
 AUTODIFF_STORE.h \
 check_lev1_dir_forcing.h \
 check_lev1_dir_ocephys.h \
 checkpoint_lev1_directives.h \
 checkpoint_lev1_template.h \
 checkpoint_lev2_directives.h \
 checkpoint_lev3_directives.h \
 checkpoint_lev4_directives.h \
 ECCO_CPPOPTIONS.h \
 g_common.h \
 cd_code_ad_check_lev1_dir.h \
 cd_code_ad_check_lev2_dir.h \
 cd_code_ad_check_lev3_dir.h \
 cd_code_ad_check_lev4_dir.h \
 CD_CODE_OPTIONS.h \
 CD_CODE_VARS.h \
 adcost.h \
 cost.h \
 COST_OPTIONS.h \
 COST_TAP_ADJ.h \
 g_cost.h \
 ctrl_ad_check_lev1_dir.h \
 ctrl_ad_check_lev2_dir.h \
 ctrl_ad_check_lev3_dir.h \
 ctrl_ad_check_lev4_dir.h \
 ctrl_dummy.h \
 CTRL_FIELDS.h \
 CTRL_GENARR.h \
 ctrl.h \
 ctrl_local_params.h \
 CTRL_OBCS.h \
 optim.h \
 DEBUG_OPTIONS.h \
 DIAGNOSTICS_CALC.h \
 DIAGNOSTICS.h \
 DIAGSTATS_REGIONS.h \
 ecco_cost.h \
 ECCO.h \
 ecco_local_params.h \
 ECCO_SIZE.h \
 GCHEM_FIELDS.h \
 GCHEM.h \
 GCHEM_OPTIONS.h \
 GCHEM_SIZE.h \
 gad_ad_check_lev1_dir.h \
 gad_ad_check_lev2_dir.h \
 gad_ad_check_lev3_dir.h \
 gad_ad_check_lev4_dir.h \
 GAD_FLUX_LIMITER.h \
 GAD.h \
 GAD_OPTIONS.h \
 GAD_SOM_VARS.h \
 GRDCHK.h \
 GRDCHK_OPTIONS.h \
 KPP.h \
 KPP_OPTIONS.h \
 KPP_PARAMS.h \
 KPP_TAVE.h \
 MDSIO_BUFF_3D.h \
 MDSIO_BUFF_WH.h \
 MDSIO_OPTIONS.h \
 MOM_COMMON_OPTIONS.h \
 MOM_VISC.h \
 MOM_FLUXFORM.h \
 MOM_FLUXFORM_OPTIONS.h \
 MOM_VECINV_OPTIONS.h \
 MONITOR.h \
 MONITOR_OPTIONS.h \
 ptracers_ad_check_lev1_dir.h \
 ptracers_ad_check_lev2_dir.h \
 ptracers_ad_check_lev3_dir.h \
 ptracers_ad_check_lev4_dir.h \
 ptracers_adcommon.h \
 PTRACERS_FIELDS.h \
 PTRACERS_MOD.h \
 PTRACERS_OPTIONS.h \
 PTRACERS_PARAMS.h \
 PTRACERS_START.h \
 PTRACERS_TAVE.h \
 RW_MFLDS.h \
 RW_OPTIONS.h \
 TIMEAVE_OPTIONS.h \
 TIMEAVE_STATV.h \
 cal.h \
 CAL_OPTIONS.h \
 BAR2.h \
 BARRIER.h \
 CPP_EEMACROS.h \
 CPP_EEOPTIONS.h \
 CUMULSUM.h \
 DEF_IN_MAKEFILE.h \
 EEBUFF_SCPU.h \
 EEPARAMS.h \
 EESUPPORT.h \
 EXCH.h \
 GLOBAL_MAX.h \
 GLOBAL_SUM.h \
 MAIN_PDIRECTIVES1.h \
 MAIN_PDIRECTIVES2.h \
 MPI_INFO.h \
 SIGREG.h \
 CG2D.h \
 CG3D.h \
 DXC_MACROS.h \
 DXF_MACROS.h \
 DXG_MACROS.h \
 DXV_MACROS.h \
 DYC_MACROS.h \
 DYF_MACROS.h \
 DYG_MACROS.h \
 DYNVARS.h \
 DYU_MACROS.h \
 EOS.h \
 FCORI_MACROS.h \
 FFIELDS.h \
 GRID.h \
 GRID_MACROS.h \
 HFACC_MACROS.h \
 HFACS_MACROS.h \
 HFACW_MACROS.h \
 MASKS_MACROS.h \
 MASKW_MACROS.h \
 NH_VARS.h \
 PARAMS.h \
 RA_MACROS.h \
 RAS_MACROS.h \
 RAW_MACROS.h \
 RECIP_DXC_MACROS.h \
 RECIP_DXF_MACROS.h \
 RECIP_DXG_MACROS.h \
 RECIP_DXV_MACROS.h \
 RECIP_DYC_MACROS.h \
 RECIP_DYF_MACROS.h \
 RECIP_DYG_MACROS.h \
 RECIP_DYU_MACROS.h \
 RECIP_HFACC_MACROS.h \
 RECIP_HFACS_MACROS.h \
 RECIP_HFACW_MACROS.h \
 RESTART.h \
 SET_GRID.h \
 SOLVE_FOR_PRESSURE3D.h \
 SOLVE_FOR_PRESSURE.h \
 SURFACE.h \
 TANPHIATU_MACROS.h \
 TANPHIATV_MACROS.h \
 THE_MODEL_COMMON_BLOCKS.h \
 XC_MACROS.h \
 YC_MACROS.h
AD_FLOW_FILES =  \
 active_file_control.flow \
 active_file.flow \
 active_file_gen.flow \
 active_file_loc.flow \
 autodiff_inadmode.flow \
 autodiff_whtapeio_sync.flow \
 cg2d.flow \
 checkpoint.flow \
 common.flow \
 damp_adj.flow \
 dummy_for_etan.flow \
 dummy_in_dynamics.flow \
 dummy_in_stepping.flow \
 global_max_ad.flow \
 global_sum_ad.flow \
 initialisation.flow \
 model_ad.flow \
 myactivefunction.flow \
 system.flow \
 zero_adj.flow \
 cd_code_ad.flow \
 cost_ad.flow \
 ctrl_bound.flow \
 debug_ad.flow \
 diagnostics_ad.flow \
 ecco_ad.flow \
 mdsio_ad.flow \
 monitor_ad.flow \
 ptracers_ad.flow \
 rw_ad.flow \
 eesupp.flow \
 exch1_ad.flow

F77_PP_SRC_FILES = $(F77_SRC_FILES:.F=.f)
F90_PP_SRC_FILES = $(F90_SRC_FILES:.F90=.f90)
OBJFILES= $(F77_SRC_FILES:.F=.o) $(C_SRC_FILES:.c=.o) $(F90_SRC_FILES:.F90=.o)
FLOWFILES =  $(AD_FLOW_FILES:.flow=.flowdir)

.SUFFIXES:
.SUFFIXES: .o .f .p .F .c .ff90 .f90 .FF90 .F90 .flowdir .flow

all: fwd_exe_target
fwd_exe_target:
	@echo Update AD_CONFIG.h and make $(EXECUTABLE)
	@$(TOOLSDIR)/convert_cpp_cmd2defines "Forward version" -bAD_CONFIG_H -UALLOW_ADJOINT_RUN -UALLOW_TANGENTLINEAR_RUN > ad_config.template
	@cmp ad_config.template AD_CONFIG.h || cat ad_config.template > AD_CONFIG.h
	@-rm -f ad_config.template
	$(MAKE) -f $(MAKEFILE) $(EXECUTABLE)

$(EXECUTABLE): $(SPECIAL_FILES) $(F77_SRC_FILES) $(C_SRC_FILES) $(H_SRC_FILES) $(F90_SRC_FILES) $(OBJFILES) $(EMBEDDED_FILES)
	@echo Creating $@ ...
	$(LINK) -o $@ $(FFLAGS) $(FOPTIM) $(OBJFILES) $(LIBS)

depend:
	@$(MAKE) -f $(MAKEFILE) links
	$(MAKEDEPEND) -f $(MAKEFILE) -o .f $(DEFINES) $(INCLUDES) $(CPPINCLUDES) $(F77_SRC_FILES)
	$(TOOLSDIR)/f90mkdepend >> $(MAKEFILE)
	-rm -f makedepend.out

lib: libmitgcmuv.a

libmitgcmuv.a: $(SPECIAL_FILES) $(OBJFILES)
	ar rcv libmitgcmuv.a $(OBJFILES)
	ar d   libmitgcmuv.a main.o

obj: $(OBJFILES)

links: $(F77_SRC_FILES) $(C_SRC_FILES) $(H_SRC_FILES) $(F90_SRC_FILES) $(SPECIAL_FILES)

small_f: $(F77_PP_SRC_FILES) $(F90_PP_SRC_FILES)

# remove most of the files that "make" generates
clean:
	-rm -rf *.p *.f90 *.mod  work.{pc,pcl} *.template
	-rm -rf *.o
	-rm -rf *.f *.flowdir
	-rm -rf *.ff90 $(AD_CLEAN) ad_input*

# remove most of the files that "make" and "make depend" generate
Clean:
	@$(MAKE) -f $(MAKEFILE) clean
	@$(MAKE) -f $(MAKEFILE) cleanlinks
	-rm -f $(SPECIAL_FILES) f90mkdepend.log Makefile.old
	-rm -f taf_command taf_output taf_ad.log taf_ad_flow.log taf_ftl.log

# remove also the executable, files that "genmake2" generates (except Makefile)
#         and output from a run (plus log files from testreport)
CLEAN:
	@$(MAKE) -f $(MAKEFILE) Clean
	-rm -f $(EXECUTABLE) $(EXE_ADJ) $(EXE_TLM) *.bak
	-rm -f genmake.log genmake_state genmake_*optfile
	-rm -f SIZE.h.mpi genmake.tr_log make.tr_log
	-rm -rf mpi_headers mnc_test_*
	-find $(EXEDIR) -name "*.meta" -exec rm {} \;
	-find $(EXEDIR) -name "*.data" -exec rm {} \;
	-find $(EXEDIR) -name "fort.*" -exec rm {} \;
	-rm -f *.txt STDOUT.* STDERR.* *diagnostics.log *.[0-9][0-9][0-9][0-9].log
	-rm -f datetime costfinal divided.ctrl snapshot* output_adm.txt.diva_*
	-rm -f *_MIT_CE_000.opt0000 costfunction*0000
	-rm -f oad_cp.[0-9][0-9][0-9].?????

makefile:
	../../../../tools/genmake2  "-ieee" "-mpi" "-mods=../code_ad/" "-optfile" "../../../../../MITgcm/tools/build_options/linux_ia64_cray_archer2"
cleanlinks:
	-find . -type l -exec rm {} \;

# Special targets (SPECIAL_FILES) which are created by make
PACKAGES_CONFIG.h:
	@echo Creating $@ ...
	@$(TOOLSDIR)/convert_cpp_cmd2defines -bPACKAGES_CONFIG_H "Disabled packages:" $(DISABLED_PACKAGES) " " "Enabled packages:" $(ENABLED_PACKAGES) > $@
AD_CONFIG.h:
	@echo Creating $@ ...
	@$(TOOLSDIR)/convert_cpp_cmd2defines "Default version" -bAD_CONFIG_H -UALLOW_ADJOINT_RUN -UALLOW_TANGENTLINEAR_RUN > $@
FC_NAMEMANGLE.h:
	@echo Creating $@ ...
	echo "#define FC_NAMEMANGLE(X)  X ## _" > $@

BUILD_INFO.h:
	@echo Creating $@ ...
	-echo "#define THISVER 'checkpoint68r'" > $@
	-echo "#define THISUSER 'dannes1'" >> $@
	-echo "#define THISDATE 'Mon 26 Feb 14:45:07 GMT 2024'" >> $@
	-echo "#define THISHOST 'ln01'" >> $@

# The normal chain of rules is (  .F - .f - .o  )

## This nullifies any default implicit rules concerning these two file types:
## %.o : %.F

# C preprocessing and replacing the _d in constants:
CPPCMD = cat $< |  cpp -traditional -P $(DEFINES) $(INCLUDES) | $(TOOLSDIR)/set64bitConst.sh

.F.f:
	$(CPPCMD)  > $@
.f.o:
	$(FC) $(FFLAGS) $(FOPTIM) -c $<
.F.o:
	$(FC) $(FFLAGS) $(FOPTIM) -c $<
.F90.f90:
	$(CPPCMD)  > $@
.FF90.ff90:
	$(CPPCMD)  > $@
.f90.o:
	$(F90C) $(F90FLAGS) $(F90OPTIM) -c $<
.ff90.o:
	cp $< $(basename  $<).f90
	$(F90C) $(F90FLAGS) $(F90OPTIM) -c $(F90FIXEDFORMAT) $(basename  $<).f90
.c.o:
	$(CC) $(CFLAGS) $(DEFINES) $(INCLUDES) -c $<
.flow.flowdir:
	$(CPPCMD) > $@

# Special exceptions that use the ( .F - .p - .f - .o ) rule-chain
.F.p:
	$(CPPCMD) > $@
.p.f:
	$(KPP) $(KFLAGS1)$@ $(KFLAGS2) $<


TAMC           = stamc
TAF            = staf

TAF_EXTRA      = 
TAMC_EXTRA     = 
LOCAL_MPI_HEADERS    = 

AD_TAMC_FLAGS        = -reverse -admark ad -i4 -r4 -l tamc_ad.log -toplevel 'the_main_loop' -input 'xx_obcsn_dummy xx_obcss_dummy xx_obcsw_dummy xx_obcse_dummy xx_genarr2d_dummy xx_genarr3d_dummy xx_gentim2d_dummy' -output 'fc'
AD_TAF_FLAGS         = -f77 -i4 -r4 -intrinsic system,flush -reverse -l taf_ad.log -toplevel 'the_main_loop' -input 'xx_obcsn_dummy xx_obcss_dummy xx_obcsw_dummy xx_obcse_dummy xx_genarr2d_dummy xx_genarr3d_dummy xx_gentim2d_dummy' -output 'fc'
FTL_TAMC_FLAGS       = -forward -ftlmark g_ -i4 -r4 -l tamc_ftl.log -toplevel 'the_main_loop' -input 'xx_obcsn_dummy xx_obcss_dummy xx_obcsw_dummy xx_obcse_dummy xx_genarr2d_dummy xx_genarr3d_dummy xx_gentim2d_dummy' -output 'fc'
FTL_TAF_FLAGS        = -f77 -i4 -r4 -intrinsic system,flush -forward -l taf_ftl.log -toplevel 'the_main_loop' -input 'xx_obcsn_dummy xx_obcss_dummy xx_obcsw_dummy xx_obcse_dummy xx_genarr2d_dummy xx_genarr3d_dummy xx_gentim2d_dummy' -output 'fc'
SVD_TAMC_FLAGS       = -reverse -forward -pure -i4 -r4 -l tamc_svd.log -toplevel 'the_main_loop' -input 'xx_obcsn_dummy xx_obcss_dummy xx_obcsw_dummy xx_obcse_dummy xx_genarr2d_dummy xx_genarr3d_dummy xx_gentim2d_dummy' -output 'fc'
SVD_TAF_FLAGS        = -f77 -i4 -r4 -intrinsic system,flush -reverse -forward -pure -l taf_svd.log -toplevel 'the_main_loop' -input 'xx_obcsn_dummy xx_obcss_dummy xx_obcsw_dummy xx_obcse_dummy xx_genarr2d_dummy xx_genarr3d_dummy xx_gentim2d_dummy' -output 'fc'

AD_FILES =  \
 autodiff_init_varia.f \
 autodiff_store.f \
 autodiff_restore.f \
 cd_code_scheme.f \
 cd_code_ini_vars.f \
 cd_code_read_pickup.f \
 cost_accumulate_mean.f \
 cost_final.f \
 cost_init_varia.f \
 cost_tile.f \
 cost_test.f \
 cost_tracer.f \
 cost_atlantic_heat.f \
 cost_depth.f \
 cost_vector.f \
 cost_state_final.f \
 ctrl_cost_driver.f \
 ctrl_cost_gen.f \
 ctrl_depth_ini.f \
 ctrl_get_gen.f \
 ctrl_get_gen_rec.f \
 ctrl_get_mask.f \
 ctrl_init_rec.f \
 ctrl_init_variables.f \
 ctrl_map_ini_genarr.f \
 ctrl_map_ini_gentim2d.f \
 ctrl_map_forcing.f \
 ctrl_map_genarr.f \
 ctrl_map_gentim2d.f \
 ctrl_getobcse.f \
 ctrl_getobcsn.f \
 ctrl_getobcss.f \
 ctrl_getobcsw.f \
 ctrl_init_obcs_variables.f \
 ctrl_swapffields.f \
 ctrl_toolbox.f \
 diagnostics_is_on.f \
 cost_averagesgeneric.f \
 cost_averagesfields.f \
 cost_averagesflags.f \
 cost_averagesinit.f \
 cost_bp_read.f \
 cost_generic.f \
 cost_gencost_all.f \
 cost_gencost_moc.f \
 cost_gencost_assignperiod.f \
 cost_gencost_customize.f \
 cost_gencost_sshv4.f \
 cost_gencost_sstv4.f \
 cost_gencost_seaicev4.f \
 cost_gencost_bpv4.f \
 cost_gencost_boxmean.f \
 cost_gencost_glbmean.f \
 cost_gencost_transp.f \
 cost_gencal.f \
 cost_genread.f \
 cost_sla_read.f \
 cost_sla_read_yd.f \
 cost_obcs.f \
 cost_obcsn.f \
 cost_obcss.f \
 cost_obcsw.f \
 cost_obcse.f \
 cost_obcs_ageos.f \
 cost_obcsvol.f \
 ecco_cost_driver.f \
 ecco_cost_final.f \
 ecco_cost_init_varia.f \
 ecco_init_varia.f \
 ecco_read_pickup.f \
 ecco_phys.f \
 ecco_toolbox.f \
 gchem_add_tendency.f \
 gchem_calc_tendency.f \
 gchem_fields_load.f \
 gchem_forcing_sep.f \
 gchem_init_vari.f \
 gchem_surfmean.f \
 gad_advection.f \
 gad_biharm_r.f \
 gad_biharm_x.f \
 gad_biharm_y.f \
 gad_c2_adv_r.f \
 gad_c2_impl_r.f \
 gad_c2_adv_x.f \
 gad_c2_adv_y.f \
 gad_c4_adv_r.f \
 gad_c4_adv_x.f \
 gad_c4_adv_y.f \
 gad_calc_rhs.f \
 gad_del2.f \
 gad_diff_r.f \
 gad_diff_x.f \
 gad_diff_y.f \
 gad_dst2u1_adv_r.f \
 gad_dst2u1_impl_r.f \
 gad_dst2u1_adv_x.f \
 gad_dst2u1_adv_y.f \
 gad_dst3_adv_x.f \
 gad_dst3_adv_y.f \
 gad_dst3_adv_r.f \
 gad_dst3fl_adv_x.f \
 gad_dst3fl_adv_y.f \
 gad_dst3fl_adv_r.f \
 gad_dst3fl_impl_r.f \
 gad_fluxlimit_adv_r.f \
 gad_fluxlimit_impl_r.f \
 gad_fluxlimit_adv_x.f \
 gad_fluxlimit_adv_y.f \
 gad_grad_x.f \
 gad_grad_y.f \
 gad_implicit_r.f \
 gad_init_varia.f \
 gad_os7mp_adv_x.f \
 gad_os7mp_adv_y.f \
 gad_os7mp_adv_r.f \
 gad_read_pickup.f \
 gad_u3_adv_r.f \
 gad_u3c4_impl_r.f \
 gad_u3_adv_x.f \
 gad_u3_adv_y.f \
 gad_som_advect.f \
 gad_som_adv_r.f \
 gad_som_adv_x.f \
 gad_som_adv_y.f \
 gad_som_fill_cs_corner.f \
 gad_som_lim_r.f \
 gad_som_prep_cs_corner.f \
 gad_som_exchanges.f \
 gad_exch_som.f \
 kpp_calc.f \
 kpp_calc_diff_t.f \
 kpp_calc_diff_s.f \
 kpp_calc_diff_ptr.f \
 kpp_calc_visc.f \
 kpp_output.f \
 kpp_do_exch.f \
 kpp_init_varia.f \
 kpp_routines.f \
 kpp_transport_s.f \
 kpp_transport_t.f \
 kpp_transport_ptr.f \
 kpp_forcing_surf.f \
 mom_calc_absvort3.f \
 mom_calc_hdiv.f \
 mom_calc_hfacz.f \
 mom_calc_ke.f \
 mom_calc_relvort3.f \
 mom_calc_strain.f \
 mom_calc_tension.f \
 mom_calc_visc.f \
 mom_hdissip.f \
 mom_quasihydrostatic.f \
 mom_u_botdrag_coeff.f \
 mom_u_coriolis_nh.f \
 mom_u_metric_nh.f \
 mom_u_rviscflux.f \
 mom_u_sidedrag.f \
 mom_v_botdrag_coeff.f \
 mom_v_coriolis_nh.f \
 mom_v_metric_nh.f \
 mom_v_rviscflux.f \
 mom_v_sidedrag.f \
 mom_visc_qgl_limit.f \
 mom_visc_qgl_stretch.f \
 mom_calc_rtrans.f \
 mom_fluxform.f \
 mom_u_adv_uu.f \
 mom_u_adv_vu.f \
 mom_u_adv_wu.f \
 mom_u_coriolis.f \
 mom_u_del2u.f \
 mom_u_metric_cylinder.f \
 mom_u_metric_sphere.f \
 mom_u_xviscflux.f \
 mom_u_yviscflux.f \
 mom_v_adv_uv.f \
 mom_v_adv_vv.f \
 mom_v_adv_wv.f \
 mom_v_coriolis.f \
 mom_v_del2v.f \
 mom_v_metric_cylinder.f \
 mom_v_metric_sphere.f \
 mom_v_xviscflux.f \
 mom_v_yviscflux.f \
 mom_vecinv.f \
 mom_vi_coriolis.f \
 mom_vi_del2uv.f \
 mom_vi_hdissip.f \
 mom_vi_u_coriolis.f \
 mom_vi_u_coriolis_c4.f \
 mom_vi_u_grad_ke.f \
 mom_vi_u_vertshear.f \
 mom_vi_v_coriolis.f \
 mom_vi_v_coriolis_c4.f \
 mom_vi_v_grad_ke.f \
 mom_vi_v_vertshear.f \
 ptracers_calc_wsurf_tr.f \
 ptracers_convect.f \
 ptracers_fields_blocking_exch.f \
 ptracers_apply_forcing.f \
 ptracers_forcing_surf.f \
 ptracers_init_varia.f \
 ptracers_integrate.f \
 ptracers_read_pickup.f \
 ptracers_reset.f \
 ptracers_switch_onoff.f \
 read_fld_xyz_rs.f \
 read_fld_xyz_rl.f \
 read_fld_xy_rs.f \
 read_fld_xy_rl.f \
 read_rec.f \
 timeave_cumul_1k1t.f \
 timeave_cumul_1t.f \
 timeave_cumul_1vfc.f \
 timeave_cumul_2v.f \
 timeave_cumul_2vfc.f \
 timeave_cumulate.f \
 timeave_cumul_dif_1t.f \
 timeave_norma_2v.f \
 timeave_normalize.f \
 timeave_reset.f \
 timeave_statvars.f \
 timeave_statv_write.f \
 timeave_surf_flux.f \
 cal_addtime.f \
 cal_checkdate.f \
 cal_compdates.f \
 cal_convdate.f \
 cal_copydate.f \
 cal_fulldate.f \
 cal_getdate.f \
 cal_getmonthsrec.f \
 cal_intdays.f \
 cal_intmonths.f \
 cal_intyears.f \
 cal_isleap.f \
 cal_numints.f \
 cal_printdate.f \
 cal_printerror.f \
 cal_subdates.f \
 cal_time2dump.f \
 cal_timeinterval.f \
 cal_timepassed.f \
 cal_timestamp.f \
 cal_toseconds.f \
 different_multiple.f \
 fill_cs_corner_ag_rl.f \
 fill_cs_corner_tr_rl.f \
 fill_cs_corner_uv_rs.f \
 fill_cs_corner_uv_rl.f \
 get_periodic_interval.f \
 lef_zero.f \
 exch_sm_3d_rl.f \
 exch_3d_rs.f \
 exch_3d_rl.f \
 exch_xy_rl.f \
 exch_xy_rs.f \
 exch_xyz_rl.f \
 exch_xyz_rs.f \
 exch_uv_3d_rs.f \
 exch_uv_3d_rl.f \
 exch_uv_xy_rs.f \
 exch_uv_xy_rl.f \
 exch_uv_xyz_rs.f \
 exch_uv_xyz_rl.f \
 exch_uv_agrid_3d_rs.f \
 exch_uv_agrid_3d_rl.f \
 exch_uv_dgrid_3d_rs.f \
 exch_uv_dgrid_3d_rl.f \
 adams_bashforth2.f \
 adams_bashforth3.f \
 apply_forcing.f \
 calc_3d_diffusivity.f \
 calc_adv_flow.f \
 calc_div_ghat.f \
 calc_grad_phi_fv.f \
 calc_grad_phi_hyd.f \
 calc_grad_phi_surf.f \
 calc_ivdc.f \
 calc_phi_hyd.f \
 calc_r_star.f \
 calc_surf_dr.f \
 calc_viscosity.f \
 calc_wsurf_tr.f \
 cg2d_nsa.f \
 convective_adjustment.f \
 convective_adjustment_ini.f \
 convective_weights.f \
 convectively_mixtracer.f \
 correction_step.f \
 cycle_ab_tracer.f \
 cycle_tracer.f \
 diags_phi_hyd.f \
 diags_phi_rlow.f \
 diags_rho.f \
 diags_sound_speed.f \
 do_atmospheric_phys.f \
 do_fields_blocking_exchanges.f \
 do_oceanic_phys.f \
 do_stagger_fields_exchanges.f \
 dynamics.f \
 external_fields_load.f \
 external_forcing_surf.f \
 forcing_surf_relax.f \
 find_alpha.f \
 find_rho.f \
 forward_step.f \
 freesurf_rescale_g.f \
 freeze_surface.f \
 grad_sigma.f \
 impldiff.f \
 ini_cg2d.f \
 ini_depths.f \
 ini_ffields.f \
 ini_fields.f \
 ini_forcing.f \
 ini_mixing.f \
 ini_nh_fields.f \
 ini_nlfs_vars.f \
 ini_p_ground.f \
 ini_pressure.f \
 ini_psurf.f \
 ini_salt.f \
 ini_theta.f \
 ini_dynvars.f \
 ini_vel.f \
 initialise_varia.f \
 integrate_for_w.f \
 integr_continuity.f \
 load_fields_driver.f \
 load_grid_spacing.f \
 main_do_loop.f \
 momentum_correction_step.f \
 packages_init_variables.f \
 pressure_for_eos.f \
 read_pickup.f \
 remove_mean.f \
 reset_nlfs_vars.f \
 rotate_uv2en.f \
 salt_integrate.f \
 temp_integrate.f \
 seawater.f \
 solve_for_pressure.f \
 state_summary.f \
 solve_pentadiagonal.f \
 solve_tridiagonal.f \
 taueddy_init_varia.f \
 taueddy_tendency_apply.f \
 timestep.f \
 the_main_loop.f \
 thermodynamics.f \
 timestep_tracer.f \
 tracers_correction_step.f \
 update_cg2d.f \
 update_etah.f \
 update_etaws.f \
 update_masks_etc.f \
 update_r_star.f \
 update_sigma.f \
 update_surf_dr.f \
 swfrac.f

# ... AD ...
adall: ad_exe_target
adtaf: ad_taf_output.f
adtamc: ad_tamc_output.f

ad_exe_target:
	@echo Update AD_CONFIG.h and make $(EXE_ADJ)
	@$(TOOLSDIR)/convert_cpp_cmd2defines "Adjoint version" -bAD_CONFIG_H -DALLOW_ADJOINT_RUN -UALLOW_TANGENTLINEAR_RUN > ad_config.template
	@cmp ad_config.template AD_CONFIG.h || cat ad_config.template > AD_CONFIG.h
	@-rm -f ad_config.template
	$(MAKE) -f $(MAKEFILE) $(EXE_ADJ)

ad_input_code.f: $(AD_FILES) $(AD_FLOW_FILES)
	@$(TOOLSDIR)/convert_cpp_cmd2defines "Adjoint version" -bAD_CONFIG_H -DALLOW_ADJOINT_RUN -UALLOW_TANGENTLINEAR_RUN > ad_config.template
	cmp ad_config.template AD_CONFIG.h || cat ad_config.template > AD_CONFIG.h
	@-rm -f ad_config.template
	@$(MAKE) -f $(MAKEFILE) $(F77_PP_SRC_FILES)
	@$(MAKE) -f $(MAKEFILE) $(FLOWFILES)
	cat $(FLOWFILES) $(AD_FILES) | sed -f $(TOOLSDIR)/remove_comments_sed > ad_input_code.f

adtafonly:
	$(TAF) $(AD_TAF_FLAGS) $(TAF_EXTRA) ad_input_code.f
	ls -l ad_input_code_ad.f
	cat ad_input_code_ad.f | sed -f $(TOOLSDIR)/adjoint_sed > ad_taf_output.f

# ... send 1 file to TAF ...
ad_taf_output.f: ad_input_code.f
	@-rm -f ad_input_code_ad.f ; echo ''
	$(TAF) $(AD_TAF_FLAGS) $(TAF_EXTRA) ad_input_code.f
	ls -l ad_input_code_ad.f
	cat ad_input_code_ad.f | sed -f $(TOOLSDIR)/adjoint_sed > ad_taf_output.f

$(EXE_ADJ): $(SPECIAL_FILES) $(H_SRC_FILES) ad_taf_output.o $(NON_AD_F77_SRC_FILES:.F=.o) $(F90_SRC_FILES:.F90=.o) $(C_SRC_FILES:.c=.o) $(EMBEDDED_FILES)
	$(LINK) -o ${EXE_ADJ} $(FFLAGS) $(FOPTIM) ad_taf_output.o $(NON_AD_F77_SRC_FILES:.F=.o) $(F90_SRC_FILES:.F90=.o) $(C_SRC_FILES:.c=.o) $(LIBS)

adobj: ad_taf_output.o $(NON_AD_F77_SRC_FILES:.F=.o) $(F90_SRC_FILES:.F90=.o) $(C_SRC_FILES:.c=.o)

ad_tamc_output.f: ad_input_code.f
	$(TAMC) $(AD_TAMC_FLAGS) $(TAMC_EXTRA) ad_input_code.f
	cat ad_input_code_ad.f | sed -f $(TOOLSDIR)/adjoint_sed > ad_tamc_output.f

ad_tamc: ad_tamc_output.o $(OBJFILES)
	$(LINK) -o mitgcmuv_ad $(FFLAGS) $(FOPTIM) $(OBJFILES) ad_tamc_output.o $(LIBS)

# ... FTL ...
ftlall: ftl_exe_target
ftltaf: ftl_taf_output.f
ftltamc: ftl_tamc_output.f

ftl_exe_target:
	@echo Update AD_CONFIG.h and make $(EXE_TLM)
	@$(TOOLSDIR)/convert_cpp_cmd2defines "TangLin version" -bAD_CONFIG_H -UALLOW_ADJOINT_RUN -DALLOW_TANGENTLINEAR_RUN > ad_config.template
	@cmp ad_config.template AD_CONFIG.h || cat ad_config.template > AD_CONFIG.h
	@-rm -f ad_config.template
	$(MAKE) -f $(MAKEFILE) $(EXE_TLM)

ftl_input_code.f: $(AD_FILES)
	@$(TOOLSDIR)/convert_cpp_cmd2defines "TangLin version" -bAD_CONFIG_H -UALLOW_ADJOINT_RUN -DALLOW_TANGENTLINEAR_RUN > ad_config.template
	cmp ad_config.template AD_CONFIG.h || cat ad_config.template > AD_CONFIG.h
	@-rm -f ad_config.template
	@$(MAKE) -f $(MAKEFILE) $(F77_PP_SRC_FILES)
	@$(MAKE) -f $(MAKEFILE) $(AD_FLOW_FILES)
	cat $(AD_FLOW_FILES) $(AD_FILES) | sed -f $(TOOLSDIR)/remove_comments_sed > ftl_input_code.f

ftltafonly:
	$(TAF) $(FTL_TAF_FLAGS) $(TAF_EXTRA) ftl_input_code.f
	ls -l ftl_input_code_tl.f
	cat ftl_input_code_tl.f | sed -f $(TOOLSDIR)/adjoint_sed > ftl_taf_output.f

# ... send 1 file to TAF ...
ftl_taf_output.f: ftl_input_code.f
	@-rm -f ftl_input_code_tl.f ; echo ''
	$(TAF) $(FTL_TAF_FLAGS) $(TAF_EXTRA) ftl_input_code.f
	ls -l ftl_input_code_tl.f
	cat ftl_input_code_tl.f | sed -f $(TOOLSDIR)/adjoint_sed > ftl_taf_output.f

$(EXE_TLM): $(SPECIAL_FILES) $(H_SRC_FILES) ftl_taf_output.o $(NON_AD_F77_SRC_FILES:.F=.o) $(F90_SRC_FILES:.F90=.o) $(C_SRC_FILES:.c=.o) $(EMBEDDED_FILES)
	$(LINK) -o ${EXE_TLM} $(FFLAGS) $(FOPTIM) ftl_taf_output.o $(NON_AD_F77_SRC_FILES:.F=.o) $(F90_SRC_FILES:.F90=.o) $(C_SRC_FILES:.c=.o) $(LIBS)

ftlobj: ftl_taf_output.o $(NON_AD_F77_SRC_FILES:.F=.o) $(F90_SRC_FILES:.F90=.o) $(C_SRC_FILES:.c=.o)

ftl_tamc_output.f: ftl_input_code.f
	$(TAMC) $(FTL_TAMC_FLAGS) $(TAMC_EXTRA) ftl_input_code.f
	cat ftl_input_code_ftl.f | sed -f $(TOOLSDIR)/adjoint_sed > ftl_tamc_output.f

ftl_tamc: ftl_tamc_output.o $(OBJFILES)
	$(LINK) -o mitgcmuv_ftl $(FFLAGS) $(FOPTIM) $(OBJFILES) ftl_tamc_output.o $(LIBS)

# ... SVD ...
svdtaf: ad_taf_output.f ftl_taf_output.f
	@echo "--->>> Only ran TAF to generate SVD code!    <<<---"
	@echo "--->>> Do make svdall afterwards to compile. <<<---"
svdall: svd_touch svd_taf

svd_taf: $(OBJFILES)
	$(LINK) -o mitgcmuv_svd $(FFLAGS) $(FOPTIM) $(OBJFILES) ad_taf_output.o ftl_taf_output.o $(LIBS)

	@echo "--->>> Only COMPILE svd code! <<<---"
	@echo "--->>> Assumes you previously <<<---"
	@echo "--->>> did make svdtaf        <<<---"

svd_touch:
	@echo "--->>> Only COMPILE svd code! <<<---"
	@echo "--->>> Assumes you previously <<<---"
	@echo "--->>> did make svdtaf        <<<---"
	touch ad_taf_output.f ftl_taf_output.f
	$(FC) $(FFLAGS) $(FOPTIM) -c ad_taf_output.f
	$(FC) $(FFLAGS) $(FOPTIM) -c ftl_taf_output.f
	@$(TOOLSDIR)/convert_cpp_cmd2defines "SVD version" -bAD_CONFIG_H -UALLOW_ADJOINT_RUN -DALLOW_TANGENTLINEAR_RUN > ad_config.template
	cmp ad_config.template AD_CONFIG.h || cat ad_config.template > AD_CONFIG.h
	@-rm -f ad_config.template

# This section creates symbolic links


#  These files are linked from ../code_ad/ ( aka ../code_ad/ )
 AUTODIFF_OPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h CTRL_SIZE.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h dic_biotic_forcing.F DIC_OPTIONS.h DIC_VARS.h ECCO_OPTIONS.h gchem_forcing_sep.F ptracers_apply_forcing.F PTRACERS_SIZE.h SIZE.h tamc.h :
	if [ ! -L $@ ]; then $(LN) ../code_ad//$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/autodiff ( aka ../../../../../MITgcm/pkg/autodiff )
 active_file_ad.F active_file_control.F active_file_control_slice.F active_file.F active_file_gen_ad.F active_file_gen.F active_file_gen_g.F active_file_g.F active_file_loc_ad.F active_file_loc.F active_file_loc_g.F adautodiff_whtapeio_sync.F adcommon.h addamp_adj.F add_prefix.F addummy_for_etan.F addummy_in_dynamics.F addummy_in_stepping.F adopen_adclose.F adread_adwrite.F adread_adwrite_i.F adzero_adj.F autodiff_check.F autodiff_findunit.F AUTODIFF.h autodiff_inadmode_set_ad.F autodiff_inadmode_set.F autodiff_inadmode_set_g.F autodiff_inadmode_unset_ad.F autodiff_inadmode_unset.F autodiff_inadmode_unset_g.F autodiff_ini_model_io.F autodiff_init_varia.F AUTODIFF_MYFIELDS.h AUTODIFF_PARAMS.h autodiff_readparms.F autodiff_restore.F autodiff_store.F AUTODIFF_STORE.h autodiff_whtapeio_sync.F cg2d_mad.F check_lev1_dir_forcing.h check_lev1_dir_ocephys.h checkpoint_lev1_directives.h checkpoint_lev1_template.h checkpoint_lev2_directives.h checkpoint_lev3_directives.h checkpoint_lev4_directives.h copy_ad_uv_outp.F copy_advar_outp.F damp_adj.F dummy_for_etan.F dummy_in_dynamics.F dummy_in_stepping.F dump_adj_xy.F dump_adj_xy_uv.F dump_adj_xyz.F dump_adj_xyz_uv.F ECCO_CPPOPTIONS.h g_common.h g_dummy_for_etan.F g_dummy_in_dynamics.F g_dummy_in_stepping.F global_max_ad.F global_sum_ad.F global_sum_tile_ad.F myactivefunction_ad.F myactivefunction.F zero_adj.F active_file_control.flow active_file.flow active_file_gen.flow active_file_loc.flow autodiff_inadmode.flow autodiff_whtapeio_sync.flow cg2d.flow checkpoint.flow common.flow damp_adj.flow dummy_for_etan.flow dummy_in_dynamics.flow dummy_in_stepping.flow global_max_ad.flow global_sum_ad.flow initialisation.flow model_ad.flow myactivefunction.flow system.flow zero_adj.flow :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/autodiff/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/cd_code ( aka ../../../../../MITgcm/pkg/cd_code )
 cd_code_ad_check_lev1_dir.h cd_code_ad_check_lev2_dir.h cd_code_ad_check_lev3_dir.h cd_code_ad_check_lev4_dir.h cd_code_init_fixed.F cd_code_ini_vars.F CD_CODE_OPTIONS.h cd_code_read_pickup.F cd_code_scheme.F CD_CODE_VARS.h cd_code_write_pickup.F cd_code_ad.flow :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/cd_code/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/cost ( aka ../../../../../MITgcm/pkg/cost )
 adcost.h cost_accumulate_mean.F cost_atlantic_heat.F cost_check.F cost_dependent_init.F cost_depth.F cost_final.F cost_final_restore.F cost_final_store.F cost.h cost_init_varia.F COST_OPTIONS.h cost_readparms.F cost_state_final.F COST_TAP_ADJ.h cost_test.F cost_tile.F cost_tracer.F cost_vector.F g_cost.h cost_ad.flow :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/cost/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/ctrl ( aka ../../../../../MITgcm/pkg/ctrl )
 adctrl_bound.F ctrl_ad_check_lev1_dir.h ctrl_ad_check_lev2_dir.h ctrl_ad_check_lev3_dir.h ctrl_ad_check_lev4_dir.h ctrl_bound.F ctrl_bound_tl.F ctrl_check.F ctrl_cost_driver.F ctrl_cost_gen.F ctrl_depth_ini.F ctrl_dummy.h CTRL_FIELDS.h CTRL_GENARR.h ctrl_get_gen.F ctrl_get_gen_rec.F ctrl_get_mask.F ctrl_getobcse.F ctrl_getobcsn.F ctrl_getobcss.F ctrl_getobcsw.F ctrl.h ctrl_hfacc_ini.F ctrl_init_ctrlvar.F ctrl_init.F ctrl_init_obcs_variables.F ctrl_init_rec.F ctrl_init_variables.F ctrl_init_wet.F ctrl_local_params.h ctrl_map_forcing.F ctrl_map_genarr.F ctrl_map_gentim2d.F ctrl_map_ini_genarr.F ctrl_map_ini_gentim2d.F ctrl_mask_set_xz.F ctrl_mask_set_yz.F CTRL_OBCS.h ctrl_pack.F ctrl_readparms.F ctrl_set_fname.F ctrl_set_globfld_xy.F ctrl_set_globfld_xyz.F ctrl_set_globfld_xz.F ctrl_set_globfld_yz.F ctrl_set_pack_xy.F ctrl_set_pack_xyz.F ctrl_set_pack_xz.F ctrl_set_pack_yz.F ctrl_set_unpack_xy.F ctrl_set_unpack_xyz.F ctrl_set_unpack_xz.F ctrl_set_unpack_yz.F ctrl_summary.F ctrl_swapffields.F ctrl_toolbox.F ctrl_unpack.F optim.h optim_readparms.F ctrl_bound.flow :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/ctrl/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/debug ( aka ../../../../../MITgcm/pkg/debug )
 chksum_tiled.F debug_call.F debug_cs_corner_uv.F debug_enter.F debug_fld_stats_rl.F debug_fld_stats_rs.F debug_leave.F debug_msg.F DEBUG_OPTIONS.h debug_stats_rl.F debug_stats_rs.F fill_in_corners_rl.F write_fullarray_rl.F write_fullarray_rs.F debug_ad.flow :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/debug/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/diagnostics ( aka ../../../../../MITgcm/pkg/diagnostics )
 diag_calc_psivel.F diag_cg2d.F diagnostics_addtolist.F DIAGNOSTICS_CALC.h diagnostics_calc_phivel.F diagnostics_check.F diagnostics_clear.F diagnostics_fill.F diagnostics_fill_field.F diagnostics_fill_rs.F diagnostics_fill_state.F diagnostics_fract_fill.F DIAGNOSTICS.h diagnostics_ini_io.F diagnostics_init_early.F diagnostics_init_fixed.F diagnostics_init_varia.F diagnostics_interp_p2p.F diagnostics_interp_vert.F diagnostics_is_on.F diagnostics_list_check.F diagnostics_main_init.F diagnostics_mnc_out.F diagnostics_out.F diagnostics_readparms.F diagnostics_read_pickup.F diagnostics_scale_fill.F diagnostics_scale_fill_rs.F diagnostics_set_calc.F diagnostics_setdiag.F diagnostics_set_levels.F diagnostics_set_pointers.F diagnostics_status_error.F diagnostics_sum_levels.F diagnostics_summary.F diagnostics_switch_onoff.F diagnostics_utils.F diagnostics_write_adj.F diagnostics_write.F diagnostics_write_pickup.F diagstats_ascii_out.F diagstats_calc.F diagstats_clear.F diagstats_close_io.F diagstats_fill.F diagstats_global.F diagstats_ini_io.F diagstats_local.F diagstats_mnc_out.F diagstats_others_calc.F diagstats_output.F DIAGSTATS_REGIONS.h diagstats_setdiag.F diagstats_set_pointers.F diagstats_set_regions.F diag_vegtile_fill.F diagnostics_ad.flow :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/diagnostics/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/ecco ( aka ../../../../../MITgcm/pkg/ecco )
 cost_averagesfields.F cost_averagesflags.F cost_averagesgeneric.F cost_averagesinit.F cost_bp_read.F cost_gencal.F cost_gencost_all.F cost_gencost_assignperiod.F cost_gencost_boxmean.F cost_gencost_bpv4.F cost_gencost_customize.F cost_gencost_glbmean.F cost_gencost_moc.F cost_gencost_seaicev4.F cost_gencost_sshv4.F cost_gencost_sstv4.F cost_gencost_transp.F cost_generic.F cost_genread.F cost_obcs_ageos.F cost_obcse.F cost_obcs.F cost_obcsn.F cost_obcss.F cost_obcsvol.F cost_obcsw.F cost_sla_read.F cost_sla_read_yd.F ecco_check.F ecco_cost_driver.F ecco_cost_final.F ecco_cost.h ecco_cost_init_barfiles.F ecco_cost_init_fixed.F ecco_cost_init_varia.F ecco_cost_weights.F ecco_diagnostics_init.F ECCO.h ecco_init_fixed.F ecco_init_varia.F ecco_local_params.h ecco_phys.F ecco_readparms.F ecco_read_pickup.F ECCO_SIZE.h ecco_summary.F ecco_toolbox.F ecco_write_pickup.F stergloh_output.F ecco_ad.flow :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/ecco/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/gchem ( aka ../../../../../MITgcm/pkg/gchem )
 gchem_add_tendency.F gchem_calc_tendency.F gchem_check.F gchem_diagnostics_init.F GCHEM_FIELDS.h gchem_fields_load.F GCHEM.h gchem_init_fixed.F gchem_init_vari.F GCHEM_OPTIONS.h gchem_output.F gchem_readparms.F GCHEM_SIZE.h gchem_surfmean.F gchem_tr_register.F gchem_write_pickup.F :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/gchem/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/generic_advdiff ( aka ../../../../../MITgcm/pkg/generic_advdiff )
 gad_ad_check_lev1_dir.h gad_ad_check_lev2_dir.h gad_ad_check_lev3_dir.h gad_ad_check_lev4_dir.h gad_advection.F gad_advscheme.F gad_biharm_r.F gad_biharm_x.F gad_biharm_y.F gad_c2_adv_r.F gad_c2_adv_x.F gad_c2_adv_y.F gad_c2_impl_r.F gad_c4_adv_r.F gad_c4_adv_x.F gad_c4_adv_y.F gad_calc_rhs.F gad_check.F gad_del2.F gad_diagnostics_init.F gad_diagnostics_state.F gad_diff_r.F gad_diff_x.F gad_diff_y.F gad_dst2u1_adv_r.F gad_dst2u1_adv_x.F gad_dst2u1_adv_y.F gad_dst2u1_impl_r.F gad_dst3_adv_r.F gad_dst3_adv_x.F gad_dst3_adv_y.F gad_dst3fl_adv_r.F gad_dst3fl_adv_x.F gad_dst3fl_adv_y.F gad_dst3fl_impl_r.F gad_exch_som.F gad_fluxlimit_adv_r.F gad_fluxlimit_adv_x.F gad_fluxlimit_adv_y.F GAD_FLUX_LIMITER.h gad_fluxlimit_impl_r.F gad_grad_x.F gad_grad_y.F GAD.h gad_implicit_r.F gad_init_fixed.F gad_init_varia.F GAD_OPTIONS.h gad_os7mp_adv_r.F gad_os7mp_adv_x.F gad_os7mp_adv_y.F gad_osc_hat_r.F gad_osc_hat_x.F gad_osc_hat_y.F gad_osc_mul_r.F gad_osc_mul_x.F gad_osc_mul_y.F gad_plm_fun.F gad_ppm_adv_r.F gad_ppm_adv_x.F gad_ppm_adv_y.F gad_ppm_flx_r.F gad_ppm_flx_x.F gad_ppm_flx_y.F gad_ppm_fun.F gad_ppm_hat_r.F gad_ppm_hat_x.F gad_ppm_hat_y.F gad_ppm_p3e_r.F gad_ppm_p3e_x.F gad_ppm_p3e_y.F gad_pqm_adv_r.F gad_pqm_adv_x.F gad_pqm_adv_y.F gad_pqm_flx_r.F gad_pqm_flx_x.F gad_pqm_flx_y.F gad_pqm_fun.F gad_pqm_hat_r.F gad_pqm_hat_x.F gad_pqm_hat_y.F gad_pqm_p5e_r.F gad_pqm_p5e_x.F gad_pqm_p5e_y.F gad_read_pickup.F gad_som_advect.F gad_som_adv_r.F gad_som_adv_x.F gad_som_adv_y.F gad_som_exchanges.F gad_som_fill_cs_corner.F gad_som_lim_r.F gad_som_prep_cs_corner.F GAD_SOM_VARS.h gad_u3_adv_r.F gad_u3_adv_x.F gad_u3_adv_y.F gad_u3c4_impl_r.F gad_write_pickup.F salt_fill.F :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/generic_advdiff/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/grdchk ( aka ../../../../../MITgcm/pkg/grdchk )
 grdchk_check.F grdchk_getadxx.F grdchk_get_obcs_mask.F grdchk_get_position.F grdchk_getxx.F GRDCHK.h grdchk_init.F grdchk_loc.F grdchk_main.F GRDCHK_OPTIONS.h grdchk_print.F grdchk_readparms.F grdchk_setxx.F grdchk_summary.F :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/grdchk/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/kpp ( aka ../../../../../MITgcm/pkg/kpp )
 kpp_calc_diff_ptr.F kpp_calc_diff_s.F kpp_calc_diff_t.F kpp_calc.F kpp_calc_visc.F kpp_check.F kpp_diagnostics_init.F kpp_do_exch.F kpp_forcing_surf.F KPP.h kpp_init_fixed.F kpp_init_varia.F KPP_OPTIONS.h kpp_output.F KPP_PARAMS.h kpp_readparms.F kpp_routines.F KPP_TAVE.h kpp_transport_ptr.F kpp_transport_s.F kpp_transport_t.F :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/kpp/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/mdsio ( aka ../../../../../MITgcm/pkg/mdsio )
 MDSIO_BUFF_3D.h mdsio_buffertorl.F mdsio_buffertors.F MDSIO_BUFF_WH.h mdsio_check4file.F mdsio_facef_read.F mdsio_gl.F mdsio_gl_slice.F MDSIO_OPTIONS.h mdsio_pass_r4torl.F mdsio_pass_r4tors.F mdsio_pass_r8torl.F mdsio_pass_r8tors.F mdsio_rd_rec_rl.F mdsio_rd_rec_rs.F mdsio_read_field.F mdsio_read_meta.F mdsio_read_section.F mdsio_read_tape.F mdsio_readvec_loc.F mdsio_read_whalos.F mdsio_rw_field.F mdsio_rw_slice.F mdsio_seg4torl.F mdsio_seg4tors.F mdsio_seg8torl.F mdsio_seg8tors.F mdsio_segxtorx_2d.F mdsio_write_field.F mdsio_writelocal.F mdsio_write_meta.F mdsio_write_section.F mdsio_write_tape.F mdsio_writevec_loc.F mdsio_write_whalos.F mdsio_wr_metafiles.F mdsio_wr_rec_rl.F mdsio_wr_rec_rs.F mdsio_ad.flow :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/mdsio/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/mom_common ( aka ../../../../../MITgcm/pkg/mom_common )
 mom_calc_3d_strain.F mom_calc_absvort3.F mom_calc_hdiv.F mom_calc_hfacz.F mom_calc_ke.F mom_calc_relvort3.F mom_calc_smag_3d.F mom_calc_strain.F mom_calc_tension.F mom_calc_visc.F MOM_COMMON_OPTIONS.h mom_diagnostics_init.F mom_hdissip.F mom_init_fixed.F mom_quasihydrostatic.F mom_u_botdrag_coeff.F mom_u_coriolis_nh.F mom_u_implicit_r.F mom_u_metric_nh.F mom_u_rviscflux.F mom_u_sidedrag.F mom_uv_smag_3d.F mom_v_botdrag_coeff.F mom_v_coriolis_nh.F mom_v_implicit_r.F MOM_VISC.h mom_visc_qgl_limit.F mom_visc_qgl_stretch.F mom_v_metric_nh.F mom_v_rviscflux.F mom_v_sidedrag.F mom_w_coriolis_nh.F mom_w_metric_nh.F mom_w_sidedrag.F mom_w_smag_3d.F :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/mom_common/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/mom_fluxform ( aka ../../../../../MITgcm/pkg/mom_fluxform )
 mom_calc_rtrans.F mom_fluxform.F MOM_FLUXFORM.h MOM_FLUXFORM_OPTIONS.h mom_u_adv_uu.F mom_u_adv_vu.F mom_u_adv_wu.F mom_u_coriolis.F mom_u_del2u.F mom_u_metric_cylinder.F mom_u_metric_sphere.F mom_uv_boundary.F mom_u_xviscflux.F mom_u_yviscflux.F mom_v_adv_uv.F mom_v_adv_vv.F mom_v_adv_wv.F mom_v_coriolis.F mom_v_del2v.F mom_v_metric_cylinder.F mom_v_metric_sphere.F mom_v_xviscflux.F mom_v_yviscflux.F :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/mom_fluxform/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/mom_vecinv ( aka ../../../../../MITgcm/pkg/mom_vecinv )
 mom_vecinv.F MOM_VECINV_OPTIONS.h mom_vi_coriolis.F mom_vi_del2uv.F mom_vi_hdissip.F mom_vi_u_coriolis_c4.F mom_vi_u_coriolis.F mom_vi_u_grad_ke.F mom_vi_u_vertshear.F mom_vi_v_coriolis_c4.F mom_vi_v_coriolis.F mom_vi_v_grad_ke.F mom_vi_v_vertshear.F :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/mom_vecinv/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/monitor ( aka ../../../../../MITgcm/pkg/monitor )
 mon_advcfl.F mon_advcflw2.F mon_advcflw.F mon_calc_advcfl.F mon_calc_stats_rl.F mon_calc_stats_rs.F mon_init.F monitor_ad.F monitor.F monitor_g.F MONITOR.h MONITOR_OPTIONS.h mon_ke.F mon_out.F mon_printstats_rl.F mon_printstats_rs.F mon_set_iounit.F mon_set_pref.F mon_solution.F mon_stats_latbnd_rl.F mon_stats_rl.F mon_stats_rs.F mon_surfcor.F mon_vort3.F mon_writestats_rl.F mon_writestats_rs.F monitor_ad.flow :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/monitor/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/ptracers ( aka ../../../../../MITgcm/pkg/ptracers )
 ptracers_ad_check_lev1_dir.h ptracers_ad_check_lev2_dir.h ptracers_ad_check_lev3_dir.h ptracers_ad_check_lev4_dir.h ptracers_adcommon.h ptracers_ad_dump.F ptracers_calc_wsurf_tr.F ptracers_check.F ptracers_check_pickup.F ptracers_convect.F ptracers_debug.F ptracers_diagnostics_init.F ptracers_diagnostics_state.F ptracers_dyn_state_data_mod.F ptracers_dyn_state_mod.F ptracers_fields_blocking_exch.F PTRACERS_FIELDS.h ptracers_forcing_surf.F ptracers_init_fixed.F ptracers_init_varia.F ptracers_integrate.F ptracers_mnc_init.F PTRACERS_MOD.h ptracers_monitor_ad.F ptracers_monitor.F PTRACERS_OPTIONS.h ptracers_output.F PTRACERS_PARAMS.h ptracers_readparms.F ptracers_read_pickup.F ptracers_reset.F ptracers_set_iolabel.F PTRACERS_START.h ptracers_switch_onoff.F PTRACERS_TAVE.h ptracers_timeave.F ptracers_turnoff_io.F ptracers_write_pickup.F ptracers_write_state.F ptracers_write_timeave.F ptracers_zonal_filt_apply.F ptracers_ad.flow :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/ptracers/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/rw ( aka ../../../../../MITgcm/pkg/rw )
 get_write_global_fld.F read_fld_xy_rl.F read_fld_xy_rs.F read_fld_xyz_rl.F read_fld_xyz_rs.F read_glvec_rl.F read_glvec_rs.F read_mflds.F read_rec.F rw_get_suffix.F RW_MFLDS.h RW_OPTIONS.h set_write_global_fld.F write_fld_3d_rl.F write_fld_3d_rs.F write_fld_s3d_rl.F write_fld_s3d_rs.F write_fld_xy_rl.F write_fld_xy_rs.F write_fld_xyz_rl.F write_fld_xyz_rs.F write_glvec_rl.F write_glvec_rs.F write_local_rl.F write_local_rs.F write_rec.F rw_ad.flow :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/rw/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/timeave ( aka ../../../../../MITgcm/pkg/timeave )
 timeave_cumul_1k1t.F timeave_cumul_1t.F timeave_cumul_1vfc.F timeave_cumul_2v.F timeave_cumul_2vfc.F timeave_cumulate.F timeave_cumul_dif_1t.F timeave_init_fixed.F timeave_norma_2v.F timeave_normalize.F TIMEAVE_OPTIONS.h timeave_reset.F timeave_statvars.F TIMEAVE_STATV.h timeave_statv_write.F timeave_surf_flux.F :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/timeave/$@ $@; fi

#  These files are linked from $(ROOTDIR)/pkg/cal ( aka ../../../../../MITgcm/pkg/cal )
 cal_addtime.F cal_checkdate.F cal_compdates.F cal_convdate.F cal_copydate.F cal_daysformonth.F cal_dayspermonth.F cal_fulldate.F cal_getdate.F cal_getmonthsrec.F cal.h cal_init_fixed.F cal_intdays.F cal_intmonths.F cal_intyears.F cal_isleap.F cal_monthsforyear.F cal_monthsperyear.F cal_numints.F CAL_OPTIONS.h cal_printdate.F cal_printerror.F cal_readparms.F cal_set.F cal_stepsforday.F cal_stepsperday.F cal_subdates.F cal_summary.F cal_time2dump.F cal_timeinterval.F cal_timepassed.F cal_timestamp.F cal_toseconds.F cal_weekday.F :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/pkg/cal/$@ $@; fi

#  These files are linked from $(ROOTDIR)/eesupp/src ( aka ../../../../../MITgcm/eesupp/src )
 all_proc_die.F bar2.F bar_check.F barrier.F check_threads.F comm_stats.F cumulsum_z_tile.F different_multiple.F diff_phase_multiple.F eeboot.F eeboot_minimal.F eedata_example.F eedie.F eeintro_msg.F eeset_parms.F eewrite_eeenv.F exch0_r4.F exch0_r8.F exch0_rl.F exch0_rs.F exch1_bg_r4_cube.F exch1_bg_r8_cube.F exch1_bg_rl_cube.F exch1_bg_rs_cube.F exch1_r4_cube.F exch1_r4.F exch1_r8_cube.F exch1_r8.F exch1_rl_ad.F exch1_rl_cube_ad.F exch1_rl_cube.F exch1_rl.F exch1_rs_ad.F exch1_rs_cube_ad.F exch1_rs_cube.F exch1_rs.F exch1_uv_r4_cube.F exch1_uv_r8_cube.F exch1_uv_rl_cube.F exch1_uv_rs_cube.F exch1_z_r4_cube.F exch1_z_r8_cube.F exch1_z_rl_cube.F exch1_z_rs_cube.F exch_3d_r4.F exch_3d_r8.F exch_3d_rl.F exch_3d_rs.F exch_cycle_ebl.F exch_init.F exch_r4_recv_get_x.F exch_r4_recv_get_y.F exch_r4_send_put_x.F exch_r4_send_put_y.F exch_r8_recv_get_x.F exch_r8_recv_get_y.F exch_r8_send_put_x.F exch_r8_send_put_y.F exch_rl_recv_get_x.F exch_rl_recv_get_y.F exch_rl_send_put_x.F exch_rl_send_put_y.F exch_rs_recv_get_x.F exch_rs_recv_get_y.F exch_rs_send_put_x.F exch_rs_send_put_y.F exch_s3d_r4.F exch_s3d_r8.F exch_s3d_rl.F exch_s3d_rs.F exch_sm_3d_r4.F exch_sm_3d_r8.F exch_sm_3d_rl.F exch_sm_3d_rs.F exch_tap_b.F exch_tap_d.F exch_uv_3d_r4.F exch_uv_3d_r8.F exch_uv_3d_rl.F exch_uv_3d_rs.F exch_uv_agrid_3d_r4.F exch_uv_agrid_3d_r8.F exch_uv_agrid_3d_rl.F exch_uv_agrid_3d_rs.F exch_uv_bgrid_3d_r4.F exch_uv_bgrid_3d_r8.F exch_uv_bgrid_3d_rl.F exch_uv_bgrid_3d_rs.F exch_uv_dgrid_3d_r4.F exch_uv_dgrid_3d_r8.F exch_uv_dgrid_3d_rl.F exch_uv_dgrid_3d_rs.F exch_uv_xy_r4.F exch_uv_xy_r8.F exch_uv_xy_rl.F exch_uv_xy_rs.F exch_uv_xyz_r4.F exch_uv_xyz_r8.F exch_uv_xyz_rl.F exch_uv_xyz_rs.F exch_xy_r4.F exch_xy_r8.F exch_xy_rl.F exch_xy_rs.F exch_xyz_r4.F exch_xyz_r8.F exch_xyz_rl.F exch_xyz_rs.F exch_z_3d_r4.F exch_z_3d_r8.F exch_z_3d_rl.F exch_z_3d_rs.F fill_cs_corner_ag_rl.F fill_cs_corner_tr_rl.F fill_cs_corner_uv_rl.F fill_cs_corner_uv_rs.F fool_the_compiler.F gather_2d_r4.F gather_2d_r8.F gather_2d_wh_r4.F gather_2d_wh_r8.F gather_vec_r4.F gather_vec_r8.F gather_xz.F gather_yz.F get_periodic_interval.F global_max.F global_sum.F global_sum_singlecpu.F global_sum_tile.F global_vec_sum.F gsl_ieee_env.c gsum.F ini_communication_patterns.F ini_procs.F ini_threading_environment.F lef_zero.F main.F master_cpu_io.F master_cpu_thread.F mds_byteswapi4.F mds_byteswapr4.F mds_byteswapr8.F mdsfindunit.F mds_flush.F mds_reclen.F memsync.F nml_change_syntax.F nml_set_terminator.F open_copy_data_file.F print.F ptwrapper.c reset_halo.F scatter_2d_r4.F scatter_2d_r8.F scatter_2d_wh_r4.F scatter_2d_wh_r8.F scatter_vec_r4.F scatter_vec_r8.F scatter_xz.F scatter_yz.F setdir.c setrlstk.c sigreg.c stop_if_error.F tim.c timers.F timer_stats.c utils.F write_utils.F eesupp.flow exch1_ad.flow :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/eesupp/src/$@ $@; fi

#  These files are linked from $(ROOTDIR)/model/src ( aka ../../../../../MITgcm/model/src )
 adams_bashforth2.F adams_bashforth3.F add_walls2masks.F apply_forcing.F calc_3d_diffusivity.F calc_adv_flow.F calc_div_ghat.F calc_eddy_stress.F calc_grad_phi_fv.F calc_grad_phi_hyd.F calc_grad_phi_surf.F calc_grid_angles.F calc_gw.F calc_ivdc.F calc_oce_mxlayer.F calc_phi_hyd.F calc_r_star.F calc_surf_dr.F calc_viscosity.F calc_wsurf_tr.F cg2d_ex0.F cg2d.F cg2d_nsa.F cg2d_sr.F cg3d_ex0.F cg3d.F check_pickup.F config_check.F config_summary.F convective_adjustment.F convective_adjustment_ini.F convectively_mixtracer.F convective_weights.F correction_step.F cycle_ab_tracer.F cycle_tracer.F diags_oceanic_surf_flux.F diags_phi_hyd.F diags_phi_rlow.F diags_rho.F diags_sound_speed.F do_atmospheric_phys.F do_fields_blocking_exchanges.F do_oceanic_phys.F do_stagger_fields_exchanges.F do_statevars_diags.F do_statevars_tave.F do_the_model_io.F do_write_pickup.F dynamics.F external_fields_load.F external_forcing.F external_forcing_surf.F find_alpha.F find_hyd_press_1d.F find_rho.F forcing_surf_relax.F forward_step.F freesurf_rescale_g.F freeze_surface.F grad_sigma.F gsw_teos10.F impldiff.F ini_cartesian_grid.F ini_cg2d.F ini_cg3d.F ini_cori.F ini_curvilinear_grid.F ini_cylinder_grid.F ini_depths.F ini_dynvars.F ini_eos.F ini_ffields.F ini_fields.F ini_forcing.F ini_global_domain.F ini_grid.F ini_linear_phisurf.F ini_local_grid.F ini_masks_etc.F ini_mixing.F ini_mnc_vars.F ini_model_io.F ini_nh_fields.F ini_nh_vars.F ini_nlfs_vars.F ini_parms.F ini_p_ground.F ini_pressure.F ini_psurf.F ini_salt.F ini_sigma_hfac.F ini_spherical_polar_grid.F ini_theta.F initialise_fixed.F initialise_varia.F ini_vel.F ini_vertical_grid.F integrate_for_w.F integr_continuity.F load_fields_driver.F load_grid_spacing.F load_ref_files.F main_do_loop.F momentum_correction_step.F packages_boot.F packages_check.F packages_error_msg.F packages_init_fixed.F packages_init_variables.F packages_print_msg.F packages_readparms.F packages_unused_msg.F packages_write_pickup.F plot_field.F port_rand.F post_cg3d.F pre_cg3d.F pressure_for_eos.F read_pickup.F remove_mean.F reset_nlfs_vars.F rotate_spherical_polar_grid.F rotate_uv2en.F salt_integrate.F seawater.F set_defaults.F set_grid_factors.F set_parms.F set_ref_state.F solve_for_pressure.F solve_pentadiagonal.F solve_tridiagonal.F solve_uv_tridiago.F state_summary.F swfrac.F taueddy_init_varia.F taueddy_tendency_apply.F temp_integrate.F the_main_loop.F the_model_main.F thermodynamics.F timestep.F timestep_tracer.F timestep_wvel.F tracers_correction_step.F tracers_iigw_correction.F turnoff_model_io.F update_cg2d.F update_etah.F update_etaws.F update_masks_etc.F update_r_star.F update_sigma.F update_surf_dr.F write_grid.F write_pickup.F write_state.F :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/model/src/$@ $@; fi

#  These files are linked from $(ROOTDIR)/eesupp/inc ( aka ../../../../../MITgcm/eesupp/inc )
 BAR2.h BARRIER.h CPP_EEMACROS.h CPP_EEOPTIONS.h CUMULSUM.h DEF_IN_MAKEFILE.h EEBUFF_SCPU.h EEPARAMS.h EESUPPORT.h EXCH.h GLOBAL_MAX.h GLOBAL_SUM.h MAIN_PDIRECTIVES1.h MAIN_PDIRECTIVES2.h MPI_INFO.h SIGREG.h :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/eesupp/inc/$@ $@; fi

#  These files are linked from $(ROOTDIR)/model/inc ( aka ../../../../../MITgcm/model/inc )
 CG2D.h CG3D.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EOS.h FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h NH_VARS.h PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h RESTART.h SET_GRID.h SOLVE_FOR_PRESSURE3D.h SOLVE_FOR_PRESSURE.h SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h THE_MODEL_COMMON_BLOCKS.h XC_MACROS.h YC_MACROS.h :
	if [ ! -L $@ ]; then $(LN) $(ROOTDIR)/model/inc/$@ $@; fi


# DO NOT DELETE


active_file_ad.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
active_file_ad.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
active_file_ad.f: /usr/include/stdc-predef.h
active_file_control.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
active_file_control.f: CPP_OPTIONS.h ctrl.h CTRL_OPTIONS.h EEPARAMS.h
active_file_control.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
active_file_control.f: /usr/include/stdc-predef.h
active_file_control_slice.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
active_file_control_slice.f: CPP_OPTIONS.h ctrl.h CTRL_OPTIONS.h EEPARAMS.h
active_file_control_slice.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
active_file_control_slice.f: /usr/include/stdc-predef.h
active_file.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
active_file.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
active_file_gen_ad.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
active_file_gen_ad.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
active_file_gen_ad.f: /usr/include/stdc-predef.h
active_file_gen.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
active_file_gen.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
active_file_gen.f: /usr/include/stdc-predef.h
active_file_gen_g.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
active_file_gen_g.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
active_file_gen_g.f: /usr/include/stdc-predef.h
active_file_g.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
active_file_g.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
active_file_g.f: /usr/include/stdc-predef.h
active_file_loc_ad.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
active_file_loc_ad.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
active_file_loc_ad.f: /usr/include/stdc-predef.h
active_file_loc.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
active_file_loc.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
active_file_loc.f: /usr/include/stdc-predef.h
active_file_loc_g.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
active_file_loc_g.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
active_file_loc_g.f: /usr/include/stdc-predef.h
adams_bashforth2.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
adams_bashforth2.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
adams_bashforth3.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
adams_bashforth3.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
adautodiff_whtapeio_sync.f: AUTODIFF.h AUTODIFF_OPTIONS.h CPP_EEMACROS.h
adautodiff_whtapeio_sync.f: CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
adautodiff_whtapeio_sync.f: MDSIO_BUFF_WH.h MDSIO_OPTIONS.h PACKAGES_CONFIG.h
adautodiff_whtapeio_sync.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
adctrl_bound.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h
adctrl_bound.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
addamp_adj.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
addamp_adj.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
addamp_adj.f: /usr/include/stdc-predef.h
add_prefix.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
add_prefix.f: PACKAGES_CONFIG.h /usr/include/stdc-predef.h
addummy_for_etan.f: adcommon.h AD_CONFIG.h AUTODIFF.h AUTODIFF_OPTIONS.h
addummy_for_etan.f: AUTODIFF_PARAMS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
addummy_for_etan.f: CPP_OPTIONS.h CTRL_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
addummy_for_etan.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
addummy_in_dynamics.f: adcommon.h AD_CONFIG.h AUTODIFF.h AUTODIFF_OPTIONS.h
addummy_in_dynamics.f: AUTODIFF_PARAMS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
addummy_in_dynamics.f: CPP_OPTIONS.h CTRL_OPTIONS.h EEPARAMS.h
addummy_in_dynamics.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
addummy_in_dynamics.f: /usr/include/stdc-predef.h
addummy_in_stepping.f: adcommon.h AD_CONFIG.h AUTODIFF.h AUTODIFF_OPTIONS.h
addummy_in_stepping.f: AUTODIFF_PARAMS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
addummy_in_stepping.f: CPP_OPTIONS.h CTRL_OPTIONS.h DIAGNOSTICS.h
addummy_in_stepping.f: DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h EEPARAMS.h
addummy_in_stepping.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
addummy_in_stepping.f: /usr/include/stdc-predef.h
add_walls2masks.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
add_walls2masks.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
add_walls2masks.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
add_walls2masks.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
add_walls2masks.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
add_walls2masks.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
add_walls2masks.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
add_walls2masks.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
add_walls2masks.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
add_walls2masks.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
add_walls2masks.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
add_walls2masks.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
adopen_adclose.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
adopen_adclose.f: CPP_OPTIONS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
adread_adwrite.f: AUTODIFF.h AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
adread_adwrite.f: CPP_OPTIONS.h ctrl.h CTRL_OPTIONS.h EEPARAMS.h optim.h
adread_adwrite.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h /usr/include/stdc-predef.h
adread_adwrite_i.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
adread_adwrite_i.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
adread_adwrite_i.f: /usr/include/stdc-predef.h
adzero_adj.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
adzero_adj.f: /usr/include/stdc-predef.h
all_proc_die.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
all_proc_die.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
all_proc_die.f: SIZE.h /usr/include/stdc-predef.h
apply_forcing.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
apply_forcing.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
apply_forcing.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
apply_forcing.f: FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
apply_forcing.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
apply_forcing.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
apply_forcing.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
apply_forcing.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
apply_forcing.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
apply_forcing.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
apply_forcing.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
apply_forcing.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
apply_forcing.f: YC_MACROS.h
autodiff_check.f: AD_CONFIG.h AUTODIFF_OPTIONS.h CPP_EEMACROS.h
autodiff_check.f: CPP_EEOPTIONS.h CPP_OPTIONS.h DIAGNOSTICS.h
autodiff_check.f: DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
autodiff_check.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
autodiff_check.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
autodiff_check.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
autodiff_check.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
autodiff_check.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
autodiff_check.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
autodiff_check.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
autodiff_check.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
autodiff_check.f: RECIP_HFACW_MACROS.h SIZE.h tamc.h TANPHIATU_MACROS.h
autodiff_check.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
autodiff_check.f: YC_MACROS.h
autodiff_findunit.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
autodiff_findunit.f: /usr/include/stdc-predef.h
autodiff_inadmode_set_ad.f: AUTODIFF_OPTIONS.h AUTODIFF_PARAMS.h
autodiff_inadmode_set_ad.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
autodiff_inadmode_set_ad.f: ctrl.h CTRL_OPTIONS.h DIAGNOSTICS.h
autodiff_inadmode_set_ad.f: DIAGNOSTICS_SIZE.h EEPARAMS.h PACKAGES_CONFIG.h
autodiff_inadmode_set_ad.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
autodiff_inadmode_set.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
autodiff_inadmode_set.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
autodiff_inadmode_set.f: SIZE.h /usr/include/stdc-predef.h
autodiff_inadmode_set_g.f: AUTODIFF_OPTIONS.h AUTODIFF_PARAMS.h CPP_EEMACROS.h
autodiff_inadmode_set_g.f: CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
autodiff_inadmode_set_g.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
autodiff_inadmode_set_g.f: /usr/include/stdc-predef.h
autodiff_inadmode_unset_ad.f: AUTODIFF_OPTIONS.h AUTODIFF_PARAMS.h
autodiff_inadmode_unset_ad.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
autodiff_inadmode_unset_ad.f: ctrl.h CTRL_OPTIONS.h DIAGNOSTICS.h
autodiff_inadmode_unset_ad.f: DIAGNOSTICS_SIZE.h EEPARAMS.h PACKAGES_CONFIG.h
autodiff_inadmode_unset_ad.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
autodiff_inadmode_unset.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
autodiff_inadmode_unset.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
autodiff_inadmode_unset.f: SIZE.h /usr/include/stdc-predef.h
autodiff_inadmode_unset_g.f: AUTODIFF_OPTIONS.h AUTODIFF_PARAMS.h
autodiff_inadmode_unset_g.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
autodiff_inadmode_unset_g.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
autodiff_inadmode_unset_g.f: /usr/include/stdc-predef.h
autodiff_ini_model_io.f: AUTODIFF.h AUTODIFF_OPTIONS.h CPP_EEMACROS.h
autodiff_ini_model_io.f: CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h
autodiff_ini_model_io.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
autodiff_ini_model_io.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
autodiff_ini_model_io.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
autodiff_ini_model_io.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
autodiff_ini_model_io.f: MASKS_MACROS.h MASKW_MACROS.h MDSIO_BUFF_WH.h
autodiff_ini_model_io.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
autodiff_ini_model_io.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
autodiff_ini_model_io.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
autodiff_ini_model_io.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
autodiff_ini_model_io.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
autodiff_ini_model_io.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
autodiff_ini_model_io.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
autodiff_ini_model_io.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
autodiff_ini_model_io.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
autodiff_ini_model_io.f: XC_MACROS.h YC_MACROS.h
autodiff_init_varia.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
autodiff_init_varia.f: CPP_OPTIONS.h CTRL_OPTIONS.h EEPARAMS.h FFIELDS.h
autodiff_init_varia.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h SURFACE.h
autodiff_init_varia.f: /usr/include/stdc-predef.h
autodiff_readparms.f: AUTODIFF_OPTIONS.h AUTODIFF_PARAMS.h CPP_EEMACROS.h
autodiff_readparms.f: CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h GAD.h
autodiff_readparms.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
autodiff_readparms.f: /usr/include/stdc-predef.h
autodiff_restore.f: AUTODIFF_OPTIONS.h AUTODIFF_STORE.h CPP_EEMACROS.h
autodiff_restore.f: CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h CTRL_OBCS.h
autodiff_restore.f: CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
autodiff_restore.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
autodiff_restore.f: DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h FFIELDS.h
autodiff_restore.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
autodiff_restore.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
autodiff_restore.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
autodiff_restore.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
autodiff_restore.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
autodiff_restore.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
autodiff_restore.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
autodiff_restore.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
autodiff_restore.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
autodiff_restore.f: YC_MACROS.h
autodiff_store.f: AUTODIFF_OPTIONS.h AUTODIFF_STORE.h CPP_EEMACROS.h
autodiff_store.f: CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h CTRL_OBCS.h
autodiff_store.f: CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
autodiff_store.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
autodiff_store.f: DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h FFIELDS.h
autodiff_store.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
autodiff_store.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
autodiff_store.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
autodiff_store.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
autodiff_store.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
autodiff_store.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
autodiff_store.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
autodiff_store.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
autodiff_store.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
autodiff_store.f: YC_MACROS.h
autodiff_whtapeio_sync.f: AUTODIFF.h AUTODIFF_OPTIONS.h CPP_EEMACROS.h
autodiff_whtapeio_sync.f: CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h CTRL_OPTIONS.h
autodiff_whtapeio_sync.f: EEPARAMS.h MDSIO_BUFF_WH.h MDSIO_OPTIONS.h
autodiff_whtapeio_sync.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h tamc.h
autodiff_whtapeio_sync.f: /usr/include/stdc-predef.h
bar2.f: BAR2.h CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
bar2.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h SIZE.h
bar2.f: /usr/include/stdc-predef.h
bar_check.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
bar_check.f: /usr/include/stdc-predef.h
barrier.f: BARRIER.h CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
barrier.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h SIZE.h
barrier.f: /usr/include/stdc-predef.h
cal_addtime.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_addtime.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
cal_addtime.f: /usr/include/stdc-predef.h
calc_3d_diffusivity.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
calc_3d_diffusivity.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
calc_3d_diffusivity.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
calc_3d_diffusivity.f: DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GAD.h
calc_3d_diffusivity.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
calc_3d_diffusivity.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
calc_3d_diffusivity.f: PACKAGES_CONFIG.h PARAMS.h PTRACERS_PARAMS.h
calc_3d_diffusivity.f: PTRACERS_SIZE.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
calc_3d_diffusivity.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
calc_3d_diffusivity.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
calc_3d_diffusivity.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
calc_3d_diffusivity.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
calc_3d_diffusivity.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
calc_3d_diffusivity.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
calc_3d_diffusivity.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
calc_3d_diffusivity.f: XC_MACROS.h YC_MACROS.h
calc_adv_flow.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
calc_adv_flow.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
calc_adv_flow.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
calc_adv_flow.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
calc_adv_flow.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
calc_adv_flow.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
calc_adv_flow.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
calc_adv_flow.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
calc_adv_flow.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
calc_adv_flow.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
calc_adv_flow.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
calc_adv_flow.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
calc_adv_flow.f: YC_MACROS.h
calc_div_ghat.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
calc_div_ghat.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
calc_div_ghat.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
calc_div_ghat.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
calc_div_ghat.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
calc_div_ghat.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
calc_div_ghat.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
calc_div_ghat.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
calc_div_ghat.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
calc_div_ghat.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
calc_div_ghat.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
calc_div_ghat.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
calc_eddy_stress.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
calc_eddy_stress.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
calc_eddy_stress.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
calc_eddy_stress.f: FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h
calc_eddy_stress.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
calc_eddy_stress.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
calc_eddy_stress.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
calc_eddy_stress.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
calc_eddy_stress.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
calc_eddy_stress.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
calc_eddy_stress.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
calc_eddy_stress.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
calc_eddy_stress.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
calc_grad_phi_fv.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
calc_grad_phi_fv.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
calc_grad_phi_fv.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
calc_grad_phi_fv.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
calc_grad_phi_fv.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
calc_grad_phi_fv.f: MASKW_MACROS.h PARAMS.h RA_MACROS.h RAS_MACROS.h
calc_grad_phi_fv.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
calc_grad_phi_fv.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
calc_grad_phi_fv.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
calc_grad_phi_fv.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
calc_grad_phi_fv.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
calc_grad_phi_fv.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
calc_grad_phi_fv.f: YC_MACROS.h
calc_grad_phi_hyd.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
calc_grad_phi_hyd.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
calc_grad_phi_hyd.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h
calc_grad_phi_hyd.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
calc_grad_phi_hyd.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
calc_grad_phi_hyd.f: MASKS_MACROS.h MASKW_MACROS.h PARAMS.h RA_MACROS.h
calc_grad_phi_hyd.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
calc_grad_phi_hyd.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
calc_grad_phi_hyd.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
calc_grad_phi_hyd.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
calc_grad_phi_hyd.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
calc_grad_phi_hyd.f: SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
calc_grad_phi_hyd.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
calc_grad_phi_surf.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
calc_grad_phi_surf.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
calc_grad_phi_surf.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
calc_grad_phi_surf.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
calc_grad_phi_surf.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
calc_grad_phi_surf.f: MASKS_MACROS.h MASKW_MACROS.h PARAMS.h RA_MACROS.h
calc_grad_phi_surf.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
calc_grad_phi_surf.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
calc_grad_phi_surf.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
calc_grad_phi_surf.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
calc_grad_phi_surf.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
calc_grad_phi_surf.f: SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
calc_grad_phi_surf.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
calc_grid_angles.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
calc_grid_angles.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
calc_grid_angles.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
calc_grid_angles.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
calc_grid_angles.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
calc_grid_angles.f: MASKW_MACROS.h PARAMS.h RA_MACROS.h RAS_MACROS.h
calc_grid_angles.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
calc_grid_angles.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
calc_grid_angles.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
calc_grid_angles.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
calc_grid_angles.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
calc_grid_angles.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
calc_grid_angles.f: YC_MACROS.h
calc_gw.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
calc_gw.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
calc_gw.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
calc_gw.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
calc_gw.f: MASKS_MACROS.h MASKW_MACROS.h MOM_COMMON_OPTIONS.h MOM_VISC.h
calc_gw.f: NH_VARS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
calc_gw.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
calc_gw.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
calc_gw.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
calc_gw.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
calc_gw.f: RESTART.h SIZE.h SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
calc_gw.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cal_checkdate.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_checkdate.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
cal_checkdate.f: /usr/include/stdc-predef.h
calc_ivdc.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
calc_ivdc.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
calc_ivdc.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
calc_ivdc.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
calc_ivdc.f: MASKS_MACROS.h MASKW_MACROS.h PARAMS.h RA_MACROS.h RAS_MACROS.h
calc_ivdc.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
calc_ivdc.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
calc_ivdc.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
calc_ivdc.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
calc_ivdc.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
calc_ivdc.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
calc_oce_mxlayer.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
calc_oce_mxlayer.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
calc_oce_mxlayer.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h
calc_oce_mxlayer.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
calc_oce_mxlayer.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
calc_oce_mxlayer.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
calc_oce_mxlayer.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
calc_oce_mxlayer.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
calc_oce_mxlayer.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
calc_oce_mxlayer.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
calc_oce_mxlayer.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
calc_oce_mxlayer.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
calc_oce_mxlayer.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cal_compdates.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_compdates.f: CPP_OPTIONS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
cal_convdate.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_convdate.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
cal_convdate.f: /usr/include/stdc-predef.h
cal_copydate.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_copydate.f: CPP_OPTIONS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
calc_phi_hyd.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
calc_phi_hyd.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
calc_phi_hyd.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h
calc_phi_hyd.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
calc_phi_hyd.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
calc_phi_hyd.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
calc_phi_hyd.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
calc_phi_hyd.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
calc_phi_hyd.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
calc_phi_hyd.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
calc_phi_hyd.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h tamc.h
calc_phi_hyd.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
calc_phi_hyd.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
calc_r_star.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
calc_r_star.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
calc_r_star.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
calc_r_star.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
calc_r_star.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
calc_r_star.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
calc_r_star.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
calc_r_star.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
calc_r_star.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
calc_r_star.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
calc_r_star.f: SIZE.h SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
calc_r_star.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
calc_surf_dr.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
calc_surf_dr.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
calc_surf_dr.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
calc_surf_dr.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
calc_surf_dr.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
calc_surf_dr.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
calc_surf_dr.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
calc_surf_dr.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
calc_surf_dr.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
calc_surf_dr.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
calc_surf_dr.f: SIZE.h SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
calc_surf_dr.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
calc_viscosity.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
calc_viscosity.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
calc_viscosity.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
calc_viscosity.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
calc_viscosity.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
calc_viscosity.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
calc_viscosity.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
calc_viscosity.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
calc_viscosity.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
calc_viscosity.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
calc_viscosity.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
calc_viscosity.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
calc_viscosity.f: YC_MACROS.h
calc_wsurf_tr.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
calc_wsurf_tr.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
calc_wsurf_tr.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
calc_wsurf_tr.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
calc_wsurf_tr.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
calc_wsurf_tr.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
calc_wsurf_tr.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
calc_wsurf_tr.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
calc_wsurf_tr.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
calc_wsurf_tr.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
calc_wsurf_tr.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
calc_wsurf_tr.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cal_daysformonth.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_daysformonth.f: CPP_OPTIONS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
cal_dayspermonth.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_dayspermonth.f: CPP_OPTIONS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
cal_fulldate.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_fulldate.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
cal_fulldate.f: /usr/include/stdc-predef.h
cal_getdate.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_getdate.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
cal_getdate.f: /usr/include/stdc-predef.h
cal_getmonthsrec.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_getmonthsrec.f: CPP_OPTIONS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
cal_init_fixed.f: CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cal_init_fixed.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
cal_init_fixed.f: /usr/include/stdc-predef.h
cal_intdays.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_intdays.f: CPP_OPTIONS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
cal_intmonths.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_intmonths.f: CPP_OPTIONS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
cal_intyears.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_intyears.f: CPP_OPTIONS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
cal_isleap.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cal_isleap.f: EEPARAMS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
cal_monthsforyear.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_monthsforyear.f: CPP_OPTIONS.h PACKAGES_CONFIG.h
cal_monthsforyear.f: /usr/include/stdc-predef.h
cal_monthsperyear.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_monthsperyear.f: CPP_OPTIONS.h PACKAGES_CONFIG.h
cal_monthsperyear.f: /usr/include/stdc-predef.h
cal_numints.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_numints.f: CPP_OPTIONS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
cal_printdate.f: CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cal_printdate.f: EEPARAMS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
cal_printerror.f: CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cal_printerror.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
cal_printerror.f: /usr/include/stdc-predef.h
cal_readparms.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_readparms.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
cal_readparms.f: /usr/include/stdc-predef.h
cal_set.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cal_set.f: PACKAGES_CONFIG.h /usr/include/stdc-predef.h
cal_stepsforday.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_stepsforday.f: CPP_OPTIONS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
cal_stepsperday.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_stepsperday.f: CPP_OPTIONS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
cal_subdates.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_subdates.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
cal_subdates.f: /usr/include/stdc-predef.h
cal_summary.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_summary.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
cal_summary.f: /usr/include/stdc-predef.h
cal_time2dump.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_time2dump.f: CPP_OPTIONS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
cal_timeinterval.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_timeinterval.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
cal_timeinterval.f: /usr/include/stdc-predef.h
cal_timepassed.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_timepassed.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
cal_timepassed.f: /usr/include/stdc-predef.h
cal_timestamp.f: CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cal_timestamp.f: EEPARAMS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
cal_toseconds.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_toseconds.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
cal_toseconds.f: /usr/include/stdc-predef.h
cal_weekday.f: cal.h CAL_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cal_weekday.f: CPP_OPTIONS.h PACKAGES_CONFIG.h /usr/include/stdc-predef.h
cd_code_init_fixed.f: CD_CODE_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cd_code_init_fixed.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
cd_code_init_fixed.f: SIZE.h /usr/include/stdc-predef.h
cd_code_ini_vars.f: CD_CODE_OPTIONS.h CD_CODE_VARS.h CPP_EEMACROS.h
cd_code_ini_vars.f: CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
cd_code_ini_vars.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
cd_code_read_pickup.f: CD_CODE_OPTIONS.h CD_CODE_VARS.h CPP_EEMACROS.h
cd_code_read_pickup.f: CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
cd_code_read_pickup.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
cd_code_read_pickup.f: /usr/include/stdc-predef.h
cd_code_scheme.f: CD_CODE_OPTIONS.h CD_CODE_VARS.h CPP_EEMACROS.h
cd_code_scheme.f: CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
cd_code_scheme.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
cd_code_scheme.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
cd_code_scheme.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
cd_code_scheme.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
cd_code_scheme.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
cd_code_scheme.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cd_code_scheme.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cd_code_scheme.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cd_code_scheme.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
cd_code_scheme.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
cd_code_scheme.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
cd_code_scheme.f: YC_MACROS.h
cd_code_write_pickup.f: CD_CODE_OPTIONS.h CD_CODE_VARS.h CPP_EEMACROS.h
cd_code_write_pickup.f: CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
cd_code_write_pickup.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
cd_code_write_pickup.f: /usr/include/stdc-predef.h
cg2d_ex0.f: CG2D.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
cg2d_ex0.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
cg2d.f: CG2D.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
cg2d.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
cg2d_mad.f: AUTODIFF_OPTIONS.h AUTODIFF_PARAMS.h CPP_EEMACROS.h
cg2d_mad.f: CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h EEPARAMS.h
cg2d_mad.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h tamc.h
cg2d_mad.f: /usr/include/stdc-predef.h
cg2d_nsa.f: AUTODIFF_OPTIONS.h CG2D.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cg2d_nsa.f: CPP_OPTIONS.h CTRL_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
cg2d_nsa.f: SIZE.h tamc.h /usr/include/stdc-predef.h
cg2d_sr.f: CG2D.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
cg2d_sr.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
cg3d_ex0.f: CG3D.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
cg3d_ex0.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
cg3d_ex0.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
cg3d_ex0.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
cg3d_ex0.f: MASKS_MACROS.h MASKW_MACROS.h PARAMS.h RA_MACROS.h RAS_MACROS.h
cg3d_ex0.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cg3d_ex0.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cg3d_ex0.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cg3d_ex0.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
cg3d_ex0.f: SIZE.h SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
cg3d_ex0.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cg3d.f: CG3D.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
cg3d.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
cg3d.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
cg3d.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
cg3d.f: MASKS_MACROS.h MASKW_MACROS.h PARAMS.h RA_MACROS.h RAS_MACROS.h
cg3d.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
cg3d.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
cg3d.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
cg3d.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
cg3d.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h /usr/include/stdc-predef.h
cg3d.f: XC_MACROS.h YC_MACROS.h
check_pickup.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
check_pickup.f: PARAMS.h RESTART.h SIZE.h /usr/include/stdc-predef.h
check_threads.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
check_threads.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
check_threads.f: SIZE.h /usr/include/stdc-predef.h
chksum_tiled.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DEBUG_OPTIONS.h
chksum_tiled.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
comm_stats.f: BAR2.h CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
comm_stats.f: EXCH.h
comm_stats.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
comm_stats.f: SIZE.h /usr/include/stdc-predef.h
config_check.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h
config_check.f: EEPARAMS.h MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
config_check.f: SIZE.h /usr/include/stdc-predef.h
config_summary.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
config_summary.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
config_summary.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h EOS.h
config_summary.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
config_summary.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
config_summary.f: MOM_COMMON_OPTIONS.h MOM_VISC.h PACKAGES_CONFIG.h PARAMS.h
config_summary.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
config_summary.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
config_summary.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
config_summary.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
config_summary.f: RECIP_HFACW_MACROS.h SET_GRID.h SIZE.h TANPHIATU_MACROS.h
config_summary.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
config_summary.f: YC_MACROS.h
convective_adjustment.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
convective_adjustment.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
convective_adjustment.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
convective_adjustment.f: DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
convective_adjustment.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
convective_adjustment.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
convective_adjustment.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
convective_adjustment.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
convective_adjustment.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
convective_adjustment.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
convective_adjustment.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
convective_adjustment.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
convective_adjustment.f: RECIP_HFACW_MACROS.h SIZE.h tamc.h TANPHIATU_MACROS.h
convective_adjustment.f: TANPHIATV_MACROS.h TIMEAVE_OPTIONS.h TIMEAVE_STATV.h
convective_adjustment.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
convective_adjustment_ini.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
convective_adjustment_ini.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
convective_adjustment_ini.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
convective_adjustment_ini.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h
convective_adjustment_ini.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
convective_adjustment_ini.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
convective_adjustment_ini.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
convective_adjustment_ini.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
convective_adjustment_ini.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
convective_adjustment_ini.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
convective_adjustment_ini.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
convective_adjustment_ini.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
convective_adjustment_ini.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
convective_adjustment_ini.f: RECIP_HFACW_MACROS.h SIZE.h tamc.h
convective_adjustment_ini.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
convective_adjustment_ini.f: /usr/include/stdc-predef.h XC_MACROS.h
convective_adjustment_ini.f: YC_MACROS.h
convectively_mixtracer.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
convectively_mixtracer.f: EEPARAMS.h SIZE.h /usr/include/stdc-predef.h
convective_weights.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
convective_weights.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
convective_weights.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
convective_weights.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
convective_weights.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
convective_weights.f: MASKS_MACROS.h MASKW_MACROS.h PARAMS.h RA_MACROS.h
convective_weights.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
convective_weights.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
convective_weights.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
convective_weights.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
convective_weights.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
convective_weights.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
convective_weights.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
copy_ad_uv_outp.f: AD_CONFIG.h AUTODIFF_OPTIONS.h CPP_EEMACROS.h
copy_ad_uv_outp.f: CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
copy_ad_uv_outp.f: SIZE.h /usr/include/stdc-predef.h
copy_advar_outp.f: AD_CONFIG.h AUTODIFF_OPTIONS.h CPP_EEMACROS.h
copy_advar_outp.f: CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
copy_advar_outp.f: SIZE.h /usr/include/stdc-predef.h
correction_step.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
correction_step.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
correction_step.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
correction_step.f: FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h
correction_step.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
correction_step.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
correction_step.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
correction_step.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
correction_step.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
correction_step.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
correction_step.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
correction_step.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
correction_step.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cost_accumulate_mean.f: cost.h COST_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cost_accumulate_mean.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
cost_accumulate_mean.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
cost_accumulate_mean.f: DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
cost_accumulate_mean.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
cost_accumulate_mean.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
cost_accumulate_mean.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
cost_accumulate_mean.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cost_accumulate_mean.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
cost_accumulate_mean.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
cost_accumulate_mean.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cost_accumulate_mean.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
cost_accumulate_mean.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
cost_accumulate_mean.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
cost_accumulate_mean.f: XC_MACROS.h YC_MACROS.h
cost_atlantic_heat.f: cost.h COST_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cost_atlantic_heat.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
cost_atlantic_heat.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
cost_atlantic_heat.f: DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
cost_atlantic_heat.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
cost_atlantic_heat.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
cost_atlantic_heat.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
cost_atlantic_heat.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cost_atlantic_heat.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cost_atlantic_heat.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cost_atlantic_heat.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
cost_atlantic_heat.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
cost_atlantic_heat.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
cost_atlantic_heat.f: XC_MACROS.h YC_MACROS.h
cost_averagesfields.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ECCO.h
cost_averagesfields.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h PACKAGES_CONFIG.h
cost_averagesfields.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
cost_averagesflags.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cost_averagesflags.f: ECCO_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
cost_averagesflags.f: /usr/include/stdc-predef.h
cost_averagesgeneric.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ECCO.h
cost_averagesgeneric.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h
cost_averagesgeneric.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
cost_averagesgeneric.f: /usr/include/stdc-predef.h
cost_averagesinit.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ECCO.h
cost_averagesinit.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h PACKAGES_CONFIG.h
cost_averagesinit.f: SIZE.h /usr/include/stdc-predef.h
cost_bp_read.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cost_bp_read.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
cost_bp_read.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h ECCO.h
cost_bp_read.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h FCORI_MACROS.h GRID.h
cost_bp_read.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
cost_bp_read.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
cost_bp_read.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
cost_bp_read.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
cost_bp_read.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
cost_bp_read.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
cost_bp_read.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
cost_bp_read.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
cost_bp_read.f: YC_MACROS.h
cost_check.f: COST_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cost_check.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
cost_check.f: /usr/include/stdc-predef.h
cost_dependent_init.f: adcost.h cost.h COST_OPTIONS.h CPP_EEMACROS.h
cost_dependent_init.f: CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
cost_dependent_init.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
cost_depth.f: cost.h COST_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cost_depth.f: CPP_OPTIONS.h CTRL_GENARR.h CTRL_OPTIONS.h CTRL_SIZE.h
cost_depth.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
cost_depth.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
cost_depth.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
cost_depth.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
cost_depth.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
cost_depth.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
cost_depth.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
cost_depth.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
cost_depth.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
cost_depth.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
cost_depth.f: YC_MACROS.h
cost_final.f: cost.h COST_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cost_final.f: CPP_OPTIONS.h ctrl.h CTRL_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
cost_final.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
cost_final_restore.f: AUTODIFF_OPTIONS.h cost.h COST_OPTIONS.h CPP_EEMACROS.h
cost_final_restore.f: CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
cost_final_restore.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
cost_final_store.f: AUTODIFF_OPTIONS.h cost.h COST_OPTIONS.h CPP_EEMACROS.h
cost_final_store.f: CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
cost_final_store.f: SIZE.h /usr/include/stdc-predef.h
cost_gencal.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ECCO.h
cost_gencal.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h PACKAGES_CONFIG.h
cost_gencal.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
cost_gencost_all.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
cost_gencost_all.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
cost_gencost_all.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h ECCO.h
cost_gencost_all.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h FCORI_MACROS.h
cost_gencost_all.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
cost_gencost_all.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
cost_gencost_all.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
cost_gencost_all.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cost_gencost_all.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cost_gencost_all.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cost_gencost_all.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
cost_gencost_all.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
cost_gencost_all.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
cost_gencost_all.f: YC_MACROS.h
cost_gencost_assignperiod.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cost_gencost_assignperiod.f: ECCO.h ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h
cost_gencost_assignperiod.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
cost_gencost_assignperiod.f: /usr/include/stdc-predef.h
cost_gencost_boxmean.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cost_gencost_boxmean.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
cost_gencost_boxmean.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
cost_gencost_boxmean.f: ECCO.h ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h
cost_gencost_boxmean.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
cost_gencost_boxmean.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
cost_gencost_boxmean.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
cost_gencost_boxmean.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
cost_gencost_boxmean.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
cost_gencost_boxmean.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cost_gencost_boxmean.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
cost_gencost_boxmean.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
cost_gencost_boxmean.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
cost_gencost_boxmean.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
cost_gencost_boxmean.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cost_gencost_bpv4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
cost_gencost_bpv4.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
cost_gencost_bpv4.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h ECCO.h
cost_gencost_bpv4.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h FCORI_MACROS.h
cost_gencost_bpv4.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
cost_gencost_bpv4.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
cost_gencost_bpv4.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
cost_gencost_bpv4.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cost_gencost_bpv4.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cost_gencost_bpv4.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cost_gencost_bpv4.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
cost_gencost_bpv4.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
cost_gencost_bpv4.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
cost_gencost_bpv4.f: YC_MACROS.h
cost_gencost_customize.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cost_gencost_customize.f: CTRL_FIELDS.h CTRL_OPTIONS.h DXC_MACROS.h
cost_gencost_customize.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
cost_gencost_customize.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h
cost_gencost_customize.f: ECCO.h ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h
cost_gencost_customize.f: FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h
cost_gencost_customize.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
cost_gencost_customize.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
cost_gencost_customize.f: PARAMS.h PTRACERS_FIELDS.h PTRACERS_SIZE.h
cost_gencost_customize.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
cost_gencost_customize.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cost_gencost_customize.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
cost_gencost_customize.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
cost_gencost_customize.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cost_gencost_customize.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
cost_gencost_customize.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
cost_gencost_customize.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
cost_gencost_customize.f: XC_MACROS.h YC_MACROS.h
cost_gencost_glbmean.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cost_gencost_glbmean.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
cost_gencost_glbmean.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h
cost_gencost_glbmean.f: DYU_MACROS.h ECCO.h ECCO_OPTIONS.h ECCO_SIZE.h
cost_gencost_glbmean.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
cost_gencost_glbmean.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
cost_gencost_glbmean.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
cost_gencost_glbmean.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
cost_gencost_glbmean.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cost_gencost_glbmean.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
cost_gencost_glbmean.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
cost_gencost_glbmean.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cost_gencost_glbmean.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
cost_gencost_glbmean.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
cost_gencost_glbmean.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
cost_gencost_glbmean.f: XC_MACROS.h YC_MACROS.h
cost_gencost_moc.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
cost_gencost_moc.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
cost_gencost_moc.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h ECCO.h
cost_gencost_moc.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h FCORI_MACROS.h
cost_gencost_moc.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
cost_gencost_moc.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
cost_gencost_moc.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
cost_gencost_moc.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cost_gencost_moc.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cost_gencost_moc.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cost_gencost_moc.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
cost_gencost_moc.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
cost_gencost_moc.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
cost_gencost_moc.f: YC_MACROS.h
cost_gencost_seaicev4.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cost_gencost_seaicev4.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
cost_gencost_seaicev4.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
cost_gencost_seaicev4.f: ECCO.h ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h
cost_gencost_seaicev4.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
cost_gencost_seaicev4.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
cost_gencost_seaicev4.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
cost_gencost_seaicev4.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
cost_gencost_seaicev4.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
cost_gencost_seaicev4.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cost_gencost_seaicev4.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
cost_gencost_seaicev4.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
cost_gencost_seaicev4.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
cost_gencost_seaicev4.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
cost_gencost_seaicev4.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cost_gencost_sshv4.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cost_gencost_sshv4.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
cost_gencost_sshv4.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
cost_gencost_sshv4.f: ECCO.h ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h
cost_gencost_sshv4.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
cost_gencost_sshv4.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
cost_gencost_sshv4.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
cost_gencost_sshv4.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
cost_gencost_sshv4.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
cost_gencost_sshv4.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
cost_gencost_sshv4.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
cost_gencost_sshv4.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
cost_gencost_sshv4.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
cost_gencost_sshv4.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cost_gencost_sstv4.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cost_gencost_sstv4.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
cost_gencost_sstv4.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
cost_gencost_sstv4.f: ECCO.h ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h
cost_gencost_sstv4.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
cost_gencost_sstv4.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
cost_gencost_sstv4.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
cost_gencost_sstv4.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
cost_gencost_sstv4.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
cost_gencost_sstv4.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
cost_gencost_sstv4.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
cost_gencost_sstv4.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
cost_gencost_sstv4.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
cost_gencost_sstv4.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cost_gencost_transp.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cost_gencost_transp.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
cost_gencost_transp.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
cost_gencost_transp.f: ECCO.h ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h
cost_gencost_transp.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
cost_gencost_transp.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
cost_gencost_transp.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
cost_gencost_transp.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
cost_gencost_transp.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
cost_gencost_transp.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cost_gencost_transp.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
cost_gencost_transp.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
cost_gencost_transp.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
cost_gencost_transp.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
cost_gencost_transp.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cost_generic.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cost_generic.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
cost_generic.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h ECCO.h
cost_generic.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h FCORI_MACROS.h GRID.h
cost_generic.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
cost_generic.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
cost_generic.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
cost_generic.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
cost_generic.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
cost_generic.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
cost_generic.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
cost_generic.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
cost_generic.f: YC_MACROS.h
cost_genread.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ECCO.h
cost_genread.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
cost_genread.f: /usr/include/stdc-predef.h
cost_init_varia.f: cost.h COST_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cost_init_varia.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
cost_init_varia.f: /usr/include/stdc-predef.h
cost_obcs_ageos.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cost_obcs_ageos.f: ctrl_dummy.h ctrl.h CTRL_OBCS.h CTRL_OPTIONS.h CTRL_SIZE.h
cost_obcs_ageos.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
cost_obcs_ageos.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h
cost_obcs_ageos.f: DYU_MACROS.h ecco_cost.h ECCO.h ECCO_OPTIONS.h ECCO_SIZE.h
cost_obcs_ageos.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
cost_obcs_ageos.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
cost_obcs_ageos.f: MASKW_MACROS.h optim.h PACKAGES_CONFIG.h PARAMS.h
cost_obcs_ageos.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
cost_obcs_ageos.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
cost_obcs_ageos.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
cost_obcs_ageos.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
cost_obcs_ageos.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
cost_obcs_ageos.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
cost_obcs_ageos.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cost_obcse.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl_dummy.h
cost_obcse.f: ctrl.h CTRL_OBCS.h CTRL_OPTIONS.h CTRL_SIZE.h DXC_MACROS.h
cost_obcse.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
cost_obcse.f: DYG_MACROS.h DYU_MACROS.h ECCO_OPTIONS.h EEPARAMS.h
cost_obcse.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
cost_obcse.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
cost_obcse.f: optim.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
cost_obcse.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cost_obcse.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cost_obcse.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cost_obcse.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
cost_obcse.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
cost_obcse.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cost_obcs.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
cost_obcs.f: CTRL_OPTIONS.h ECCO_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
cost_obcs.f: /usr/include/stdc-predef.h
cost_obcsn.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl_dummy.h
cost_obcsn.f: ctrl.h CTRL_OBCS.h CTRL_OPTIONS.h CTRL_SIZE.h DXC_MACROS.h
cost_obcsn.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
cost_obcsn.f: DYG_MACROS.h DYU_MACROS.h ECCO_OPTIONS.h EEPARAMS.h
cost_obcsn.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
cost_obcsn.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
cost_obcsn.f: optim.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
cost_obcsn.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cost_obcsn.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cost_obcsn.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cost_obcsn.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
cost_obcsn.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
cost_obcsn.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cost_obcss.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl_dummy.h
cost_obcss.f: ctrl.h CTRL_OBCS.h CTRL_OPTIONS.h CTRL_SIZE.h DXC_MACROS.h
cost_obcss.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
cost_obcss.f: DYG_MACROS.h DYU_MACROS.h ECCO_OPTIONS.h EEPARAMS.h
cost_obcss.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
cost_obcss.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
cost_obcss.f: optim.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
cost_obcss.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cost_obcss.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cost_obcss.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cost_obcss.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
cost_obcss.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
cost_obcss.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cost_obcsvol.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cost_obcsvol.f: ctrl_dummy.h ctrl.h CTRL_OPTIONS.h CTRL_SIZE.h DXC_MACROS.h
cost_obcsvol.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
cost_obcsvol.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h ecco_cost.h ECCO.h
cost_obcsvol.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h FCORI_MACROS.h GRID.h
cost_obcsvol.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
cost_obcsvol.f: MASKS_MACROS.h MASKW_MACROS.h optim.h PACKAGES_CONFIG.h
cost_obcsvol.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
cost_obcsvol.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
cost_obcsvol.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
cost_obcsvol.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
cost_obcsvol.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
cost_obcsvol.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
cost_obcsvol.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cost_obcsw.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl_dummy.h
cost_obcsw.f: ctrl.h CTRL_OBCS.h CTRL_OPTIONS.h CTRL_SIZE.h DXC_MACROS.h
cost_obcsw.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
cost_obcsw.f: DYG_MACROS.h DYU_MACROS.h ECCO_OPTIONS.h EEPARAMS.h
cost_obcsw.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
cost_obcsw.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
cost_obcsw.f: optim.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
cost_obcsw.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cost_obcsw.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cost_obcsw.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cost_obcsw.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
cost_obcsw.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
cost_obcsw.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cost_readparms.f: cost.h COST_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cost_readparms.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
cost_readparms.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
cost_readparms.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
cost_readparms.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
cost_readparms.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
cost_readparms.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
cost_readparms.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
cost_readparms.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
cost_readparms.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
cost_readparms.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
cost_readparms.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
cost_readparms.f: YC_MACROS.h
cost_sla_read.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cost_sla_read.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
cost_sla_read.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h ECCO.h
cost_sla_read.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h FCORI_MACROS.h GRID.h
cost_sla_read.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
cost_sla_read.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
cost_sla_read.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
cost_sla_read.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
cost_sla_read.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
cost_sla_read.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
cost_sla_read.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
cost_sla_read.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
cost_sla_read.f: YC_MACROS.h
cost_sla_read_yd.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
cost_sla_read_yd.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
cost_sla_read_yd.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h ECCO.h
cost_sla_read_yd.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h FCORI_MACROS.h
cost_sla_read_yd.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
cost_sla_read_yd.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
cost_sla_read_yd.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
cost_sla_read_yd.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cost_sla_read_yd.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cost_sla_read_yd.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cost_sla_read_yd.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
cost_sla_read_yd.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
cost_sla_read_yd.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
cost_sla_read_yd.f: YC_MACROS.h
cost_state_final.f: cost.h COST_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cost_state_final.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
cost_state_final.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
cost_state_final.f: DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
cost_state_final.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
cost_state_final.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
cost_state_final.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
cost_state_final.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
cost_state_final.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
cost_state_final.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
cost_state_final.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
cost_state_final.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
cost_state_final.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cost_test.f: cost.h COST_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cost_test.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
cost_test.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h
cost_test.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
cost_test.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
cost_test.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
cost_test.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
cost_test.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
cost_test.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
cost_test.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
cost_test.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h /usr/include/stdc-predef.h
cost_test.f: XC_MACROS.h YC_MACROS.h
cost_tile.f: AUTODIFF_OPTIONS.h cost.h COST_OPTIONS.h CPP_EEMACROS.h
cost_tile.f: CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
cost_tile.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
cost_tile.f: DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
cost_tile.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
cost_tile.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
cost_tile.f: PTRACERS_FIELDS.h PTRACERS_SIZE.h RA_MACROS.h RAS_MACROS.h
cost_tile.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cost_tile.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cost_tile.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cost_tile.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
cost_tile.f: SIZE.h tamc.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
cost_tile.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cost_tracer.f: cost.h COST_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cost_tracer.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
cost_tracer.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h
cost_tracer.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
cost_tracer.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
cost_tracer.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
cost_tracer.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cost_tracer.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cost_tracer.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cost_tracer.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
cost_tracer.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
cost_tracer.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cost_vector.f: cost.h COST_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
cost_vector.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
cost_vector.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h
cost_vector.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
cost_vector.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
cost_vector.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
cost_vector.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
cost_vector.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
cost_vector.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
cost_vector.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
cost_vector.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
cost_vector.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ctrl_bound.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h
ctrl_bound.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
ctrl_bound_tl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h
ctrl_bound_tl.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
ctrl_bound_tl.f: /usr/include/stdc-predef.h
ctrl_check.f: AD_CONFIG.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ctrl_check.f: CTRL_GENARR.h ctrl.h CTRL_OPTIONS.h CTRL_SIZE.h ECCO_OPTIONS.h
ctrl_check.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
ctrl_check.f: /usr/include/stdc-predef.h
ctrl_cost_driver.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl_dummy.h
ctrl_cost_driver.f: CTRL_GENARR.h ctrl.h CTRL_OPTIONS.h CTRL_SIZE.h
ctrl_cost_driver.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
ctrl_cost_driver.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
ctrl_cost_driver.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
ctrl_cost_driver.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ctrl_cost_driver.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ctrl_cost_driver.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ctrl_cost_driver.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ctrl_cost_driver.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ctrl_cost_driver.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ctrl_cost_driver.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ctrl_cost_driver.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ctrl_cost_driver.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ctrl_cost_gen.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_cost_gen.f: CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
ctrl_cost_gen.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
ctrl_cost_gen.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
ctrl_cost_gen.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
ctrl_cost_gen.f: MASKW_MACROS.h optim.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
ctrl_cost_gen.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ctrl_cost_gen.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ctrl_cost_gen.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ctrl_cost_gen.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ctrl_cost_gen.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ctrl_cost_gen.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ctrl_cost_gen.f: YC_MACROS.h
ctrl_depth_ini.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_GENARR.h
ctrl_depth_ini.f: CTRL_OPTIONS.h CTRL_SIZE.h DXC_MACROS.h DXF_MACROS.h
ctrl_depth_ini.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ctrl_depth_ini.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ctrl_depth_ini.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ctrl_depth_ini.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h
ctrl_depth_ini.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ctrl_depth_ini.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ctrl_depth_ini.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ctrl_depth_ini.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ctrl_depth_ini.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ctrl_depth_ini.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ctrl_depth_ini.f: YC_MACROS.h
ctrl_get_gen.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_get_gen.f: CTRL_OPTIONS.h EEPARAMS.h optim.h PACKAGES_CONFIG.h PARAMS.h
ctrl_get_gen.f: SIZE.h /usr/include/stdc-predef.h
ctrl_get_gen_rec.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_get_gen_rec.f: CTRL_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
ctrl_get_gen_rec.f: SIZE.h /usr/include/stdc-predef.h
ctrl_get_mask.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h
ctrl_get_mask.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
ctrl_get_mask.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
ctrl_get_mask.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ctrl_get_mask.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
ctrl_get_mask.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ctrl_get_mask.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ctrl_get_mask.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ctrl_get_mask.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ctrl_get_mask.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ctrl_get_mask.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ctrl_get_mask.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ctrl_get_mask.f: YC_MACROS.h
ctrl_getobcse.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h
ctrl_getobcse.f: PACKAGES_CONFIG.h /usr/include/stdc-predef.h
ctrl_getobcsn.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h
ctrl_getobcsn.f: PACKAGES_CONFIG.h /usr/include/stdc-predef.h
ctrl_getobcss.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h
ctrl_getobcss.f: PACKAGES_CONFIG.h /usr/include/stdc-predef.h
ctrl_getobcsw.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h
ctrl_getobcsw.f: PACKAGES_CONFIG.h /usr/include/stdc-predef.h
ctrl_hfacc_ini.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl_dummy.h
ctrl_hfacc_ini.f: ctrl.h CTRL_OPTIONS.h CTRL_SIZE.h DXC_MACROS.h DXF_MACROS.h
ctrl_hfacc_ini.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ctrl_hfacc_ini.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ctrl_hfacc_ini.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ctrl_hfacc_ini.f: MASKS_MACROS.h MASKW_MACROS.h optim.h PACKAGES_CONFIG.h
ctrl_hfacc_ini.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ctrl_hfacc_ini.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ctrl_hfacc_ini.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ctrl_hfacc_ini.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ctrl_hfacc_ini.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ctrl_hfacc_ini.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ctrl_hfacc_ini.f: YC_MACROS.h
ctrl_init_ctrlvar.f: AD_CONFIG.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ctrl_init_ctrlvar.f: ctrl.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
ctrl_init_ctrlvar.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ctrl_init_ctrlvar.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
ctrl_init_ctrlvar.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
ctrl_init_ctrlvar.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h optim.h
ctrl_init_ctrlvar.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ctrl_init_ctrlvar.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ctrl_init_ctrlvar.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ctrl_init_ctrlvar.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ctrl_init_ctrlvar.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ctrl_init_ctrlvar.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ctrl_init_ctrlvar.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ctrl_init_ctrlvar.f: YC_MACROS.h
ctrl_init.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_GENARR.h
ctrl_init.f: ctrl.h CTRL_OBCS.h CTRL_OPTIONS.h CTRL_SIZE.h DXC_MACROS.h
ctrl_init.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ctrl_init.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ctrl_init.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ctrl_init.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ctrl_init.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ctrl_init.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ctrl_init.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ctrl_init.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ctrl_init.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ctrl_init.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ctrl_init_obcs_variables.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ctrl_init_obcs_variables.f: ctrl.h CTRL_OBCS.h CTRL_OPTIONS.h EEPARAMS.h
ctrl_init_obcs_variables.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
ctrl_init_obcs_variables.f: /usr/include/stdc-predef.h
ctrl_init_rec.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ctrl_init_rec.f: CTRL_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
ctrl_init_rec.f: /usr/include/stdc-predef.h
ctrl_init_variables.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ctrl_init_variables.f: CTRL_FIELDS.h CTRL_GENARR.h ctrl.h CTRL_OPTIONS.h
ctrl_init_variables.f: CTRL_SIZE.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
ctrl_init_variables.f: SIZE.h /usr/include/stdc-predef.h
ctrl_init_wet.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_init_wet.f: CTRL_OBCS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
ctrl_init_wet.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ctrl_init_wet.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ctrl_init_wet.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ctrl_init_wet.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ctrl_init_wet.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ctrl_init_wet.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ctrl_init_wet.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ctrl_init_wet.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ctrl_init_wet.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ctrl_init_wet.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ctrl_init_wet.f: YC_MACROS.h
ctrl_map_forcing.f: AUTODIFF_MYFIELDS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
ctrl_map_forcing.f: CPP_OPTIONS.h ctrl_dummy.h CTRL_GENARR.h ctrl.h
ctrl_map_forcing.f: CTRL_OPTIONS.h CTRL_SIZE.h DXC_MACROS.h DXF_MACROS.h
ctrl_map_forcing.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ctrl_map_forcing.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
ctrl_map_forcing.f: FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h
ctrl_map_forcing.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ctrl_map_forcing.f: MASKS_MACROS.h MASKW_MACROS.h optim.h PACKAGES_CONFIG.h
ctrl_map_forcing.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
ctrl_map_forcing.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
ctrl_map_forcing.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ctrl_map_forcing.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ctrl_map_forcing.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ctrl_map_forcing.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ctrl_map_forcing.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ctrl_map_genarr.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl_dummy.h
ctrl_map_genarr.f: CTRL_GENARR.h ctrl.h CTRL_OPTIONS.h CTRL_SIZE.h
ctrl_map_genarr.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
ctrl_map_genarr.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
ctrl_map_genarr.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
ctrl_map_genarr.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
ctrl_map_genarr.f: MASKW_MACROS.h optim.h PACKAGES_CONFIG.h PARAMS.h
ctrl_map_genarr.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ctrl_map_genarr.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ctrl_map_genarr.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ctrl_map_genarr.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ctrl_map_genarr.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ctrl_map_genarr.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ctrl_map_genarr.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ctrl_map_gentim2d.f: AUTODIFF_MYFIELDS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
ctrl_map_gentim2d.f: CPP_OPTIONS.h ctrl_dummy.h CTRL_GENARR.h ctrl.h
ctrl_map_gentim2d.f: CTRL_OPTIONS.h CTRL_SIZE.h DXC_MACROS.h DXF_MACROS.h
ctrl_map_gentim2d.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ctrl_map_gentim2d.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
ctrl_map_gentim2d.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
ctrl_map_gentim2d.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
ctrl_map_gentim2d.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ctrl_map_gentim2d.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ctrl_map_gentim2d.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ctrl_map_gentim2d.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ctrl_map_gentim2d.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ctrl_map_gentim2d.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ctrl_map_gentim2d.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ctrl_map_gentim2d.f: YC_MACROS.h
ctrl_map_ini_genarr.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ctrl_map_ini_genarr.f: ctrl_dummy.h CTRL_FIELDS.h CTRL_GENARR.h ctrl.h
ctrl_map_ini_genarr.f: CTRL_OPTIONS.h CTRL_SIZE.h DXC_MACROS.h DXF_MACROS.h
ctrl_map_ini_genarr.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ctrl_map_ini_genarr.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
ctrl_map_ini_genarr.f: FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h
ctrl_map_ini_genarr.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ctrl_map_ini_genarr.f: MASKS_MACROS.h MASKW_MACROS.h optim.h PACKAGES_CONFIG.h
ctrl_map_ini_genarr.f: PARAMS.h PTRACERS_FIELDS.h PTRACERS_PARAMS.h
ctrl_map_ini_genarr.f: PTRACERS_SIZE.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
ctrl_map_ini_genarr.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ctrl_map_ini_genarr.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ctrl_map_ini_genarr.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ctrl_map_ini_genarr.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ctrl_map_ini_genarr.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ctrl_map_ini_genarr.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ctrl_map_ini_genarr.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
ctrl_map_ini_genarr.f: XC_MACROS.h YC_MACROS.h
ctrl_map_ini_gentim2d.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
ctrl_map_ini_gentim2d.f: CPP_OPTIONS.h ctrl_dummy.h CTRL_GENARR.h ctrl.h
ctrl_map_ini_gentim2d.f: CTRL_OPTIONS.h CTRL_SIZE.h DXC_MACROS.h DXF_MACROS.h
ctrl_map_ini_gentim2d.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ctrl_map_ini_gentim2d.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
ctrl_map_ini_gentim2d.f: FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h
ctrl_map_ini_gentim2d.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ctrl_map_ini_gentim2d.f: MASKS_MACROS.h MASKW_MACROS.h optim.h
ctrl_map_ini_gentim2d.f: PACKAGES_CONFIG.h PARAMS.h PTRACERS_FIELDS.h
ctrl_map_ini_gentim2d.f: PTRACERS_SIZE.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
ctrl_map_ini_gentim2d.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ctrl_map_ini_gentim2d.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ctrl_map_ini_gentim2d.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ctrl_map_ini_gentim2d.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ctrl_map_ini_gentim2d.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ctrl_map_ini_gentim2d.f: RECIP_HFACW_MACROS.h SIZE.h tamc.h TANPHIATU_MACROS.h
ctrl_map_ini_gentim2d.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
ctrl_map_ini_gentim2d.f: XC_MACROS.h YC_MACROS.h
ctrl_mask_set_xz.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_mask_set_xz.f: CTRL_OBCS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
ctrl_mask_set_xz.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ctrl_mask_set_xz.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ctrl_mask_set_xz.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ctrl_mask_set_xz.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ctrl_mask_set_xz.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ctrl_mask_set_xz.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ctrl_mask_set_xz.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ctrl_mask_set_xz.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ctrl_mask_set_xz.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ctrl_mask_set_xz.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ctrl_mask_set_xz.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ctrl_mask_set_yz.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_mask_set_yz.f: CTRL_OBCS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
ctrl_mask_set_yz.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ctrl_mask_set_yz.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ctrl_mask_set_yz.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ctrl_mask_set_yz.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ctrl_mask_set_yz.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ctrl_mask_set_yz.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ctrl_mask_set_yz.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ctrl_mask_set_yz.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ctrl_mask_set_yz.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ctrl_mask_set_yz.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ctrl_mask_set_yz.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ctrl_pack.f: cost.h COST_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
ctrl_pack.f: CPP_OPTIONS.h CTRL_GENARR.h ctrl.h CTRL_OBCS.h CTRL_OPTIONS.h
ctrl_pack.f: CTRL_SIZE.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
ctrl_pack.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
ctrl_pack.f: ECCO_OPTIONS.h EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
ctrl_pack.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
ctrl_pack.f: MASKW_MACROS.h optim.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
ctrl_pack.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ctrl_pack.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ctrl_pack.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ctrl_pack.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
ctrl_pack.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ctrl_pack.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ctrl_readparms.f: AD_CONFIG.h AUTODIFF_PARAMS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
ctrl_readparms.f: CPP_OPTIONS.h CTRL_GENARR.h ctrl.h ctrl_local_params.h
ctrl_readparms.f: CTRL_OBCS.h CTRL_OPTIONS.h CTRL_SIZE.h EEPARAMS.h
ctrl_readparms.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h /usr/include/stdc-predef.h
ctrl_set_fname.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_set_fname.f: CTRL_OPTIONS.h EEPARAMS.h optim.h PACKAGES_CONFIG.h PARAMS.h
ctrl_set_fname.f: SIZE.h /usr/include/stdc-predef.h
ctrl_set_globfld_xy.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_set_globfld_xy.f: CTRL_OPTIONS.h EEPARAMS.h optim.h PACKAGES_CONFIG.h
ctrl_set_globfld_xy.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
ctrl_set_globfld_xyz.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_set_globfld_xyz.f: CTRL_OPTIONS.h EEPARAMS.h optim.h PACKAGES_CONFIG.h
ctrl_set_globfld_xyz.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
ctrl_set_globfld_xz.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_set_globfld_xz.f: CTRL_OPTIONS.h EEPARAMS.h optim.h PACKAGES_CONFIG.h
ctrl_set_globfld_xz.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
ctrl_set_globfld_yz.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_set_globfld_yz.f: CTRL_OPTIONS.h EEPARAMS.h optim.h PACKAGES_CONFIG.h
ctrl_set_globfld_yz.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
ctrl_set_pack_xy.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_set_pack_xy.f: CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
ctrl_set_pack_xy.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
ctrl_set_pack_xy.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ctrl_set_pack_xy.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ctrl_set_pack_xy.f: MASKS_MACROS.h MASKW_MACROS.h optim.h PACKAGES_CONFIG.h
ctrl_set_pack_xy.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
ctrl_set_pack_xy.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
ctrl_set_pack_xy.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ctrl_set_pack_xy.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ctrl_set_pack_xy.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ctrl_set_pack_xy.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ctrl_set_pack_xy.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ctrl_set_pack_xyz.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_set_pack_xyz.f: CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
ctrl_set_pack_xyz.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
ctrl_set_pack_xyz.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ctrl_set_pack_xyz.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
ctrl_set_pack_xyz.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h optim.h
ctrl_set_pack_xyz.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ctrl_set_pack_xyz.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ctrl_set_pack_xyz.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ctrl_set_pack_xyz.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ctrl_set_pack_xyz.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ctrl_set_pack_xyz.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ctrl_set_pack_xyz.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ctrl_set_pack_xyz.f: YC_MACROS.h
ctrl_set_pack_xz.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_set_pack_xz.f: CTRL_OBCS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
ctrl_set_pack_xz.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ctrl_set_pack_xz.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ctrl_set_pack_xz.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ctrl_set_pack_xz.f: MASKS_MACROS.h MASKW_MACROS.h optim.h PACKAGES_CONFIG.h
ctrl_set_pack_xz.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
ctrl_set_pack_xz.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
ctrl_set_pack_xz.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ctrl_set_pack_xz.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ctrl_set_pack_xz.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ctrl_set_pack_xz.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ctrl_set_pack_xz.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ctrl_set_pack_yz.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_set_pack_yz.f: CTRL_OBCS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
ctrl_set_pack_yz.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ctrl_set_pack_yz.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ctrl_set_pack_yz.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ctrl_set_pack_yz.f: MASKS_MACROS.h MASKW_MACROS.h optim.h PACKAGES_CONFIG.h
ctrl_set_pack_yz.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
ctrl_set_pack_yz.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
ctrl_set_pack_yz.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ctrl_set_pack_yz.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ctrl_set_pack_yz.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ctrl_set_pack_yz.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ctrl_set_pack_yz.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ctrl_set_unpack_xy.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_set_unpack_xy.f: CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
ctrl_set_unpack_xy.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
ctrl_set_unpack_xy.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ctrl_set_unpack_xy.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
ctrl_set_unpack_xy.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h optim.h
ctrl_set_unpack_xy.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ctrl_set_unpack_xy.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ctrl_set_unpack_xy.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ctrl_set_unpack_xy.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ctrl_set_unpack_xy.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ctrl_set_unpack_xy.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ctrl_set_unpack_xy.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
ctrl_set_unpack_xy.f: XC_MACROS.h YC_MACROS.h
ctrl_set_unpack_xyz.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_set_unpack_xyz.f: CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
ctrl_set_unpack_xyz.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
ctrl_set_unpack_xyz.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ctrl_set_unpack_xyz.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
ctrl_set_unpack_xyz.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h optim.h
ctrl_set_unpack_xyz.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ctrl_set_unpack_xyz.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ctrl_set_unpack_xyz.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ctrl_set_unpack_xyz.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ctrl_set_unpack_xyz.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ctrl_set_unpack_xyz.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ctrl_set_unpack_xyz.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ctrl_set_unpack_xyz.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
ctrl_set_unpack_xyz.f: XC_MACROS.h YC_MACROS.h
ctrl_set_unpack_xz.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_set_unpack_xz.f: CTRL_OBCS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
ctrl_set_unpack_xz.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ctrl_set_unpack_xz.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
ctrl_set_unpack_xz.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
ctrl_set_unpack_xz.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h optim.h
ctrl_set_unpack_xz.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ctrl_set_unpack_xz.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ctrl_set_unpack_xz.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ctrl_set_unpack_xz.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ctrl_set_unpack_xz.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ctrl_set_unpack_xz.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ctrl_set_unpack_xz.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
ctrl_set_unpack_xz.f: XC_MACROS.h YC_MACROS.h
ctrl_set_unpack_yz.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
ctrl_set_unpack_yz.f: CTRL_OBCS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
ctrl_set_unpack_yz.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ctrl_set_unpack_yz.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
ctrl_set_unpack_yz.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
ctrl_set_unpack_yz.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h optim.h
ctrl_set_unpack_yz.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ctrl_set_unpack_yz.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ctrl_set_unpack_yz.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ctrl_set_unpack_yz.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ctrl_set_unpack_yz.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ctrl_set_unpack_yz.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ctrl_set_unpack_yz.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
ctrl_set_unpack_yz.f: XC_MACROS.h YC_MACROS.h
ctrl_summary.f: AUTODIFF_PARAMS.h cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h
ctrl_summary.f: CPP_OPTIONS.h CTRL_GENARR.h ctrl.h CTRL_OPTIONS.h CTRL_SIZE.h
ctrl_summary.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
ctrl_summary.f: /usr/include/stdc-predef.h
ctrl_swapffields.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ctrl_swapffields.f: CTRL_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
ctrl_swapffields.f: /usr/include/stdc-predef.h
ctrl_toolbox.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h
ctrl_toolbox.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
ctrl_unpack.f: cost.h COST_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
ctrl_unpack.f: CPP_OPTIONS.h CTRL_GENARR.h ctrl.h CTRL_OBCS.h CTRL_OPTIONS.h
ctrl_unpack.f: CTRL_SIZE.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
ctrl_unpack.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
ctrl_unpack.f: ECCO_OPTIONS.h EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
ctrl_unpack.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
ctrl_unpack.f: MASKW_MACROS.h optim.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
ctrl_unpack.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ctrl_unpack.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ctrl_unpack.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ctrl_unpack.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
ctrl_unpack.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ctrl_unpack.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
cumulsum_z_tile.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CUMULSUM.h EEPARAMS.h
cumulsum_z_tile.f: EESUPPORT.h
cumulsum_z_tile.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
cumulsum_z_tile.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
cycle_ab_tracer.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
cycle_ab_tracer.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
cycle_tracer.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
cycle_tracer.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
damp_adj.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
damp_adj.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
damp_adj.f: /usr/include/stdc-predef.h
debug_call.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DEBUG_OPTIONS.h
debug_call.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
debug_cs_corner_uv.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
debug_cs_corner_uv.f: DEBUG_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
debug_cs_corner_uv.f: /usr/include/stdc-predef.h
debug_enter.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DEBUG_OPTIONS.h
debug_enter.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
debug_fld_stats_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
debug_fld_stats_rl.f: DEBUG_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
debug_fld_stats_rl.f: /usr/include/stdc-predef.h
debug_fld_stats_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
debug_fld_stats_rs.f: DEBUG_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
debug_fld_stats_rs.f: /usr/include/stdc-predef.h
debug_leave.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DEBUG_OPTIONS.h
debug_leave.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
debug_msg.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DEBUG_OPTIONS.h
debug_msg.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
debug_stats_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DEBUG_OPTIONS.h
debug_stats_rl.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
debug_stats_rl.f: /usr/include/stdc-predef.h
debug_stats_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DEBUG_OPTIONS.h
debug_stats_rs.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
debug_stats_rs.f: /usr/include/stdc-predef.h
diag_calc_psivel.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diag_calc_psivel.f: DIAG_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
diag_calc_psivel.f: SIZE.h /usr/include/stdc-predef.h
diag_cg2d.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DIAG_OPTIONS.h
diag_cg2d.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
diag_cg2d.f: /usr/include/stdc-predef.h
diagnostics_addtolist.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_addtolist.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_addtolist.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
diagnostics_addtolist.f: /usr/include/stdc-predef.h
diagnostics_calc_phivel.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_calc_phivel.f: DIAGNOSTICS_CALC.h DIAGNOSTICS.h DIAGNOSTICS_SIZE.h
diagnostics_calc_phivel.f: DIAG_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
diagnostics_calc_phivel.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
diagnostics_calc_phivel.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
diagnostics_calc_phivel.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
diagnostics_calc_phivel.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
diagnostics_calc_phivel.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
diagnostics_calc_phivel.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
diagnostics_calc_phivel.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
diagnostics_calc_phivel.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
diagnostics_calc_phivel.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
diagnostics_calc_phivel.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
diagnostics_calc_phivel.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
diagnostics_calc_phivel.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
diagnostics_calc_phivel.f: XC_MACROS.h YC_MACROS.h
diagnostics_check.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_check.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_check.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
diagnostics_check.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
diagnostics_check.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
diagnostics_check.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
diagnostics_check.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
diagnostics_check.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
diagnostics_check.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
diagnostics_check.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
diagnostics_check.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
diagnostics_check.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
diagnostics_check.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
diagnostics_check.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
diagnostics_clear.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_clear.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_clear.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
diagnostics_clear.f: /usr/include/stdc-predef.h
diagnostics_fill.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DIAGNOSTICS.h
diagnostics_fill.f: DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h EEPARAMS.h
diagnostics_fill_field.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_fill_field.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_fill_field.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
diagnostics_fill_field.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
diagnostics_fill_field.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
diagnostics_fill_field.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
diagnostics_fill_field.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
diagnostics_fill_field.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
diagnostics_fill_field.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
diagnostics_fill_field.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
diagnostics_fill_field.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
diagnostics_fill_field.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
diagnostics_fill_field.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
diagnostics_fill_field.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
diagnostics_fill_field.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
diagnostics_fill_field.f: XC_MACROS.h YC_MACROS.h
diagnostics_fill.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
diagnostics_fill_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_fill_rs.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_fill_rs.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
diagnostics_fill_rs.f: /usr/include/stdc-predef.h
diagnostics_fill_state.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_fill_state.f: DIAG_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
diagnostics_fill_state.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
diagnostics_fill_state.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
diagnostics_fill_state.f: FCORI_MACROS.h GAD.h GRID.h GRID_MACROS.h
diagnostics_fill_state.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
diagnostics_fill_state.f: MASKS_MACROS.h MASKW_MACROS.h NH_VARS.h
diagnostics_fill_state.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
diagnostics_fill_state.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
diagnostics_fill_state.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
diagnostics_fill_state.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
diagnostics_fill_state.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
diagnostics_fill_state.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
diagnostics_fill_state.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
diagnostics_fill_state.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
diagnostics_fill_state.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
diagnostics_fract_fill.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_fract_fill.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_fract_fill.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
diagnostics_fract_fill.f: /usr/include/stdc-predef.h
diagnostics_ini_io.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_ini_io.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_ini_io.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagnostics_ini_io.f: /usr/include/stdc-predef.h
diagnostics_init_early.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_init_early.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_init_early.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagnostics_init_early.f: /usr/include/stdc-predef.h
diagnostics_init_fixed.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_init_fixed.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_init_fixed.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
diagnostics_init_fixed.f: /usr/include/stdc-predef.h
diagnostics_init_varia.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_init_varia.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_init_varia.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagnostics_init_varia.f: /usr/include/stdc-predef.h
diagnostics_interp_p2p.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_interp_p2p.f: DIAG_OPTIONS.h PACKAGES_CONFIG.h
diagnostics_interp_p2p.f: /usr/include/stdc-predef.h
diagnostics_interp_vert.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_interp_vert.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_interp_vert.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
diagnostics_interp_vert.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
diagnostics_interp_vert.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
diagnostics_interp_vert.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
diagnostics_interp_vert.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
diagnostics_interp_vert.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
diagnostics_interp_vert.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
diagnostics_interp_vert.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
diagnostics_interp_vert.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
diagnostics_interp_vert.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
diagnostics_interp_vert.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
diagnostics_interp_vert.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
diagnostics_interp_vert.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
diagnostics_interp_vert.f: XC_MACROS.h YC_MACROS.h
diagnostics_is_on.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_is_on.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_is_on.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
diagnostics_is_on.f: /usr/include/stdc-predef.h
diagnostics_list_check.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_list_check.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_list_check.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagnostics_list_check.f: /usr/include/stdc-predef.h
diagnostics_main_init.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_main_init.f: DIAG_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
diagnostics_main_init.f: SIZE.h /usr/include/stdc-predef.h
diagnostics_mnc_out.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_mnc_out.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_mnc_out.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
diagnostics_mnc_out.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
diagnostics_mnc_out.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
diagnostics_mnc_out.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
diagnostics_mnc_out.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
diagnostics_mnc_out.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
diagnostics_mnc_out.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
diagnostics_mnc_out.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
diagnostics_mnc_out.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
diagnostics_mnc_out.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
diagnostics_mnc_out.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
diagnostics_mnc_out.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
diagnostics_mnc_out.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
diagnostics_mnc_out.f: XC_MACROS.h YC_MACROS.h
diagnostics_out.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DIAGNOSTICS.h
diagnostics_out.f: DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
diagnostics_out.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
diagnostics_out.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
diagnostics_out.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
diagnostics_out.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
diagnostics_out.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
diagnostics_out.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
diagnostics_out.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
diagnostics_out.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
diagnostics_out.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
diagnostics_out.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
diagnostics_out.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
diagnostics_readparms.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_readparms.f: DIAGNOSTICS_CALC.h DIAGNOSTICS.h DIAGNOSTICS_SIZE.h
diagnostics_readparms.f: DIAG_OPTIONS.h DIAGSTATS_REGIONS.h EEPARAMS.h
diagnostics_readparms.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagnostics_readparms.f: /usr/include/stdc-predef.h
diagnostics_read_pickup.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_read_pickup.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_read_pickup.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagnostics_read_pickup.f: /usr/include/stdc-predef.h
diagnostics_scale_fill.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_scale_fill.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_scale_fill.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
diagnostics_scale_fill.f: /usr/include/stdc-predef.h
diagnostics_scale_fill_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_scale_fill_rs.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_scale_fill_rs.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
diagnostics_scale_fill_rs.f: /usr/include/stdc-predef.h
diagnostics_set_calc.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_set_calc.f: DIAGNOSTICS_CALC.h DIAG_OPTIONS.h DXC_MACROS.h
diagnostics_set_calc.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
diagnostics_set_calc.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
diagnostics_set_calc.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
diagnostics_set_calc.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
diagnostics_set_calc.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
diagnostics_set_calc.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
diagnostics_set_calc.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
diagnostics_set_calc.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
diagnostics_set_calc.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
diagnostics_set_calc.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
diagnostics_set_calc.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
diagnostics_set_calc.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
diagnostics_set_calc.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
diagnostics_setdiag.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_setdiag.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_setdiag.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
diagnostics_setdiag.f: /usr/include/stdc-predef.h
diagnostics_set_levels.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_set_levels.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_set_levels.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagnostics_set_levels.f: /usr/include/stdc-predef.h
diagnostics_set_pointers.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_set_pointers.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_set_pointers.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
diagnostics_set_pointers.f: /usr/include/stdc-predef.h
diagnostics_status_error.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_status_error.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_status_error.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagnostics_status_error.f: /usr/include/stdc-predef.h
diagnostics_sum_levels.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_sum_levels.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_sum_levels.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
diagnostics_sum_levels.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
diagnostics_sum_levels.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
diagnostics_sum_levels.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
diagnostics_sum_levels.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
diagnostics_sum_levels.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
diagnostics_sum_levels.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
diagnostics_sum_levels.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
diagnostics_sum_levels.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
diagnostics_sum_levels.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
diagnostics_sum_levels.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
diagnostics_sum_levels.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
diagnostics_sum_levels.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
diagnostics_sum_levels.f: XC_MACROS.h YC_MACROS.h
diagnostics_summary.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_summary.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_summary.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagnostics_summary.f: /usr/include/stdc-predef.h
diagnostics_switch_onoff.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_switch_onoff.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_switch_onoff.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagnostics_switch_onoff.f: /usr/include/stdc-predef.h
diagnostics_utils.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_utils.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_utils.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagnostics_utils.f: /usr/include/stdc-predef.h
diagnostics_write_adj.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_write_adj.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_write_adj.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagnostics_write_adj.f: /usr/include/stdc-predef.h
diagnostics_write.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_write.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_write.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagnostics_write.f: /usr/include/stdc-predef.h
diagnostics_write_pickup.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagnostics_write_pickup.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagnostics_write_pickup.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagnostics_write_pickup.f: /usr/include/stdc-predef.h
diags_oceanic_surf_flux.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diags_oceanic_surf_flux.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
diags_oceanic_surf_flux.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h
diags_oceanic_surf_flux.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h FFIELDS.h
diags_oceanic_surf_flux.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
diags_oceanic_surf_flux.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
diags_oceanic_surf_flux.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
diags_oceanic_surf_flux.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
diags_oceanic_surf_flux.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
diags_oceanic_surf_flux.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
diags_oceanic_surf_flux.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
diags_oceanic_surf_flux.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
diags_oceanic_surf_flux.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
diags_oceanic_surf_flux.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
diags_oceanic_surf_flux.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
diags_phi_hyd.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
diags_phi_hyd.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
diags_phi_hyd.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
diags_phi_hyd.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
diags_phi_hyd.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
diags_phi_hyd.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
diags_phi_hyd.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
diags_phi_hyd.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
diags_phi_hyd.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
diags_phi_hyd.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
diags_phi_hyd.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
diags_phi_hyd.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
diags_phi_hyd.f: YC_MACROS.h
diags_phi_rlow.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
diags_phi_rlow.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
diags_phi_rlow.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
diags_phi_rlow.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
diags_phi_rlow.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
diags_phi_rlow.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
diags_phi_rlow.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
diags_phi_rlow.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
diags_phi_rlow.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
diags_phi_rlow.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
diags_phi_rlow.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
diags_phi_rlow.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
diags_rho.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
diags_rho.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
diags_rho.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
diags_rho.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
diags_rho.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
diags_rho.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
diags_rho.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
diags_rho.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
diags_rho.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
diags_rho.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
diags_rho.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
diags_sound_speed.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
diags_sound_speed.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
diags_sound_speed.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h
diags_sound_speed.f: EEPARAMS.h EOS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
diags_sound_speed.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
diags_sound_speed.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
diags_sound_speed.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
diags_sound_speed.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
diags_sound_speed.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
diags_sound_speed.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
diags_sound_speed.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
diags_sound_speed.f: SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
diags_sound_speed.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
diagstats_ascii_out.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagstats_ascii_out.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagstats_ascii_out.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
diagstats_ascii_out.f: /usr/include/stdc-predef.h
diagstats_calc.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DIAG_OPTIONS.h
diagstats_calc.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
diagstats_calc.f: /usr/include/stdc-predef.h
diagstats_clear.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DIAGNOSTICS.h
diagstats_clear.f: DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h EEPARAMS.h
diagstats_clear.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
diagstats_close_io.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagstats_close_io.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagstats_close_io.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagstats_close_io.f: /usr/include/stdc-predef.h
diagstats_fill.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DIAGNOSTICS.h
diagstats_fill.f: DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h EEPARAMS.h
diagstats_fill.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
diagstats_global.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DIAGNOSTICS.h
diagstats_global.f: DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h EEPARAMS.h
diagstats_global.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
diagstats_ini_io.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DIAGNOSTICS.h
diagstats_ini_io.f: DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h EEPARAMS.h
diagstats_ini_io.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagstats_ini_io.f: /usr/include/stdc-predef.h
diagstats_local.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagstats_local.f: DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h DIAGSTATS_REGIONS.h
diagstats_local.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
diagstats_local.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
diagstats_local.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
diagstats_local.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
diagstats_local.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
diagstats_local.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
diagstats_local.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
diagstats_local.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
diagstats_local.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
diagstats_local.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
diagstats_local.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
diagstats_local.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
diagstats_mnc_out.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagstats_mnc_out.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagstats_mnc_out.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
diagstats_mnc_out.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
diagstats_mnc_out.f: EEPARAMS.h EESUPPORT.h FCORI_MACROS.h GRID.h
diagstats_mnc_out.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
diagstats_mnc_out.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
diagstats_mnc_out.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
diagstats_mnc_out.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
diagstats_mnc_out.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
diagstats_mnc_out.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
diagstats_mnc_out.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
diagstats_mnc_out.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
diagstats_mnc_out.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
diagstats_mnc_out.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
diagstats_mnc_out.f: YC_MACROS.h
diagstats_others_calc.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagstats_others_calc.f: DIAG_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
diagstats_others_calc.f: /usr/include/stdc-predef.h
diagstats_output.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DIAGNOSTICS.h
diagstats_output.f: DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h DXC_MACROS.h
diagstats_output.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
diagstats_output.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
diagstats_output.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
diagstats_output.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
diagstats_output.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
diagstats_output.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
diagstats_output.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
diagstats_output.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
diagstats_output.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
diagstats_output.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
diagstats_output.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
diagstats_output.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
diagstats_setdiag.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagstats_setdiag.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagstats_setdiag.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
diagstats_setdiag.f: /usr/include/stdc-predef.h
diagstats_set_pointers.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagstats_set_pointers.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diagstats_set_pointers.f: DIAGSTATS_REGIONS.h EEPARAMS.h PACKAGES_CONFIG.h
diagstats_set_pointers.f: SIZE.h /usr/include/stdc-predef.h
diagstats_set_regions.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diagstats_set_regions.f: DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h DIAGSTATS_REGIONS.h
diagstats_set_regions.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
diagstats_set_regions.f: /usr/include/stdc-predef.h
diag_vegtile_fill.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
diag_vegtile_fill.f: DIAGNOSTICS.h DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h
diag_vegtile_fill.f: EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
diag_vegtile_fill.f: /usr/include/stdc-predef.h
dic_biotic_forcing.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
dic_biotic_forcing.f: DIC_OPTIONS.h DIC_VARS.h DXC_MACROS.h DXF_MACROS.h
dic_biotic_forcing.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
dic_biotic_forcing.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
dic_biotic_forcing.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
dic_biotic_forcing.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
dic_biotic_forcing.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
dic_biotic_forcing.f: PTRACERS_PARAMS.h PTRACERS_SIZE.h RA_MACROS.h
dic_biotic_forcing.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
dic_biotic_forcing.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
dic_biotic_forcing.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
dic_biotic_forcing.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
dic_biotic_forcing.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
dic_biotic_forcing.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
dic_biotic_forcing.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
different_multiple.f: CPP_EEMACROS.h CPP_EEOPTIONS.h
different_multiple.f: /usr/include/stdc-predef.h
diff_phase_multiple.f: CPP_EEMACROS.h CPP_EEOPTIONS.h
diff_phase_multiple.f: /usr/include/stdc-predef.h
do_atmospheric_phys.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
do_atmospheric_phys.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
do_atmospheric_phys.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
do_atmospheric_phys.f: DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
do_atmospheric_phys.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
do_atmospheric_phys.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
do_atmospheric_phys.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
do_atmospheric_phys.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
do_atmospheric_phys.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
do_atmospheric_phys.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
do_atmospheric_phys.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
do_atmospheric_phys.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
do_atmospheric_phys.f: RECIP_HFACW_MACROS.h SIZE.h tamc.h TANPHIATU_MACROS.h
do_atmospheric_phys.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
do_atmospheric_phys.f: XC_MACROS.h YC_MACROS.h
do_fields_blocking_exchanges.f: CD_CODE_VARS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
do_fields_blocking_exchanges.f: CPP_OPTIONS.h DYNVARS.h EEPARAMS.h GAD.h
do_fields_blocking_exchanges.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
do_fields_blocking_exchanges.f: /usr/include/stdc-predef.h
do_oceanic_phys.f: AUTODIFF_MYFIELDS.h AUTODIFF_OPTIONS.h CPP_EEMACROS.h
do_oceanic_phys.f: CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h DXC_MACROS.h
do_oceanic_phys.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
do_oceanic_phys.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h
do_oceanic_phys.f: ECCO_OPTIONS.h EEPARAMS.h EOS.h FCORI_MACROS.h FFIELDS.h
do_oceanic_phys.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
do_oceanic_phys.f: HFACW_MACROS.h KPP.h KPP_OPTIONS.h MASKS_MACROS.h
do_oceanic_phys.f: MASKW_MACROS.h MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h
do_oceanic_phys.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
do_oceanic_phys.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
do_oceanic_phys.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
do_oceanic_phys.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
do_oceanic_phys.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
do_oceanic_phys.f: tamc.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
do_oceanic_phys.f: TIMEAVE_OPTIONS.h TIMEAVE_STATV.h
do_oceanic_phys.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
do_stagger_fields_exchanges.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
do_stagger_fields_exchanges.f: DYNVARS.h EEPARAMS.h PARAMS.h SIZE.h
do_stagger_fields_exchanges.f: /usr/include/stdc-predef.h
do_statevars_diags.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
do_statevars_diags.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
do_statevars_diags.f: /usr/include/stdc-predef.h
do_statevars_tave.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
do_statevars_tave.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
do_statevars_tave.f: /usr/include/stdc-predef.h
do_the_model_io.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DYNVARS.h
do_the_model_io.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
do_the_model_io.f: /usr/include/stdc-predef.h
do_write_pickup.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
do_write_pickup.f: PACKAGES_CONFIG.h PARAMS.h RESTART.h SIZE.h
do_write_pickup.f: /usr/include/stdc-predef.h
dummy_for_etan.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
dummy_for_etan.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
dummy_for_etan.f: /usr/include/stdc-predef.h
dummy_in_dynamics.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
dummy_in_dynamics.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
dummy_in_dynamics.f: SIZE.h /usr/include/stdc-predef.h
dummy_in_stepping.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
dummy_in_stepping.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
dummy_in_stepping.f: SIZE.h /usr/include/stdc-predef.h
dump_adj_xy.f: AD_CONFIG.h AUTODIFF_OPTIONS.h AUTODIFF_PARAMS.h CPP_EEMACROS.h
dump_adj_xy.f: CPP_EEOPTIONS.h CPP_OPTIONS.h DIAGNOSTICS.h DIAGNOSTICS_SIZE.h
dump_adj_xy.f: DIAG_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
dump_adj_xy.f: /usr/include/stdc-predef.h
dump_adj_xy_uv.f: AD_CONFIG.h AUTODIFF_OPTIONS.h AUTODIFF_PARAMS.h
dump_adj_xy_uv.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DIAGNOSTICS.h
dump_adj_xy_uv.f: DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h EEPARAMS.h
dump_adj_xy_uv.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h /usr/include/stdc-predef.h
dump_adj_xyz.f: AD_CONFIG.h AUTODIFF_OPTIONS.h AUTODIFF_PARAMS.h
dump_adj_xyz.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DIAGNOSTICS.h
dump_adj_xyz.f: DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
dump_adj_xyz.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
dump_adj_xyz_uv.f: AD_CONFIG.h AUTODIFF_OPTIONS.h AUTODIFF_PARAMS.h
dump_adj_xyz_uv.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DIAGNOSTICS.h
dump_adj_xyz_uv.f: DIAGNOSTICS_SIZE.h DIAG_OPTIONS.h EEPARAMS.h
dump_adj_xyz_uv.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
dump_adj_xyz_uv.f: /usr/include/stdc-predef.h
dynamics.f: AUTODIFF_OPTIONS.h CD_CODE_VARS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
dynamics.f: CPP_OPTIONS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
dynamics.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
dynamics.f: DYNVARS.h DYU_MACROS.h EEPARAMS.h EOS.h FCORI_MACROS.h FFIELDS.h
dynamics.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
dynamics.f: KPP.h MASKS_MACROS.h MASKW_MACROS.h MOM_COMMON_OPTIONS.h
dynamics.f: MOM_FLUXFORM.h MOM_VISC.h PACKAGES_CONFIG.h PARAMS.h
dynamics.f: PTRACERS_FIELDS.h PTRACERS_SIZE.h RA_MACROS.h RAS_MACROS.h
dynamics.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
dynamics.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
dynamics.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
dynamics.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
dynamics.f: SIZE.h tamc.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
dynamics.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ecco_check.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ecco_check.f: CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
ecco_check.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h
ecco_check.f: DYU_MACROS.h ecco_cost.h ECCO.h ECCO_OPTIONS.h ECCO_SIZE.h
ecco_check.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ecco_check.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
ecco_check.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
ecco_check.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
ecco_check.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ecco_check.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ecco_check.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ecco_check.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h /usr/include/stdc-predef.h
ecco_check.f: XC_MACROS.h YC_MACROS.h
ecco_cost_driver.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ecco_cost_driver.f: ECCO_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
ecco_cost_driver.f: SIZE.h /usr/include/stdc-predef.h
ecco_cost_final.f: cost.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ecco_cost_final.f: CTRL_GENARR.h ctrl.h CTRL_OPTIONS.h CTRL_SIZE.h ECCO.h
ecco_cost_final.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h optim.h
ecco_cost_final.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
ecco_cost_final.f: /usr/include/stdc-predef.h
ecco_cost_init_barfiles.f: AD_CONFIG.h CPP_EEMACROS.h CPP_EEOPTIONS.h
ecco_cost_init_barfiles.f: CPP_OPTIONS.h ctrl_dummy.h ctrl.h CTRL_OPTIONS.h
ecco_cost_init_barfiles.f: CTRL_SIZE.h ECCO.h ECCO_OPTIONS.h ECCO_SIZE.h
ecco_cost_init_barfiles.f: EEPARAMS.h optim.h PACKAGES_CONFIG.h PARAMS.h
ecco_cost_init_barfiles.f: SIZE.h /usr/include/stdc-predef.h
ecco_cost_init_fixed.f: AD_CONFIG.h cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h
ecco_cost_init_fixed.f: CPP_OPTIONS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
ecco_cost_init_fixed.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ecco_cost_init_fixed.f: DYG_MACROS.h DYU_MACROS.h ECCO.h ECCO_OPTIONS.h
ecco_cost_init_fixed.f: ECCO_SIZE.h EEPARAMS.h FCORI_MACROS.h GRID.h
ecco_cost_init_fixed.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
ecco_cost_init_fixed.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h optim.h
ecco_cost_init_fixed.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ecco_cost_init_fixed.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ecco_cost_init_fixed.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ecco_cost_init_fixed.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ecco_cost_init_fixed.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ecco_cost_init_fixed.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ecco_cost_init_fixed.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ecco_cost_init_fixed.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
ecco_cost_init_fixed.f: XC_MACROS.h YC_MACROS.h
ecco_cost_init_varia.f: AD_CONFIG.h cost.h CPP_EEMACROS.h CPP_EEOPTIONS.h
ecco_cost_init_varia.f: CPP_OPTIONS.h CTRL_OBCS.h CTRL_OPTIONS.h DXC_MACROS.h
ecco_cost_init_varia.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
ecco_cost_init_varia.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h ECCO.h
ecco_cost_init_varia.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h FCORI_MACROS.h
ecco_cost_init_varia.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
ecco_cost_init_varia.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
ecco_cost_init_varia.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h
ecco_cost_init_varia.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ecco_cost_init_varia.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ecco_cost_init_varia.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ecco_cost_init_varia.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ecco_cost_init_varia.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ecco_cost_init_varia.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ecco_cost_init_varia.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
ecco_cost_init_varia.f: XC_MACROS.h YC_MACROS.h
ecco_cost_weights.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OBCS.h
ecco_cost_weights.f: CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
ecco_cost_weights.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
ecco_cost_weights.f: DYU_MACROS.h ECCO.h ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h
ecco_cost_weights.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ecco_cost_weights.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
ecco_cost_weights.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
ecco_cost_weights.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ecco_cost_weights.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ecco_cost_weights.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ecco_cost_weights.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ecco_cost_weights.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ecco_cost_weights.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ecco_cost_weights.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ecco_diagnostics_init.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ecco_diagnostics_init.f: ECCO_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
ecco_diagnostics_init.f: SIZE.h /usr/include/stdc-predef.h
ecco_init_fixed.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ECCO_OPTIONS.h
ecco_init_fixed.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
ecco_init_fixed.f: /usr/include/stdc-predef.h
ecco_init_varia.f: cost.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ecco_init_varia.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
ecco_init_varia.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h ECCO.h
ecco_init_varia.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h FCORI_MACROS.h GRID.h
ecco_init_varia.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ecco_init_varia.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ecco_init_varia.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ecco_init_varia.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ecco_init_varia.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ecco_init_varia.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ecco_init_varia.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ecco_init_varia.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ecco_init_varia.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ecco_phys.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ecco_phys.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ecco_phys.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h ECCO.h ECCO_OPTIONS.h
ecco_phys.f: ECCO_SIZE.h EEPARAMS.h FCORI_MACROS.h FFIELDS.h GRID.h
ecco_phys.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ecco_phys.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ecco_phys.f: PTRACERS_FIELDS.h PTRACERS_SIZE.h RA_MACROS.h RAS_MACROS.h
ecco_phys.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ecco_phys.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ecco_phys.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ecco_phys.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
ecco_phys.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ecco_phys.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ecco_readparms.f: cal.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ecco_readparms.f: CTRL_OBCS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
ecco_readparms.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ecco_readparms.f: DYG_MACROS.h DYU_MACROS.h ECCO.h ecco_local_params.h
ecco_readparms.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h FCORI_MACROS.h GRID.h
ecco_readparms.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ecco_readparms.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ecco_readparms.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ecco_readparms.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ecco_readparms.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ecco_readparms.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ecco_readparms.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ecco_readparms.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ecco_readparms.f: YC_MACROS.h
ecco_read_pickup.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ECCO.h
ecco_read_pickup.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h PACKAGES_CONFIG.h
ecco_read_pickup.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
ecco_summary.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ECCO.h
ecco_summary.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
ecco_summary.f: /usr/include/stdc-predef.h
ecco_toolbox.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h
ecco_toolbox.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
ecco_toolbox.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h ECCO.h
ecco_toolbox.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h FCORI_MACROS.h GRID.h
ecco_toolbox.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ecco_toolbox.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ecco_toolbox.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ecco_toolbox.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ecco_toolbox.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ecco_toolbox.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ecco_toolbox.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ecco_toolbox.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ecco_toolbox.f: YC_MACROS.h
ecco_write_pickup.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ECCO.h
ecco_write_pickup.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h PACKAGES_CONFIG.h
ecco_write_pickup.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
eeboot.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
eeboot.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
eeboot.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
eeboot_minimal.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
eeboot_minimal.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
eeboot_minimal.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
eedata_example.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
eedata_example.f: /usr/include/stdc-predef.h
eedie.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
eedie.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h SIZE.h
eedie.f: /usr/include/stdc-predef.h
eeintro_msg.f: BUILD_INFO.h CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
eeintro_msg.f: EESUPPORT.h
eeintro_msg.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
eeintro_msg.f: SIZE.h /usr/include/stdc-predef.h
eeset_parms.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h EXCH.h
eeset_parms.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
eeset_parms.f: SIZE.h /usr/include/stdc-predef.h
eewrite_eeenv.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
eewrite_eeenv.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
eewrite_eeenv.f: SIZE.h /usr/include/stdc-predef.h
exch0_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch0_r4.f: /usr/include/stdc-predef.h
exch0_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch0_r8.f: /usr/include/stdc-predef.h
exch0_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch0_rl.f: /usr/include/stdc-predef.h
exch0_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch0_rs.f: /usr/include/stdc-predef.h
exch1_bg_r4_cube.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_bg_r4_cube.f: /usr/include/stdc-predef.h
exch1_bg_r8_cube.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_bg_r8_cube.f: /usr/include/stdc-predef.h
exch1_bg_rl_cube.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_bg_rl_cube.f: /usr/include/stdc-predef.h
exch1_bg_rs_cube.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_bg_rs_cube.f: /usr/include/stdc-predef.h
exch1_r4_cube.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_r4_cube.f: /usr/include/stdc-predef.h
exch1_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EXCH.h SIZE.h
exch1_r4.f: /usr/include/stdc-predef.h
exch1_r8_cube.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_r8_cube.f: /usr/include/stdc-predef.h
exch1_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EXCH.h SIZE.h
exch1_r8.f: /usr/include/stdc-predef.h
exch1_rl_ad.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EXCH.h SIZE.h
exch1_rl_ad.f: /usr/include/stdc-predef.h
exch1_rl_cube_ad.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_rl_cube_ad.f: /usr/include/stdc-predef.h
exch1_rl_cube.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_rl_cube.f: /usr/include/stdc-predef.h
exch1_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EXCH.h SIZE.h
exch1_rl.f: /usr/include/stdc-predef.h
exch1_rs_ad.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EXCH.h SIZE.h
exch1_rs_ad.f: /usr/include/stdc-predef.h
exch1_rs_cube_ad.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_rs_cube_ad.f: /usr/include/stdc-predef.h
exch1_rs_cube.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_rs_cube.f: /usr/include/stdc-predef.h
exch1_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EXCH.h SIZE.h
exch1_rs.f: /usr/include/stdc-predef.h
exch1_uv_r4_cube.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_uv_r4_cube.f: /usr/include/stdc-predef.h
exch1_uv_r8_cube.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_uv_r8_cube.f: /usr/include/stdc-predef.h
exch1_uv_rl_cube.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_uv_rl_cube.f: /usr/include/stdc-predef.h
exch1_uv_rs_cube.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_uv_rs_cube.f: /usr/include/stdc-predef.h
exch1_z_r4_cube.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_z_r4_cube.f: /usr/include/stdc-predef.h
exch1_z_r8_cube.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_z_r8_cube.f: /usr/include/stdc-predef.h
exch1_z_rl_cube.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_z_rl_cube.f: /usr/include/stdc-predef.h
exch1_z_rs_cube.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
exch1_z_rs_cube.f: /usr/include/stdc-predef.h
exch_3d_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_3d_r4.f: SIZE.h /usr/include/stdc-predef.h
exch_3d_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_3d_r8.f: SIZE.h /usr/include/stdc-predef.h
exch_3d_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_3d_rl.f: SIZE.h /usr/include/stdc-predef.h
exch_3d_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_3d_rs.f: SIZE.h /usr/include/stdc-predef.h
exch_cycle_ebl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h EXCH.h
exch_cycle_ebl.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_cycle_ebl.f: SIZE.h /usr/include/stdc-predef.h
exch_init.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h EXCH.h
exch_init.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_init.f: SIZE.h /usr/include/stdc-predef.h
exch_r4_recv_get_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
exch_r4_recv_get_x.f: EXCH.h
exch_r4_recv_get_x.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_r4_recv_get_x.f: SIZE.h /usr/include/stdc-predef.h
exch_r4_recv_get_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
exch_r4_recv_get_y.f: EXCH.h
exch_r4_recv_get_y.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_r4_recv_get_y.f: SIZE.h /usr/include/stdc-predef.h
exch_r4_send_put_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
exch_r4_send_put_x.f: EXCH.h
exch_r4_send_put_x.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_r4_send_put_x.f: SIZE.h /usr/include/stdc-predef.h
exch_r4_send_put_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
exch_r4_send_put_y.f: EXCH.h
exch_r4_send_put_y.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_r4_send_put_y.f: SIZE.h /usr/include/stdc-predef.h
exch_r8_recv_get_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
exch_r8_recv_get_x.f: EXCH.h
exch_r8_recv_get_x.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_r8_recv_get_x.f: SIZE.h /usr/include/stdc-predef.h
exch_r8_recv_get_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
exch_r8_recv_get_y.f: EXCH.h
exch_r8_recv_get_y.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_r8_recv_get_y.f: SIZE.h /usr/include/stdc-predef.h
exch_r8_send_put_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
exch_r8_send_put_x.f: EXCH.h
exch_r8_send_put_x.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_r8_send_put_x.f: SIZE.h /usr/include/stdc-predef.h
exch_r8_send_put_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
exch_r8_send_put_y.f: EXCH.h
exch_r8_send_put_y.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_r8_send_put_y.f: SIZE.h /usr/include/stdc-predef.h
exch_rl_recv_get_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
exch_rl_recv_get_x.f: EXCH.h
exch_rl_recv_get_x.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_rl_recv_get_x.f: SIZE.h /usr/include/stdc-predef.h
exch_rl_recv_get_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
exch_rl_recv_get_y.f: EXCH.h
exch_rl_recv_get_y.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_rl_recv_get_y.f: SIZE.h /usr/include/stdc-predef.h
exch_rl_send_put_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
exch_rl_send_put_x.f: EXCH.h
exch_rl_send_put_x.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_rl_send_put_x.f: SIZE.h /usr/include/stdc-predef.h
exch_rl_send_put_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
exch_rl_send_put_y.f: EXCH.h
exch_rl_send_put_y.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_rl_send_put_y.f: SIZE.h /usr/include/stdc-predef.h
exch_rs_recv_get_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
exch_rs_recv_get_x.f: EXCH.h
exch_rs_recv_get_x.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_rs_recv_get_x.f: SIZE.h /usr/include/stdc-predef.h
exch_rs_recv_get_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
exch_rs_recv_get_y.f: EXCH.h
exch_rs_recv_get_y.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_rs_recv_get_y.f: SIZE.h /usr/include/stdc-predef.h
exch_rs_send_put_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
exch_rs_send_put_x.f: EXCH.h
exch_rs_send_put_x.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_rs_send_put_x.f: SIZE.h /usr/include/stdc-predef.h
exch_rs_send_put_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
exch_rs_send_put_y.f: EXCH.h
exch_rs_send_put_y.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
exch_rs_send_put_y.f: SIZE.h /usr/include/stdc-predef.h
exch_s3d_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_s3d_r4.f: SIZE.h /usr/include/stdc-predef.h
exch_s3d_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_s3d_r8.f: SIZE.h /usr/include/stdc-predef.h
exch_s3d_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_s3d_rl.f: SIZE.h /usr/include/stdc-predef.h
exch_s3d_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_s3d_rs.f: SIZE.h /usr/include/stdc-predef.h
exch_sm_3d_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_sm_3d_r4.f: SIZE.h /usr/include/stdc-predef.h
exch_sm_3d_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_sm_3d_r8.f: SIZE.h /usr/include/stdc-predef.h
exch_sm_3d_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_sm_3d_rl.f: SIZE.h /usr/include/stdc-predef.h
exch_sm_3d_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_sm_3d_rs.f: SIZE.h /usr/include/stdc-predef.h
exch_tap_b.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EXCH.h
exch_tap_b.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
exch_tap_d.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EXCH.h
exch_tap_d.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
exch_uv_3d_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_uv_3d_r4.f: SIZE.h /usr/include/stdc-predef.h
exch_uv_3d_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_uv_3d_r8.f: SIZE.h /usr/include/stdc-predef.h
exch_uv_3d_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_uv_3d_rl.f: SIZE.h /usr/include/stdc-predef.h
exch_uv_3d_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_uv_3d_rs.f: SIZE.h /usr/include/stdc-predef.h
exch_uv_agrid_3d_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
exch_uv_agrid_3d_r4.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
exch_uv_agrid_3d_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
exch_uv_agrid_3d_r8.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
exch_uv_agrid_3d_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
exch_uv_agrid_3d_rl.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
exch_uv_agrid_3d_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
exch_uv_agrid_3d_rs.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
exch_uv_bgrid_3d_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
exch_uv_bgrid_3d_r4.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
exch_uv_bgrid_3d_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
exch_uv_bgrid_3d_r8.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
exch_uv_bgrid_3d_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
exch_uv_bgrid_3d_rl.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
exch_uv_bgrid_3d_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
exch_uv_bgrid_3d_rs.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
exch_uv_dgrid_3d_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
exch_uv_dgrid_3d_r4.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
exch_uv_dgrid_3d_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
exch_uv_dgrid_3d_r8.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
exch_uv_dgrid_3d_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
exch_uv_dgrid_3d_rl.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
exch_uv_dgrid_3d_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
exch_uv_dgrid_3d_rs.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
exch_uv_xy_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_uv_xy_r4.f: SIZE.h /usr/include/stdc-predef.h
exch_uv_xy_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_uv_xy_r8.f: SIZE.h /usr/include/stdc-predef.h
exch_uv_xy_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_uv_xy_rl.f: SIZE.h /usr/include/stdc-predef.h
exch_uv_xy_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_uv_xy_rs.f: SIZE.h /usr/include/stdc-predef.h
exch_uv_xyz_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_uv_xyz_r4.f: SIZE.h /usr/include/stdc-predef.h
exch_uv_xyz_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_uv_xyz_r8.f: SIZE.h /usr/include/stdc-predef.h
exch_uv_xyz_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_uv_xyz_rl.f: SIZE.h /usr/include/stdc-predef.h
exch_uv_xyz_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_uv_xyz_rs.f: SIZE.h /usr/include/stdc-predef.h
exch_xy_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_xy_r4.f: SIZE.h /usr/include/stdc-predef.h
exch_xy_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_xy_r8.f: SIZE.h /usr/include/stdc-predef.h
exch_xy_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_xy_rl.f: SIZE.h /usr/include/stdc-predef.h
exch_xy_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_xy_rs.f: SIZE.h /usr/include/stdc-predef.h
exch_xyz_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_xyz_r4.f: SIZE.h /usr/include/stdc-predef.h
exch_xyz_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_xyz_r8.f: SIZE.h /usr/include/stdc-predef.h
exch_xyz_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_xyz_rl.f: SIZE.h /usr/include/stdc-predef.h
exch_xyz_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_xyz_rs.f: SIZE.h /usr/include/stdc-predef.h
exch_z_3d_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_z_3d_r4.f: SIZE.h /usr/include/stdc-predef.h
exch_z_3d_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_z_3d_r8.f: SIZE.h /usr/include/stdc-predef.h
exch_z_3d_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_z_3d_rl.f: SIZE.h /usr/include/stdc-predef.h
exch_z_3d_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
exch_z_3d_rs.f: SIZE.h /usr/include/stdc-predef.h
external_fields_load.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
external_fields_load.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
external_fields_load.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h
external_fields_load.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h FFIELDS.h
external_fields_load.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
external_fields_load.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
external_fields_load.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
external_fields_load.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
external_fields_load.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
external_fields_load.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
external_fields_load.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
external_fields_load.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
external_fields_load.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
external_fields_load.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
external_fields_load.f: XC_MACROS.h YC_MACROS.h
external_forcing.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
external_forcing.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
external_forcing.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h
external_forcing.f: EEPARAMS.h FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h
external_forcing.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
external_forcing.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
external_forcing.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
external_forcing.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
external_forcing.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
external_forcing.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
external_forcing.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
external_forcing.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
external_forcing.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
external_forcing_surf.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
external_forcing_surf.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
external_forcing_surf.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
external_forcing_surf.f: DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
external_forcing_surf.f: FFIELDS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
external_forcing_surf.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
external_forcing_surf.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
external_forcing_surf.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
external_forcing_surf.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
external_forcing_surf.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
external_forcing_surf.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
external_forcing_surf.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
external_forcing_surf.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
external_forcing_surf.f: SURFACE.h tamc.h TANPHIATU_MACROS.h
external_forcing_surf.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
external_forcing_surf.f: XC_MACROS.h YC_MACROS.h
fill_cs_corner_ag_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
fill_cs_corner_ag_rl.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
fill_cs_corner_tr_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
fill_cs_corner_tr_rl.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
fill_cs_corner_uv_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
fill_cs_corner_uv_rl.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
fill_cs_corner_uv_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
fill_cs_corner_uv_rs.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
fill_in_corners_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
fill_in_corners_rl.f: /usr/include/stdc-predef.h
find_alpha.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
find_alpha.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
find_alpha.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h EOS.h
find_alpha.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
find_alpha.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
find_alpha.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
find_alpha.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
find_alpha.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
find_alpha.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
find_alpha.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
find_alpha.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h /usr/include/stdc-predef.h
find_alpha.f: XC_MACROS.h YC_MACROS.h
find_hyd_press_1d.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
find_hyd_press_1d.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
find_hyd_press_1d.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
find_hyd_press_1d.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
find_hyd_press_1d.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
find_hyd_press_1d.f: MASKW_MACROS.h PARAMS.h RA_MACROS.h RAS_MACROS.h
find_hyd_press_1d.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
find_hyd_press_1d.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
find_hyd_press_1d.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
find_hyd_press_1d.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
find_hyd_press_1d.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
find_hyd_press_1d.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
find_hyd_press_1d.f: YC_MACROS.h
find_rho.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h EOS.h
find_rho.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h /usr/include/stdc-predef.h
fool_the_compiler.f: CPP_EEMACROS.h CPP_EEOPTIONS.h /usr/include/stdc-predef.h
forcing_surf_relax.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
forcing_surf_relax.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
forcing_surf_relax.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h
forcing_surf_relax.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h FFIELDS.h GRID.h
forcing_surf_relax.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
forcing_surf_relax.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
forcing_surf_relax.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
forcing_surf_relax.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
forcing_surf_relax.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
forcing_surf_relax.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
forcing_surf_relax.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
forcing_surf_relax.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
forcing_surf_relax.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
forcing_surf_relax.f: XC_MACROS.h YC_MACROS.h
forward_step.f: AUTODIFF_MYFIELDS.h AUTODIFF_OPTIONS.h
forward_step.f: cd_code_ad_check_lev1_dir.h CD_CODE_VARS.h
forward_step.f: check_lev1_dir_forcing.h check_lev1_dir_ocephys.h
forward_step.f: checkpoint_lev1_directives.h checkpoint_lev1_template.h cost.h
forward_step.f: COST_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
forward_step.f: ctrl_ad_check_lev1_dir.h ctrl_dummy.h CTRL_GENARR.h ctrl.h
forward_step.f: CTRL_OBCS.h CTRL_OPTIONS.h CTRL_SIZE.h DYNVARS.h ecco_cost.h
forward_step.f: ECCO.h ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h EOS.h FFIELDS.h
forward_step.f: gad_ad_check_lev1_dir.h GAD.h GAD_OPTIONS.h GAD_SOM_VARS.h
forward_step.f: GCHEM_FIELDS.h GCHEM_OPTIONS.h GCHEM_SIZE.h KPP.h
forward_step.f: PACKAGES_CONFIG.h PARAMS.h ptracers_ad_check_lev1_dir.h
forward_step.f: PTRACERS_FIELDS.h PTRACERS_OPTIONS.h PTRACERS_SIZE.h SIGREG.h
forward_step.f: SIZE.h SURFACE.h tamc.h /usr/include/stdc-predef.h
freesurf_rescale_g.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
freesurf_rescale_g.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
freesurf_rescale_g.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
freesurf_rescale_g.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
freesurf_rescale_g.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
freesurf_rescale_g.f: MASKS_MACROS.h MASKW_MACROS.h PARAMS.h RA_MACROS.h
freesurf_rescale_g.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
freesurf_rescale_g.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
freesurf_rescale_g.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
freesurf_rescale_g.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
freesurf_rescale_g.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
freesurf_rescale_g.f: SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
freesurf_rescale_g.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
freeze_surface.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
freeze_surface.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
freeze_surface.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
freeze_surface.f: FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
freeze_surface.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
freeze_surface.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
freeze_surface.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
freeze_surface.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
freeze_surface.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
freeze_surface.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
freeze_surface.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
freeze_surface.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
freeze_surface.f: YC_MACROS.h
gad_advection.f: AUTODIFF_OPTIONS.h AUTODIFF_PARAMS.h CPP_EEMACROS.h
gad_advection.f: CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
gad_advection.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
gad_advection.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GAD.h
gad_advection.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_advection.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_advection.f: PACKAGES_CONFIG.h PARAMS.h PTRACERS_SIZE.h RA_MACROS.h
gad_advection.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gad_advection.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
gad_advection.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gad_advection.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gad_advection.f: RECIP_HFACW_MACROS.h SIZE.h tamc.h TANPHIATU_MACROS.h
gad_advection.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gad_advection.f: YC_MACROS.h
gad_advscheme.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h GAD.h
gad_advscheme.f: GAD_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
gad_advscheme.f: /usr/include/stdc-predef.h
gad_biharm_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_biharm_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_biharm_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
gad_biharm_r.f: FCORI_MACROS.h GAD_OPTIONS.h GRID.h GRID_MACROS.h
gad_biharm_r.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_biharm_r.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
gad_biharm_r.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gad_biharm_r.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
gad_biharm_r.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gad_biharm_r.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gad_biharm_r.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
gad_biharm_r.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gad_biharm_r.f: YC_MACROS.h
gad_biharm_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_biharm_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_biharm_x.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h
gad_biharm_x.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_biharm_x.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_biharm_x.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_biharm_x.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_biharm_x.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_biharm_x.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_biharm_x.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_biharm_x.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_biharm_x.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_biharm_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_biharm_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_biharm_y.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h
gad_biharm_y.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_biharm_y.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_biharm_y.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_biharm_y.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_biharm_y.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_biharm_y.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_biharm_y.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_biharm_y.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_biharm_y.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_c2_adv_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_c2_adv_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_c2_adv_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
gad_c2_adv_r.f: FCORI_MACROS.h GAD_OPTIONS.h GRID.h GRID_MACROS.h
gad_c2_adv_r.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_c2_adv_r.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
gad_c2_adv_r.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gad_c2_adv_r.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
gad_c2_adv_r.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gad_c2_adv_r.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gad_c2_adv_r.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
gad_c2_adv_r.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gad_c2_adv_r.f: YC_MACROS.h
gad_c2_adv_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_c2_adv_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_c2_adv_x.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h
gad_c2_adv_x.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_c2_adv_x.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_c2_adv_x.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_c2_adv_x.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_c2_adv_x.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_c2_adv_x.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_c2_adv_x.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_c2_adv_x.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_c2_adv_x.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_c2_adv_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_c2_adv_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_c2_adv_y.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h
gad_c2_adv_y.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_c2_adv_y.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_c2_adv_y.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_c2_adv_y.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_c2_adv_y.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_c2_adv_y.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_c2_adv_y.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_c2_adv_y.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_c2_adv_y.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_c2_impl_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_c2_impl_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_c2_impl_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
gad_c2_impl_r.f: FCORI_MACROS.h GAD_OPTIONS.h GRID.h GRID_MACROS.h
gad_c2_impl_r.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_c2_impl_r.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
gad_c2_impl_r.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gad_c2_impl_r.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
gad_c2_impl_r.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gad_c2_impl_r.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gad_c2_impl_r.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
gad_c2_impl_r.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gad_c2_impl_r.f: YC_MACROS.h
gad_c4_adv_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_c4_adv_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_c4_adv_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_c4_adv_r.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_c4_adv_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_c4_adv_r.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_c4_adv_r.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_c4_adv_r.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_c4_adv_r.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_c4_adv_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_c4_adv_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_c4_adv_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_c4_adv_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_c4_adv_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_c4_adv_x.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_c4_adv_x.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_c4_adv_x.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_c4_adv_x.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_c4_adv_x.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_c4_adv_x.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_c4_adv_x.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_c4_adv_x.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_c4_adv_x.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_c4_adv_x.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_c4_adv_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_c4_adv_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_c4_adv_y.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_c4_adv_y.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_c4_adv_y.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_c4_adv_y.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_c4_adv_y.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_c4_adv_y.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_c4_adv_y.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_c4_adv_y.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_c4_adv_y.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_c4_adv_y.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_calc_rhs.f: AUTODIFF_OPTIONS.h AUTODIFF_PARAMS.h CPP_EEMACROS.h
gad_calc_rhs.f: CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
gad_calc_rhs.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
gad_calc_rhs.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GAD.h
gad_calc_rhs.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_calc_rhs.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_calc_rhs.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
gad_calc_rhs.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
gad_calc_rhs.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gad_calc_rhs.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
gad_calc_rhs.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
gad_calc_rhs.f: SIZE.h SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_calc_rhs.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_check.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h GAD.h
gad_check.f: GAD_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
gad_check.f: /usr/include/stdc-predef.h
gad_del2.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_del2.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
gad_del2.f: DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD_OPTIONS.h GRID.h
gad_del2.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
gad_del2.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h
gad_del2.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
gad_del2.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gad_del2.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
gad_del2.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
gad_del2.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_del2.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_diagnostics_init.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
gad_diagnostics_init.f: EEPARAMS.h GAD.h GAD_OPTIONS.h PACKAGES_CONFIG.h
gad_diagnostics_init.f: PARAMS.h PTRACERS_PARAMS.h PTRACERS_SIZE.h SIZE.h
gad_diagnostics_init.f: /usr/include/stdc-predef.h
gad_diagnostics_state.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
gad_diagnostics_state.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
gad_diagnostics_state.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
gad_diagnostics_state.f: EEPARAMS.h FCORI_MACROS.h GAD.h GAD_OPTIONS.h
gad_diagnostics_state.f: GAD_SOM_VARS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_diagnostics_state.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_diagnostics_state.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
gad_diagnostics_state.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gad_diagnostics_state.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_diagnostics_state.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gad_diagnostics_state.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gad_diagnostics_state.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_diagnostics_state.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_diagnostics_state.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_diagnostics_state.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_diff_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_diff_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
gad_diff_r.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
gad_diff_r.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
gad_diff_r.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
gad_diff_r.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_diff_r.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_diff_r.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_diff_r.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_diff_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_diff_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h /usr/include/stdc-predef.h
gad_diff_r.f: XC_MACROS.h YC_MACROS.h
gad_diff_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_diff_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
gad_diff_x.f: DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD_OPTIONS.h GRID.h
gad_diff_x.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
gad_diff_x.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h
gad_diff_x.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
gad_diff_x.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gad_diff_x.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
gad_diff_x.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
gad_diff_x.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_diff_x.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_diff_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_diff_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
gad_diff_y.f: DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD_OPTIONS.h GRID.h
gad_diff_y.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
gad_diff_y.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h
gad_diff_y.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
gad_diff_y.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gad_diff_y.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
gad_diff_y.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
gad_diff_y.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_diff_y.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_dst2u1_adv_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_dst2u1_adv_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_dst2u1_adv_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h
gad_dst2u1_adv_r.f: GAD.h GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_dst2u1_adv_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_dst2u1_adv_r.f: MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h
gad_dst2u1_adv_r.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
gad_dst2u1_adv_r.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gad_dst2u1_adv_r.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
gad_dst2u1_adv_r.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gad_dst2u1_adv_r.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
gad_dst2u1_adv_r.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gad_dst2u1_adv_r.f: YC_MACROS.h
gad_dst2u1_adv_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_dst2u1_adv_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_dst2u1_adv_x.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h
gad_dst2u1_adv_x.f: GAD.h GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_dst2u1_adv_x.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_dst2u1_adv_x.f: MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h
gad_dst2u1_adv_x.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
gad_dst2u1_adv_x.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gad_dst2u1_adv_x.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
gad_dst2u1_adv_x.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gad_dst2u1_adv_x.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
gad_dst2u1_adv_x.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gad_dst2u1_adv_x.f: YC_MACROS.h
gad_dst2u1_adv_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_dst2u1_adv_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_dst2u1_adv_y.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h
gad_dst2u1_adv_y.f: GAD.h GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_dst2u1_adv_y.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_dst2u1_adv_y.f: MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h
gad_dst2u1_adv_y.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
gad_dst2u1_adv_y.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gad_dst2u1_adv_y.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
gad_dst2u1_adv_y.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gad_dst2u1_adv_y.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
gad_dst2u1_adv_y.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gad_dst2u1_adv_y.f: YC_MACROS.h
gad_dst2u1_impl_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_dst2u1_impl_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_dst2u1_impl_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
gad_dst2u1_impl_r.f: FCORI_MACROS.h GAD.h GAD_OPTIONS.h GRID.h GRID_MACROS.h
gad_dst2u1_impl_r.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
gad_dst2u1_impl_r.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
gad_dst2u1_impl_r.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gad_dst2u1_impl_r.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
gad_dst2u1_impl_r.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gad_dst2u1_impl_r.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_dst2u1_impl_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_dst2u1_impl_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_dst2u1_impl_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_dst3_adv_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_dst3_adv_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_dst3_adv_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_dst3_adv_r.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_dst3_adv_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_dst3_adv_r.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_dst3_adv_r.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_dst3_adv_r.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_dst3_adv_r.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_dst3_adv_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_dst3_adv_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_dst3_adv_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_dst3_adv_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_dst3_adv_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_dst3_adv_x.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_dst3_adv_x.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_dst3_adv_x.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_dst3_adv_x.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_dst3_adv_x.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_dst3_adv_x.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_dst3_adv_x.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_dst3_adv_x.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_dst3_adv_x.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_dst3_adv_x.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_dst3_adv_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_dst3_adv_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_dst3_adv_y.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_dst3_adv_y.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_dst3_adv_y.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_dst3_adv_y.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_dst3_adv_y.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_dst3_adv_y.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_dst3_adv_y.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_dst3_adv_y.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_dst3_adv_y.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_dst3_adv_y.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_dst3fl_adv_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_dst3fl_adv_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_dst3fl_adv_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h
gad_dst3fl_adv_r.f: GAD.h GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_dst3fl_adv_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_dst3fl_adv_r.f: MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h
gad_dst3fl_adv_r.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
gad_dst3fl_adv_r.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gad_dst3fl_adv_r.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
gad_dst3fl_adv_r.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gad_dst3fl_adv_r.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
gad_dst3fl_adv_r.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gad_dst3fl_adv_r.f: YC_MACROS.h
gad_dst3fl_adv_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_dst3fl_adv_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_dst3fl_adv_x.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h
gad_dst3fl_adv_x.f: GAD.h GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_dst3fl_adv_x.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_dst3fl_adv_x.f: MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h
gad_dst3fl_adv_x.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
gad_dst3fl_adv_x.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gad_dst3fl_adv_x.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
gad_dst3fl_adv_x.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gad_dst3fl_adv_x.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
gad_dst3fl_adv_x.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gad_dst3fl_adv_x.f: YC_MACROS.h
gad_dst3fl_adv_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_dst3fl_adv_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_dst3fl_adv_y.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h
gad_dst3fl_adv_y.f: GAD.h GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_dst3fl_adv_y.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_dst3fl_adv_y.f: MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h
gad_dst3fl_adv_y.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
gad_dst3fl_adv_y.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gad_dst3fl_adv_y.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
gad_dst3fl_adv_y.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gad_dst3fl_adv_y.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
gad_dst3fl_adv_y.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gad_dst3fl_adv_y.f: YC_MACROS.h
gad_dst3fl_impl_r.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
gad_dst3fl_impl_r.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
gad_dst3fl_impl_r.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
gad_dst3fl_impl_r.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GAD.h
gad_dst3fl_impl_r.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_dst3fl_impl_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_dst3fl_impl_r.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
gad_dst3fl_impl_r.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gad_dst3fl_impl_r.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
gad_dst3fl_impl_r.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gad_dst3fl_impl_r.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_dst3fl_impl_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_dst3fl_impl_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_dst3fl_impl_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_exch_som.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h GAD.h
gad_exch_som.f: GAD_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
gad_exch_som.f: /usr/include/stdc-predef.h
gad_fluxlimit_adv_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
gad_fluxlimit_adv_r.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
gad_fluxlimit_adv_r.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
gad_fluxlimit_adv_r.f: EEPARAMS.h FCORI_MACROS.h GAD_FLUX_LIMITER.h
gad_fluxlimit_adv_r.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_fluxlimit_adv_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_fluxlimit_adv_r.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
gad_fluxlimit_adv_r.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gad_fluxlimit_adv_r.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_fluxlimit_adv_r.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gad_fluxlimit_adv_r.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gad_fluxlimit_adv_r.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_fluxlimit_adv_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_fluxlimit_adv_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_fluxlimit_adv_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_fluxlimit_adv_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
gad_fluxlimit_adv_x.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
gad_fluxlimit_adv_x.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
gad_fluxlimit_adv_x.f: EEPARAMS.h FCORI_MACROS.h GAD_FLUX_LIMITER.h
gad_fluxlimit_adv_x.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_fluxlimit_adv_x.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_fluxlimit_adv_x.f: MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h
gad_fluxlimit_adv_x.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gad_fluxlimit_adv_x.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_fluxlimit_adv_x.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gad_fluxlimit_adv_x.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gad_fluxlimit_adv_x.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_fluxlimit_adv_x.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_fluxlimit_adv_x.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_fluxlimit_adv_x.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_fluxlimit_adv_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
gad_fluxlimit_adv_y.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
gad_fluxlimit_adv_y.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
gad_fluxlimit_adv_y.f: EEPARAMS.h FCORI_MACROS.h GAD_FLUX_LIMITER.h
gad_fluxlimit_adv_y.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_fluxlimit_adv_y.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_fluxlimit_adv_y.f: MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h
gad_fluxlimit_adv_y.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gad_fluxlimit_adv_y.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_fluxlimit_adv_y.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gad_fluxlimit_adv_y.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gad_fluxlimit_adv_y.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_fluxlimit_adv_y.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_fluxlimit_adv_y.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_fluxlimit_adv_y.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_fluxlimit_impl_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
gad_fluxlimit_impl_r.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
gad_fluxlimit_impl_r.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
gad_fluxlimit_impl_r.f: EEPARAMS.h FCORI_MACROS.h GAD_FLUX_LIMITER.h
gad_fluxlimit_impl_r.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_fluxlimit_impl_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_fluxlimit_impl_r.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
gad_fluxlimit_impl_r.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gad_fluxlimit_impl_r.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_fluxlimit_impl_r.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gad_fluxlimit_impl_r.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gad_fluxlimit_impl_r.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_fluxlimit_impl_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_fluxlimit_impl_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_fluxlimit_impl_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_grad_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_grad_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
gad_grad_x.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
gad_grad_x.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
gad_grad_x.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
gad_grad_x.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gad_grad_x.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
gad_grad_x.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gad_grad_x.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gad_grad_x.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
gad_grad_x.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gad_grad_x.f: YC_MACROS.h
gad_grad_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_grad_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
gad_grad_y.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
gad_grad_y.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
gad_grad_y.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
gad_grad_y.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gad_grad_y.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
gad_grad_y.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gad_grad_y.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gad_grad_y.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
gad_grad_y.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gad_grad_y.f: YC_MACROS.h
gad_implicit_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_implicit_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_implicit_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
gad_implicit_r.f: FCORI_MACROS.h GAD.h GAD_OPTIONS.h GRID.h GRID_MACROS.h
gad_implicit_r.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_implicit_r.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
gad_implicit_r.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gad_implicit_r.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
gad_implicit_r.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gad_implicit_r.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gad_implicit_r.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
gad_implicit_r.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gad_implicit_r.f: YC_MACROS.h
gad_init_fixed.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
gad_init_fixed.f: GAD.h GAD_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
gad_init_fixed.f: /usr/include/stdc-predef.h
gad_init_varia.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
gad_init_varia.f: GAD.h GAD_OPTIONS.h GAD_SOM_VARS.h PACKAGES_CONFIG.h
gad_init_varia.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
gad_os7mp_adv_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_os7mp_adv_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_os7mp_adv_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_os7mp_adv_r.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_os7mp_adv_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_os7mp_adv_r.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_os7mp_adv_r.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_os7mp_adv_r.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_os7mp_adv_r.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_os7mp_adv_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_os7mp_adv_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_os7mp_adv_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_os7mp_adv_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_os7mp_adv_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_os7mp_adv_x.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_os7mp_adv_x.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_os7mp_adv_x.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_os7mp_adv_x.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_os7mp_adv_x.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_os7mp_adv_x.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_os7mp_adv_x.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_os7mp_adv_x.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_os7mp_adv_x.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_os7mp_adv_x.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_os7mp_adv_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_os7mp_adv_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_os7mp_adv_y.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_os7mp_adv_y.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_os7mp_adv_y.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_os7mp_adv_y.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_os7mp_adv_y.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_os7mp_adv_y.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_os7mp_adv_y.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_os7mp_adv_y.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_os7mp_adv_y.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_os7mp_adv_y.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_osc_hat_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h GAD_OPTIONS.h
gad_osc_hat_r.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
gad_osc_hat_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h GAD_OPTIONS.h
gad_osc_hat_x.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
gad_osc_hat_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h GAD_OPTIONS.h
gad_osc_hat_y.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
gad_osc_mul_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h GAD_OPTIONS.h
gad_osc_mul_r.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
gad_osc_mul_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h GAD_OPTIONS.h
gad_osc_mul_x.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
gad_osc_mul_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h GAD_OPTIONS.h
gad_osc_mul_y.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
gad_plm_fun.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h GAD_OPTIONS.h
gad_plm_fun.f: PACKAGES_CONFIG.h /usr/include/stdc-predef.h
gad_ppm_adv_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_ppm_adv_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_ppm_adv_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_ppm_adv_r.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_ppm_adv_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_ppm_adv_r.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_ppm_adv_r.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_ppm_adv_r.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_ppm_adv_r.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_ppm_adv_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_ppm_adv_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_ppm_adv_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_ppm_adv_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_ppm_adv_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_ppm_adv_x.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_ppm_adv_x.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_ppm_adv_x.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_ppm_adv_x.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_ppm_adv_x.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_ppm_adv_x.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_ppm_adv_x.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_ppm_adv_x.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_ppm_adv_x.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_ppm_adv_x.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_ppm_adv_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_ppm_adv_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_ppm_adv_y.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_ppm_adv_y.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_ppm_adv_y.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_ppm_adv_y.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_ppm_adv_y.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_ppm_adv_y.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_ppm_adv_y.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_ppm_adv_y.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_ppm_adv_y.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_ppm_adv_y.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_ppm_flx_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_ppm_flx_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_ppm_flx_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_ppm_flx_r.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_ppm_flx_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_ppm_flx_r.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_ppm_flx_r.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_ppm_flx_r.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_ppm_flx_r.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_ppm_flx_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_ppm_flx_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_ppm_flx_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_ppm_flx_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_ppm_flx_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_ppm_flx_x.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_ppm_flx_x.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_ppm_flx_x.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_ppm_flx_x.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_ppm_flx_x.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_ppm_flx_x.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_ppm_flx_x.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_ppm_flx_x.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_ppm_flx_x.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_ppm_flx_x.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_ppm_flx_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_ppm_flx_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_ppm_flx_y.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_ppm_flx_y.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_ppm_flx_y.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_ppm_flx_y.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_ppm_flx_y.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_ppm_flx_y.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_ppm_flx_y.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_ppm_flx_y.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_ppm_flx_y.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_ppm_flx_y.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_ppm_fun.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h GAD_OPTIONS.h
gad_ppm_fun.f: PACKAGES_CONFIG.h /usr/include/stdc-predef.h
gad_ppm_hat_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_ppm_hat_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_ppm_hat_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_ppm_hat_r.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_ppm_hat_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_ppm_hat_r.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_ppm_hat_r.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_ppm_hat_r.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_ppm_hat_r.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_ppm_hat_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_ppm_hat_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_ppm_hat_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_ppm_hat_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_ppm_hat_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_ppm_hat_x.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_ppm_hat_x.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_ppm_hat_x.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_ppm_hat_x.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_ppm_hat_x.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_ppm_hat_x.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_ppm_hat_x.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_ppm_hat_x.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_ppm_hat_x.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_ppm_hat_x.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_ppm_hat_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_ppm_hat_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_ppm_hat_y.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_ppm_hat_y.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_ppm_hat_y.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_ppm_hat_y.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_ppm_hat_y.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_ppm_hat_y.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_ppm_hat_y.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_ppm_hat_y.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_ppm_hat_y.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_ppm_hat_y.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_ppm_p3e_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_ppm_p3e_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_ppm_p3e_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_ppm_p3e_r.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_ppm_p3e_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_ppm_p3e_r.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_ppm_p3e_r.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_ppm_p3e_r.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_ppm_p3e_r.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_ppm_p3e_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_ppm_p3e_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_ppm_p3e_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_ppm_p3e_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_ppm_p3e_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_ppm_p3e_x.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_ppm_p3e_x.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_ppm_p3e_x.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_ppm_p3e_x.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_ppm_p3e_x.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_ppm_p3e_x.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_ppm_p3e_x.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_ppm_p3e_x.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_ppm_p3e_x.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_ppm_p3e_x.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_ppm_p3e_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_ppm_p3e_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_ppm_p3e_y.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_ppm_p3e_y.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_ppm_p3e_y.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_ppm_p3e_y.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_ppm_p3e_y.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_ppm_p3e_y.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_ppm_p3e_y.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_ppm_p3e_y.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_ppm_p3e_y.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_ppm_p3e_y.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_pqm_adv_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_pqm_adv_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_pqm_adv_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_pqm_adv_r.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_pqm_adv_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_pqm_adv_r.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_pqm_adv_r.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_pqm_adv_r.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_pqm_adv_r.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_pqm_adv_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_pqm_adv_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_pqm_adv_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_pqm_adv_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_pqm_adv_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_pqm_adv_x.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_pqm_adv_x.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_pqm_adv_x.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_pqm_adv_x.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_pqm_adv_x.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_pqm_adv_x.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_pqm_adv_x.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_pqm_adv_x.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_pqm_adv_x.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_pqm_adv_x.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_pqm_adv_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_pqm_adv_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_pqm_adv_y.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_pqm_adv_y.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_pqm_adv_y.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_pqm_adv_y.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_pqm_adv_y.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_pqm_adv_y.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_pqm_adv_y.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_pqm_adv_y.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_pqm_adv_y.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_pqm_adv_y.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_pqm_flx_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_pqm_flx_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_pqm_flx_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_pqm_flx_r.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_pqm_flx_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_pqm_flx_r.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_pqm_flx_r.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_pqm_flx_r.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_pqm_flx_r.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_pqm_flx_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_pqm_flx_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_pqm_flx_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_pqm_flx_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_pqm_flx_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_pqm_flx_x.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_pqm_flx_x.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_pqm_flx_x.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_pqm_flx_x.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_pqm_flx_x.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_pqm_flx_x.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_pqm_flx_x.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_pqm_flx_x.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_pqm_flx_x.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_pqm_flx_x.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_pqm_flx_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_pqm_flx_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_pqm_flx_y.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_pqm_flx_y.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_pqm_flx_y.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_pqm_flx_y.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_pqm_flx_y.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_pqm_flx_y.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_pqm_flx_y.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_pqm_flx_y.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_pqm_flx_y.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_pqm_flx_y.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_pqm_fun.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h GAD_OPTIONS.h
gad_pqm_fun.f: PACKAGES_CONFIG.h /usr/include/stdc-predef.h
gad_pqm_hat_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_pqm_hat_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_pqm_hat_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_pqm_hat_r.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_pqm_hat_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_pqm_hat_r.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_pqm_hat_r.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_pqm_hat_r.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_pqm_hat_r.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_pqm_hat_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_pqm_hat_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_pqm_hat_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_pqm_hat_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_pqm_hat_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_pqm_hat_x.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_pqm_hat_x.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_pqm_hat_x.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_pqm_hat_x.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_pqm_hat_x.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_pqm_hat_x.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_pqm_hat_x.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_pqm_hat_x.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_pqm_hat_x.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_pqm_hat_x.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_pqm_hat_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_pqm_hat_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_pqm_hat_y.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_pqm_hat_y.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_pqm_hat_y.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_pqm_hat_y.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_pqm_hat_y.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_pqm_hat_y.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_pqm_hat_y.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_pqm_hat_y.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_pqm_hat_y.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_pqm_hat_y.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_pqm_p5e_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_pqm_p5e_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_pqm_p5e_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_pqm_p5e_r.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_pqm_p5e_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_pqm_p5e_r.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_pqm_p5e_r.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_pqm_p5e_r.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_pqm_p5e_r.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_pqm_p5e_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_pqm_p5e_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_pqm_p5e_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_pqm_p5e_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_pqm_p5e_x.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_pqm_p5e_x.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_pqm_p5e_x.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_pqm_p5e_x.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_pqm_p5e_x.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_pqm_p5e_x.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_pqm_p5e_x.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_pqm_p5e_x.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_pqm_p5e_x.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_pqm_p5e_x.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_pqm_p5e_x.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_pqm_p5e_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_pqm_p5e_y.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_pqm_p5e_y.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_pqm_p5e_y.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_pqm_p5e_y.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_pqm_p5e_y.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_pqm_p5e_y.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_pqm_p5e_y.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_pqm_p5e_y.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_pqm_p5e_y.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_pqm_p5e_y.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_pqm_p5e_y.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_read_pickup.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
gad_read_pickup.f: GAD.h GAD_OPTIONS.h GAD_SOM_VARS.h PACKAGES_CONFIG.h
gad_read_pickup.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
gad_som_advect.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
gad_som_advect.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
gad_som_advect.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
gad_som_advect.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GAD.h GAD_OPTIONS.h
gad_som_advect.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
gad_som_advect.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_som_advect.f: PACKAGES_CONFIG.h PARAMS.h PTRACERS_SIZE.h RA_MACROS.h
gad_som_advect.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gad_som_advect.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
gad_som_advect.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gad_som_advect.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gad_som_advect.f: RECIP_HFACW_MACROS.h SIZE.h tamc.h TANPHIATU_MACROS.h
gad_som_advect.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gad_som_advect.f: YC_MACROS.h
gad_som_adv_r.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
gad_som_adv_r.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
gad_som_adv_r.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
gad_som_adv_r.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GAD.h GAD_OPTIONS.h
gad_som_adv_r.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
gad_som_adv_r.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_som_adv_r.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
gad_som_adv_r.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
gad_som_adv_r.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gad_som_adv_r.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
gad_som_adv_r.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gad_som_adv_r.f: RECIP_HFACW_MACROS.h SIZE.h tamc.h TANPHIATU_MACROS.h
gad_som_adv_r.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gad_som_adv_r.f: YC_MACROS.h
gad_som_adv_x.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
gad_som_adv_x.f: CPP_OPTIONS.h EEPARAMS.h GAD.h GAD_OPTIONS.h
gad_som_adv_x.f: PACKAGES_CONFIG.h SIZE.h tamc.h /usr/include/stdc-predef.h
gad_som_adv_y.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
gad_som_adv_y.f: CPP_OPTIONS.h EEPARAMS.h GAD.h GAD_OPTIONS.h
gad_som_adv_y.f: PACKAGES_CONFIG.h SIZE.h tamc.h /usr/include/stdc-predef.h
gad_som_exchanges.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
gad_som_exchanges.f: GAD.h GAD_OPTIONS.h GAD_SOM_VARS.h PACKAGES_CONFIG.h
gad_som_exchanges.f: SIZE.h /usr/include/stdc-predef.h
gad_som_fill_cs_corner.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
gad_som_fill_cs_corner.f: EEPARAMS.h GAD.h GAD_OPTIONS.h PACKAGES_CONFIG.h
gad_som_fill_cs_corner.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
gad_som_lim_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h GAD.h
gad_som_lim_r.f: GAD_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
gad_som_lim_r.f: /usr/include/stdc-predef.h
gad_som_prep_cs_corner.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
gad_som_prep_cs_corner.f: EEPARAMS.h GAD.h GAD_OPTIONS.h PACKAGES_CONFIG.h
gad_som_prep_cs_corner.f: SIZE.h /usr/include/stdc-predef.h
gad_u3_adv_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_u3_adv_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_u3_adv_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GAD.h
gad_u3_adv_r.f: GAD_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gad_u3_adv_r.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gad_u3_adv_r.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
gad_u3_adv_r.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gad_u3_adv_r.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
gad_u3_adv_r.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_u3_adv_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_u3_adv_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_u3_adv_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_u3_adv_x.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h GAD.h
gad_u3_adv_x.f: GAD_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
gad_u3_adv_x.f: /usr/include/stdc-predef.h
gad_u3_adv_y.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h GAD.h
gad_u3_adv_y.f: GAD_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
gad_u3_adv_y.f: /usr/include/stdc-predef.h
gad_u3c4_impl_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gad_u3c4_impl_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gad_u3c4_impl_r.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
gad_u3c4_impl_r.f: FCORI_MACROS.h GAD.h GAD_OPTIONS.h GRID.h GRID_MACROS.h
gad_u3c4_impl_r.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gad_u3c4_impl_r.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
gad_u3c4_impl_r.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gad_u3c4_impl_r.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
gad_u3c4_impl_r.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gad_u3c4_impl_r.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gad_u3c4_impl_r.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gad_u3c4_impl_r.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gad_u3c4_impl_r.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gad_write_pickup.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
gad_write_pickup.f: GAD.h GAD_OPTIONS.h GAD_SOM_VARS.h PACKAGES_CONFIG.h
gad_write_pickup.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
gather_2d_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
gather_2d_r4.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
gather_2d_r4.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
gather_2d_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
gather_2d_r8.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
gather_2d_r8.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
gather_2d_wh_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
gather_2d_wh_r4.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
gather_2d_wh_r4.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
gather_2d_wh_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
gather_2d_wh_r8.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
gather_2d_wh_r8.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
gather_vec_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
gather_vec_r4.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
gather_vec_r4.f: SIZE.h /usr/include/stdc-predef.h
gather_vec_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
gather_vec_r8.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
gather_vec_r8.f: SIZE.h /usr/include/stdc-predef.h
gather_xz.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
gather_xz.f: EESUPPORT.h
gather_xz.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
gather_xz.f: SIZE.h /usr/include/stdc-predef.h
gather_yz.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
gather_yz.f: EESUPPORT.h
gather_yz.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
gather_yz.f: SIZE.h /usr/include/stdc-predef.h
gchem_add_tendency.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
gchem_add_tendency.f: GCHEM_FIELDS.h GCHEM.h GCHEM_OPTIONS.h GCHEM_SIZE.h
gchem_add_tendency.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
gchem_add_tendency.f: /usr/include/stdc-predef.h
gchem_calc_tendency.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
gchem_calc_tendency.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
gchem_calc_tendency.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h
gchem_calc_tendency.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GCHEM_FIELDS.h
gchem_calc_tendency.f: GCHEM.h GCHEM_OPTIONS.h GCHEM_SIZE.h GRID.h
gchem_calc_tendency.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
gchem_calc_tendency.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gchem_calc_tendency.f: PACKAGES_CONFIG.h PARAMS.h PTRACERS_FIELDS.h
gchem_calc_tendency.f: PTRACERS_PARAMS.h PTRACERS_SIZE.h RA_MACROS.h
gchem_calc_tendency.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gchem_calc_tendency.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
gchem_calc_tendency.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gchem_calc_tendency.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gchem_calc_tendency.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gchem_calc_tendency.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gchem_calc_tendency.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gchem_calc_tendency.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gchem_check.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h GCHEM.h
gchem_check.f: GCHEM_OPTIONS.h GCHEM_SIZE.h PACKAGES_CONFIG.h PARAMS.h
gchem_check.f: PTRACERS_PARAMS.h PTRACERS_SIZE.h SIZE.h
gchem_check.f: /usr/include/stdc-predef.h
gchem_diagnostics_init.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
gchem_diagnostics_init.f: EEPARAMS.h GCHEM.h GCHEM_OPTIONS.h PACKAGES_CONFIG.h
gchem_diagnostics_init.f: PARAMS.h PTRACERS_PARAMS.h PTRACERS_SIZE.h SIZE.h
gchem_diagnostics_init.f: /usr/include/stdc-predef.h
gchem_fields_load.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
gchem_fields_load.f: GCHEM.h GCHEM_OPTIONS.h PACKAGES_CONFIG.h
gchem_fields_load.f: /usr/include/stdc-predef.h
gchem_forcing_sep.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gchem_forcing_sep.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gchem_forcing_sep.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h
gchem_forcing_sep.f: EEPARAMS.h FCORI_MACROS.h GCHEM.h GCHEM_OPTIONS.h GRID.h
gchem_forcing_sep.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
gchem_forcing_sep.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gchem_forcing_sep.f: PACKAGES_CONFIG.h PARAMS.h PTRACERS_FIELDS.h
gchem_forcing_sep.f: PTRACERS_PARAMS.h PTRACERS_SIZE.h RA_MACROS.h
gchem_forcing_sep.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gchem_forcing_sep.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
gchem_forcing_sep.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gchem_forcing_sep.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
gchem_forcing_sep.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
gchem_forcing_sep.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
gchem_forcing_sep.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
gchem_init_fixed.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
gchem_init_fixed.f: GCHEM.h GCHEM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
gchem_init_fixed.f: /usr/include/stdc-predef.h
gchem_init_vari.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gchem_init_vari.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gchem_init_vari.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
gchem_init_vari.f: FCORI_MACROS.h GCHEM_FIELDS.h GCHEM.h GCHEM_OPTIONS.h
gchem_init_vari.f: GCHEM_SIZE.h GRID.h GRID_MACROS.h HFACC_MACROS.h
gchem_init_vari.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
gchem_init_vari.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
gchem_init_vari.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
gchem_init_vari.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
gchem_init_vari.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
gchem_init_vari.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gchem_init_vari.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
gchem_init_vari.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gchem_init_vari.f: YC_MACROS.h
gchem_output.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
gchem_output.f: GCHEM.h GCHEM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
gchem_output.f: /usr/include/stdc-predef.h
gchem_readparms.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
gchem_readparms.f: GCHEM.h GCHEM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
gchem_readparms.f: /usr/include/stdc-predef.h
gchem_surfmean.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
gchem_surfmean.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
gchem_surfmean.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
gchem_surfmean.f: FCORI_MACROS.h GCHEM_OPTIONS.h GRID.h GRID_MACROS.h
gchem_surfmean.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
gchem_surfmean.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
gchem_surfmean.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
gchem_surfmean.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
gchem_surfmean.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
gchem_surfmean.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
gchem_surfmean.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
gchem_surfmean.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
gchem_surfmean.f: YC_MACROS.h
gchem_tr_register.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
gchem_tr_register.f: GCHEM.h GCHEM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
gchem_tr_register.f: /usr/include/stdc-predef.h
gchem_write_pickup.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
gchem_write_pickup.f: GCHEM.h GCHEM_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
gchem_write_pickup.f: /usr/include/stdc-predef.h
g_dummy_for_etan.f: AD_CONFIG.h AUTODIFF_OPTIONS.h CPP_EEMACROS.h
g_dummy_for_etan.f: CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h EEPARAMS.h
g_dummy_for_etan.f: g_common.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
g_dummy_for_etan.f: /usr/include/stdc-predef.h
g_dummy_in_dynamics.f: AD_CONFIG.h AUTODIFF_OPTIONS.h CPP_EEMACROS.h
g_dummy_in_dynamics.f: CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h EEPARAMS.h
g_dummy_in_dynamics.f: g_common.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
g_dummy_in_dynamics.f: /usr/include/stdc-predef.h
g_dummy_in_stepping.f: AD_CONFIG.h AUTODIFF_OPTIONS.h CPP_EEMACROS.h
g_dummy_in_stepping.f: CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h EEPARAMS.h
g_dummy_in_stepping.f: g_common.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
g_dummy_in_stepping.f: /usr/include/stdc-predef.h
get_periodic_interval.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
get_periodic_interval.f: /usr/include/stdc-predef.h
get_write_global_fld.f: CPP_EEMACROS.h CPP_EEOPTIONS.h
get_write_global_fld.f: /usr/include/stdc-predef.h
global_max_ad.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
global_max_ad.f: GLOBAL_MAX.h
global_max_ad.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
global_max_ad.f: SIZE.h /usr/include/stdc-predef.h
global_max.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
global_max.f: GLOBAL_MAX.h
global_max.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
global_max.f: SIZE.h /usr/include/stdc-predef.h
global_sum_ad.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
global_sum_ad.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
global_sum_ad.f: /usr/include/stdc-predef.h
global_sum.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
global_sum.f: GLOBAL_SUM.h
global_sum.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
global_sum.f: SIZE.h /usr/include/stdc-predef.h
global_sum_singlecpu.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEBUFF_SCPU.h
global_sum_singlecpu.f: EEPARAMS.h EESUPPORT.h GLOBAL_SUM.h
global_sum_singlecpu.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
global_sum_singlecpu.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
global_sum_tile_ad.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
global_sum_tile_ad.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
global_sum_tile_ad.f: /usr/include/stdc-predef.h
global_sum_tile.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
global_sum_tile.f: GLOBAL_SUM.h
global_sum_tile.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
global_sum_tile.f: SIZE.h /usr/include/stdc-predef.h
global_vec_sum.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
global_vec_sum.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
global_vec_sum.f: SIZE.h /usr/include/stdc-predef.h
grad_sigma.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
grad_sigma.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
grad_sigma.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
grad_sigma.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
grad_sigma.f: MASKS_MACROS.h MASKW_MACROS.h PARAMS.h RA_MACROS.h RAS_MACROS.h
grad_sigma.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
grad_sigma.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
grad_sigma.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
grad_sigma.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
grad_sigma.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
grad_sigma.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
grdchk_check.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
grdchk_check.f: CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
grdchk_check.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
grdchk_check.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRDCHK.h
grdchk_check.f: GRDCHK_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
grdchk_check.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
grdchk_check.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
grdchk_check.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
grdchk_check.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
grdchk_check.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
grdchk_check.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
grdchk_check.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
grdchk_check.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
grdchk_getadxx.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_GENARR.h
grdchk_getadxx.f: ctrl.h CTRL_OPTIONS.h CTRL_SIZE.h EEPARAMS.h GRDCHK.h
grdchk_getadxx.f: GRDCHK_OPTIONS.h optim.h PACKAGES_CONFIG.h SIZE.h
grdchk_getadxx.f: /usr/include/stdc-predef.h
grdchk_get_obcs_mask.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
grdchk_get_obcs_mask.f: CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
grdchk_get_obcs_mask.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
grdchk_get_obcs_mask.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRDCHK.h
grdchk_get_obcs_mask.f: GRDCHK_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
grdchk_get_obcs_mask.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
grdchk_get_obcs_mask.f: MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h
grdchk_get_obcs_mask.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
grdchk_get_obcs_mask.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
grdchk_get_obcs_mask.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
grdchk_get_obcs_mask.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
grdchk_get_obcs_mask.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
grdchk_get_obcs_mask.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
grdchk_get_obcs_mask.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
grdchk_get_obcs_mask.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
grdchk_get_position.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
grdchk_get_position.f: CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
grdchk_get_position.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
grdchk_get_position.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRDCHK.h
grdchk_get_position.f: GRDCHK_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
grdchk_get_position.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
grdchk_get_position.f: MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h
grdchk_get_position.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
grdchk_get_position.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
grdchk_get_position.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
grdchk_get_position.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
grdchk_get_position.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
grdchk_get_position.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
grdchk_get_position.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
grdchk_get_position.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
grdchk_getxx.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_GENARR.h
grdchk_getxx.f: ctrl.h CTRL_OPTIONS.h CTRL_SIZE.h EEPARAMS.h GRDCHK.h
grdchk_getxx.f: GRDCHK_OPTIONS.h optim.h PACKAGES_CONFIG.h SIZE.h
grdchk_getxx.f: /usr/include/stdc-predef.h
grdchk_init.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
grdchk_init.f: CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
grdchk_init.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
grdchk_init.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRDCHK.h
grdchk_init.f: GRDCHK_OPTIONS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
grdchk_init.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
grdchk_init.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
grdchk_init.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
grdchk_init.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
grdchk_init.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
grdchk_init.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
grdchk_init.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
grdchk_init.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
grdchk_loc.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
grdchk_loc.f: CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
grdchk_loc.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
grdchk_loc.f: EEPARAMS.h FCORI_MACROS.h GRDCHK.h GRDCHK_OPTIONS.h GRID.h
grdchk_loc.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
grdchk_loc.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h
grdchk_loc.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
grdchk_loc.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
grdchk_loc.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
grdchk_loc.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
grdchk_loc.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
grdchk_loc.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
grdchk_main.f: AD_CONFIG.h cost.h COST_OPTIONS.h CPP_EEMACROS.h
grdchk_main.f: CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h CTRL_OPTIONS.h EEPARAMS.h
grdchk_main.f: g_cost.h GRDCHK.h GRDCHK_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
grdchk_main.f: SIZE.h /usr/include/stdc-predef.h
grdchk_print.f: AD_CONFIG.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
grdchk_print.f: EEPARAMS.h GRDCHK.h GRDCHK_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
grdchk_print.f: /usr/include/stdc-predef.h
grdchk_readparms.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h
grdchk_readparms.f: CTRL_OPTIONS.h EEPARAMS.h GRDCHK.h GRDCHK_OPTIONS.h
grdchk_readparms.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
grdchk_readparms.f: /usr/include/stdc-predef.h
grdchk_setxx.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_GENARR.h
grdchk_setxx.f: ctrl.h CTRL_OPTIONS.h CTRL_SIZE.h EEPARAMS.h GRDCHK.h
grdchk_setxx.f: GRDCHK_OPTIONS.h optim.h PACKAGES_CONFIG.h SIZE.h
grdchk_setxx.f: /usr/include/stdc-predef.h
grdchk_summary.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
grdchk_summary.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
grdchk_summary.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
grdchk_summary.f: FCORI_MACROS.h GRDCHK.h GRDCHK_OPTIONS.h GRID.h
grdchk_summary.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
grdchk_summary.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h
grdchk_summary.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
grdchk_summary.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
grdchk_summary.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
grdchk_summary.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
grdchk_summary.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
grdchk_summary.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
grdchk_summary.f: YC_MACROS.h
gsum.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
gsum.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h SIZE.h
gsum.f: /usr/include/stdc-predef.h
gsw_teos10.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
gsw_teos10.f: /usr/include/stdc-predef.h
impldiff.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
impldiff.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
impldiff.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
impldiff.f: GAD.h GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
impldiff.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
impldiff.f: PARAMS.h PTRACERS_PARAMS.h PTRACERS_SIZE.h RA_MACROS.h
impldiff.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
impldiff.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
impldiff.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
impldiff.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
impldiff.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
impldiff.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_cartesian_grid.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ini_cartesian_grid.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
ini_cartesian_grid.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
ini_cartesian_grid.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
ini_cartesian_grid.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ini_cartesian_grid.f: MASKS_MACROS.h MASKW_MACROS.h PARAMS.h RA_MACROS.h
ini_cartesian_grid.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ini_cartesian_grid.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ini_cartesian_grid.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ini_cartesian_grid.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ini_cartesian_grid.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ini_cartesian_grid.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ini_cartesian_grid.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_cg2d.f: CG2D.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_cg2d.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ini_cg2d.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ini_cg2d.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ini_cg2d.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ini_cg2d.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ini_cg2d.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ini_cg2d.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ini_cg2d.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ini_cg2d.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
ini_cg2d.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ini_cg2d.f: YC_MACROS.h
ini_cg3d.f: CG3D.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_cg3d.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ini_cg3d.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ini_cg3d.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ini_cg3d.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ini_cg3d.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ini_cg3d.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ini_cg3d.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ini_cg3d.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ini_cg3d.f: RECIP_HFACW_MACROS.h SIZE.h SOLVE_FOR_PRESSURE3D.h SURFACE.h
ini_cg3d.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h /usr/include/stdc-predef.h
ini_cg3d.f: XC_MACROS.h YC_MACROS.h
ini_communication_patterns.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
ini_communication_patterns.f: EESUPPORT.h EXCH.h
ini_communication_patterns.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
ini_communication_patterns.f: PACKAGES_CONFIG.h SIZE.h
ini_communication_patterns.f: /usr/include/stdc-predef.h
ini_cori.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_cori.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ini_cori.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ini_cori.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ini_cori.f: MASKS_MACROS.h MASKW_MACROS.h MONITOR.h PACKAGES_CONFIG.h PARAMS.h
ini_cori.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ini_cori.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ini_cori.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ini_cori.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ini_cori.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ini_cori.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_curvilinear_grid.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ini_curvilinear_grid.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
ini_curvilinear_grid.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
ini_curvilinear_grid.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
ini_curvilinear_grid.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ini_curvilinear_grid.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
ini_curvilinear_grid.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
ini_curvilinear_grid.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ini_curvilinear_grid.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ini_curvilinear_grid.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ini_curvilinear_grid.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ini_curvilinear_grid.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ini_curvilinear_grid.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ini_curvilinear_grid.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
ini_curvilinear_grid.f: XC_MACROS.h YC_MACROS.h
ini_cylinder_grid.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_cylinder_grid.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
ini_cylinder_grid.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
ini_cylinder_grid.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ini_cylinder_grid.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
ini_cylinder_grid.f: MASKW_MACROS.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ini_cylinder_grid.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ini_cylinder_grid.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ini_cylinder_grid.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ini_cylinder_grid.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ini_cylinder_grid.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ini_cylinder_grid.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ini_cylinder_grid.f: YC_MACROS.h
ini_depths.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_depths.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ini_depths.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ini_depths.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ini_depths.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ini_depths.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ini_depths.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ini_depths.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ini_depths.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ini_depths.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
ini_depths.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ini_depths.f: YC_MACROS.h
ini_dynvars.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h
ini_dynvars.f: DYNVARS.h EEPARAMS.h MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h
ini_dynvars.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
ini_eos.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_eos.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ini_eos.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h EOS.h FCORI_MACROS.h GRID.h
ini_eos.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ini_eos.f: MASKS_MACROS.h MASKW_MACROS.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ini_eos.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ini_eos.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ini_eos.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ini_eos.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
ini_eos.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ini_eos.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_ffields.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
ini_ffields.f: FFIELDS.h PARAMS.h SIZE.h /usr/include/stdc-predef.h
ini_fields.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
ini_fields.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h /usr/include/stdc-predef.h
ini_forcing.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_forcing.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
ini_forcing.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
ini_forcing.f: FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ini_forcing.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
ini_forcing.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ini_forcing.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ini_forcing.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ini_forcing.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ini_forcing.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
ini_forcing.f: SIZE.h SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ini_forcing.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_global_domain.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_global_domain.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
ini_global_domain.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
ini_global_domain.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ini_global_domain.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
ini_global_domain.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
ini_global_domain.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ini_global_domain.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ini_global_domain.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ini_global_domain.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ini_global_domain.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ini_global_domain.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ini_global_domain.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_grid.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_grid.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ini_grid.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ini_grid.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ini_grid.f: MASKS_MACROS.h MASKW_MACROS.h MONITOR.h PACKAGES_CONFIG.h PARAMS.h
ini_grid.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ini_grid.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ini_grid.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ini_grid.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ini_grid.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ini_grid.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_linear_phisurf.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ini_linear_phisurf.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
ini_linear_phisurf.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
ini_linear_phisurf.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
ini_linear_phisurf.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ini_linear_phisurf.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ini_linear_phisurf.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ini_linear_phisurf.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ini_linear_phisurf.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ini_linear_phisurf.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ini_linear_phisurf.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ini_linear_phisurf.f: SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ini_linear_phisurf.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_local_grid.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
ini_local_grid.f: PACKAGES_CONFIG.h PARAMS.h SET_GRID.h SIZE.h
ini_local_grid.f: /usr/include/stdc-predef.h
ini_masks_etc.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_masks_etc.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
ini_masks_etc.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
ini_masks_etc.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ini_masks_etc.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
ini_masks_etc.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ini_masks_etc.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ini_masks_etc.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ini_masks_etc.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ini_masks_etc.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ini_masks_etc.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ini_masks_etc.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ini_masks_etc.f: YC_MACROS.h
ini_mixing.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_mixing.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ini_mixing.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
ini_mixing.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
ini_mixing.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h PARAMS.h
ini_mixing.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ini_mixing.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ini_mixing.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ini_mixing.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ini_mixing.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ini_mixing.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ini_mixing.f: YC_MACROS.h
ini_mnc_vars.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_mnc_vars.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
ini_mnc_vars.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
ini_mnc_vars.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ini_mnc_vars.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
ini_mnc_vars.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ini_mnc_vars.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ini_mnc_vars.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ini_mnc_vars.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ini_mnc_vars.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
ini_mnc_vars.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ini_mnc_vars.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_model_io.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEBUFF_SCPU.h
ini_model_io.f: EEPARAMS.h EESUPPORT.h
ini_model_io.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
ini_model_io.f: PACKAGES_CONFIG.h PARAMS.h RESTART.h SIZE.h
ini_model_io.f: /usr/include/stdc-predef.h
ini_nh_fields.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_nh_fields.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
ini_nh_fields.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
ini_nh_fields.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ini_nh_fields.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
ini_nh_fields.f: NH_VARS.h PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
ini_nh_fields.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
ini_nh_fields.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ini_nh_fields.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ini_nh_fields.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h RESTART.h SIZE.h
ini_nh_fields.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ini_nh_fields.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_nh_vars.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
ini_nh_vars.f: NH_VARS.h PARAMS.h SIZE.h /usr/include/stdc-predef.h
ini_nlfs_vars.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_nlfs_vars.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
ini_nlfs_vars.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
ini_nlfs_vars.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ini_nlfs_vars.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
ini_nlfs_vars.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ini_nlfs_vars.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ini_nlfs_vars.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ini_nlfs_vars.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ini_nlfs_vars.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ini_nlfs_vars.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
ini_nlfs_vars.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ini_nlfs_vars.f: YC_MACROS.h
ini_parms.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_parms.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ini_parms.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h EOS.h FCORI_MACROS.h GRID.h
ini_parms.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ini_parms.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ini_parms.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ini_parms.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ini_parms.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ini_parms.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ini_parms.f: RECIP_HFACW_MACROS.h SET_GRID.h SIZE.h TANPHIATU_MACROS.h
ini_parms.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ini_parms.f: YC_MACROS.h
ini_p_ground.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_p_ground.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
ini_p_ground.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
ini_p_ground.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ini_p_ground.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
ini_p_ground.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
ini_p_ground.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
ini_p_ground.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ini_p_ground.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ini_p_ground.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
ini_p_ground.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ini_p_ground.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_pressure.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_pressure.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
ini_pressure.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
ini_pressure.f: EOS.h FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ini_pressure.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
ini_pressure.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ini_pressure.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ini_pressure.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ini_pressure.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ini_pressure.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
ini_pressure.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ini_pressure.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_procs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
ini_procs.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
ini_procs.f: SIZE.h /usr/include/stdc-predef.h
ini_psurf.f: CD_CODE_VARS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ini_psurf.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
ini_psurf.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
ini_psurf.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
ini_psurf.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
ini_psurf.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ini_psurf.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ini_psurf.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ini_psurf.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ini_psurf.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
ini_psurf.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ini_psurf.f: YC_MACROS.h
ini_salt.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_salt.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ini_salt.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
ini_salt.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ini_salt.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ini_salt.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ini_salt.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ini_salt.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ini_salt.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ini_salt.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ini_salt.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_sigma_hfac.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_sigma_hfac.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
ini_sigma_hfac.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
ini_sigma_hfac.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ini_sigma_hfac.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
ini_sigma_hfac.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
ini_sigma_hfac.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
ini_sigma_hfac.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ini_sigma_hfac.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ini_sigma_hfac.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
ini_sigma_hfac.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ini_sigma_hfac.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_spherical_polar_grid.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ini_spherical_polar_grid.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
ini_spherical_polar_grid.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ini_spherical_polar_grid.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
ini_spherical_polar_grid.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ini_spherical_polar_grid.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
ini_spherical_polar_grid.f: MASKW_MACROS.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ini_spherical_polar_grid.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ini_spherical_polar_grid.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ini_spherical_polar_grid.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ini_spherical_polar_grid.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ini_spherical_polar_grid.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ini_spherical_polar_grid.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ini_spherical_polar_grid.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
ini_spherical_polar_grid.f: XC_MACROS.h YC_MACROS.h
ini_theta.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_theta.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ini_theta.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
ini_theta.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ini_theta.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ini_theta.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ini_theta.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ini_theta.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ini_theta.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ini_theta.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ini_theta.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_threading_environment.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
ini_threading_environment.f: EESUPPORT.h
ini_threading_environment.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
ini_threading_environment.f: PACKAGES_CONFIG.h SIZE.h
ini_threading_environment.f: /usr/include/stdc-predef.h
initialise_fixed.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
initialise_fixed.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
initialise_fixed.f: /usr/include/stdc-predef.h
initialise_varia.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
initialise_varia.f: CPP_OPTIONS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
initialise_varia.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
initialise_varia.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
initialise_varia.f: FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h
initialise_varia.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
initialise_varia.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
initialise_varia.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
initialise_varia.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
initialise_varia.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
initialise_varia.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
initialise_varia.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
initialise_varia.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
initialise_varia.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_vel.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_vel.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ini_vel.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
ini_vel.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ini_vel.f: MASKS_MACROS.h MASKW_MACROS.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ini_vel.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ini_vel.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ini_vel.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ini_vel.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
ini_vel.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ini_vel.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ini_vertical_grid.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ini_vertical_grid.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
ini_vertical_grid.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
ini_vertical_grid.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ini_vertical_grid.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
ini_vertical_grid.f: MASKW_MACROS.h PARAMS.h RA_MACROS.h RAS_MACROS.h
ini_vertical_grid.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ini_vertical_grid.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ini_vertical_grid.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ini_vertical_grid.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ini_vertical_grid.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ini_vertical_grid.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ini_vertical_grid.f: YC_MACROS.h
integrate_for_w.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
integrate_for_w.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
integrate_for_w.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
integrate_for_w.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
integrate_for_w.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
integrate_for_w.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
integrate_for_w.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
integrate_for_w.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
integrate_for_w.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
integrate_for_w.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
integrate_for_w.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
integrate_for_w.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
integr_continuity.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
integr_continuity.f: CPP_OPTIONS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
integr_continuity.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
integr_continuity.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
integr_continuity.f: FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h
integr_continuity.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
integr_continuity.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
integr_continuity.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
integr_continuity.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
integr_continuity.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
integr_continuity.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
integr_continuity.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
integr_continuity.f: SURFACE.h tamc.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
integr_continuity.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
kpp_calc_diff_ptr.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
kpp_calc_diff_ptr.f: KPP.h KPP_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
kpp_calc_diff_ptr.f: PTRACERS_PARAMS.h PTRACERS_SIZE.h SIZE.h
kpp_calc_diff_ptr.f: /usr/include/stdc-predef.h
kpp_calc_diff_s.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
kpp_calc_diff_s.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
kpp_calc_diff_s.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
kpp_calc_diff_s.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
kpp_calc_diff_s.f: HFACS_MACROS.h HFACW_MACROS.h KPP.h KPP_OPTIONS.h
kpp_calc_diff_s.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
kpp_calc_diff_s.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
kpp_calc_diff_s.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
kpp_calc_diff_s.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
kpp_calc_diff_s.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
kpp_calc_diff_s.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
kpp_calc_diff_s.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
kpp_calc_diff_s.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
kpp_calc_diff_t.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
kpp_calc_diff_t.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
kpp_calc_diff_t.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
kpp_calc_diff_t.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
kpp_calc_diff_t.f: HFACS_MACROS.h HFACW_MACROS.h KPP.h KPP_OPTIONS.h
kpp_calc_diff_t.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
kpp_calc_diff_t.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
kpp_calc_diff_t.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
kpp_calc_diff_t.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
kpp_calc_diff_t.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
kpp_calc_diff_t.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
kpp_calc_diff_t.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
kpp_calc_diff_t.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
kpp_calc.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
kpp_calc.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
kpp_calc.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
kpp_calc.f: FCORI_MACROS.h FFIELDS.h GAD.h GRID.h GRID_MACROS.h HFACC_MACROS.h
kpp_calc.f: HFACS_MACROS.h HFACW_MACROS.h KPP.h KPP_OPTIONS.h KPP_PARAMS.h
kpp_calc.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
kpp_calc.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
kpp_calc.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
kpp_calc.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
kpp_calc.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
kpp_calc.f: RECIP_HFACW_MACROS.h SIZE.h tamc.h TANPHIATU_MACROS.h
kpp_calc.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
kpp_calc.f: YC_MACROS.h
kpp_calc_visc.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
kpp_calc_visc.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
kpp_calc_visc.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
kpp_calc_visc.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
kpp_calc_visc.f: HFACS_MACROS.h HFACW_MACROS.h KPP.h KPP_OPTIONS.h
kpp_calc_visc.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
kpp_calc_visc.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
kpp_calc_visc.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
kpp_calc_visc.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
kpp_calc_visc.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
kpp_calc_visc.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
kpp_calc_visc.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
kpp_calc_visc.f: YC_MACROS.h
kpp_check.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
kpp_check.f: KPP_OPTIONS.h KPP_PARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
kpp_check.f: /usr/include/stdc-predef.h
kpp_diagnostics_init.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
kpp_diagnostics_init.f: EEPARAMS.h GAD.h KPP_OPTIONS.h PACKAGES_CONFIG.h
kpp_diagnostics_init.f: SIZE.h /usr/include/stdc-predef.h
kpp_do_exch.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h KPP.h
kpp_do_exch.f: KPP_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
kpp_do_exch.f: /usr/include/stdc-predef.h
kpp_forcing_surf.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
kpp_forcing_surf.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
kpp_forcing_surf.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
kpp_forcing_surf.f: DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
kpp_forcing_surf.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
kpp_forcing_surf.f: KPP_OPTIONS.h KPP_PARAMS.h MASKS_MACROS.h MASKW_MACROS.h
kpp_forcing_surf.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
kpp_forcing_surf.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
kpp_forcing_surf.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
kpp_forcing_surf.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
kpp_forcing_surf.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
kpp_forcing_surf.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
kpp_forcing_surf.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
kpp_forcing_surf.f: YC_MACROS.h
kpp_init_fixed.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
kpp_init_fixed.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
kpp_init_fixed.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
kpp_init_fixed.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
kpp_init_fixed.f: HFACS_MACROS.h HFACW_MACROS.h KPP_OPTIONS.h KPP_PARAMS.h
kpp_init_fixed.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
kpp_init_fixed.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
kpp_init_fixed.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
kpp_init_fixed.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
kpp_init_fixed.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
kpp_init_fixed.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
kpp_init_fixed.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
kpp_init_fixed.f: YC_MACROS.h
kpp_init_varia.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
kpp_init_varia.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
kpp_init_varia.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
kpp_init_varia.f: FCORI_MACROS.h GAD.h GRID.h GRID_MACROS.h HFACC_MACROS.h
kpp_init_varia.f: HFACS_MACROS.h HFACW_MACROS.h KPP.h KPP_OPTIONS.h
kpp_init_varia.f: KPP_PARAMS.h MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
kpp_init_varia.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
kpp_init_varia.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
kpp_init_varia.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
kpp_init_varia.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
kpp_init_varia.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
kpp_init_varia.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
kpp_init_varia.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
kpp_output.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h KPP.h
kpp_output.f: KPP_OPTIONS.h KPP_PARAMS.h KPP_TAVE.h PACKAGES_CONFIG.h PARAMS.h
kpp_output.f: SIZE.h /usr/include/stdc-predef.h
kpp_readparms.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
kpp_readparms.f: KPP_OPTIONS.h KPP_PARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
kpp_readparms.f: /usr/include/stdc-predef.h
kpp_routines.f: AUTODIFF_OPTIONS.h AUTODIFF_PARAMS.h CPP_EEMACROS.h
kpp_routines.f: CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
kpp_routines.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
kpp_routines.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
kpp_routines.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
kpp_routines.f: HFACW_MACROS.h KPP_OPTIONS.h KPP_PARAMS.h MASKS_MACROS.h
kpp_routines.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
kpp_routines.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
kpp_routines.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
kpp_routines.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
kpp_routines.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
kpp_routines.f: RECIP_HFACW_MACROS.h SIZE.h tamc.h TANPHIATU_MACROS.h
kpp_routines.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
kpp_routines.f: YC_MACROS.h
kpp_transport_ptr.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
kpp_transport_ptr.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
kpp_transport_ptr.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
kpp_transport_ptr.f: FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h
kpp_transport_ptr.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h KPP.h
kpp_transport_ptr.f: KPP_OPTIONS.h KPP_PARAMS.h MASKS_MACROS.h MASKW_MACROS.h
kpp_transport_ptr.f: PACKAGES_CONFIG.h PARAMS.h PTRACERS_FIELDS.h
kpp_transport_ptr.f: PTRACERS_SIZE.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
kpp_transport_ptr.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
kpp_transport_ptr.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
kpp_transport_ptr.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
kpp_transport_ptr.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
kpp_transport_ptr.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
kpp_transport_ptr.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
kpp_transport_ptr.f: YC_MACROS.h
kpp_transport_s.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
kpp_transport_s.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
kpp_transport_s.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
kpp_transport_s.f: FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h
kpp_transport_s.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h KPP.h
kpp_transport_s.f: KPP_OPTIONS.h KPP_PARAMS.h MASKS_MACROS.h MASKW_MACROS.h
kpp_transport_s.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
kpp_transport_s.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
kpp_transport_s.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
kpp_transport_s.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
kpp_transport_s.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
kpp_transport_s.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
kpp_transport_s.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
kpp_transport_s.f: YC_MACROS.h
kpp_transport_t.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
kpp_transport_t.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
kpp_transport_t.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
kpp_transport_t.f: FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h
kpp_transport_t.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h KPP.h
kpp_transport_t.f: KPP_OPTIONS.h KPP_PARAMS.h MASKS_MACROS.h MASKW_MACROS.h
kpp_transport_t.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
kpp_transport_t.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
kpp_transport_t.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
kpp_transport_t.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
kpp_transport_t.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
kpp_transport_t.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
kpp_transport_t.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
kpp_transport_t.f: YC_MACROS.h
lef_zero.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
lef_zero.f: /usr/include/stdc-predef.h
load_fields_driver.f: AUTODIFF_OPTIONS.h cost.h COST_OPTIONS.h CPP_EEMACROS.h
load_fields_driver.f: CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl_dummy.h CTRL_GENARR.h
load_fields_driver.f: ctrl.h CTRL_OPTIONS.h CTRL_SIZE.h EEPARAMS.h EOS.h
load_fields_driver.f: FFIELDS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h tamc.h
load_fields_driver.f: /usr/include/stdc-predef.h
load_grid_spacing.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
load_grid_spacing.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
load_grid_spacing.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
load_grid_spacing.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
load_grid_spacing.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
load_grid_spacing.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
load_grid_spacing.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
load_grid_spacing.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
load_grid_spacing.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
load_grid_spacing.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
load_grid_spacing.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SET_GRID.h
load_grid_spacing.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
load_grid_spacing.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
load_ref_files.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
load_ref_files.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
load_ref_files.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
load_ref_files.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
load_ref_files.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
load_ref_files.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
load_ref_files.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
load_ref_files.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
load_ref_files.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
load_ref_files.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
load_ref_files.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
load_ref_files.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
main_do_loop.f: COST_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
main_do_loop.f: CTRL_OPTIONS.h EEPARAMS.h GAD_OPTIONS.h GCHEM_OPTIONS.h
main_do_loop.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h /usr/include/stdc-predef.h
main.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
main.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
main.f: DYNVARS.h DYU_MACROS.h EEPARAMS.h EESUPPORT.h FCORI_MACROS.h FFIELDS.h
main.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
main.f: MAIN_PDIRECTIVES1.h MAIN_PDIRECTIVES2.h MASKS_MACROS.h MASKW_MACROS.h
main.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
main.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
main.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
main.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
main.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
main.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIGREG.h SIZE.h SURFACE.h
main.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h /usr/include/stdc-predef.h
main.f: XC_MACROS.h YC_MACROS.h
master_cpu_io.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
master_cpu_io.f: /usr/include/stdc-predef.h
master_cpu_thread.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
master_cpu_thread.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
master_cpu_thread.f: SIZE.h /usr/include/stdc-predef.h
mds_byteswapi4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h /usr/include/stdc-predef.h
mds_byteswapr4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h /usr/include/stdc-predef.h
mds_byteswapr8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h /usr/include/stdc-predef.h
mdsfindunit.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
mdsfindunit.f: /usr/include/stdc-predef.h
mds_flush.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
mds_flush.f: /usr/include/stdc-predef.h
mdsio_buffertorl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h /usr/include/stdc-predef.h
mdsio_buffertors.f: CPP_EEMACROS.h CPP_EEOPTIONS.h /usr/include/stdc-predef.h
mdsio_check4file.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_check4file.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
mdsio_check4file.f: /usr/include/stdc-predef.h
mdsio_facef_read.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_facef_read.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mdsio_facef_read.f: /usr/include/stdc-predef.h
mdsio_gl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_gl.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
mdsio_gl.f: /usr/include/stdc-predef.h
mdsio_gl_slice.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_gl_slice.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
mdsio_gl_slice.f: /usr/include/stdc-predef.h
mdsio_pass_r4torl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_pass_r4torl.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mdsio_pass_r4torl.f: /usr/include/stdc-predef.h
mdsio_pass_r4tors.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_pass_r4tors.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mdsio_pass_r4tors.f: /usr/include/stdc-predef.h
mdsio_pass_r8torl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_pass_r8torl.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mdsio_pass_r8torl.f: /usr/include/stdc-predef.h
mdsio_pass_r8tors.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_pass_r8tors.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mdsio_pass_r8tors.f: /usr/include/stdc-predef.h
mdsio_rd_rec_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_rd_rec_rl.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
mdsio_rd_rec_rl.f: /usr/include/stdc-predef.h
mdsio_rd_rec_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_rd_rec_rs.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
mdsio_rd_rec_rs.f: /usr/include/stdc-predef.h
mdsio_read_field.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEBUFF_SCPU.h
mdsio_read_field.f: EEPARAMS.h MDSIO_BUFF_3D.h MDSIO_OPTIONS.h
mdsio_read_field.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
mdsio_read_field.f: /usr/include/stdc-predef.h
mdsio_read_meta.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_read_meta.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
mdsio_read_meta.f: /usr/include/stdc-predef.h
mdsio_read_section.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_read_section.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
mdsio_read_section.f: /usr/include/stdc-predef.h
mdsio_read_tape.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_read_tape.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
mdsio_read_tape.f: /usr/include/stdc-predef.h
mdsio_readvec_loc.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_readvec_loc.f: MDSIO_BUFF_3D.h MDSIO_OPTIONS.h PACKAGES_CONFIG.h
mdsio_readvec_loc.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
mdsio_read_whalos.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_read_whalos.f: MDSIO_BUFF_WH.h MDSIO_OPTIONS.h PACKAGES_CONFIG.h
mdsio_read_whalos.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
mdsio_rw_field.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h MDSIO_OPTIONS.h
mdsio_rw_field.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
mdsio_rw_slice.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h MDSIO_OPTIONS.h
mdsio_rw_slice.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
mdsio_seg4torl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h MDSIO_OPTIONS.h
mdsio_seg4torl.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
mdsio_seg4tors.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h MDSIO_OPTIONS.h
mdsio_seg4tors.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
mdsio_seg8torl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h MDSIO_OPTIONS.h
mdsio_seg8torl.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
mdsio_seg8tors.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h MDSIO_OPTIONS.h
mdsio_seg8tors.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
mdsio_segxtorx_2d.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mdsio_segxtorx_2d.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mdsio_segxtorx_2d.f: /usr/include/stdc-predef.h
mdsio_write_field.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mdsio_write_field.f: EEBUFF_SCPU.h EEPARAMS.h MDSIO_BUFF_3D.h MDSIO_OPTIONS.h
mdsio_write_field.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
mdsio_write_field.f: /usr/include/stdc-predef.h
mdsio_writelocal.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_writelocal.f: MDSIO_BUFF_3D.h MDSIO_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
mdsio_writelocal.f: SIZE.h /usr/include/stdc-predef.h
mdsio_write_meta.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_write_meta.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mdsio_write_meta.f: /usr/include/stdc-predef.h
mdsio_write_section.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_write_section.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
mdsio_write_section.f: /usr/include/stdc-predef.h
mdsio_write_tape.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_write_tape.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
mdsio_write_tape.f: /usr/include/stdc-predef.h
mdsio_writevec_loc.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_writevec_loc.f: MDSIO_BUFF_3D.h MDSIO_OPTIONS.h PACKAGES_CONFIG.h
mdsio_writevec_loc.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
mdsio_write_whalos.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_write_whalos.f: MDSIO_BUFF_WH.h MDSIO_OPTIONS.h PACKAGES_CONFIG.h
mdsio_write_whalos.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
mdsio_wr_metafiles.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_wr_metafiles.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
mdsio_wr_metafiles.f: /usr/include/stdc-predef.h
mdsio_wr_rec_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_wr_rec_rl.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
mdsio_wr_rec_rl.f: /usr/include/stdc-predef.h
mdsio_wr_rec_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mdsio_wr_rec_rs.f: MDSIO_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
mdsio_wr_rec_rs.f: /usr/include/stdc-predef.h
mds_reclen.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
mds_reclen.f: /usr/include/stdc-predef.h
memsync.f: CPP_EEMACROS.h CPP_EEOPTIONS.h /usr/include/stdc-predef.h
mom_calc_3d_strain.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mom_calc_3d_strain.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
mom_calc_3d_strain.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h
mom_calc_3d_strain.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
mom_calc_3d_strain.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
mom_calc_3d_strain.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_calc_3d_strain.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
mom_calc_3d_strain.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_calc_3d_strain.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_calc_3d_strain.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_calc_3d_strain.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_calc_3d_strain.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_calc_3d_strain.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_calc_3d_strain.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_calc_absvort3.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_calc_absvort3.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_calc_absvort3.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_calc_absvort3.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_calc_absvort3.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
mom_calc_absvort3.f: MASKW_MACROS.h MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h
mom_calc_absvort3.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
mom_calc_absvort3.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
mom_calc_absvort3.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_calc_absvort3.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_calc_absvort3.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_calc_absvort3.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_calc_absvort3.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_calc_absvort3.f: YC_MACROS.h
mom_calc_hdiv.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_calc_hdiv.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_calc_hdiv.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_calc_hdiv.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_calc_hdiv.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_calc_hdiv.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_calc_hdiv.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_calc_hdiv.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_calc_hdiv.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_calc_hdiv.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_calc_hdiv.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_calc_hdiv.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_calc_hdiv.f: YC_MACROS.h
mom_calc_hfacz.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
mom_calc_hfacz.f: CPP_OPTIONS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
mom_calc_hfacz.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
mom_calc_hfacz.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
mom_calc_hfacz.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mom_calc_hfacz.f: MASKS_MACROS.h MASKW_MACROS.h MOM_COMMON_OPTIONS.h
mom_calc_hfacz.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
mom_calc_hfacz.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_calc_hfacz.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
mom_calc_hfacz.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_calc_hfacz.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_calc_hfacz.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_calc_hfacz.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_calc_hfacz.f: YC_MACROS.h
mom_calc_ke.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_calc_ke.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_calc_ke.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h FCORI_MACROS.h GRID.h
mom_calc_ke.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mom_calc_ke.f: MASKS_MACROS.h MASKW_MACROS.h MOM_COMMON_OPTIONS.h
mom_calc_ke.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
mom_calc_ke.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
mom_calc_ke.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_calc_ke.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_calc_ke.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_calc_ke.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_calc_ke.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_calc_relvort3.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_calc_relvort3.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_calc_relvort3.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_calc_relvort3.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_calc_relvort3.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
mom_calc_relvort3.f: MASKW_MACROS.h MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h
mom_calc_relvort3.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
mom_calc_relvort3.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
mom_calc_relvort3.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_calc_relvort3.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_calc_relvort3.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_calc_relvort3.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_calc_relvort3.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_calc_relvort3.f: YC_MACROS.h
mom_calc_rtrans.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_calc_rtrans.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_calc_rtrans.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
mom_calc_rtrans.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_calc_rtrans.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_calc_rtrans.f: MOM_FLUXFORM.h MOM_FLUXFORM_OPTIONS.h PACKAGES_CONFIG.h
mom_calc_rtrans.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
mom_calc_rtrans.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
mom_calc_rtrans.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_calc_rtrans.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_calc_rtrans.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
mom_calc_rtrans.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_calc_rtrans.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_calc_smag_3d.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_calc_smag_3d.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_calc_smag_3d.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_calc_smag_3d.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_calc_smag_3d.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
mom_calc_smag_3d.f: MASKW_MACROS.h MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h
mom_calc_smag_3d.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
mom_calc_smag_3d.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
mom_calc_smag_3d.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_calc_smag_3d.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_calc_smag_3d.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_calc_smag_3d.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_calc_smag_3d.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_calc_strain.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_calc_strain.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_calc_strain.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_calc_strain.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_calc_strain.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_calc_strain.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_calc_strain.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_calc_strain.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_calc_strain.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_calc_strain.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_calc_strain.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_calc_strain.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_calc_strain.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_calc_tension.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_calc_tension.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_calc_tension.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_calc_tension.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_calc_tension.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
mom_calc_tension.f: MASKW_MACROS.h MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h
mom_calc_tension.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
mom_calc_tension.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
mom_calc_tension.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_calc_tension.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_calc_tension.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_calc_tension.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_calc_tension.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_calc_visc.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
mom_calc_visc.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
mom_calc_visc.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
mom_calc_visc.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
mom_calc_visc.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
mom_calc_visc.f: MASKW_MACROS.h MOM_COMMON_OPTIONS.h MOM_VISC.h
mom_calc_visc.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
mom_calc_visc.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_calc_visc.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
mom_calc_visc.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_calc_visc.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_calc_visc.f: RECIP_HFACW_MACROS.h SIZE.h tamc.h TANPHIATU_MACROS.h
mom_calc_visc.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_calc_visc.f: YC_MACROS.h
mom_diagnostics_init.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mom_diagnostics_init.f: EEPARAMS.h MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h
mom_diagnostics_init.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
momentum_correction_step.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
momentum_correction_step.f: DYNVARS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
momentum_correction_step.f: SIZE.h /usr/include/stdc-predef.h
mom_fluxform.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
mom_fluxform.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
mom_fluxform.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h
mom_fluxform.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h FFIELDS.h GRID.h
mom_fluxform.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mom_fluxform.f: MASKS_MACROS.h MASKW_MACROS.h MOM_COMMON_OPTIONS.h
mom_fluxform.f: MOM_FLUXFORM.h MOM_FLUXFORM_OPTIONS.h MOM_VISC.h
mom_fluxform.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
mom_fluxform.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_fluxform.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
mom_fluxform.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_fluxform.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
mom_fluxform.f: SIZE.h SURFACE.h tamc.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_fluxform.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_hdissip.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_hdissip.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_hdissip.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_hdissip.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_hdissip.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_hdissip.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_hdissip.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_hdissip.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
mom_hdissip.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_hdissip.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
mom_hdissip.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_hdissip.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_init_fixed.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_init_fixed.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_init_fixed.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_init_fixed.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_init_fixed.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_init_fixed.f: MOM_COMMON_OPTIONS.h MOM_VISC.h PACKAGES_CONFIG.h PARAMS.h
mom_init_fixed.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_init_fixed.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_init_fixed.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_init_fixed.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_init_fixed.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
mom_init_fixed.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_init_fixed.f: YC_MACROS.h
mom_quasihydrostatic.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mom_quasihydrostatic.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
mom_quasihydrostatic.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
mom_quasihydrostatic.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
mom_quasihydrostatic.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mom_quasihydrostatic.f: MASKS_MACROS.h MASKW_MACROS.h MOM_COMMON_OPTIONS.h
mom_quasihydrostatic.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
mom_quasihydrostatic.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_quasihydrostatic.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_quasihydrostatic.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_quasihydrostatic.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_quasihydrostatic.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_quasihydrostatic.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_quasihydrostatic.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
mom_quasihydrostatic.f: XC_MACROS.h YC_MACROS.h
mom_u_adv_uu.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_u_adv_uu.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_u_adv_uu.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_u_adv_uu.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_u_adv_uu.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_u_adv_uu.f: MOM_FLUXFORM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_u_adv_uu.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_u_adv_uu.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_u_adv_uu.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_u_adv_uu.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_u_adv_uu.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_u_adv_uu.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_u_adv_uu.f: YC_MACROS.h
mom_u_adv_vu.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_u_adv_vu.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_u_adv_vu.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_u_adv_vu.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_u_adv_vu.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_u_adv_vu.f: MOM_FLUXFORM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_u_adv_vu.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_u_adv_vu.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_u_adv_vu.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_u_adv_vu.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_u_adv_vu.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_u_adv_vu.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_u_adv_vu.f: YC_MACROS.h
mom_u_adv_wu.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_u_adv_wu.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_u_adv_wu.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_u_adv_wu.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_u_adv_wu.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_u_adv_wu.f: MOM_FLUXFORM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_u_adv_wu.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_u_adv_wu.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_u_adv_wu.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_u_adv_wu.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_u_adv_wu.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_u_adv_wu.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_u_adv_wu.f: YC_MACROS.h
mom_u_botdrag_coeff.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mom_u_botdrag_coeff.f: CTRL_FIELDS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
mom_u_botdrag_coeff.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
mom_u_botdrag_coeff.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
mom_u_botdrag_coeff.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
mom_u_botdrag_coeff.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_u_botdrag_coeff.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
mom_u_botdrag_coeff.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
mom_u_botdrag_coeff.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_u_botdrag_coeff.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_u_botdrag_coeff.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_u_botdrag_coeff.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_u_botdrag_coeff.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_u_botdrag_coeff.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_u_botdrag_coeff.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
mom_u_botdrag_coeff.f: XC_MACROS.h YC_MACROS.h
mom_u_coriolis.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_u_coriolis.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_u_coriolis.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_u_coriolis.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_u_coriolis.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_u_coriolis.f: MOM_FLUXFORM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
mom_u_coriolis.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_u_coriolis.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_u_coriolis.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_u_coriolis.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_u_coriolis.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
mom_u_coriolis.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_u_coriolis.f: YC_MACROS.h
mom_u_coriolis_nh.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_u_coriolis_nh.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_u_coriolis_nh.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_u_coriolis_nh.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_u_coriolis_nh.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
mom_u_coriolis_nh.f: MASKW_MACROS.h MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h
mom_u_coriolis_nh.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
mom_u_coriolis_nh.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
mom_u_coriolis_nh.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_u_coriolis_nh.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_u_coriolis_nh.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_u_coriolis_nh.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_u_coriolis_nh.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_u_coriolis_nh.f: YC_MACROS.h
mom_u_del2u.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_u_del2u.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_u_del2u.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_u_del2u.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_u_del2u.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_u_del2u.f: MOM_FLUXFORM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_u_del2u.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_u_del2u.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
mom_u_del2u.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_u_del2u.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
mom_u_del2u.f: SIZE.h SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_u_del2u.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_u_implicit_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_u_implicit_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_u_implicit_r.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h
mom_u_implicit_r.f: EEPARAMS.h FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h
mom_u_implicit_r.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mom_u_implicit_r.f: MASKS_MACROS.h MASKW_MACROS.h MOM_COMMON_OPTIONS.h
mom_u_implicit_r.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
mom_u_implicit_r.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_u_implicit_r.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
mom_u_implicit_r.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_u_implicit_r.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_u_implicit_r.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_u_implicit_r.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_u_implicit_r.f: YC_MACROS.h
mom_u_metric_cylinder.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mom_u_metric_cylinder.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
mom_u_metric_cylinder.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
mom_u_metric_cylinder.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
mom_u_metric_cylinder.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mom_u_metric_cylinder.f: MASKS_MACROS.h MASKW_MACROS.h MOM_FLUXFORM_OPTIONS.h
mom_u_metric_cylinder.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
mom_u_metric_cylinder.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_u_metric_cylinder.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_u_metric_cylinder.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_u_metric_cylinder.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_u_metric_cylinder.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_u_metric_cylinder.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_u_metric_cylinder.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
mom_u_metric_cylinder.f: XC_MACROS.h YC_MACROS.h
mom_u_metric_nh.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_u_metric_nh.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_u_metric_nh.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_u_metric_nh.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_u_metric_nh.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_u_metric_nh.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_u_metric_nh.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_u_metric_nh.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_u_metric_nh.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_u_metric_nh.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_u_metric_nh.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_u_metric_nh.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_u_metric_nh.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_u_metric_sphere.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mom_u_metric_sphere.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
mom_u_metric_sphere.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
mom_u_metric_sphere.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
mom_u_metric_sphere.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mom_u_metric_sphere.f: MASKS_MACROS.h MASKW_MACROS.h MOM_FLUXFORM_OPTIONS.h
mom_u_metric_sphere.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
mom_u_metric_sphere.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_u_metric_sphere.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_u_metric_sphere.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_u_metric_sphere.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_u_metric_sphere.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_u_metric_sphere.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_u_metric_sphere.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
mom_u_metric_sphere.f: XC_MACROS.h YC_MACROS.h
mom_u_rviscflux.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_u_rviscflux.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_u_rviscflux.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_u_rviscflux.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_u_rviscflux.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_u_rviscflux.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_u_rviscflux.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_u_rviscflux.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_u_rviscflux.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_u_rviscflux.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_u_rviscflux.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_u_rviscflux.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_u_rviscflux.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_u_sidedrag.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_u_sidedrag.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_u_sidedrag.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_u_sidedrag.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_u_sidedrag.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_u_sidedrag.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_u_sidedrag.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_u_sidedrag.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_u_sidedrag.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_u_sidedrag.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_u_sidedrag.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
mom_u_sidedrag.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_u_sidedrag.f: YC_MACROS.h
mom_uv_boundary.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_uv_boundary.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_uv_boundary.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_uv_boundary.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_uv_boundary.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_uv_boundary.f: MOM_FLUXFORM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
mom_uv_boundary.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_uv_boundary.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_uv_boundary.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_uv_boundary.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_uv_boundary.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_uv_boundary.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_uv_boundary.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_uv_smag_3d.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_uv_smag_3d.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_uv_smag_3d.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_uv_smag_3d.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_uv_smag_3d.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_uv_smag_3d.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_uv_smag_3d.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_uv_smag_3d.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_uv_smag_3d.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_uv_smag_3d.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_uv_smag_3d.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_uv_smag_3d.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_uv_smag_3d.f: YC_MACROS.h
mom_u_xviscflux.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_u_xviscflux.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_u_xviscflux.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_u_xviscflux.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_u_xviscflux.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_u_xviscflux.f: MOM_FLUXFORM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
mom_u_xviscflux.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_u_xviscflux.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_u_xviscflux.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_u_xviscflux.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_u_xviscflux.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_u_xviscflux.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_u_xviscflux.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_u_yviscflux.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_u_yviscflux.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_u_yviscflux.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_u_yviscflux.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_u_yviscflux.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_u_yviscflux.f: MOM_FLUXFORM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
mom_u_yviscflux.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_u_yviscflux.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_u_yviscflux.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_u_yviscflux.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_u_yviscflux.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_u_yviscflux.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_u_yviscflux.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_v_adv_uv.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_v_adv_uv.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_v_adv_uv.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_v_adv_uv.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_v_adv_uv.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_v_adv_uv.f: MOM_FLUXFORM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_v_adv_uv.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_v_adv_uv.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_v_adv_uv.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_v_adv_uv.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_v_adv_uv.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_v_adv_uv.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_v_adv_uv.f: YC_MACROS.h
mom_v_adv_vv.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_v_adv_vv.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_v_adv_vv.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_v_adv_vv.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_v_adv_vv.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_v_adv_vv.f: MOM_FLUXFORM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_v_adv_vv.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_v_adv_vv.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_v_adv_vv.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_v_adv_vv.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_v_adv_vv.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_v_adv_vv.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_v_adv_vv.f: YC_MACROS.h
mom_v_adv_wv.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_v_adv_wv.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_v_adv_wv.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_v_adv_wv.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_v_adv_wv.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_v_adv_wv.f: MOM_FLUXFORM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_v_adv_wv.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_v_adv_wv.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_v_adv_wv.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_v_adv_wv.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_v_adv_wv.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_v_adv_wv.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_v_adv_wv.f: YC_MACROS.h
mom_v_botdrag_coeff.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mom_v_botdrag_coeff.f: CTRL_FIELDS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
mom_v_botdrag_coeff.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
mom_v_botdrag_coeff.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
mom_v_botdrag_coeff.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
mom_v_botdrag_coeff.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_v_botdrag_coeff.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
mom_v_botdrag_coeff.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
mom_v_botdrag_coeff.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_v_botdrag_coeff.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_v_botdrag_coeff.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_v_botdrag_coeff.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_v_botdrag_coeff.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_v_botdrag_coeff.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_v_botdrag_coeff.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
mom_v_botdrag_coeff.f: XC_MACROS.h YC_MACROS.h
mom_v_coriolis.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_v_coriolis.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_v_coriolis.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_v_coriolis.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_v_coriolis.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_v_coriolis.f: MOM_FLUXFORM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
mom_v_coriolis.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_v_coriolis.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_v_coriolis.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_v_coriolis.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_v_coriolis.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
mom_v_coriolis.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_v_coriolis.f: YC_MACROS.h
mom_v_coriolis_nh.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_v_coriolis_nh.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_v_coriolis_nh.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_v_coriolis_nh.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_v_coriolis_nh.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
mom_v_coriolis_nh.f: MASKW_MACROS.h MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h
mom_v_coriolis_nh.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
mom_v_coriolis_nh.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
mom_v_coriolis_nh.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_v_coriolis_nh.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_v_coriolis_nh.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_v_coriolis_nh.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_v_coriolis_nh.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_v_coriolis_nh.f: YC_MACROS.h
mom_v_del2v.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_v_del2v.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_v_del2v.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_v_del2v.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_v_del2v.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_v_del2v.f: MOM_FLUXFORM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_v_del2v.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_v_del2v.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
mom_v_del2v.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_v_del2v.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
mom_v_del2v.f: SIZE.h SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_v_del2v.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_vecinv.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mom_vecinv.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_vecinv.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
mom_vecinv.f: FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_vecinv.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_vecinv.f: MOM_COMMON_OPTIONS.h MOM_VECINV_OPTIONS.h MOM_VISC.h
mom_vecinv.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
mom_vecinv.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
mom_vecinv.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_vecinv.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_vecinv.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
mom_vecinv.f: tamc.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h TIMEAVE_OPTIONS.h
mom_vecinv.f: TIMEAVE_STATV.h /usr/include/stdc-predef.h XC_MACROS.h
mom_vecinv.f: YC_MACROS.h
mom_vi_coriolis.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_vi_coriolis.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_vi_coriolis.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_vi_coriolis.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_vi_coriolis.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_vi_coriolis.f: MOM_VECINV_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_vi_coriolis.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_vi_coriolis.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_vi_coriolis.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_vi_coriolis.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_vi_coriolis.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_vi_coriolis.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_vi_coriolis.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_vi_del2uv.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_vi_del2uv.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_vi_del2uv.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_vi_del2uv.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_vi_del2uv.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_vi_del2uv.f: MOM_VECINV_OPTIONS.h PACKAGES_CONFIG.h RA_MACROS.h
mom_vi_del2uv.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_vi_del2uv.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_vi_del2uv.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_vi_del2uv.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_vi_del2uv.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_vi_del2uv.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_vi_del2uv.f: YC_MACROS.h
mom_vi_hdissip.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_vi_hdissip.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_vi_hdissip.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_vi_hdissip.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_vi_hdissip.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_vi_hdissip.f: MOM_VECINV_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_vi_hdissip.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_vi_hdissip.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_vi_hdissip.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_vi_hdissip.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_vi_hdissip.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_vi_hdissip.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_vi_hdissip.f: YC_MACROS.h
mom_v_implicit_r.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_v_implicit_r.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_v_implicit_r.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h
mom_v_implicit_r.f: EEPARAMS.h FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h
mom_v_implicit_r.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mom_v_implicit_r.f: MASKS_MACROS.h MASKW_MACROS.h MOM_COMMON_OPTIONS.h
mom_v_implicit_r.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
mom_v_implicit_r.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_v_implicit_r.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
mom_v_implicit_r.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_v_implicit_r.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_v_implicit_r.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_v_implicit_r.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_v_implicit_r.f: YC_MACROS.h
mom_visc_qgl_limit.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mom_visc_qgl_limit.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
mom_visc_qgl_limit.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
mom_visc_qgl_limit.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
mom_visc_qgl_limit.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mom_visc_qgl_limit.f: MASKS_MACROS.h MASKW_MACROS.h MOM_COMMON_OPTIONS.h
mom_visc_qgl_limit.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
mom_visc_qgl_limit.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_visc_qgl_limit.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
mom_visc_qgl_limit.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_visc_qgl_limit.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_visc_qgl_limit.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_visc_qgl_limit.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
mom_visc_qgl_limit.f: XC_MACROS.h YC_MACROS.h
mom_visc_qgl_stretch.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mom_visc_qgl_stretch.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
mom_visc_qgl_stretch.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h
mom_visc_qgl_stretch.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
mom_visc_qgl_stretch.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
mom_visc_qgl_stretch.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_visc_qgl_stretch.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
mom_visc_qgl_stretch.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
mom_visc_qgl_stretch.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_visc_qgl_stretch.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_visc_qgl_stretch.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_visc_qgl_stretch.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_visc_qgl_stretch.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_visc_qgl_stretch.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_visc_qgl_stretch.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
mom_visc_qgl_stretch.f: XC_MACROS.h YC_MACROS.h
mom_vi_u_coriolis_c4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mom_vi_u_coriolis_c4.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
mom_vi_u_coriolis_c4.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
mom_vi_u_coriolis_c4.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
mom_vi_u_coriolis_c4.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mom_vi_u_coriolis_c4.f: MASKS_MACROS.h MASKW_MACROS.h MOM_VECINV_OPTIONS.h
mom_vi_u_coriolis_c4.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h
mom_vi_u_coriolis_c4.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_vi_u_coriolis_c4.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_vi_u_coriolis_c4.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_vi_u_coriolis_c4.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_vi_u_coriolis_c4.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_vi_u_coriolis_c4.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_vi_u_coriolis_c4.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
mom_vi_u_coriolis_c4.f: XC_MACROS.h YC_MACROS.h
mom_vi_u_coriolis.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_vi_u_coriolis.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_vi_u_coriolis.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_vi_u_coriolis.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_vi_u_coriolis.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
mom_vi_u_coriolis.f: MASKW_MACROS.h MOM_VECINV_OPTIONS.h PACKAGES_CONFIG.h
mom_vi_u_coriolis.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_vi_u_coriolis.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_vi_u_coriolis.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_vi_u_coriolis.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_vi_u_coriolis.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_vi_u_coriolis.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_vi_u_coriolis.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_vi_u_grad_ke.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_vi_u_grad_ke.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_vi_u_grad_ke.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_vi_u_grad_ke.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_vi_u_grad_ke.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
mom_vi_u_grad_ke.f: MASKW_MACROS.h MOM_VECINV_OPTIONS.h PACKAGES_CONFIG.h
mom_vi_u_grad_ke.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_vi_u_grad_ke.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_vi_u_grad_ke.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_vi_u_grad_ke.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_vi_u_grad_ke.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_vi_u_grad_ke.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_vi_u_grad_ke.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_vi_u_vertshear.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mom_vi_u_vertshear.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
mom_vi_u_vertshear.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
mom_vi_u_vertshear.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
mom_vi_u_vertshear.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mom_vi_u_vertshear.f: MASKS_MACROS.h MASKW_MACROS.h MOM_VECINV_OPTIONS.h
mom_vi_u_vertshear.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
mom_vi_u_vertshear.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_vi_u_vertshear.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
mom_vi_u_vertshear.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_vi_u_vertshear.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_vi_u_vertshear.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_vi_u_vertshear.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
mom_vi_u_vertshear.f: XC_MACROS.h YC_MACROS.h
mom_vi_v_coriolis_c4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mom_vi_v_coriolis_c4.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
mom_vi_v_coriolis_c4.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
mom_vi_v_coriolis_c4.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
mom_vi_v_coriolis_c4.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mom_vi_v_coriolis_c4.f: MASKS_MACROS.h MASKW_MACROS.h MOM_VECINV_OPTIONS.h
mom_vi_v_coriolis_c4.f: PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h
mom_vi_v_coriolis_c4.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_vi_v_coriolis_c4.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_vi_v_coriolis_c4.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_vi_v_coriolis_c4.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_vi_v_coriolis_c4.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_vi_v_coriolis_c4.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_vi_v_coriolis_c4.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
mom_vi_v_coriolis_c4.f: XC_MACROS.h YC_MACROS.h
mom_vi_v_coriolis.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_vi_v_coriolis.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_vi_v_coriolis.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_vi_v_coriolis.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_vi_v_coriolis.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
mom_vi_v_coriolis.f: MASKW_MACROS.h MOM_VECINV_OPTIONS.h PACKAGES_CONFIG.h
mom_vi_v_coriolis.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_vi_v_coriolis.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_vi_v_coriolis.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_vi_v_coriolis.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_vi_v_coriolis.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_vi_v_coriolis.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_vi_v_coriolis.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_vi_v_grad_ke.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_vi_v_grad_ke.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_vi_v_grad_ke.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_vi_v_grad_ke.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_vi_v_grad_ke.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
mom_vi_v_grad_ke.f: MASKW_MACROS.h MOM_VECINV_OPTIONS.h PACKAGES_CONFIG.h
mom_vi_v_grad_ke.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_vi_v_grad_ke.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_vi_v_grad_ke.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_vi_v_grad_ke.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_vi_v_grad_ke.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_vi_v_grad_ke.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_vi_v_grad_ke.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_vi_v_vertshear.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mom_vi_v_vertshear.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
mom_vi_v_vertshear.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
mom_vi_v_vertshear.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
mom_vi_v_vertshear.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mom_vi_v_vertshear.f: MASKS_MACROS.h MASKW_MACROS.h MOM_VECINV_OPTIONS.h
mom_vi_v_vertshear.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
mom_vi_v_vertshear.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_vi_v_vertshear.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
mom_vi_v_vertshear.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_vi_v_vertshear.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_vi_v_vertshear.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_vi_v_vertshear.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
mom_vi_v_vertshear.f: XC_MACROS.h YC_MACROS.h
mom_v_metric_cylinder.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mom_v_metric_cylinder.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
mom_v_metric_cylinder.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
mom_v_metric_cylinder.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
mom_v_metric_cylinder.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mom_v_metric_cylinder.f: MASKS_MACROS.h MASKW_MACROS.h MOM_FLUXFORM_OPTIONS.h
mom_v_metric_cylinder.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
mom_v_metric_cylinder.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_v_metric_cylinder.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_v_metric_cylinder.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_v_metric_cylinder.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_v_metric_cylinder.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_v_metric_cylinder.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_v_metric_cylinder.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
mom_v_metric_cylinder.f: XC_MACROS.h YC_MACROS.h
mom_v_metric_nh.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_v_metric_nh.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_v_metric_nh.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_v_metric_nh.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_v_metric_nh.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_v_metric_nh.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_v_metric_nh.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_v_metric_nh.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_v_metric_nh.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_v_metric_nh.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_v_metric_nh.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_v_metric_nh.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_v_metric_nh.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_v_metric_sphere.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
mom_v_metric_sphere.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
mom_v_metric_sphere.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
mom_v_metric_sphere.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
mom_v_metric_sphere.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mom_v_metric_sphere.f: MASKS_MACROS.h MASKW_MACROS.h MOM_FLUXFORM_OPTIONS.h
mom_v_metric_sphere.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
mom_v_metric_sphere.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
mom_v_metric_sphere.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_v_metric_sphere.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_v_metric_sphere.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_v_metric_sphere.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_v_metric_sphere.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_v_metric_sphere.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
mom_v_metric_sphere.f: XC_MACROS.h YC_MACROS.h
mom_v_rviscflux.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_v_rviscflux.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_v_rviscflux.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_v_rviscflux.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_v_rviscflux.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_v_rviscflux.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_v_rviscflux.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_v_rviscflux.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_v_rviscflux.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_v_rviscflux.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_v_rviscflux.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_v_rviscflux.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_v_rviscflux.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_v_sidedrag.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_v_sidedrag.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_v_sidedrag.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_v_sidedrag.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_v_sidedrag.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_v_sidedrag.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_v_sidedrag.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_v_sidedrag.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_v_sidedrag.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_v_sidedrag.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_v_sidedrag.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
mom_v_sidedrag.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_v_sidedrag.f: YC_MACROS.h
mom_v_xviscflux.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_v_xviscflux.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_v_xviscflux.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_v_xviscflux.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_v_xviscflux.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_v_xviscflux.f: MOM_FLUXFORM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
mom_v_xviscflux.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_v_xviscflux.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_v_xviscflux.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_v_xviscflux.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_v_xviscflux.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_v_xviscflux.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_v_xviscflux.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_v_yviscflux.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_v_yviscflux.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_v_yviscflux.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_v_yviscflux.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_v_yviscflux.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_v_yviscflux.f: MOM_FLUXFORM_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
mom_v_yviscflux.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_v_yviscflux.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_v_yviscflux.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_v_yviscflux.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_v_yviscflux.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_v_yviscflux.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_v_yviscflux.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_w_coriolis_nh.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_w_coriolis_nh.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_w_coriolis_nh.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_w_coriolis_nh.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_w_coriolis_nh.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
mom_w_coriolis_nh.f: MASKW_MACROS.h MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h
mom_w_coriolis_nh.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
mom_w_coriolis_nh.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
mom_w_coriolis_nh.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mom_w_coriolis_nh.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
mom_w_coriolis_nh.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_w_coriolis_nh.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_w_coriolis_nh.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_w_coriolis_nh.f: YC_MACROS.h
mom_w_metric_nh.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_w_metric_nh.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_w_metric_nh.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_w_metric_nh.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_w_metric_nh.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_w_metric_nh.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_w_metric_nh.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_w_metric_nh.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_w_metric_nh.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_w_metric_nh.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mom_w_metric_nh.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mom_w_metric_nh.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mom_w_metric_nh.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mom_w_sidedrag.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_w_sidedrag.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_w_sidedrag.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_w_sidedrag.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_w_sidedrag.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_w_sidedrag.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_w_sidedrag.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_w_sidedrag.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_w_sidedrag.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_w_sidedrag.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_w_sidedrag.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
mom_w_sidedrag.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_w_sidedrag.f: YC_MACROS.h
mom_w_smag_3d.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mom_w_smag_3d.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mom_w_smag_3d.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mom_w_smag_3d.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mom_w_smag_3d.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mom_w_smag_3d.f: MOM_COMMON_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
mom_w_smag_3d.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mom_w_smag_3d.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mom_w_smag_3d.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mom_w_smag_3d.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mom_w_smag_3d.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mom_w_smag_3d.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mom_w_smag_3d.f: YC_MACROS.h
mon_advcfl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mon_advcfl.f: MONITOR.h MONITOR_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mon_advcfl.f: /usr/include/stdc-predef.h
mon_advcflw2.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mon_advcflw2.f: MONITOR.h MONITOR_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mon_advcflw2.f: /usr/include/stdc-predef.h
mon_advcflw.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mon_advcflw.f: MONITOR.h MONITOR_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mon_advcflw.f: /usr/include/stdc-predef.h
mon_calc_advcfl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mon_calc_advcfl.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mon_calc_advcfl.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
mon_calc_advcfl.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mon_calc_advcfl.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mon_calc_advcfl.f: MONITOR.h MONITOR_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
mon_calc_advcfl.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mon_calc_advcfl.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mon_calc_advcfl.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mon_calc_advcfl.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mon_calc_advcfl.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mon_calc_advcfl.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
mon_calc_advcfl.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mon_calc_stats_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mon_calc_stats_rl.f: MONITOR_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mon_calc_stats_rl.f: /usr/include/stdc-predef.h
mon_calc_stats_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mon_calc_stats_rs.f: MONITOR_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mon_calc_stats_rs.f: /usr/include/stdc-predef.h
mon_init.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h MONITOR.h
mon_init.f: MONITOR_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
mon_init.f: /usr/include/stdc-predef.h
monitor_ad.f: adcommon.h AD_CONFIG.h AUTODIFF_OPTIONS.h AUTODIFF_PARAMS.h
monitor_ad.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h
monitor_ad.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
monitor_ad.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
monitor_ad.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
monitor_ad.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h MONITOR.h
monitor_ad.f: MONITOR_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
monitor_ad.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
monitor_ad.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
monitor_ad.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
monitor_ad.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
monitor_ad.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
monitor_ad.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
monitor.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
monitor.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
monitor.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
monitor.f: FFIELDS.h GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
monitor.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h MONITOR.h
monitor.f: MONITOR_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
monitor.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
monitor.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
monitor.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
monitor.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
monitor.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
monitor.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
monitor_g.f: AD_CONFIG.h AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
monitor_g.f: CPP_OPTIONS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
monitor_g.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
monitor_g.f: DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h FFIELDS.h
monitor_g.f: g_common.h GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
monitor_g.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h MONITOR.h
monitor_g.f: MONITOR_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
monitor_g.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
monitor_g.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
monitor_g.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
monitor_g.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
monitor_g.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
monitor_g.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
mon_ke.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mon_ke.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
mon_ke.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
mon_ke.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mon_ke.f: MASKS_MACROS.h MASKW_MACROS.h MONITOR.h MONITOR_OPTIONS.h
mon_ke.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
mon_ke.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
mon_ke.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mon_ke.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mon_ke.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
mon_ke.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h /usr/include/stdc-predef.h
mon_ke.f: XC_MACROS.h YC_MACROS.h
mon_out.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h MONITOR.h
mon_out.f: MONITOR_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
mon_out.f: /usr/include/stdc-predef.h
mon_printstats_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mon_printstats_rl.f: MONITOR.h MONITOR_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mon_printstats_rl.f: /usr/include/stdc-predef.h
mon_printstats_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mon_printstats_rs.f: MONITOR.h MONITOR_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mon_printstats_rs.f: /usr/include/stdc-predef.h
mon_set_iounit.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mon_set_iounit.f: MONITOR.h MONITOR_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mon_set_iounit.f: /usr/include/stdc-predef.h
mon_set_pref.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mon_set_pref.f: MONITOR.h MONITOR_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mon_set_pref.f: /usr/include/stdc-predef.h
mon_solution.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mon_solution.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mon_solution.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
mon_solution.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mon_solution.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mon_solution.f: MONITOR.h MONITOR_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
mon_solution.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mon_solution.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mon_solution.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mon_solution.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mon_solution.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
mon_solution.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mon_solution.f: YC_MACROS.h
mon_stats_latbnd_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mon_stats_latbnd_rl.f: MONITOR_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mon_stats_latbnd_rl.f: /usr/include/stdc-predef.h
mon_stats_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mon_stats_rl.f: MONITOR_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mon_stats_rl.f: /usr/include/stdc-predef.h
mon_stats_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mon_stats_rs.f: MONITOR_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mon_stats_rs.f: /usr/include/stdc-predef.h
mon_surfcor.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mon_surfcor.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
mon_surfcor.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
mon_surfcor.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
mon_surfcor.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
mon_surfcor.f: MONITOR.h MONITOR_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
mon_surfcor.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
mon_surfcor.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
mon_surfcor.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
mon_surfcor.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
mon_surfcor.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
mon_surfcor.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
mon_surfcor.f: YC_MACROS.h
mon_vort3.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
mon_vort3.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
mon_vort3.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
mon_vort3.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
mon_vort3.f: MASKS_MACROS.h MASKW_MACROS.h MONITOR.h MONITOR_OPTIONS.h
mon_vort3.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
mon_vort3.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
mon_vort3.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
mon_vort3.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
mon_vort3.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
mon_vort3.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h /usr/include/stdc-predef.h
mon_vort3.f: XC_MACROS.h YC_MACROS.h
mon_writestats_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mon_writestats_rl.f: MONITOR.h MONITOR_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mon_writestats_rl.f: /usr/include/stdc-predef.h
mon_writestats_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
mon_writestats_rs.f: MONITOR.h MONITOR_OPTIONS.h PACKAGES_CONFIG.h SIZE.h
mon_writestats_rs.f: /usr/include/stdc-predef.h
myactivefunction_ad.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
myactivefunction_ad.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
myactivefunction_ad.f: /usr/include/stdc-predef.h
myactivefunction.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
myactivefunction.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
myactivefunction.f: /usr/include/stdc-predef.h
nml_change_syntax.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
nml_change_syntax.f: /usr/include/stdc-predef.h
nml_set_terminator.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h
nml_set_terminator.f: /usr/include/stdc-predef.h
open_copy_data_file.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
open_copy_data_file.f: /usr/include/stdc-predef.h
optim_readparms.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h CTRL_OPTIONS.h
optim_readparms.f: EEPARAMS.h optim.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
optim_readparms.f: /usr/include/stdc-predef.h
packages_boot.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
packages_boot.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h /usr/include/stdc-predef.h
packages_check.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
packages_check.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h /usr/include/stdc-predef.h
packages_error_msg.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
packages_error_msg.f: SIZE.h /usr/include/stdc-predef.h
packages_init_fixed.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
packages_init_fixed.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
packages_init_fixed.f: /usr/include/stdc-predef.h
packages_init_variables.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
packages_init_variables.f: CPP_OPTIONS.h CTRL_OPTIONS.h DYNVARS.h EEPARAMS.h
packages_init_variables.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
packages_init_variables.f: /usr/include/stdc-predef.h
packages_print_msg.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
packages_print_msg.f: SIZE.h /usr/include/stdc-predef.h
packages_readparms.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
packages_readparms.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h
packages_readparms.f: /usr/include/stdc-predef.h
packages_unused_msg.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
packages_unused_msg.f: SIZE.h /usr/include/stdc-predef.h
packages_write_pickup.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
packages_write_pickup.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h RESTART.h
packages_write_pickup.f: SIZE.h /usr/include/stdc-predef.h
plot_field.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h PARAMS.h
plot_field.f: SIZE.h /usr/include/stdc-predef.h
port_rand.f: /usr/include/stdc-predef.h
post_cg3d.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
post_cg3d.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
post_cg3d.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
post_cg3d.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
post_cg3d.f: MASKS_MACROS.h MASKW_MACROS.h PARAMS.h RA_MACROS.h RAS_MACROS.h
post_cg3d.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
post_cg3d.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
post_cg3d.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
post_cg3d.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
post_cg3d.f: SIZE.h SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
post_cg3d.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
pre_cg3d.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
pre_cg3d.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
pre_cg3d.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h
pre_cg3d.f: FFIELDS.h GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
pre_cg3d.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
pre_cg3d.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
pre_cg3d.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
pre_cg3d.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
pre_cg3d.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
pre_cg3d.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
pre_cg3d.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
pre_cg3d.f: YC_MACROS.h
pressure_for_eos.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
pressure_for_eos.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
pressure_for_eos.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h
pressure_for_eos.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
pressure_for_eos.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
pressure_for_eos.f: MASKS_MACROS.h MASKW_MACROS.h PARAMS.h RA_MACROS.h
pressure_for_eos.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
pressure_for_eos.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
pressure_for_eos.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
pressure_for_eos.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
pressure_for_eos.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
pressure_for_eos.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
pressure_for_eos.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
print.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
print.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h SIZE.h
print.f: /usr/include/stdc-predef.h
ptracers_ad_dump.f: AD_CONFIG.h AUTODIFF.h AUTODIFF_OPTIONS.h
ptracers_ad_dump.f: AUTODIFF_PARAMS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
ptracers_ad_dump.f: CPP_OPTIONS.h DIAGNOSTICS.h DIAGNOSTICS_SIZE.h
ptracers_ad_dump.f: DIAG_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
ptracers_ad_dump.f: ptracers_adcommon.h PTRACERS_OPTIONS.h PTRACERS_PARAMS.h
ptracers_ad_dump.f: PTRACERS_SIZE.h SIZE.h /usr/include/stdc-predef.h
ptracers_apply_forcing.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ptracers_apply_forcing.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
ptracers_apply_forcing.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
ptracers_apply_forcing.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
ptracers_apply_forcing.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ptracers_apply_forcing.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
ptracers_apply_forcing.f: PARAMS.h PTRACERS_FIELDS.h PTRACERS_OPTIONS.h
ptracers_apply_forcing.f: PTRACERS_PARAMS.h PTRACERS_SIZE.h RA_MACROS.h
ptracers_apply_forcing.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ptracers_apply_forcing.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
ptracers_apply_forcing.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ptracers_apply_forcing.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ptracers_apply_forcing.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ptracers_apply_forcing.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ptracers_apply_forcing.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ptracers_apply_forcing.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ptracers_calc_wsurf_tr.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ptracers_calc_wsurf_tr.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
ptracers_calc_wsurf_tr.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
ptracers_calc_wsurf_tr.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
ptracers_calc_wsurf_tr.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ptracers_calc_wsurf_tr.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
ptracers_calc_wsurf_tr.f: PARAMS.h PTRACERS_FIELDS.h PTRACERS_OPTIONS.h
ptracers_calc_wsurf_tr.f: PTRACERS_PARAMS.h PTRACERS_SIZE.h RA_MACROS.h
ptracers_calc_wsurf_tr.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ptracers_calc_wsurf_tr.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
ptracers_calc_wsurf_tr.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ptracers_calc_wsurf_tr.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ptracers_calc_wsurf_tr.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ptracers_calc_wsurf_tr.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ptracers_calc_wsurf_tr.f: SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ptracers_calc_wsurf_tr.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ptracers_check.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
ptracers_check.f: GAD.h GAD_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
ptracers_check.f: PTRACERS_OPTIONS.h PTRACERS_PARAMS.h PTRACERS_SIZE.h SIZE.h
ptracers_check.f: /usr/include/stdc-predef.h
ptracers_check_pickup.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ptracers_check_pickup.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
ptracers_check_pickup.f: PTRACERS_OPTIONS.h PTRACERS_PARAMS.h PTRACERS_SIZE.h
ptracers_check_pickup.f: PTRACERS_START.h SIZE.h /usr/include/stdc-predef.h
ptracers_convect.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
ptracers_convect.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h
ptracers_convect.f: PTRACERS_FIELDS.h PTRACERS_OPTIONS.h PTRACERS_PARAMS.h
ptracers_convect.f: PTRACERS_SIZE.h PTRACERS_START.h SIZE.h tamc.h
ptracers_convect.f: /usr/include/stdc-predef.h
ptracers_debug.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
ptracers_debug.f: PACKAGES_CONFIG.h PTRACERS_FIELDS.h PTRACERS_OPTIONS.h
ptracers_debug.f: PTRACERS_PARAMS.h PTRACERS_SIZE.h SIZE.h
ptracers_debug.f: /usr/include/stdc-predef.h
ptracers_diagnostics_init.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ptracers_diagnostics_init.f: EEPARAMS.h GAD.h PACKAGES_CONFIG.h PARAMS.h
ptracers_diagnostics_init.f: PTRACERS_OPTIONS.h PTRACERS_PARAMS.h
ptracers_diagnostics_init.f: PTRACERS_SIZE.h SIZE.h /usr/include/stdc-predef.h
ptracers_diagnostics_state.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ptracers_diagnostics_state.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
ptracers_diagnostics_state.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ptracers_diagnostics_state.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
ptracers_diagnostics_state.f: FCORI_MACROS.h GRID.h GRID_MACROS.h
ptracers_diagnostics_state.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ptracers_diagnostics_state.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
ptracers_diagnostics_state.f: PARAMS.h PTRACERS_FIELDS.h PTRACERS_OPTIONS.h
ptracers_diagnostics_state.f: PTRACERS_PARAMS.h PTRACERS_SIZE.h RA_MACROS.h
ptracers_diagnostics_state.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ptracers_diagnostics_state.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
ptracers_diagnostics_state.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ptracers_diagnostics_state.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ptracers_diagnostics_state.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ptracers_diagnostics_state.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ptracers_diagnostics_state.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ptracers_diagnostics_state.f: /usr/include/stdc-predef.h XC_MACROS.h
ptracers_diagnostics_state.f: YC_MACROS.h
ptracers_dyn_state_data_mod.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ptracers_dyn_state_data_mod.f: PACKAGES_CONFIG.h PTRACERS_OPTIONS.h
ptracers_dyn_state_data_mod.f: /usr/include/stdc-predef.h
ptracers_dyn_state_mod.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ptracers_dyn_state_mod.f: PACKAGES_CONFIG.h PTRACERS_OPTIONS.h
ptracers_dyn_state_mod.f: /usr/include/stdc-predef.h
ptracers_fields_blocking_exch.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ptracers_fields_blocking_exch.f: EEPARAMS.h GAD_OPTIONS.h PACKAGES_CONFIG.h
ptracers_fields_blocking_exch.f: PARAMS.h PTRACERS_FIELDS.h PTRACERS_MOD.h
ptracers_fields_blocking_exch.f: PTRACERS_OPTIONS.h PTRACERS_PARAMS.h
ptracers_fields_blocking_exch.f: PTRACERS_SIZE.h PTRACERS_START.h SIZE.h
ptracers_fields_blocking_exch.f: /usr/include/stdc-predef.h
ptracers_forcing_surf.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ptracers_forcing_surf.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
ptracers_forcing_surf.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h
ptracers_forcing_surf.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h FFIELDS.h
ptracers_forcing_surf.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
ptracers_forcing_surf.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
ptracers_forcing_surf.f: PACKAGES_CONFIG.h PARAMS.h PTRACERS_FIELDS.h
ptracers_forcing_surf.f: PTRACERS_OPTIONS.h PTRACERS_PARAMS.h PTRACERS_SIZE.h
ptracers_forcing_surf.f: PTRACERS_START.h RA_MACROS.h RAS_MACROS.h
ptracers_forcing_surf.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ptracers_forcing_surf.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ptracers_forcing_surf.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ptracers_forcing_surf.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ptracers_forcing_surf.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ptracers_forcing_surf.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
ptracers_forcing_surf.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ptracers_forcing_surf.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ptracers_init_fixed.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
ptracers_init_fixed.f: GAD.h PACKAGES_CONFIG.h PARAMS.h PTRACERS_MOD.h
ptracers_init_fixed.f: PTRACERS_OPTIONS.h PTRACERS_PARAMS.h PTRACERS_SIZE.h
ptracers_init_fixed.f: SIZE.h /usr/include/stdc-predef.h
ptracers_init_varia.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ptracers_init_varia.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
ptracers_init_varia.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
ptracers_init_varia.f: EEPARAMS.h FCORI_MACROS.h GAD.h GAD_OPTIONS.h GRID.h
ptracers_init_varia.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
ptracers_init_varia.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
ptracers_init_varia.f: PACKAGES_CONFIG.h PARAMS.h PTRACERS_FIELDS.h
ptracers_init_varia.f: PTRACERS_MOD.h PTRACERS_OPTIONS.h PTRACERS_PARAMS.h
ptracers_init_varia.f: PTRACERS_SIZE.h PTRACERS_START.h RA_MACROS.h
ptracers_init_varia.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ptracers_init_varia.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
ptracers_init_varia.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ptracers_init_varia.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ptracers_init_varia.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ptracers_init_varia.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ptracers_init_varia.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ptracers_init_varia.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ptracers_integrate.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
ptracers_integrate.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
ptracers_integrate.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
ptracers_integrate.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GAD.h GRID.h
ptracers_integrate.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
ptracers_integrate.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
ptracers_integrate.f: PACKAGES_CONFIG.h PARAMS.h PTRACERS_FIELDS.h
ptracers_integrate.f: PTRACERS_MOD.h PTRACERS_OPTIONS.h PTRACERS_PARAMS.h
ptracers_integrate.f: PTRACERS_SIZE.h PTRACERS_START.h RA_MACROS.h
ptracers_integrate.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
ptracers_integrate.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ptracers_integrate.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ptracers_integrate.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ptracers_integrate.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h tamc.h
ptracers_integrate.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ptracers_integrate.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ptracers_mnc_init.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
ptracers_mnc_init.f: PACKAGES_CONFIG.h PARAMS.h PTRACERS_OPTIONS.h
ptracers_mnc_init.f: PTRACERS_PARAMS.h PTRACERS_SIZE.h SIZE.h
ptracers_mnc_init.f: /usr/include/stdc-predef.h
ptracers_monitor_ad.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
ptracers_monitor_ad.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
ptracers_monitor_ad.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
ptracers_monitor_ad.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
ptracers_monitor_ad.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
ptracers_monitor_ad.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h MONITOR.h
ptracers_monitor_ad.f: PACKAGES_CONFIG.h PARAMS.h ptracers_adcommon.h
ptracers_monitor_ad.f: PTRACERS_FIELDS.h PTRACERS_OPTIONS.h PTRACERS_PARAMS.h
ptracers_monitor_ad.f: PTRACERS_SIZE.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
ptracers_monitor_ad.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ptracers_monitor_ad.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
ptracers_monitor_ad.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ptracers_monitor_ad.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ptracers_monitor_ad.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ptracers_monitor_ad.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ptracers_monitor_ad.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
ptracers_monitor_ad.f: XC_MACROS.h YC_MACROS.h
ptracers_monitor.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ptracers_monitor.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
ptracers_monitor.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
ptracers_monitor.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ptracers_monitor.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
ptracers_monitor.f: MASKW_MACROS.h MONITOR.h PACKAGES_CONFIG.h PARAMS.h
ptracers_monitor.f: PTRACERS_FIELDS.h PTRACERS_OPTIONS.h PTRACERS_PARAMS.h
ptracers_monitor.f: PTRACERS_SIZE.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
ptracers_monitor.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
ptracers_monitor.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ptracers_monitor.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ptracers_monitor.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ptracers_monitor.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ptracers_monitor.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ptracers_output.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
ptracers_output.f: PACKAGES_CONFIG.h PARAMS.h PTRACERS_OPTIONS.h
ptracers_output.f: PTRACERS_PARAMS.h PTRACERS_SIZE.h SIZE.h
ptracers_output.f: /usr/include/stdc-predef.h
ptracers_readparms.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
ptracers_readparms.f: GAD_OPTIONS.h PACKAGES_CONFIG.h PARAMS.h
ptracers_readparms.f: PTRACERS_OPTIONS.h PTRACERS_PARAMS.h PTRACERS_SIZE.h
ptracers_readparms.f: SIZE.h /usr/include/stdc-predef.h
ptracers_read_pickup.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ptracers_read_pickup.f: EEPARAMS.h GAD.h GAD_OPTIONS.h PACKAGES_CONFIG.h
ptracers_read_pickup.f: PARAMS.h PTRACERS_FIELDS.h PTRACERS_MOD.h
ptracers_read_pickup.f: PTRACERS_OPTIONS.h PTRACERS_PARAMS.h PTRACERS_SIZE.h
ptracers_read_pickup.f: PTRACERS_START.h SIZE.h /usr/include/stdc-predef.h
ptracers_reset.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ptracers_reset.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
ptracers_reset.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
ptracers_reset.f: FCORI_MACROS.h GAD.h GAD_OPTIONS.h GRID.h GRID_MACROS.h
ptracers_reset.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
ptracers_reset.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h PTRACERS_FIELDS.h
ptracers_reset.f: PTRACERS_MOD.h PTRACERS_OPTIONS.h PTRACERS_PARAMS.h
ptracers_reset.f: PTRACERS_SIZE.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
ptracers_reset.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
ptracers_reset.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
ptracers_reset.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ptracers_reset.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ptracers_reset.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ptracers_reset.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
ptracers_set_iolabel.f: /usr/include/stdc-predef.h
ptracers_switch_onoff.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ptracers_switch_onoff.f: EEPARAMS.h PACKAGES_CONFIG.h PTRACERS_OPTIONS.h
ptracers_switch_onoff.f: PTRACERS_PARAMS.h PTRACERS_SIZE.h PTRACERS_START.h
ptracers_switch_onoff.f: SIZE.h /usr/include/stdc-predef.h
ptracers_timeave.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
ptracers_timeave.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
ptracers_timeave.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
ptracers_timeave.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
ptracers_timeave.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
ptracers_timeave.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
ptracers_timeave.f: PTRACERS_FIELDS.h PTRACERS_OPTIONS.h PTRACERS_PARAMS.h
ptracers_timeave.f: PTRACERS_SIZE.h PTRACERS_TAVE.h RA_MACROS.h RAS_MACROS.h
ptracers_timeave.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
ptracers_timeave.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ptracers_timeave.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
ptracers_timeave.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
ptracers_timeave.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
ptracers_timeave.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
ptracers_timeave.f: YC_MACROS.h
ptracers_turnoff_io.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
ptracers_turnoff_io.f: PACKAGES_CONFIG.h PTRACERS_OPTIONS.h PTRACERS_PARAMS.h
ptracers_turnoff_io.f: PTRACERS_SIZE.h SIZE.h /usr/include/stdc-predef.h
ptracers_write_pickup.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ptracers_write_pickup.f: EEPARAMS.h GAD.h GAD_OPTIONS.h PACKAGES_CONFIG.h
ptracers_write_pickup.f: PARAMS.h PTRACERS_FIELDS.h PTRACERS_MOD.h
ptracers_write_pickup.f: PTRACERS_OPTIONS.h PTRACERS_PARAMS.h PTRACERS_SIZE.h
ptracers_write_pickup.f: SIZE.h /usr/include/stdc-predef.h
ptracers_write_state.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ptracers_write_state.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
ptracers_write_state.f: PTRACERS_FIELDS.h PTRACERS_OPTIONS.h PTRACERS_PARAMS.h
ptracers_write_state.f: PTRACERS_SIZE.h SIZE.h /usr/include/stdc-predef.h
ptracers_write_timeave.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ptracers_write_timeave.f: EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h
ptracers_write_timeave.f: PTRACERS_OPTIONS.h PTRACERS_PARAMS.h PTRACERS_SIZE.h
ptracers_write_timeave.f: PTRACERS_TAVE.h SIZE.h /usr/include/stdc-predef.h
ptracers_zonal_filt_apply.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
ptracers_zonal_filt_apply.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
ptracers_zonal_filt_apply.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
ptracers_zonal_filt_apply.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
ptracers_zonal_filt_apply.f: FCORI_MACROS.h GRID.h GRID_MACROS.h
ptracers_zonal_filt_apply.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
ptracers_zonal_filt_apply.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
ptracers_zonal_filt_apply.f: PARAMS.h PTRACERS_FIELDS.h PTRACERS_OPTIONS.h
ptracers_zonal_filt_apply.f: PTRACERS_PARAMS.h PTRACERS_SIZE.h
ptracers_zonal_filt_apply.f: PTRACERS_START.h RA_MACROS.h RAS_MACROS.h
ptracers_zonal_filt_apply.f: RAW_MACROS.h RECIP_DXC_MACROS.h
ptracers_zonal_filt_apply.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
ptracers_zonal_filt_apply.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
ptracers_zonal_filt_apply.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
ptracers_zonal_filt_apply.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
ptracers_zonal_filt_apply.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
ptracers_zonal_filt_apply.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
ptracers_zonal_filt_apply.f: /usr/include/stdc-predef.h XC_MACROS.h
ptracers_zonal_filt_apply.f: YC_MACROS.h
read_fld_xy_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
read_fld_xy_rl.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
read_fld_xy_rl.f: /usr/include/stdc-predef.h
read_fld_xy_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
read_fld_xy_rs.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
read_fld_xy_rs.f: /usr/include/stdc-predef.h
read_fld_xyz_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
read_fld_xyz_rl.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
read_fld_xyz_rl.f: /usr/include/stdc-predef.h
read_fld_xyz_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
read_fld_xyz_rs.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
read_fld_xyz_rs.f: /usr/include/stdc-predef.h
read_glvec_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
read_glvec_rl.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
read_glvec_rl.f: /usr/include/stdc-predef.h
read_glvec_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
read_glvec_rs.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
read_glvec_rs.f: /usr/include/stdc-predef.h
read_mflds.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
read_mflds.f: PACKAGES_CONFIG.h PARAMS.h RW_MFLDS.h RW_OPTIONS.h SIZE.h
read_mflds.f: /usr/include/stdc-predef.h
read_pickup.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DYNVARS.h
read_pickup.f: EEPARAMS.h FFIELDS.h GAD.h NH_VARS.h PACKAGES_CONFIG.h PARAMS.h
read_pickup.f: RESTART.h SIZE.h SURFACE.h /usr/include/stdc-predef.h
read_rec.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
read_rec.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
read_rec.f: /usr/include/stdc-predef.h
remove_mean.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
remove_mean.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
remove_mean.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
remove_mean.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
remove_mean.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
remove_mean.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
remove_mean.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
remove_mean.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
remove_mean.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
remove_mean.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
remove_mean.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
remove_mean.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
reset_halo.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
reset_halo.f: /usr/include/stdc-predef.h
reset_nlfs_vars.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
reset_nlfs_vars.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
reset_nlfs_vars.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
reset_nlfs_vars.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
reset_nlfs_vars.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
reset_nlfs_vars.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
reset_nlfs_vars.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
reset_nlfs_vars.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
reset_nlfs_vars.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
reset_nlfs_vars.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
reset_nlfs_vars.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
reset_nlfs_vars.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
rotate_spherical_polar_grid.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
rotate_spherical_polar_grid.f: EEPARAMS.h PARAMS.h SIZE.h
rotate_spherical_polar_grid.f: /usr/include/stdc-predef.h
rotate_uv2en.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
rotate_uv2en.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
rotate_uv2en.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
rotate_uv2en.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
rotate_uv2en.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
rotate_uv2en.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
rotate_uv2en.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
rotate_uv2en.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
rotate_uv2en.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
rotate_uv2en.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
rotate_uv2en.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
rotate_uv2en.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
rw_get_suffix.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
rw_get_suffix.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
rw_get_suffix.f: /usr/include/stdc-predef.h
salt_fill.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
salt_fill.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
salt_fill.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GAD_OPTIONS.h
salt_fill.f: GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
salt_fill.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
salt_fill.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
salt_fill.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
salt_fill.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
salt_fill.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
salt_fill.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
salt_fill.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
salt_integrate.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
salt_integrate.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
salt_integrate.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
salt_integrate.f: DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GAD.h
salt_integrate.f: GAD_OPTIONS.h GAD_SOM_VARS.h GRID.h GRID_MACROS.h
salt_integrate.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
salt_integrate.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
salt_integrate.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
salt_integrate.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
salt_integrate.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
salt_integrate.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
salt_integrate.f: RECIP_HFACW_MACROS.h RESTART.h SIZE.h tamc.h
salt_integrate.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
salt_integrate.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
scatter_2d_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
scatter_2d_r4.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
scatter_2d_r4.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
scatter_2d_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
scatter_2d_r8.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
scatter_2d_r8.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
scatter_2d_wh_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
scatter_2d_wh_r4.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
scatter_2d_wh_r4.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
scatter_2d_wh_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
scatter_2d_wh_r8.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
scatter_2d_wh_r8.f: PACKAGES_CONFIG.h SIZE.h /usr/include/stdc-predef.h
scatter_vec_r4.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
scatter_vec_r4.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
scatter_vec_r4.f: SIZE.h /usr/include/stdc-predef.h
scatter_vec_r8.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
scatter_vec_r8.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
scatter_vec_r8.f: SIZE.h /usr/include/stdc-predef.h
scatter_xz.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
scatter_xz.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
scatter_xz.f: SIZE.h /usr/include/stdc-predef.h
scatter_yz.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
scatter_yz.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h
scatter_yz.f: SIZE.h /usr/include/stdc-predef.h
seawater.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
seawater.f: /usr/include/stdc-predef.h
set_defaults.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
set_defaults.f: PACKAGES_CONFIG.h PARAMS.h SET_GRID.h SIZE.h
set_defaults.f: /usr/include/stdc-predef.h
set_grid_factors.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
set_grid_factors.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
set_grid_factors.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
set_grid_factors.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
set_grid_factors.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
set_grid_factors.f: MASKW_MACROS.h PARAMS.h RA_MACROS.h RAS_MACROS.h
set_grid_factors.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
set_grid_factors.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
set_grid_factors.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
set_grid_factors.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
set_grid_factors.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
set_grid_factors.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
set_grid_factors.f: YC_MACROS.h
set_parms.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h EOS.h
set_parms.f: MOM_COMMON_OPTIONS.h MOM_VISC.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
set_parms.f: /usr/include/stdc-predef.h
set_ref_state.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
set_ref_state.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
set_ref_state.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h EOS.h
set_ref_state.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
set_ref_state.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
set_ref_state.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
set_ref_state.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
set_ref_state.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
set_ref_state.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
set_ref_state.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
set_ref_state.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
set_ref_state.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
set_write_global_fld.f: CPP_EEMACROS.h CPP_EEOPTIONS.h
set_write_global_fld.f: /usr/include/stdc-predef.h
solve_for_pressure.f: AUTODIFF_PARAMS.h CD_CODE_VARS.h CPP_EEMACROS.h
solve_for_pressure.f: CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
solve_for_pressure.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
solve_for_pressure.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
solve_for_pressure.f: FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h
solve_for_pressure.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
solve_for_pressure.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
solve_for_pressure.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
solve_for_pressure.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
solve_for_pressure.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
solve_for_pressure.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
solve_for_pressure.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
solve_for_pressure.f: SOLVE_FOR_PRESSURE.h SURFACE.h TANPHIATU_MACROS.h
solve_for_pressure.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
solve_for_pressure.f: XC_MACROS.h YC_MACROS.h
solve_pentadiagonal.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
solve_pentadiagonal.f: CPP_OPTIONS.h EEPARAMS.h PACKAGES_CONFIG.h SIZE.h
solve_pentadiagonal.f: /usr/include/stdc-predef.h
solve_tridiagonal.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
solve_tridiagonal.f: SIZE.h /usr/include/stdc-predef.h
solve_uv_tridiago.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
solve_uv_tridiago.f: SIZE.h /usr/include/stdc-predef.h
state_summary.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
state_summary.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
state_summary.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
state_summary.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
state_summary.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
state_summary.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
state_summary.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
state_summary.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
state_summary.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
state_summary.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
state_summary.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
state_summary.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
stergloh_output.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ECCO.h
stergloh_output.f: ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h PACKAGES_CONFIG.h
stergloh_output.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
stop_if_error.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
stop_if_error.f: /usr/include/stdc-predef.h
swfrac.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h PACKAGES_CONFIG.h
swfrac.f: /usr/include/stdc-predef.h
taueddy_init_varia.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
taueddy_init_varia.f: FFIELDS.h PARAMS.h SIZE.h /usr/include/stdc-predef.h
taueddy_tendency_apply.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
taueddy_tendency_apply.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
taueddy_tendency_apply.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
taueddy_tendency_apply.f: EEPARAMS.h FCORI_MACROS.h FFIELDS.h GRID.h
taueddy_tendency_apply.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
taueddy_tendency_apply.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
taueddy_tendency_apply.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
taueddy_tendency_apply.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
taueddy_tendency_apply.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
taueddy_tendency_apply.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
taueddy_tendency_apply.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
taueddy_tendency_apply.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
taueddy_tendency_apply.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
taueddy_tendency_apply.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
taueddy_tendency_apply.f: XC_MACROS.h YC_MACROS.h
temp_integrate.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
temp_integrate.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
temp_integrate.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h
temp_integrate.f: DYNVARS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GAD.h
temp_integrate.f: GAD_OPTIONS.h GAD_SOM_VARS.h GRID.h GRID_MACROS.h
temp_integrate.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
temp_integrate.f: MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h
temp_integrate.f: RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
temp_integrate.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
temp_integrate.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
temp_integrate.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
temp_integrate.f: RECIP_HFACW_MACROS.h RESTART.h SIZE.h tamc.h
temp_integrate.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h TIMEAVE_OPTIONS.h
temp_integrate.f: TIMEAVE_STATV.h /usr/include/stdc-predef.h XC_MACROS.h
temp_integrate.f: YC_MACROS.h
the_main_loop.f: AUTODIFF.h AUTODIFF_MYFIELDS.h AUTODIFF_OPTIONS.h
the_main_loop.f: AUTODIFF_STORE.h cd_code_ad_check_lev2_dir.h
the_main_loop.f: cd_code_ad_check_lev3_dir.h CD_CODE_VARS.h
the_main_loop.f: checkpoint_lev2_directives.h checkpoint_lev3_directives.h
the_main_loop.f: cost.h COST_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
the_main_loop.f: CPP_OPTIONS.h ctrl_ad_check_lev2_dir.h
the_main_loop.f: ctrl_ad_check_lev3_dir.h ctrl_dummy.h CTRL_GENARR.h ctrl.h
the_main_loop.f: CTRL_OBCS.h CTRL_OPTIONS.h CTRL_SIZE.h DXC_MACROS.h
the_main_loop.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
the_main_loop.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h ecco_cost.h
the_main_loop.f: ECCO.h ECCO_OPTIONS.h ECCO_SIZE.h EEPARAMS.h EOS.h
the_main_loop.f: FCORI_MACROS.h FFIELDS.h gad_ad_check_lev2_dir.h
the_main_loop.f: gad_ad_check_lev3_dir.h GAD.h GAD_OPTIONS.h GAD_SOM_VARS.h
the_main_loop.f: GCHEM_FIELDS.h GCHEM_OPTIONS.h GCHEM_SIZE.h GRID.h
the_main_loop.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
the_main_loop.f: MASKS_MACROS.h MASKW_MACROS.h MOM_FLUXFORM.h
the_main_loop.f: PACKAGES_CONFIG.h PARAMS.h ptracers_ad_check_lev2_dir.h
the_main_loop.f: ptracers_ad_check_lev3_dir.h PTRACERS_FIELDS.h
the_main_loop.f: PTRACERS_SIZE.h PTRACERS_START.h RA_MACROS.h RAS_MACROS.h
the_main_loop.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
the_main_loop.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
the_main_loop.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
the_main_loop.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
the_main_loop.f: RECIP_HFACW_MACROS.h SIZE.h SURFACE.h tamc.h
the_main_loop.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
the_main_loop.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
the_model_main.f: AD_CONFIG.h AUTODIFF_OPTIONS.h CPP_EEMACROS.h
the_model_main.f: CPP_EEOPTIONS.h CPP_OPTIONS.h ctrl.h CTRL_OPTIONS.h
the_model_main.f: DYNVARS.h EEPARAMS.h optim.h PACKAGES_CONFIG.h PARAMS.h
the_model_main.f: SIZE.h tamc.h /usr/include/stdc-predef.h
thermodynamics.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
thermodynamics.f: CPP_OPTIONS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
thermodynamics.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
thermodynamics.f: DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h EOS.h
thermodynamics.f: FCORI_MACROS.h FFIELDS.h GAD.h GRID.h GRID_MACROS.h
thermodynamics.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h KPP.h
thermodynamics.f: KPP_OPTIONS.h MASKS_MACROS.h MASKW_MACROS.h
thermodynamics.f: PACKAGES_CONFIG.h PARAMS.h PTRACERS_FIELDS.h
thermodynamics.f: PTRACERS_PARAMS.h PTRACERS_SIZE.h RA_MACROS.h RAS_MACROS.h
thermodynamics.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
thermodynamics.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
thermodynamics.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
thermodynamics.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
thermodynamics.f: RECIP_HFACW_MACROS.h RESTART.h SIZE.h SURFACE.h tamc.h
thermodynamics.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
thermodynamics.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
timeave_cumul_1k1t.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
timeave_cumul_1k1t.f: /usr/include/stdc-predef.h
timeave_cumul_1t.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
timeave_cumul_1t.f: /usr/include/stdc-predef.h
timeave_cumul_1vfc.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
timeave_cumul_1vfc.f: /usr/include/stdc-predef.h
timeave_cumul_2vfc.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
timeave_cumul_2vfc.f: /usr/include/stdc-predef.h
timeave_cumul_2v.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
timeave_cumul_2v.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
timeave_cumul_2v.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
timeave_cumul_2v.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
timeave_cumul_2v.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h
timeave_cumul_2v.f: MASKW_MACROS.h PACKAGES_CONFIG.h RA_MACROS.h RAS_MACROS.h
timeave_cumul_2v.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
timeave_cumul_2v.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
timeave_cumul_2v.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
timeave_cumul_2v.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
timeave_cumul_2v.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
timeave_cumul_2v.f: TANPHIATV_MACROS.h TIMEAVE_OPTIONS.h
timeave_cumul_2v.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
timeave_cumulate.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
timeave_cumulate.f: /usr/include/stdc-predef.h
timeave_cumul_dif_1t.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
timeave_cumul_dif_1t.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
timeave_cumul_dif_1t.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
timeave_cumul_dif_1t.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
timeave_cumul_dif_1t.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
timeave_cumul_dif_1t.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
timeave_cumul_dif_1t.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
timeave_cumul_dif_1t.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
timeave_cumul_dif_1t.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
timeave_cumul_dif_1t.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
timeave_cumul_dif_1t.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
timeave_cumul_dif_1t.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
timeave_cumul_dif_1t.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
timeave_cumul_dif_1t.f: TANPHIATV_MACROS.h TIMEAVE_OPTIONS.h
timeave_cumul_dif_1t.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
timeave_init_fixed.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
timeave_init_fixed.f: PACKAGES_CONFIG.h PARAMS.h SIZE.h TIMEAVE_OPTIONS.h
timeave_init_fixed.f: /usr/include/stdc-predef.h
timeave_norma_2v.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
timeave_norma_2v.f: /usr/include/stdc-predef.h
timeave_normalize.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
timeave_normalize.f: /usr/include/stdc-predef.h
timeave_reset.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
timeave_reset.f: PACKAGES_CONFIG.h SIZE.h TIMEAVE_OPTIONS.h
timeave_reset.f: /usr/include/stdc-predef.h
timeave_statvars.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
timeave_statvars.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
timeave_statvars.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h
timeave_statvars.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h
timeave_statvars.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
timeave_statvars.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
timeave_statvars.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
timeave_statvars.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
timeave_statvars.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
timeave_statvars.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
timeave_statvars.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
timeave_statvars.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h TIMEAVE_OPTIONS.h
timeave_statvars.f: TIMEAVE_STATV.h /usr/include/stdc-predef.h XC_MACROS.h
timeave_statvars.f: YC_MACROS.h
timeave_statv_write.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
timeave_statv_write.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
timeave_statv_write.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h
timeave_statv_write.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
timeave_statv_write.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
timeave_statv_write.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
timeave_statv_write.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
timeave_statv_write.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
timeave_statv_write.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
timeave_statv_write.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
timeave_statv_write.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
timeave_statv_write.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
timeave_statv_write.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
timeave_statv_write.f: TANPHIATV_MACROS.h TIMEAVE_OPTIONS.h TIMEAVE_STATV.h
timeave_statv_write.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
timeave_surf_flux.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
timeave_surf_flux.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
timeave_surf_flux.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h
timeave_surf_flux.f: EEPARAMS.h FCORI_MACROS.h FFIELDS.h GRID.h GRID_MACROS.h
timeave_surf_flux.f: HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
timeave_surf_flux.f: MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h PARAMS.h
timeave_surf_flux.f: RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
timeave_surf_flux.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
timeave_surf_flux.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
timeave_surf_flux.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
timeave_surf_flux.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
timeave_surf_flux.f: SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
timeave_surf_flux.f: TIMEAVE_OPTIONS.h TIMEAVE_STATV.h
timeave_surf_flux.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
timers.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h EESUPPORT.h
timers.f: /opt/cray/pe/mpich/8.1.23/ofi/crayclang/10.0/include/mpif.h SIZE.h
timers.f: /usr/include/stdc-predef.h
timestep.f: CD_CODE_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
timestep.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
timestep.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
timestep.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
timestep.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h PACKAGES_CONFIG.h
timestep.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h RECIP_DXC_MACROS.h
timestep.f: RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
timestep.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h
timestep.f: RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
timestep.f: RECIP_HFACW_MACROS.h RESTART.h SIZE.h SURFACE.h TANPHIATU_MACROS.h
timestep.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
timestep.f: YC_MACROS.h
timestep_tracer.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
timestep_tracer.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
timestep_tracer.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
timestep_tracer.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
timestep_tracer.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
timestep_tracer.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
timestep_tracer.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
timestep_tracer.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
timestep_tracer.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
timestep_tracer.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
timestep_tracer.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
timestep_tracer.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h XC_MACROS.h
timestep_tracer.f: YC_MACROS.h
timestep_wvel.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
timestep_wvel.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
timestep_wvel.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
timestep_wvel.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
timestep_wvel.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
timestep_wvel.f: NH_VARS.h PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
timestep_wvel.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
timestep_wvel.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
timestep_wvel.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
timestep_wvel.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
timestep_wvel.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
timestep_wvel.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
tracers_correction_step.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
tracers_correction_step.f: DYNVARS.h EEPARAMS.h GAD.h PACKAGES_CONFIG.h
tracers_correction_step.f: PARAMS.h SIZE.h /usr/include/stdc-predef.h
tracers_iigw_correction.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
tracers_iigw_correction.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
tracers_iigw_correction.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYNVARS.h
tracers_iigw_correction.f: DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
tracers_iigw_correction.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h
tracers_iigw_correction.f: HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
tracers_iigw_correction.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
tracers_iigw_correction.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
tracers_iigw_correction.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h
tracers_iigw_correction.f: RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
tracers_iigw_correction.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
tracers_iigw_correction.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h
tracers_iigw_correction.f: RECIP_HFACW_MACROS.h SIZE.h TANPHIATU_MACROS.h
tracers_iigw_correction.f: TANPHIATV_MACROS.h /usr/include/stdc-predef.h
tracers_iigw_correction.f: XC_MACROS.h YC_MACROS.h
turnoff_model_io.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h ECCO.h
turnoff_model_io.f: ECCO_SIZE.h EEPARAMS.h PACKAGES_CONFIG.h PARAMS.h SIZE.h
turnoff_model_io.f: /usr/include/stdc-predef.h
update_cg2d.f: CG2D.h CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h
update_cg2d.f: DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h
update_cg2d.f: DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
update_cg2d.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
update_cg2d.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
update_cg2d.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
update_cg2d.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
update_cg2d.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
update_cg2d.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
update_cg2d.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
update_cg2d.f: SIZE.h SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
update_cg2d.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
update_etah.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
update_etah.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
update_etah.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
update_etah.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
update_etah.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
update_etah.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
update_etah.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
update_etah.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
update_etah.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
update_etah.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
update_etah.f: SIZE.h SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
update_etah.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
update_etaws.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
update_etaws.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
update_etaws.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
update_etaws.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
update_etaws.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
update_etaws.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
update_etaws.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
update_etaws.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
update_etaws.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
update_etaws.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
update_etaws.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
update_etaws.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
update_masks_etc.f: AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
update_masks_etc.f: CPP_OPTIONS.h CTRL_OPTIONS.h DXC_MACROS.h DXF_MACROS.h
update_masks_etc.f: DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h
update_masks_etc.f: DYG_MACROS.h DYU_MACROS.h EEPARAMS.h FCORI_MACROS.h GRID.h
update_masks_etc.f: GRID_MACROS.h HFACC_MACROS.h HFACS_MACROS.h HFACW_MACROS.h
update_masks_etc.f: MASKS_MACROS.h MASKW_MACROS.h optim.h PACKAGES_CONFIG.h
update_masks_etc.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
update_masks_etc.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
update_masks_etc.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
update_masks_etc.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
update_masks_etc.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
update_masks_etc.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
update_masks_etc.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
update_r_star.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
update_r_star.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
update_r_star.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
update_r_star.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
update_r_star.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
update_r_star.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
update_r_star.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
update_r_star.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
update_r_star.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
update_r_star.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
update_r_star.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
update_r_star.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
update_sigma.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
update_sigma.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
update_sigma.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
update_sigma.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
update_sigma.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
update_sigma.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
update_sigma.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
update_sigma.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
update_sigma.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
update_sigma.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
update_sigma.f: SIZE.h SURFACE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
update_sigma.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
update_surf_dr.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
update_surf_dr.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
update_surf_dr.f: DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h EEPARAMS.h
update_surf_dr.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
update_surf_dr.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
update_surf_dr.f: PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
update_surf_dr.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
update_surf_dr.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
update_surf_dr.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
update_surf_dr.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h SURFACE.h
update_surf_dr.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h
update_surf_dr.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
utils.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
utils.f: /usr/include/stdc-predef.h
write_fld_3d_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
write_fld_3d_rl.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
write_fld_3d_rl.f: /usr/include/stdc-predef.h
write_fld_3d_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
write_fld_3d_rs.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
write_fld_3d_rs.f: /usr/include/stdc-predef.h
write_fld_s3d_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
write_fld_s3d_rl.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
write_fld_s3d_rl.f: /usr/include/stdc-predef.h
write_fld_s3d_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
write_fld_s3d_rs.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
write_fld_s3d_rs.f: /usr/include/stdc-predef.h
write_fld_xy_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
write_fld_xy_rl.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
write_fld_xy_rl.f: /usr/include/stdc-predef.h
write_fld_xy_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
write_fld_xy_rs.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
write_fld_xy_rs.f: /usr/include/stdc-predef.h
write_fld_xyz_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
write_fld_xyz_rl.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
write_fld_xyz_rl.f: /usr/include/stdc-predef.h
write_fld_xyz_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
write_fld_xyz_rs.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
write_fld_xyz_rs.f: /usr/include/stdc-predef.h
write_fullarray_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
write_fullarray_rl.f: /usr/include/stdc-predef.h
write_fullarray_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
write_fullarray_rs.f: /usr/include/stdc-predef.h
write_glvec_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
write_glvec_rl.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
write_glvec_rl.f: /usr/include/stdc-predef.h
write_glvec_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
write_glvec_rs.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
write_glvec_rs.f: /usr/include/stdc-predef.h
write_grid.f: AD_CONFIG.h AUTODIFF_OPTIONS.h CPP_EEMACROS.h CPP_EEOPTIONS.h
write_grid.f: CPP_OPTIONS.h DXC_MACROS.h DXF_MACROS.h DXG_MACROS.h
write_grid.f: DXV_MACROS.h DYC_MACROS.h DYF_MACROS.h DYG_MACROS.h DYU_MACROS.h
write_grid.f: EEPARAMS.h FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
write_grid.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
write_grid.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h RAW_MACROS.h
write_grid.f: RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h RECIP_DXG_MACROS.h
write_grid.f: RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h RECIP_DYF_MACROS.h
write_grid.f: RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h RECIP_HFACC_MACROS.h
write_grid.f: RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h SIZE.h
write_grid.f: TANPHIATU_MACROS.h TANPHIATV_MACROS.h /usr/include/stdc-predef.h
write_grid.f: XC_MACROS.h YC_MACROS.h
write_local_rl.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
write_local_rl.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
write_local_rl.f: /usr/include/stdc-predef.h
write_local_rs.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
write_local_rs.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
write_local_rs.f: /usr/include/stdc-predef.h
write_pickup.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DYNVARS.h
write_pickup.f: EEPARAMS.h FFIELDS.h GAD.h NH_VARS.h PACKAGES_CONFIG.h
write_pickup.f: PARAMS.h RESTART.h SIZE.h SURFACE.h /usr/include/stdc-predef.h
write_rec.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h EEPARAMS.h
write_rec.f: PACKAGES_CONFIG.h PARAMS.h RW_OPTIONS.h SIZE.h
write_rec.f: /usr/include/stdc-predef.h
write_state.f: CPP_EEMACROS.h CPP_EEOPTIONS.h CPP_OPTIONS.h DXC_MACROS.h
write_state.f: DXF_MACROS.h DXG_MACROS.h DXV_MACROS.h DYC_MACROS.h
write_state.f: DYF_MACROS.h DYG_MACROS.h DYNVARS.h DYU_MACROS.h EEPARAMS.h
write_state.f: FCORI_MACROS.h GRID.h GRID_MACROS.h HFACC_MACROS.h
write_state.f: HFACS_MACROS.h HFACW_MACROS.h MASKS_MACROS.h MASKW_MACROS.h
write_state.f: PACKAGES_CONFIG.h PARAMS.h RA_MACROS.h RAS_MACROS.h
write_state.f: RAW_MACROS.h RECIP_DXC_MACROS.h RECIP_DXF_MACROS.h
write_state.f: RECIP_DXG_MACROS.h RECIP_DXV_MACROS.h RECIP_DYC_MACROS.h
write_state.f: RECIP_DYF_MACROS.h RECIP_DYG_MACROS.h RECIP_DYU_MACROS.h
write_state.f: RECIP_HFACC_MACROS.h RECIP_HFACS_MACROS.h RECIP_HFACW_MACROS.h
write_state.f: SIZE.h TANPHIATU_MACROS.h TANPHIATV_MACROS.h
write_state.f: /usr/include/stdc-predef.h XC_MACROS.h YC_MACROS.h
write_utils.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
write_utils.f: /usr/include/stdc-predef.h
zero_adj.f: CPP_EEMACROS.h CPP_EEOPTIONS.h EEPARAMS.h SIZE.h
zero_adj.f: /usr/include/stdc-predef.h
addummy_for_etan.f:
addummy_in_stepping.f:
ptracers_dyn_state_data_mod.f: ptracers_dyn_state_mod.o
PTRACERS_MOD.h: ptracers_dyn_state_mod.o ptracers_dyn_state_data_mod.o
