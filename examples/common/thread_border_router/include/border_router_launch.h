/*
 * SPDX-FileCopyrightText: 2021-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 *
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

#include "esp_event.h"
#include "esp_openthread.h"
#include "esp_openthread_border_router.h"
#include "esp_rcp_update.h"

ESP_EVENT_DECLARE_BASE(HYP_OTBR_EVENT);

typedef enum {
    HYP_OTBR_EVENT_READY = 1,
    HYP_OTBR_EVENT_NOT_READY,
} hyp_otbr_event_id_t;

void launch_openthread_border_router(const esp_openthread_platform_config_t *config,
                                     const esp_rcp_update_config_t *update_config);

#ifdef __cplusplus
} /* extern "C" */
#endif
