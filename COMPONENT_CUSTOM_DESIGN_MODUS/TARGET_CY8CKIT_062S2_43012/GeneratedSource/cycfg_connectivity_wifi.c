/*******************************************************************************
* File Name: cycfg_connectivity_wifi.c
*
* Description:
* Connectivity Wi-Fi configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.1.0.1266
* psoc6pdl 1.6.1.4886
* personalities_2.0 2.0.0.0
* udd 1.2.0.473
*
********************************************************************************
* Copyright 2020 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "cycfg_connectivity_wifi.h"

#define CYCFG_PF_OL_ENABLED (1u)

static pf_ol_t pf_ol_0;
static const cy_pf_ol_cfg_t cy_pf_ol_cfg_0[] = 
{
	[0u] = {.feature = CY_PF_OL_FEAT_IPTYPE,
			.bits = CY_PF_ACTIVE_SLEEP | CY_PF_ACTIVE_WAKE | CY_PF_ACTION_DISCARD,
			.id = 0u,
			.u = {
				.ip = {
						.ip_type = 1u,
						},
				},
			},
	[1u] = {.feature = CY_PF_OL_FEAT_LAST},
};
static const ol_desc_t ol_list_0[] = 
{
	[0u] = {"Pkt_Filter", &cy_pf_ol_cfg_0, &pf_ol_fns, &pf_ol_0},
	[2u] = {NULL, NULL, NULL, NULL},
};

const ol_desc_t *cycfg_get_default_ol_list(void)
{
	return &ol_list_0[0];
}

