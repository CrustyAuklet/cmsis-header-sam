/**
 * \file
 *
 * \brief Top level header file
 *
 * Copyright (c) 2017 Atmel Corporation, a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

#ifndef _SAM_
#define _SAM_

#if   defined(__SAMG54G19__) || defined(__ATSAMG54G19__)
  #include "samg54g19.h"
#elif defined(__SAMG54J19__) || defined(__ATSAMG54J19__)
  #include "samg54j19.h"
#elif defined(__SAMG54N19__) || defined(__ATSAMG54N19__)
  #include "samg54n19.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */

