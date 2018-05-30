/*******************************************************************************
 * 							Common config
 * *****************************************************************************
 * 	Filename:		config.h
 * 	Platform:		ubuntu 16.04 64 bit
 * 	Author:			Copyright (C) Selmeczi János, original version
 *******************************************************************************
 *							Licensing
 *******************************************************************************
 *  This file is part of sdrflow.
 *
 *  Sdrflow is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Sdrflow is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
 *******************************************************************************
 *							Revision history
 *******************************************************************************
 *	Author				Date		Comment
 *******************************************************************************
 *	Selmeczi János		23-04-2018	Original version
 *
 ******************************************************************************/

#define	SDF_PLATFORM_COUNT		7
#define SDF_PLATFORM_X86L64		0
#define SDF_PLATFORM_X86L32		1
#define SDF_PLATFORM_X86W64		2
#define SDF_PLATFORM_X86W32		3
#define SDF_PLATFORM_AM4EMB		4
#define SDF_PLATFORM_P32EMB		5
#define SDF_PLATFORM_P16EMB		6

#define	SDF_ARCHITECTURE_COUNT	3
#define SDF_ARCHITECTURE_64		0
#define SDF_ARCHITECTURE_32		1
#define SDF_ARCHITECTURE_16		2

#define	SDF_SCHEDULER_PREEMPTIVE	0
#define	SDF_SCHEDULER_COOPERATIVE	1

#if	(SDF_PLATFORM == SDF_PLATFORM_X86L64)
#include "config_x86l64.h"
#else
#if	(SDF_PLATFORM == SDF_PLATFORM_X86L32)
#include "config_x86w32.h"
#else
#if	(SDF_PLATFORM == SDF_PLATFORM_X86W32)
#include "config_x86w32.h"
#else
#if	(SDF_PLATFORM == SDF_PLATFORM_AM4EMB)
#include "config_am4emb.h"
#else
#if	(SDF_PLATFORM == SDF_PLATFORM_P32EMB)
#include "config_p32emb.h"
#else
#include "config_x86l64.h"
#endif
#endif
#endif
#endif
#endif