/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_2(char*, char *);
extern void execute_3(char*, char *);
extern void execute_303(char*, char *);
extern void execute_304(char*, char *);
extern void execute_5(char*, char *);
extern void vlog_const_rhs_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_275(char*, char *);
extern void execute_276(char*, char *);
extern void execute_277(char*, char *);
extern void execute_278(char*, char *);
extern void execute_279(char*, char *);
extern void execute_280(char*, char *);
extern void execute_281(char*, char *);
extern void execute_282(char*, char *);
extern void execute_283(char*, char *);
extern void execute_284(char*, char *);
extern void execute_285(char*, char *);
extern void execute_286(char*, char *);
extern void execute_287(char*, char *);
extern void execute_288(char*, char *);
extern void execute_289(char*, char *);
extern void execute_290(char*, char *);
extern void execute_291(char*, char *);
extern void execute_292(char*, char *);
extern void execute_293(char*, char *);
extern void execute_294(char*, char *);
extern void execute_295(char*, char *);
extern void execute_296(char*, char *);
extern void execute_297(char*, char *);
extern void execute_298(char*, char *);
extern void execute_299(char*, char *);
extern void execute_300(char*, char *);
extern void execute_301(char*, char *);
extern void execute_302(char*, char *);
extern void execute_59(char*, char *);
extern void execute_60(char*, char *);
extern void vlog_timingcheck_execute_0(char*, char*, char*);
extern void execute_63(char*, char *);
extern void execute_8(char*, char *);
extern void execute_64(char*, char *);
extern void execute_11(char*, char *);
extern void execute_66(char*, char *);
extern void execute_67(char*, char *);
extern void execute_65(char*, char *);
extern void execute_14(char*, char *);
extern void execute_69(char*, char *);
extern void execute_70(char*, char *);
extern void execute_71(char*, char *);
extern void execute_72(char*, char *);
extern void execute_68(char*, char *);
extern void execute_17(char*, char *);
extern void execute_74(char*, char *);
extern void execute_75(char*, char *);
extern void execute_76(char*, char *);
extern void execute_77(char*, char *);
extern void execute_78(char*, char *);
extern void execute_79(char*, char *);
extern void execute_80(char*, char *);
extern void execute_81(char*, char *);
extern void execute_73(char*, char *);
extern void execute_20(char*, char *);
extern void execute_21(char*, char *);
extern void execute_82(char*, char *);
extern void execute_26(char*, char *);
extern void execute_86(char*, char *);
extern void execute_87(char*, char *);
extern void execute_88(char*, char *);
extern void execute_34(char*, char *);
extern void execute_35(char*, char *);
extern void execute_36(char*, char *);
extern void execute_37(char*, char *);
extern void execute_98(char*, char *);
extern void execute_99(char*, char *);
extern void execute_100(char*, char *);
extern void execute_101(char*, char *);
extern void execute_102(char*, char *);
extern void execute_103(char*, char *);
extern void execute_104(char*, char *);
extern void execute_105(char*, char *);
extern void execute_106(char*, char *);
extern void execute_107(char*, char *);
extern void execute_108(char*, char *);
extern void execute_109(char*, char *);
extern void execute_110(char*, char *);
extern void execute_111(char*, char *);
extern void execute_112(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_1(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_2(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_79(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_80(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_81(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_82(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_83(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_84(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_85(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_86(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_87(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_88(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_89(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_90(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_91(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_92(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_93(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_94(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_95(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_96(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_97(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_98(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_99(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_100(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_101(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_102(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_27(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_28(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_29(char*, char *);
extern void timing_checker_condition_m_e213164e_af79f1dc_30(char*, char *);
extern void execute_131(char*, char *);
extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_137(char*, char *);
extern void execute_138(char*, char *);
extern void execute_139(char*, char *);
extern void execute_140(char*, char *);
extern void execute_56(char*, char *);
extern void execute_57(char*, char *);
extern void execute_58(char*, char *);
extern void execute_305(char*, char *);
extern void execute_306(char*, char *);
extern void execute_307(char*, char *);
extern void execute_308(char*, char *);
extern void execute_309(char*, char *);
extern void transaction_2(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_6(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_7(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_8(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_9(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_10(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_11(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_12(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_13(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_14(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_15(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_16(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_17(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_18(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_19(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_20(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_21(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_22(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_23(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_24(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_25(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_26(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_27(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_28(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_29(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_30(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_31(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_32(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_33(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_34(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_35(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_36(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_37(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_38(char*, char*, unsigned, unsigned, unsigned);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_82(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_109(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_136(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_163(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[172] = {(funcp)execute_2, (funcp)execute_3, (funcp)execute_303, (funcp)execute_304, (funcp)execute_5, (funcp)vlog_const_rhs_process_execute_0_fast_no_reg_no_agg, (funcp)execute_275, (funcp)execute_276, (funcp)execute_277, (funcp)execute_278, (funcp)execute_279, (funcp)execute_280, (funcp)execute_281, (funcp)execute_282, (funcp)execute_283, (funcp)execute_284, (funcp)execute_285, (funcp)execute_286, (funcp)execute_287, (funcp)execute_288, (funcp)execute_289, (funcp)execute_290, (funcp)execute_291, (funcp)execute_292, (funcp)execute_293, (funcp)execute_294, (funcp)execute_295, (funcp)execute_296, (funcp)execute_297, (funcp)execute_298, (funcp)execute_299, (funcp)execute_300, (funcp)execute_301, (funcp)execute_302, (funcp)execute_59, (funcp)execute_60, (funcp)vlog_timingcheck_execute_0, (funcp)execute_63, (funcp)execute_8, (funcp)execute_64, (funcp)execute_11, (funcp)execute_66, (funcp)execute_67, (funcp)execute_65, (funcp)execute_14, (funcp)execute_69, (funcp)execute_70, (funcp)execute_71, (funcp)execute_72, (funcp)execute_68, (funcp)execute_17, (funcp)execute_74, (funcp)execute_75, (funcp)execute_76, (funcp)execute_77, (funcp)execute_78, (funcp)execute_79, (funcp)execute_80, (funcp)execute_81, (funcp)execute_73, (funcp)execute_20, (funcp)execute_21, (funcp)execute_82, (funcp)execute_26, (funcp)execute_86, (funcp)execute_87, (funcp)execute_88, (funcp)execute_34, (funcp)execute_35, (funcp)execute_36, (funcp)execute_37, (funcp)execute_98, (funcp)execute_99, (funcp)execute_100, (funcp)execute_101, (funcp)execute_102, (funcp)execute_103, (funcp)execute_104, (funcp)execute_105, (funcp)execute_106, (funcp)execute_107, (funcp)execute_108, (funcp)execute_109, (funcp)execute_110, (funcp)execute_111, (funcp)execute_112, (funcp)timing_checker_condition_m_e213164e_af79f1dc_1, (funcp)timing_checker_condition_m_e213164e_af79f1dc_2, (funcp)timing_checker_condition_m_e213164e_af79f1dc_79, (funcp)timing_checker_condition_m_e213164e_af79f1dc_80, (funcp)timing_checker_condition_m_e213164e_af79f1dc_81, (funcp)timing_checker_condition_m_e213164e_af79f1dc_82, (funcp)timing_checker_condition_m_e213164e_af79f1dc_83, (funcp)timing_checker_condition_m_e213164e_af79f1dc_84, (funcp)timing_checker_condition_m_e213164e_af79f1dc_85, (funcp)timing_checker_condition_m_e213164e_af79f1dc_86, (funcp)timing_checker_condition_m_e213164e_af79f1dc_87, (funcp)timing_checker_condition_m_e213164e_af79f1dc_88, (funcp)timing_checker_condition_m_e213164e_af79f1dc_89, (funcp)timing_checker_condition_m_e213164e_af79f1dc_90, (funcp)timing_checker_condition_m_e213164e_af79f1dc_91, (funcp)timing_checker_condition_m_e213164e_af79f1dc_92, (funcp)timing_checker_condition_m_e213164e_af79f1dc_93, (funcp)timing_checker_condition_m_e213164e_af79f1dc_94, (funcp)timing_checker_condition_m_e213164e_af79f1dc_95, (funcp)timing_checker_condition_m_e213164e_af79f1dc_96, (funcp)timing_checker_condition_m_e213164e_af79f1dc_97, (funcp)timing_checker_condition_m_e213164e_af79f1dc_98, (funcp)timing_checker_condition_m_e213164e_af79f1dc_99, (funcp)timing_checker_condition_m_e213164e_af79f1dc_100, (funcp)timing_checker_condition_m_e213164e_af79f1dc_101, (funcp)timing_checker_condition_m_e213164e_af79f1dc_102, (funcp)timing_checker_condition_m_e213164e_af79f1dc_27, (funcp)timing_checker_condition_m_e213164e_af79f1dc_28, (funcp)timing_checker_condition_m_e213164e_af79f1dc_29, (funcp)timing_checker_condition_m_e213164e_af79f1dc_30, (funcp)execute_131, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_137, (funcp)execute_138, (funcp)execute_139, (funcp)execute_140, (funcp)execute_56, (funcp)execute_57, (funcp)execute_58, (funcp)execute_305, (funcp)execute_306, (funcp)execute_307, (funcp)execute_308, (funcp)execute_309, (funcp)transaction_2, (funcp)transaction_3, (funcp)transaction_4, (funcp)transaction_5, (funcp)transaction_6, (funcp)transaction_7, (funcp)transaction_8, (funcp)transaction_9, (funcp)transaction_10, (funcp)transaction_11, (funcp)transaction_12, (funcp)transaction_13, (funcp)transaction_14, (funcp)transaction_15, (funcp)transaction_16, (funcp)transaction_17, (funcp)transaction_18, (funcp)transaction_19, (funcp)transaction_20, (funcp)transaction_21, (funcp)transaction_22, (funcp)transaction_23, (funcp)transaction_24, (funcp)transaction_25, (funcp)transaction_26, (funcp)transaction_27, (funcp)transaction_28, (funcp)transaction_29, (funcp)transaction_30, (funcp)transaction_31, (funcp)transaction_32, (funcp)transaction_33, (funcp)transaction_34, (funcp)transaction_35, (funcp)transaction_36, (funcp)transaction_37, (funcp)transaction_38, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_82, (funcp)transaction_109, (funcp)transaction_136, (funcp)transaction_163};
const int NumRelocateId= 172;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/counter_4bit_tb_time_synth/xsim.reloc",  (void **)funcTab, 172);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/counter_4bit_tb_time_synth/xsim.reloc");
}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/counter_4bit_tb_time_synth/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/counter_4bit_tb_time_synth/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/counter_4bit_tb_time_synth/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/counter_4bit_tb_time_synth/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
