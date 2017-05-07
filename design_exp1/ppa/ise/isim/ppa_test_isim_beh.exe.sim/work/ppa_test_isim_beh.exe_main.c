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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003461853040_1664960550_init();
    work_m_00000000000486780844_3840101140_init();
    work_m_00000000001754444305_2112494254_init();
    work_m_00000000000163344014_2456222467_init();
    work_m_00000000001246063429_0319651835_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001246063429_0319651835");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
