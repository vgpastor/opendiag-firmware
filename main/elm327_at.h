/* SPDX-License-Identifier: GPL-3.0-only */
#pragma once
#include "vif.h"

extern const vif_frontend_t elm327_frontend;

void elm327_register(void);

/**
 * Listen before the first transmit on a CAN protocol, and refuse it when a
 * bus at another bit rate is running on the pins. On by default.
 */
void elm327_can_guard_set(bool on);
bool elm327_can_guard_get(void);
