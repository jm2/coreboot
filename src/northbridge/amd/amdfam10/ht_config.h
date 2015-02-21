/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2007 Advanced Micro Devices, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

typedef struct amdfam10_sysconf_t sys_info_conf_t;

/* FIXME */
extern device_t __f1_dev[];

struct dram_base_mask_t {
	u32 base; //[47:27] at [28:8]
	u32 mask; //[47:27] at [28:8] and enable at bit 0
};

struct dram_base_mask_t get_dram_base_mask(u32 nodeid);

void set_config_map_reg(u32 nodeid, u32 linkn, u32 ht_c_index,
				u32 busn_min, u32 busn_max, u32 segbit,
				u32 nodes);
void clear_config_map_reg(u32 nodeid, u32 linkn, u32 ht_c_index,
					u32 busn_min, u32 busn_max, u32 nodes);

void store_ht_c_conf_bus(u32 nodeid, u32 linkn, u32 ht_c_index,
				u32 busn_min, u32 busn_max,
				sys_info_conf_t *sysinfo);

u32 get_ht_c_index(u32 nodeid, u32 linkn, sys_info_conf_t *sysinfo);


void store_conf_io_addr(u32 nodeid, u32 linkn, u32 reg, u32 index,
				u32 io_min, u32 io_max);

void store_conf_mmio_addr(u32 nodeid, u32 linkn, u32 reg, u32 index,
					u32 mmio_min, u32 mmio_max);


u32 get_io_addr_index(u32 nodeid, u32 linkn);
u32 get_mmio_addr_index(u32 nodeid, u32 linkn);

void set_io_addr_reg(device_t dev, u32 nodeid, u32 linkn, u32 reg,
				u32 io_min, u32 io_max);

void set_mmio_addr_reg(u32 nodeid, u32 linkn, u32 reg, u32 index, u32 mmio_min, u32 mmio_max, u32 nodes);


