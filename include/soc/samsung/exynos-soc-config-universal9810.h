/*
 * Copyright (c) 2020 Lukas Berger
 *
 * Platform/SoC configuration for UNIVERSAL9810
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
 
#ifndef __EXYNOS_SOC_CONFIG_H
	#error Do not include this file directly, use <soc/samsung/exynos-soc-config.h> instead
#endif // __EXYNOS_SOC_CONFIG_H

#ifndef __EXYNOS_SOC_CONFIG_UNIVERSAL9810_H
#define __EXYNOS_SOC_CONFIG_UNIVERSAL9810_H

// Enable under/overclocking in the EXYNOS ACME cpufreq driver
#define EXYNOS_ACME_MANUAL_CPUFREQ

// Tell cpufreq driver that SoC is a big.LITTLE architecture
#define EXYNOS_ACME_CL0_MIN_FREQ		455000
#define EXYNOS_ACME_CL0_MAX_FREQ		1794000

// Define min/max frequencies of the big CPU cluster
#define EXYNOS_ACME_CL1_MIN_FREQ		598000
#define EXYNOS_ACME_CL1_MAX_FREQ		2704000

// Enable under/overclocking in the EXYNOS hotplugging governor driver
#define EXYNOS_HOTPLUG_MANUAL_CPUFREQ

// Define hotplugging frequencies for the big CPU cluster
#define EXYNOS_HOTPLUG_FREQ_SINGLE		2704000
#define EXYNOS_HOTPLUG_FREQ_DUAL		2704000
#define EXYNOS_HOTPLUG_FREQ_TRIPLE		2704000
#define EXYNOS_HOTPLUG_FREQ_QUAD		2704000
#define EXYNOS_HOTPLUG_FREQ_DISABLE		EXYNOS_HOTPLUG_FREQ_QUAD

#endif	/* __EXYNOS_SOC_CONFIG_UNIVERSAL9810_H */
