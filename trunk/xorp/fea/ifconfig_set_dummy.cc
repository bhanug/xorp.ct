// -*- c-basic-offset: 4; tab-width: 8; indent-tabs-mode: t -*-

// Copyright (c) 2001-2004 International Computer Science Institute
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software")
// to deal in the Software without restriction, subject to the conditions
// listed in the XORP LICENSE file. These conditions include: you must
// preserve this copyright notice, and you cannot mention the copyright
// holders in advertising related to the Software without their permission.
// The Software is provided WITHOUT ANY WARRANTY, EXPRESS OR IMPLIED. This
// notice is a summary of the XORP LICENSE file; the license in that file is
// legally binding.

#ident "$XORP: xorp/fea/ifconfig_set_dummy.cc,v 1.7 2004/06/10 22:40:53 hodson Exp $"


#include "fea_module.h"
#include "libxorp/xorp.h"
#include "libxorp/xlog.h"
#include "libxorp/debug.h"
#include "libxorp/ether_compat.h"

#include "ifconfig.hh"
#include "ifconfig_set.hh"


//
// Set information about network interfaces configuration with the
// underlying system.
//
// The mechanism to set the information is dummy (for testing purpose).
//

IfConfigSetDummy::IfConfigSetDummy(IfConfig& ifc)
    : IfConfigSet(ifc)
{
#if 0	// XXX: by default Dummy is never registering by itself
    register_ifc_primary();
#endif
}

IfConfigSetDummy::~IfConfigSetDummy()
{
    stop();
}

int
IfConfigSetDummy::start()
{
    _is_running = true;

    return (XORP_OK);
}

int
IfConfigSetDummy::stop()
{
    if (! _is_running)
	return (XORP_OK);

    _is_running = false;

    return (XORP_OK);
}

bool
IfConfigSetDummy::push_config(const IfTree& it)
{
    ifc().report_updates(it, true);
    ifc().set_live_config(it);

    return true;
}

int
IfConfigSetDummy::set_interface_mac_address(const string& ifname,
					    uint16_t if_index,
					    const struct ether_addr& ether_addr,
					    string& reason)
{
    debug_msg("set_interface_mac "
	      "(ifname = %s if_index = %u mac = %s)\n",
	      ifname.c_str(), if_index, EtherMac(ether_addr).str().c_str());

    UNUSED(ifname);
    UNUSED(if_index);
    UNUSED(ether_addr);
    UNUSED(reason);

    return (XORP_OK);
}

int
IfConfigSetDummy::set_interface_mtu(const string& ifname,
				    uint16_t if_index,
				    uint32_t mtu,
				    string& reason)
{
    debug_msg("set_interface_mtu "
	      "(ifname = %s if_index = %u mtu = %u)\n",
	      ifname.c_str(), if_index, mtu);

    UNUSED(ifname);
    UNUSED(if_index);
    UNUSED(mtu);
    UNUSED(reason);

    return (XORP_OK);
}

int
IfConfigSetDummy::set_interface_flags(const string& ifname,
				      uint16_t if_index,
				      uint32_t flags,
				      string& reason)
{
    debug_msg("set_interface_flags "
	      "(ifname = %s if_index = %u flags = 0x%x)\n",
	      ifname.c_str(), if_index, flags);

    UNUSED(ifname);
    UNUSED(if_index);
    UNUSED(flags);
    UNUSED(reason);

    return (XORP_OK);
}

int
IfConfigSetDummy::set_vif_address(const string& ifname,
				  uint16_t if_index,
				  bool is_broadcast,
				  bool is_p2p,
				  const IPvX& addr,
				  const IPvX& dst_or_bcast,
				  uint32_t prefix_len,
				  string& reason)
{
    debug_msg("set_vif_address "
	      "(ifname = %s if_index = %u is_broadcast = %s is_p2p = %s "
	      "addr = %s dst/bcast = %s prefix_len = %u)\n",
	      ifname.c_str(), if_index, (is_broadcast)? "true" : "false",
	      (is_p2p)? "true" : "false", addr.str().c_str(),
	      dst_or_bcast.str().c_str(), prefix_len);

    UNUSED(ifname);
    UNUSED(if_index);
    UNUSED(is_broadcast);
    UNUSED(is_p2p);
    UNUSED(addr);
    UNUSED(dst_or_bcast);
    UNUSED(prefix_len);
    UNUSED(reason);

    return (XORP_OK);
}

int
IfConfigSetDummy::delete_vif_address(const string& ifname,
				     uint16_t if_index,
				     const IPvX& addr,
				     uint32_t prefix_len,
				     string& reason)
{
    debug_msg("delete_vif_address "
	      "(ifname = %s if_index = %u addr = %s prefix_len = %u)\n",
	      ifname.c_str(), if_index, addr.str().c_str(), prefix_len);

    UNUSED(ifname);
    UNUSED(if_index);
    UNUSED(addr);
    UNUSED(prefix_len);
    UNUSED(reason);

    return (XORP_OK);
}
