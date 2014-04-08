/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/C16Alex.Sisco/Documents/ISE Projects/PRISM_Sisco/ALU_shell.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_3077134611_1035706684(char *, char *, char *, char *, int );
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_2725559894_p_0(char *t0)
{
    char t26[16];
    char t41[16];
    char t42[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5031);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB12:    t5 = (t0 + 5034);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB13:    t8 = (t0 + 5037);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB14:    t11 = (t0 + 5040);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB15:    t14 = (t0 + 5043);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB16:    t17 = (t0 + 5046);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB17:    t20 = (t0 + 5049);
    t22 = xsi_mem_cmp(t20, t2, 3U);
    if (t22 == 1)
        goto LAB9;

LAB18:    t23 = (t0 + 5052);
    t25 = xsi_mem_cmp(t23, t2, 3U);
    if (t25 == 1)
        goto LAB10;

LAB19:
LAB11:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 3072);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t1 = (t0 + 2992);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(63, ng0);
    t27 = (t0 + 1352U);
    t28 = *((char **)t27);
    t27 = (t0 + 4980U);
    t29 = (t0 + 1192U);
    t30 = *((char **)t29);
    t29 = (t0 + 4964U);
    t31 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t26, t28, t27, t30, t29);
    t32 = (t26 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (1U * t33);
    t35 = (4U != t34);
    if (t35 == 1)
        goto LAB21;

LAB22:    t36 = (t0 + 3072);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t31, 4U);
    xsi_driver_first_trans_fast_port(t36);
    goto LAB2;

LAB4:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4980U);
    t3 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t41, t2, t1);
    t5 = (t0 + 5055);
    t8 = (t42 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t4 = (2 - 0);
    t33 = (t4 * 1);
    t33 = (t33 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t33;
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t26, t3, t41, t5, t42);
    t11 = (t26 + 12U);
    t33 = *((unsigned int *)t11);
    t34 = (1U * t33);
    t35 = (4U != t34);
    if (t35 == 1)
        goto LAB23;

LAB24:    t12 = (t0 + 3072);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 4U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB5:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4980U);
    t3 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t26, t2, t1);
    t5 = (t26 + 12U);
    t33 = *((unsigned int *)t5);
    t34 = (1U * t33);
    t35 = (4U != t34);
    if (t35 == 1)
        goto LAB25;

LAB26:    t6 = (t0 + 3072);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB6:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4980U);
    t3 = ieee_p_1242562249_sub_3077134611_1035706684(IEEE_P_1242562249, t26, t2, t1, 1);
    t5 = (t0 + 3072);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB2;

LAB7:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4980U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 4964U);
    t6 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t33 = *((unsigned int *)t8);
    t34 = (1U * t33);
    t35 = (4U != t34);
    if (t35 == 1)
        goto LAB27;

LAB28:    t9 = (t0 + 3072);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 4U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB8:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 3072);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4980U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 4964U);
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t33 = *((unsigned int *)t8);
    t34 = (1U * t33);
    t35 = (4U != t34);
    if (t35 == 1)
        goto LAB29;

LAB30:    t9 = (t0 + 3072);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 4U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB10:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 3072);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB20:;
LAB21:    xsi_size_not_matching(4U, t34, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(4U, t34, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(4U, t34, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(4U, t34, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(4U, t34, 0);
    goto LAB30;

}


extern void work_a_0832606739_2725559894_init()
{
	static char *pe[] = {(void *)work_a_0832606739_2725559894_p_0};
	xsi_register_didat("work_a_0832606739_2725559894", "isim/ALU_testbench_isim_beh.exe.sim/work/a_0832606739_2725559894.didat");
	xsi_register_executes(pe);
}
