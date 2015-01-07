/******************************************************************************
 *
 *  Copyright (C) 2014 Google, Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at:
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/

#pragma once

#include <hardware/bluetooth.h>
#include <stdint.h>
#include <stdlib.h>

#include "btcore/include/device_class.h"

bt_property_t *property_copy_array(const bt_property_t *properties, size_t count);
bt_property_t *property_copy(bt_property_t *dest, const bt_property_t *src);

bt_property_t *property_new_addr(const bt_bdaddr_t *addr);
bt_property_t *property_new_device_class(const bt_device_class_t *dc);
bt_property_t *property_new_device_type(bt_device_type_t *device_type);
bt_property_t *property_new_discovery_timeout(uint32_t *timeout);
bt_property_t *property_new_name(const char *name);
bt_property_t *property_new_rssi(int8_t *rssi);
bt_property_t *property_new_scan_mode(bt_scan_mode_t scan_mode);

const char *property_extract_name(const bt_property_t *property);

const bt_bdaddr_t *property_extract_bdaddr(const bt_property_t *property);
const bt_bdname_t *property_extract_bdname(const bt_property_t *property);
const bt_device_class_t *property_extract_device_class(const bt_property_t *property);
const bt_device_type_t *property_extract_device_type(const bt_property_t *property);
int32_t property_extract_remote_rssi(const bt_property_t *property);
const bt_uuid_t *property_extract_uuid(const bt_property_t *property);

bool property_equals(const bt_property_t *p1, const bt_property_t *p2);

void property_free(bt_property_t *property);
void property_free_array(bt_property_t *properties, size_t count);
