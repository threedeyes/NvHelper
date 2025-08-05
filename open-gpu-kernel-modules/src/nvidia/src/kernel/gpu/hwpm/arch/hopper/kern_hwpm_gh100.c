/*
 * SPDX-FileCopyrightText: Copyright (c) 2023 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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

#include "gpu/hwpm/kern_hwpm.h"
#include "hopper/gh100/dev_perf.h"

/*!
 * @brief Get number of CBLOCKs per SYS chiplet and number of channels per CBLOCK
 *
 * @param[in]     pGpu          OBJGPU pointer
 * @param[in]     pKernelHwpm   KernelHwpm pointer
 * @param[out]    pNumCblock    The number of Cblocks per SYS chiplet
 * @param[out]    pNumChannels  The number of Channels per Cblocks
 */
void
khwpmGetCblockInfo_GH100(OBJGPU *pGpu, KernelHwpm *pKernelHwpm, NvU32 *pNumCblock, NvU32 *pNumChannels)
{
    // In GH100, each channel has a bind point controller, so 1 channel/cblock => # cblock = # channel.
    if (pNumCblock != NULL)
    {
        *pNumCblock = NV_PERF_PMMSYSROUTER_NUM_USER_STREAMING_CHANNELS;
    }

    if (pNumChannels != NULL)
    {
        *pNumChannels = 1;
    }
}
