/*
 * SPDX-FileCopyrightText: Copyright (c) 2022-2023 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef _CCI_LS10_H_
#define _CCI_LS10_H_

#define NVSWITCH_CCI_VBIOS_REV_LOCK_VERSION_LS10             (0x9610360000)
#define NVSWITCH_CCI_VBIOS_REV_LOCK_VERSION_STRING_LS10      ("96.10.36.00.00")

#define NVSWITCH_CCI_NUM_LINKS_PER_OSFP_LS10                 4

// HALs
NvBool nvswitch_is_cci_supported_ls10(nvswitch_device *device);
void nvswitch_cci_setup_gpio_pins_ls10(nvswitch_device *device);
NvlStatus nvswitch_cci_get_cci_link_mode_ls10(nvswitch_device *device, NvU32 linkNumber, NvU64 *mode);
NvlStatus nvswitch_cci_discovery_ls10(nvswitch_device *device); 
void nvswitch_cci_get_xcvrs_present_ls10(nvswitch_device *device, NvU32 *pMaskPresent);
void nvswitch_cci_get_xcvrs_present_change_ls10(nvswitch_device *device, NvU32 *pMaskPresentChange); 
NvlStatus nvswitch_cci_reset_ls10(nvswitch_device *device); 
NvlStatus nvswitch_cci_reset_links_ls10(nvswitch_device *device, NvU64 linkMask); 
NvlStatus nvswitch_cci_ports_cpld_read_ls10(nvswitch_device *device, NvU8 reg, NvU8 *pData);
NvlStatus nvswitch_cci_ports_cpld_write_ls10(nvswitch_device *device, NvU8 reg, NvU8 data);
void nvswitch_cci_update_link_state_led_ls10(nvswitch_device *device);
NvlStatus nvswitch_cci_set_xcvr_led_state_ls10(nvswitch_device *device, NvU32 client, NvU32 osfp, NvBool bSetLocate);
NvlStatus nvswitch_cci_get_xcvr_led_state_ls10(nvswitch_device *device, NvU32 client, NvU32 osfp, NvU8 *pLedState);
NvlStatus nvswitch_cci_setup_onboard_ls10(nvswitch_device *device);
NvlStatus nvswitch_cci_setup_module_path_ls10(nvswitch_device *device, NvU32 client, NvU32 osfp); 
NvlStatus nvswitch_cci_module_access_cmd_ls10(nvswitch_device *device, NvU32 client, NvU32 osfp, NvU32 addr, NvU32 length,
                                                                       NvU8 *pValArray, NvBool bRead, NvBool bBlk);
NvlStatus nvswitch_cci_apply_control_set_values_ls10(nvswitch_device *device, NvU32 client, NvU32 moduleMask);
NvlStatus nvswitch_cci_cmis_cage_bezel_marking_ls10(nvswitch_device *device, NvU8 cageIndex, char *pBezelMarking);
NvlStatus nvswitch_cci_get_grading_values_ls10(nvswitch_device *device, NvU32 client, NvU32 linkId, NvU8 *laneMask, NVSWITCH_CCI_GRADING_VALUES *pGrading);
NvlStatus nvswitch_cci_get_xcvr_mask_ls10(nvswitch_device *device, NvU32 *pMaskAll, NvU32 *pMaskPresent);
void nvswitch_cci_set_xcvr_present_ls10(nvswitch_device *device, NvU32 maskPresent);
void nvswitch_cci_destroy_ls10(nvswitch_device *device);

#endif //_CCI_LS10_H_
 