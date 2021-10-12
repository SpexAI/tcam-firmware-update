/*
 * Copyright 2017 The Imaging Source Europe GmbH
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <cstdint>

namespace lib33u
{
namespace device_interface
{
namespace MemoryMap
{
const uint64_t CAMERA_INFO = 0x4C52544300000000; // CTRL'0000'0000
const uint64_t CAMERA_FLASH = 0x4C525443EE000000; // CTRL'EE00'0000
} // namespace MemoryMap
} // namespace device_interface
} // namespace lib33u
