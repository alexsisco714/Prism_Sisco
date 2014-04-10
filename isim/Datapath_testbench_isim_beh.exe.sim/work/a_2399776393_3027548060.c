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
static const char *ng0 = "C:/Users/C16Alex.Sisco/Documents/ISE Projects/PRISM_Sisco/Datapath_shell.vhd";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_2592010699;

char *ieee_p_3499444699_sub_4232465333_3536714472(char *, char *, char *, char *, int );


static void work_a_2399776393_3027548060_p_0(char *t0)
{
    char t20[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 3232U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 7696);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 12849);
    t6 = (t0 + 7904);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB13;

LAB14:    t13 = (unsigned char)0;

LAB15:    if (t13 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB18;

LAB19:    t3 = (unsigned char)0;

LAB20:    if (t3 != 0)
        goto LAB16;

LAB17:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 3272U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3592U);
    t8 = *((char **)t2);
    t2 = (t0 + 7904);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t18 = (t10 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t8, 4U);
    xsi_driver_first_trans_delta(t2, 0U, 4U, 0LL);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 7904);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_delta(t1, 4U, 4U, 0LL);
    goto LAB11;

LAB13:    t2 = (t0 + 1512U);
    t7 = *((char **)t2);
    t16 = *((unsigned char *)t7);
    t17 = (t16 == (unsigned char)3);
    t13 = t17;
    goto LAB15;

LAB16:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 4232U);
    t6 = *((char **)t1);
    t1 = (t0 + 12788U);
    t7 = ieee_p_3499444699_sub_4232465333_3536714472(IEEE_P_3499444699, t20, t6, t1, 1);
    t8 = (t20 + 12U);
    t21 = *((unsigned int *)t8);
    t22 = (1U * t21);
    t14 = (8U != t22);
    if (t14 == 1)
        goto LAB21;

LAB22:    t9 = (t0 + 7904);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    t19 = (t18 + 56U);
    t23 = *((char **)t19);
    memcpy(t23, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB11;

LAB18:    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)2);
    t3 = t13;
    goto LAB20;

LAB21:    xsi_size_not_matching(8U, t22, 0);
    goto LAB22;

}

static void work_a_2399776393_3027548060_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;

LAB0:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 3232U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 7712);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 12857);
    t6 = (t0 + 7968);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1032U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 3272U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3432U);
    t7 = *((char **)t2);
    t2 = (t0 + 7968);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    memcpy(t15, t7, 4U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB11;

}

static void work_a_2399776393_3027548060_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;

LAB0:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 3232U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 7728);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 12861);
    t6 = (t0 + 8032);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 1352U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 3272U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3432U);
    t7 = *((char **)t2);
    t2 = (t0 + 8032);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    memcpy(t15, t7, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

}

static void work_a_2399776393_3027548060_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;

LAB0:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 3232U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 7744);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 12865);
    t6 = (t0 + 8096);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 3272U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 3432U);
    t7 = *((char **)t2);
    t2 = (t0 + 8096);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    memcpy(t15, t7, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

}

static void work_a_2399776393_3027548060_p_4(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 7760);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t1 = (t0 + 3752U);
    t6 = *((char **)t1);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t0 + 12772U);
    t10 = (t0 + 12772U);
    t1 = xsi_base_array_concat(t1, t7, t8, (char)97, t5, t9, (char)97, t6, t10, (char)101);
    t11 = (4U + 4U);
    t12 = (8U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 8160);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB3;

LAB5:    xsi_size_not_matching(8U, t11, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 4232U);
    t5 = *((char **)t1);
    t1 = (t0 + 8160);
    t6 = (t1 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

}

static void work_a_2399776393_3027548060_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;

LAB0:    xsi_set_current_line(189, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 3232U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 7776);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(190, ng0);
    t1 = (t0 + 12869);
    t6 = (t0 + 8224);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 3272U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 3432U);
    t7 = *((char **)t2);
    t2 = (t0 + 8288);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    memcpy(t15, t7, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

}

static void work_a_2399776393_3027548060_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(201, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 12873);
    t12 = (t0 + 8352);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 4U);
    xsi_driver_first_trans_fast_port(t12);

LAB2:    t17 = (t0 + 7792);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3912U);
    t5 = *((char **)t1);
    t1 = (t0 + 8352);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2399776393_3027548060_p_7(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(204, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t3 = (3 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t14 = (t0 + 8416);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t14);

LAB2:    t19 = (t0 + 7808);
    *((int *)t19) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 8416);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2399776393_3027548060_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(205, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 12877);
    t4 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t13 = (t0 + 8480);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 7824);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 8480);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}


extern void work_a_2399776393_3027548060_init()
{
	static char *pe[] = {(void *)work_a_2399776393_3027548060_p_0,(void *)work_a_2399776393_3027548060_p_1,(void *)work_a_2399776393_3027548060_p_2,(void *)work_a_2399776393_3027548060_p_3,(void *)work_a_2399776393_3027548060_p_4,(void *)work_a_2399776393_3027548060_p_5,(void *)work_a_2399776393_3027548060_p_6,(void *)work_a_2399776393_3027548060_p_7,(void *)work_a_2399776393_3027548060_p_8};
	xsi_register_didat("work_a_2399776393_3027548060", "isim/Datapath_testbench_isim_beh.exe.sim/work/a_2399776393_3027548060.didat");
	xsi_register_executes(pe);
}
