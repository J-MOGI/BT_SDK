#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

/*
 *  板级配置选择
 */

// #define CONFIG_BOARD_AC6969A_DEMO
// #define CONFIG_BOARD_AC636N_DEMO
// #define CONFIG_BOARD_AC636N_FMY        //CONFIG_APP_FINDMY
// #define CONFIG_BOARD_AC6368B_DONGLE //CONFIG_APP_DONGLE
// #define CONFIG_BOARD_AC6363F_DEMO
// #define CONFIG_BOARD_AC6366C_DEMO
// #define CONFIG_BOARD_AC6368A_DEMO
// #define CONFIG_BOARD_AC6369F_DEMO
// #define CONFIG_BOARD_AC6369C_DEMO

/* 如果工程未通过编译命令行选择具体板级，这里默认使用AC636N配置 */
#if (!defined(CONFIG_BOARD_AC6969A_DEMO) \
    && !defined(CONFIG_BOARD_AC636N_DEMO) \
    && !defined(CONFIG_BOARD_AC636N_FMY) \
    && !defined(CONFIG_BOARD_AC6368B_DONGLE) \
    && !defined(CONFIG_BOARD_AC6363F_DEMO) \
    && !defined(CONFIG_BOARD_AC6366C_DEMO) \
    && !defined(CONFIG_BOARD_AC6368A_DEMO) \
    && !defined(CONFIG_BOARD_AC6369F_DEMO) \
    && !defined(CONFIG_BOARD_AC6369C_DEMO))
#define CONFIG_BOARD_AC636N_DEMO
#endif

#include "board_ac6969a_demo_cfg.h"
#include "board_ac636n_demo_cfg.h"
#include "board_ac6368b_dongle_cfg.h"
#include "board_ac6363f_demo_cfg.h"
#include "board_ac6366c_demo_cfg.h"
#include "board_ac6368a_demo_cfg.h"
#include "board_ac6369f_demo_cfg.h"
#include "board_ac6369c_demo_cfg.h"
#include "board_ac636n_fmy_cfg.h"
#endif
