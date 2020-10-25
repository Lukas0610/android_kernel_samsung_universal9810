/*
 * Copyright (c) 2020 Lukas Berger
 *
 * Platform/SoC configuration
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __EXYNOS_SOC_CONFIG_H
#define __EXYNOS_SOC_CONFIG_H

#ifdef CONFIG_SOC_EXYNOS9810
	#include "exynos-soc-config-universal9810.h"
#endif // CONFIG_SOC_EXYNOS9810

#endif	/* __EXYNOS_SOC_CONFIG_H */
