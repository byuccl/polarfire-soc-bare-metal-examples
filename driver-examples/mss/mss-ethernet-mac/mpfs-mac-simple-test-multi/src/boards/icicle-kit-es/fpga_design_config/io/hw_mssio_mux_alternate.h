/*******************************************************************************
 * Copyright 2019-2024 Microchip FPGA Embedded Systems Solutions.
 *
 * SPDX-License-Identifier: MIT
 *
 * @file hw_mssio_mux_alternate.h
 * @author Microchip-FPGA Embedded Systems Solutions
 *
 *
 * Note 1: This file should not be edited. If you need to modify a parameter
 * without going through regenerating using the MSS Configurator Libero flow 
 * or editing the associated xml file
 * the following method is recommended: 

 * 1. edit the following file 
 * boards/your_board/platform_config/mpfs_hal_config/mss_sw_config.h

 * 2. define the value you want to override there.
 * (Note: There is a commented example in the platform directory)

 * Note 2: The definition in mss_sw_config.h takes precedence, as
 * mss_sw_config.h is included prior to the generated header files located in
 * boards/your_board/fpga_design_config
 *
 */

#ifndef HW_MSSIO_MUX_ALTERNATE_H_
#define HW_MSSIO_MUX_ALTERNATE_H_


#ifdef __cplusplus
extern  "C" {
#endif

#if !defined (LIBERO_SETTING_ALT_IOMUX0_CR)
/*Selects whether the peripheral is connected to the Fabric or IOMUX structure.
*/
#define LIBERO_SETTING_ALT_IOMUX0_CR    0x00000000UL
    /* SPI0_FABRIC                       [0:1]   RW value= 0x0 */
    /* SPI1_FABRIC                       [1:1]   RW value= 0x0 */
    /* I2C0_FABRIC                       [2:1]   RW value= 0x0 */
    /* I2C1_FABRIC                       [3:1]   RW value= 0x0 */
    /* CAN0_FABRIC                       [4:1]   RW value= 0x0 */
    /* CAN1_FABRIC                       [5:1]   RW value= 0x0 */
    /* QSPI_FABRIC                       [6:1]   RW value= 0x0 */
    /* MMUART0_FABRIC                    [7:1]   RW value= 0x0 */
    /* MMUART1_FABRIC                    [8:1]   RW value= 0x0 */
    /* MMUART2_FABRIC                    [9:1]   RW value= 0x0 */
    /* MMUART3_FABRIC                    [10:1]  RW value= 0x0 */
    /* MMUART4_FABRIC                    [11:1]  RW value= 0x0 */
    /* MDIO0_FABRIC                      [12:1]  RW value= 0x0 */
    /* MDIO1_FABRIC                      [13:1]  RW value= 0x0 */
#endif
#if !defined (LIBERO_SETTING_ALT_IOMUX1_CR)
/*Configures the IO Mux structure for each IO pad. 0 implies SD/SDIO, 1 implies
EMMC, 2 implies QSPI, 3 implies SPI,4 implies USB,5 implies MMUART,6 implies
I2C,7 implies CAN,8 implies MDIO,9 implies Miscellaneous,0xA implies Reserved
(Equivalent to Tristate),0xB implies GPIO ,0xC implies Fabric-test,0xD implies
Logic 0,0xE implies Logic 1, 0xF implies Tristate */
#define LIBERO_SETTING_ALT_IOMUX1_CR    0x00000000UL
    /* PAD0                              [0:4]   RW value= 0x0 */
    /* PAD1                              [4:4]   RW value= 0x0 */
    /* PAD2                              [8:4]   RW value= 0x0 */
    /* PAD3                              [12:4]  RW value= 0x0 */
    /* PAD4                              [16:4]  RW value= 0x0 */
    /* PAD5                              [20:4]  RW value= 0x0 */
    /* PAD6                              [24:4]  RW value= 0x0 */
    /* PAD7                              [28:4]  RW value= 0x0 */
#endif
#if !defined (LIBERO_SETTING_ALT_IOMUX2_CR)
/*Configures the IO Mux structure for each IO pad. 0 implies SD/SDIO, 1 implies
EMMC, 2 implies QSPI, 3 implies SPI,4 implies USB,5 implies MMUART,6 implies
I2C,7 implies CAN,8 implies MDIO,9 implies Miscellaneous,0xA implies Reserved
(Equivalent to Tristate),0xB implies GPIO ,0xC implies Fabric-test,0xD implies
Logic 0,0xE implies Logic 1, 0xF implies Tristate */
#define LIBERO_SETTING_ALT_IOMUX2_CR    0x00000000UL
    /* PAD8                              [0:4]   RW value= 0x0 */
    /* PAD9                              [4:4]   RW value= 0x0 */
    /* PAD10                             [8:4]   RW value= 0x0 */
    /* PAD11                             [12:4]  RW value= 0x0 */
    /* PAD12                             [16:4]  RW value= 0x0 */
    /* PAD13                             [20:4]  RW value= 0x0 */
#endif
#if !defined (LIBERO_SETTING_ALT_IOMUX3_CR)
/*Configures the IO Mux structure for each IO pad. 0 implies SD/SDIO, 1 implies
EMMC, 2 implies QSPI, 3 implies SPI,4 implies USB,5 implies MMUART,6 implies
I2C,7 implies CAN,8 implies MDIO,9 implies Miscellaneous,0xA implies Reserved
(Equivalent to Tristate),0xB implies GPIO ,0xC implies Fabric-test,0xD implies
Logic 0,0xE implies Logic 1, 0xF implies Tristate */
#define LIBERO_SETTING_ALT_IOMUX3_CR    0x00000000UL
    /* PAD14                             [0:4]   RW value= 0x0 */
    /* PAD15                             [4:4]   RW value= 0x0 */
    /* PAD16                             [8:4]   RW value= 0x0 */
    /* PAD17                             [12:4]  RW value= 0x0 */
    /* PAD18                             [16:4]  RW value= 0x0 */
    /* PAD19                             [20:4]  RW value= 0x0 */
    /* PAD20                             [24:4]  RW value= 0x0 */
    /* PAD21                             [28:4]  RW value= 0x0 */
#endif
#if !defined (LIBERO_SETTING_ALT_IOMUX4_CR)
/*Configures the IO Mux structure for each IO pad. 0 implies SD/SDIO, 1 implies
EMMC, 2 implies QSPI, 3 implies SPI,4 implies USB,5 implies MMUART,6 implies
I2C,7 implies CAN,8 implies MDIO,9 implies Miscellaneous,0xA implies Reserved
(Equivalent to Tristate),0xB implies GPIO ,0xC implies Fabric-test,0xD implies
Logic 0,0xE implies Logic 1, 0xF implies Tristate */
#define LIBERO_SETTING_ALT_IOMUX4_CR    0x00000000UL
    /* PAD22                             [0:4]   RW value= 0x0 */
    /* PAD23                             [4:4]   RW value= 0x0 */
    /* PAD24                             [8:4]   RW value= 0x0 */
    /* PAD25                             [12:4]  RW value= 0x0 */
    /* PAD26                             [16:4]  RW value= 0x0 */
    /* PAD27                             [20:4]  RW value= 0x0 */
    /* PAD28                             [24:4]  RW value= 0x0 */
    /* PAD29                             [28:4]  RW value= 0x0 */
#endif
#if !defined (LIBERO_SETTING_ALT_IOMUX5_CR)
/*Configures the IO Mux structure for each IO pad. 0 implies SD/SDIO, 1 implies
EMMC, 2 implies QSPI, 3 implies SPI,4 implies USB,5 implies MMUART,6 implies
I2C,7 implies CAN,8 implies MDIO,9 implies Miscellaneous,0xA implies Reserved
(Equivalent to Tristate),0xB implies GPIO ,0xC implies Fabric-test,0xD implies
Logic 0,0xE implies Logic 1, 0xF implies Tristate */
#define LIBERO_SETTING_ALT_IOMUX5_CR    0x00000000UL
    /* PAD30                             [0:4]   RW value= 0x0 */
    /* PAD31                             [4:4]   RW value= 0x0 */
    /* PAD32                             [8:4]   RW value= 0x0 */
    /* PAD33                             [12:4]  RW value= 0x0 */
    /* PAD34                             [16:4]  RW value= 0x0 */
    /* PAD35                             [20:4]  RW value= 0x0 */
    /* PAD36                             [24:4]  RW value= 0x0 */
    /* PAD37                             [28:4]  RW value= 0x0 */
#endif
#if !defined (LIBERO_SETTING_ALT_IOMUX6_CR)
/*Sets whether the MMC/SD Voltage select lines are inverted on entry to the
IOMUX structure */
#define LIBERO_SETTING_ALT_IOMUX6_CR    0x00000000UL
    /* VLT_SEL                           [0:1]   RW value= 0x0 */
    /* VLT_EN                            [1:1]   RW value= 0x0 */
    /* VLT_CMD_DIR                       [2:1]   RW value= 0x0 */
    /* VLT_DIR_0                         [3:1]   RW value= 0x0 */
    /* VLT_DIR_1_3                       [4:1]   RW value= 0x0 */
    /* SD_LED                            [5:1]   RW value= 0x0 */
    /* SD_VOLT_0                         [6:1]   RW value= 0x0 */
    /* SD_VOLT_1                         [7:1]   RW value= 0x0 */
    /* SD_VOLT_2                         [8:1]   RW value= 0x0 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK4_CFG_CR)
/*Configures the MSSIO block using SCB write */
#define LIBERO_SETTING_ALT_MSSIO_BANK4_CFG_CR    0x00040A0DUL
    /* BANK_PCODE                        [0:6]   RW value= 0xD */
    /* RESERVED0                         [6:2]   RW value= 0x00 */
    /* BANK_NCODE                        [8:6]   RW value= 0xA */
    /* RESERVED1                         [14:2]  RW value= 0x0 */
    /* VS                                [16:4]  RW value= 0x4 */
    /* RESERVED2                         [20:12] RW value= 0x0 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK4_IO_CFG_0_1_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK4_IO_CFG_0_1_CR    0x09280928UL
    /* IO_CFG_0                          [0:16]  RW value= 0x0928 */
    /* IO_CFG_1                          [16:16] RW value= 0x0928 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK4_IO_CFG_2_3_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK4_IO_CFG_2_3_CR    0x09280928UL
    /* IO_CFG_2                          [0:16]  RW value= 0x0928 */
    /* IO_CFG_3                          [16:16] RW value= 0x0928 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK4_IO_CFG_4_5_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK4_IO_CFG_4_5_CR    0x09280928UL
    /* IO_CFG_4                          [0:16]  RW value= 0x0928 */
    /* IO_CFG_5                          [16:16] RW value= 0x0928 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK4_IO_CFG_6_7_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK4_IO_CFG_6_7_CR    0x09280928UL
    /* IO_CFG_6                          [0:16]  RW value= 0x0928 */
    /* IO_CFG_7                          [16:16] RW value= 0x0928 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK4_IO_CFG_8_9_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK4_IO_CFG_8_9_CR    0x09280928UL
    /* IO_CFG_8                          [0:16]  RW value= 0x0928 */
    /* IO_CFG_9                          [16:16] RW value= 0x0928 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK4_IO_CFG_10_11_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK4_IO_CFG_10_11_CR    0x09280928UL
    /* IO_CFG_10                         [0:16]  RW value= 0x0928 */
    /* IO_CFG_11                         [16:16] RW value= 0x0928 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK4_IO_CFG_12_13_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK4_IO_CFG_12_13_CR    0x09280928UL
    /* IO_CFG_12                         [0:16]  RW value= 0x0928 */
    /* IO_CFG_13                         [16:16] RW value= 0x0928 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK2_CFG_CR)
/*Configures the MSSIO block using SCB write */
#define LIBERO_SETTING_ALT_MSSIO_BANK2_CFG_CR    0x00080907UL
    /* BANK_PCODE                        [0:6]   RW value= 0x7 */
    /* RESERVED0                         [6:2]   RW value= 0x00 */
    /* BANK_NCODE                        [8:6]   RW value= 0x9 */
    /* RESERVED1                         [14:2]  RW value= 0x0 */
    /* VS                                [16:4]  RW value= 0x8 */
    /* RESERVED2                         [20:12] RW value= 0x0 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_0_1_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_0_1_CR    0x08290829UL
    /* IO_CFG_0                          [0:16]  RW value= 0x0829 */
    /* IO_CFG_1                          [16:16] RW value= 0x0829 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_2_3_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_2_3_CR    0x08290829UL
    /* IO_CFG_2                          [0:16]  RW value= 0x0829 */
    /* IO_CFG_3                          [16:16] RW value= 0x0829 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_4_5_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_4_5_CR    0x08290829UL
    /* IO_CFG_4                          [0:16]  RW value= 0x0829 */
    /* IO_CFG_5                          [16:16] RW value= 0x0829 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_6_7_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_6_7_CR    0x08290829UL
    /* IO_CFG_6                          [0:16]  RW value= 0x0829 */
    /* IO_CFG_7                          [16:16] RW value= 0x0829 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_8_9_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_8_9_CR    0x08290829UL
    /* IO_CFG_8                          [0:16]  RW value= 0x0829 */
    /* IO_CFG_9                          [16:16] RW value= 0x0829 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_10_11_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_10_11_CR    0x08290829UL
    /* IO_CFG_10                         [0:16]  RW value= 0x0829 */
    /* IO_CFG_11                         [16:16] RW value= 0x0829 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_12_13_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_12_13_CR    0x08290829UL
    /* IO_CFG_12                         [0:16]  RW value= 0x0829 */
    /* IO_CFG_13                         [16:16] RW value= 0x0829 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_14_15_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_14_15_CR    0x08290829UL
    /* IO_CFG_14                         [0:16]  RW value= 0x0829 */
    /* IO_CFG_15                         [16:16] RW value= 0x0829 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_16_17_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_16_17_CR    0x08290829UL
    /* IO_CFG_16                         [0:16]  RW value= 0x0829 */
    /* IO_CFG_17                         [16:16] RW value= 0x0829 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_18_19_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_18_19_CR    0x08290829UL
    /* IO_CFG_18                         [0:16]  RW value= 0x0829 */
    /* IO_CFG_19                         [16:16] RW value= 0x0829 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_20_21_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_20_21_CR    0x08290829UL
    /* IO_CFG_20                         [0:16]  RW value= 0x0829 */
    /* IO_CFG_21                         [16:16] RW value= 0x0829 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_22_23_CR)
/*IO electrical configuration for MSSIO pad */
#define LIBERO_SETTING_ALT_MSSIO_BANK2_IO_CFG_22_23_CR    0x08290829UL
    /* IO_CFG_22                         [0:16]  RW value= 0x0829 */
    /* IO_CFG_23                         [16:16] RW value= 0x0829 */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_VB2_CFG)
/*default dpc values for MSSIO bank 2 */
#define LIBERO_SETTING_ALT_MSSIO_VB2_CFG    0x00000828UL
    /* DPC_IO_CFG_IBUFMD_0               [0:1]   RW value= 0x0 */
    /* DPC_IO_CFG_IBUFMD_1               [1:1]   RW value= 0x0 */
    /* DPC_IO_CFG_IBUFMD_2               [2:1]   RW value= 0x0 */
    /* DPC_IO_CFG_DRV_0                  [3:1]   RW value= 0x1 */
    /* DPC_IO_CFG_DRV_1                  [4:1]   RW value= 0x0 */
    /* DPC_IO_CFG_DRV_2                  [5:1]   RW value= 0x1 */
    /* DPC_IO_CFG_DRV_3                  [6:1]   RW value= 0x0 */
    /* DPC_IO_CFG_CLAMP                  [7:1]   RW value= 0x0 */
    /* DPC_IO_CFG_ENHYST                 [8:1]   RW value= 0x0 */
    /* DPC_IO_CFG_LOCKDN_EN              [9:1]   RW value= 0x0 */
    /* DPC_IO_CFG_WPD                    [10:1]  RW value= 0x0 */
    /* DPC_IO_CFG_WPU                    [11:1]  RW value= 0x1 */
    /* DPC_IO_CFG_ATP_EN                 [12:1]  RW value= 0x0 */
    /* DPC_IO_CFG_LP_PERSIST_EN          [13:1]  RW value= 0x0 */
    /* DPC_IO_CFG_LP_BYPASS_EN           [14:1]  RW value= 0x0 */
    /* RESERVED                          [15:17] R */
#endif
#if !defined (LIBERO_SETTING_ALT_MSSIO_VB4_CFG)
/*default dpc values for MSSIO bank 4 */
#define LIBERO_SETTING_ALT_MSSIO_VB4_CFG    0x00000828UL
    /* DPC_IO_CFG_IBUFMD_0               [0:1]   RW value= 0x0 */
    /* DPC_IO_CFG_IBUFMD_1               [1:1]   RW value= 0x0 */
    /* DPC_IO_CFG_IBUFMD_2               [2:1]   RW value= 0x0 */
    /* DPC_IO_CFG_DRV_0                  [3:1]   RW value= 0x1 */
    /* DPC_IO_CFG_DRV_1                  [4:1]   RW value= 0x0 */
    /* DPC_IO_CFG_DRV_2                  [5:1]   RW value= 0x1 */
    /* DPC_IO_CFG_DRV_3                  [6:1]   RW value= 0x0 */
    /* DPC_IO_CFG_CLAMP                  [7:1]   RW value= 0x0 */
    /* DPC_IO_CFG_ENHYST                 [8:1]   RW value= 0x0 */
    /* DPC_IO_CFG_LOCKDN_EN              [9:1]   RW value= 0x0 */
    /* DPC_IO_CFG_WPD                    [10:1]  RW value= 0x0 */
    /* DPC_IO_CFG_WPU                    [11:1]  RW value= 0x1 */
    /* DPC_IO_CFG_ATP_EN                 [12:1]  RW value= 0x0 */
    /* DPC_IO_CFG_LP_PERSIST_EN          [13:1]  RW value= 0x0 */
    /* DPC_IO_CFG_LP_BYPASS_EN           [14:1]  RW value= 0x0 */
    /* RESERVED                          [15:17] R */
#endif

#ifdef __cplusplus
}
#endif


#endif /* #ifdef HW_MSSIO_MUX_ALTERNATE_H_ */

