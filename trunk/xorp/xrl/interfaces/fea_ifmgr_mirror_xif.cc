/*
 * Copyright (c) 2001-2007 International Computer Science Institute
 * See LICENSE file for licensing, conditions, and warranties on use.
 *
 * DO NOT EDIT THIS FILE - IT IS PROGRAMMATICALLY GENERATED
 *
 * Generated by 'clnt-gen'.
 */

#ident "$XORP: xorp/xrl/interfaces/fea_ifmgr_mirror_xif.cc,v 1.20 2007/09/10 17:35:22 pavlin Exp $"

#include "fea_ifmgr_mirror_xif.hh"

bool
XrlFeaIfmgrMirrorV0p1Client::send_interface_add(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const InterfaceAddCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/interface_add");
    x.args().add("ifname", ifname);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_interface_add, cb));
}


/* Unmarshall interface_add */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_interface_add(
	const XrlError&	e,
	XrlArgs*	a,
	InterfaceAddCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_interface_remove(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const InterfaceRemoveCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/interface_remove");
    x.args().add("ifname", ifname);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_interface_remove, cb));
}


/* Unmarshall interface_remove */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_interface_remove(
	const XrlError&	e,
	XrlArgs*	a,
	InterfaceRemoveCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_interface_set_enabled(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const bool&	enabled,
	const InterfaceSetEnabledCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/interface_set_enabled");
    x.args().add("ifname", ifname);
    x.args().add("enabled", enabled);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_interface_set_enabled, cb));
}


/* Unmarshall interface_set_enabled */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_interface_set_enabled(
	const XrlError&	e,
	XrlArgs*	a,
	InterfaceSetEnabledCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_interface_set_discard(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const bool&	discard,
	const InterfaceSetDiscardCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/interface_set_discard");
    x.args().add("ifname", ifname);
    x.args().add("discard", discard);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_interface_set_discard, cb));
}


/* Unmarshall interface_set_discard */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_interface_set_discard(
	const XrlError&	e,
	XrlArgs*	a,
	InterfaceSetDiscardCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_interface_set_mtu(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const uint32_t&	mtu,
	const InterfaceSetMtuCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/interface_set_mtu");
    x.args().add("ifname", ifname);
    x.args().add("mtu", mtu);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_interface_set_mtu, cb));
}


/* Unmarshall interface_set_mtu */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_interface_set_mtu(
	const XrlError&	e,
	XrlArgs*	a,
	InterfaceSetMtuCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_interface_set_mac(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const Mac&	mac,
	const InterfaceSetMacCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/interface_set_mac");
    x.args().add("ifname", ifname);
    x.args().add("mac", mac);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_interface_set_mac, cb));
}


/* Unmarshall interface_set_mac */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_interface_set_mac(
	const XrlError&	e,
	XrlArgs*	a,
	InterfaceSetMacCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_interface_set_pif_index(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const uint32_t&	pif_index,
	const InterfaceSetPifIndexCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/interface_set_pif_index");
    x.args().add("ifname", ifname);
    x.args().add("pif_index", pif_index);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_interface_set_pif_index, cb));
}


/* Unmarshall interface_set_pif_index */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_interface_set_pif_index(
	const XrlError&	e,
	XrlArgs*	a,
	InterfaceSetPifIndexCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_interface_set_no_carrier(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const bool&	no_carrier,
	const InterfaceSetNoCarrierCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/interface_set_no_carrier");
    x.args().add("ifname", ifname);
    x.args().add("no_carrier", no_carrier);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_interface_set_no_carrier, cb));
}


/* Unmarshall interface_set_no_carrier */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_interface_set_no_carrier(
	const XrlError&	e,
	XrlArgs*	a,
	InterfaceSetNoCarrierCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_vif_add(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const VifAddCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/vif_add");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_add, cb));
}


/* Unmarshall vif_add */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_add(
	const XrlError&	e,
	XrlArgs*	a,
	VifAddCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_vif_remove(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const VifRemoveCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/vif_remove");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_remove, cb));
}


/* Unmarshall vif_remove */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_remove(
	const XrlError&	e,
	XrlArgs*	a,
	VifRemoveCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_vif_set_enabled(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const bool&	enabled,
	const VifSetEnabledCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/vif_set_enabled");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("enabled", enabled);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_enabled, cb));
}


/* Unmarshall vif_set_enabled */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_enabled(
	const XrlError&	e,
	XrlArgs*	a,
	VifSetEnabledCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_vif_set_multicast_capable(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const bool&	capable,
	const VifSetMulticastCapableCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/vif_set_multicast_capable");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("capable", capable);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_multicast_capable, cb));
}


/* Unmarshall vif_set_multicast_capable */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_multicast_capable(
	const XrlError&	e,
	XrlArgs*	a,
	VifSetMulticastCapableCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_vif_set_broadcast_capable(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const bool&	capable,
	const VifSetBroadcastCapableCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/vif_set_broadcast_capable");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("capable", capable);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_broadcast_capable, cb));
}


/* Unmarshall vif_set_broadcast_capable */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_broadcast_capable(
	const XrlError&	e,
	XrlArgs*	a,
	VifSetBroadcastCapableCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_vif_set_p2p_capable(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const bool&	capable,
	const VifSetP2PCapableCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/vif_set_p2p_capable");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("capable", capable);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_p2p_capable, cb));
}


/* Unmarshall vif_set_p2p_capable */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_p2p_capable(
	const XrlError&	e,
	XrlArgs*	a,
	VifSetP2PCapableCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_vif_set_loopback(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const bool&	loopback,
	const VifSetLoopbackCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/vif_set_loopback");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("loopback", loopback);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_loopback, cb));
}


/* Unmarshall vif_set_loopback */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_loopback(
	const XrlError&	e,
	XrlArgs*	a,
	VifSetLoopbackCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_vif_set_pim_register(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const bool&	pim_register,
	const VifSetPimRegisterCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/vif_set_pim_register");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("pim_register", pim_register);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_pim_register, cb));
}


/* Unmarshall vif_set_pim_register */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_pim_register(
	const XrlError&	e,
	XrlArgs*	a,
	VifSetPimRegisterCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_vif_set_pif_index(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const uint32_t&	pif_index,
	const VifSetPifIndexCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/vif_set_pif_index");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("pif_index", pif_index);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_pif_index, cb));
}


/* Unmarshall vif_set_pif_index */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_pif_index(
	const XrlError&	e,
	XrlArgs*	a,
	VifSetPifIndexCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_vif_set_vif_index(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const uint32_t&	vif_index,
	const VifSetVifIndexCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/vif_set_vif_index");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("vif_index", vif_index);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_vif_index, cb));
}


/* Unmarshall vif_set_vif_index */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_vif_index(
	const XrlError&	e,
	XrlArgs*	a,
	VifSetVifIndexCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_vif_set_vlan(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const bool&	is_vlan,
	const VifSetVlanCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/vif_set_vlan");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("is_vlan", is_vlan);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_vlan, cb));
}


/* Unmarshall vif_set_vlan */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_vlan(
	const XrlError&	e,
	XrlArgs*	a,
	VifSetVlanCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_vif_set_vlan_id(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const uint32_t&	vlan_id,
	const VifSetVlanIdCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/vif_set_vlan_id");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("vlan_id", vlan_id);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_vlan_id, cb));
}


/* Unmarshall vif_set_vlan_id */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_vif_set_vlan_id(
	const XrlError&	e,
	XrlArgs*	a,
	VifSetVlanIdCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_ipv4_add(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	addr,
	const Ipv4AddCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/ipv4_add");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("addr", addr);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv4_add, cb));
}


/* Unmarshall ipv4_add */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv4_add(
	const XrlError&	e,
	XrlArgs*	a,
	Ipv4AddCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_ipv4_remove(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	addr,
	const Ipv4RemoveCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/ipv4_remove");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("addr", addr);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv4_remove, cb));
}


/* Unmarshall ipv4_remove */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv4_remove(
	const XrlError&	e,
	XrlArgs*	a,
	Ipv4RemoveCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_ipv4_set_prefix(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	addr,
	const uint32_t&	prefix_len,
	const Ipv4SetPrefixCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/ipv4_set_prefix");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("addr", addr);
    x.args().add("prefix_len", prefix_len);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv4_set_prefix, cb));
}


/* Unmarshall ipv4_set_prefix */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv4_set_prefix(
	const XrlError&	e,
	XrlArgs*	a,
	Ipv4SetPrefixCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_ipv4_set_enabled(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	addr,
	const bool&	enabled,
	const Ipv4SetEnabledCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/ipv4_set_enabled");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("addr", addr);
    x.args().add("enabled", enabled);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv4_set_enabled, cb));
}


/* Unmarshall ipv4_set_enabled */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv4_set_enabled(
	const XrlError&	e,
	XrlArgs*	a,
	Ipv4SetEnabledCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_ipv4_set_multicast_capable(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	addr,
	const bool&	capable,
	const Ipv4SetMulticastCapableCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/ipv4_set_multicast_capable");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("addr", addr);
    x.args().add("capable", capable);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv4_set_multicast_capable, cb));
}


/* Unmarshall ipv4_set_multicast_capable */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv4_set_multicast_capable(
	const XrlError&	e,
	XrlArgs*	a,
	Ipv4SetMulticastCapableCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_ipv4_set_loopback(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	addr,
	const bool&	loopback,
	const Ipv4SetLoopbackCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/ipv4_set_loopback");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("addr", addr);
    x.args().add("loopback", loopback);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv4_set_loopback, cb));
}


/* Unmarshall ipv4_set_loopback */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv4_set_loopback(
	const XrlError&	e,
	XrlArgs*	a,
	Ipv4SetLoopbackCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_ipv4_set_broadcast(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	addr,
	const IPv4&	broadcast_addr,
	const Ipv4SetBroadcastCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/ipv4_set_broadcast");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("addr", addr);
    x.args().add("broadcast_addr", broadcast_addr);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv4_set_broadcast, cb));
}


/* Unmarshall ipv4_set_broadcast */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv4_set_broadcast(
	const XrlError&	e,
	XrlArgs*	a,
	Ipv4SetBroadcastCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_ipv4_set_endpoint(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	addr,
	const IPv4&	endpoint_addr,
	const Ipv4SetEndpointCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/ipv4_set_endpoint");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("addr", addr);
    x.args().add("endpoint_addr", endpoint_addr);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv4_set_endpoint, cb));
}


/* Unmarshall ipv4_set_endpoint */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv4_set_endpoint(
	const XrlError&	e,
	XrlArgs*	a,
	Ipv4SetEndpointCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_ipv6_add(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const Ipv6AddCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/ipv6_add");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("addr", addr);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv6_add, cb));
}


/* Unmarshall ipv6_add */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv6_add(
	const XrlError&	e,
	XrlArgs*	a,
	Ipv6AddCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_ipv6_remove(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const Ipv6RemoveCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/ipv6_remove");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("addr", addr);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv6_remove, cb));
}


/* Unmarshall ipv6_remove */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv6_remove(
	const XrlError&	e,
	XrlArgs*	a,
	Ipv6RemoveCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_ipv6_set_prefix(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const uint32_t&	prefix_len,
	const Ipv6SetPrefixCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/ipv6_set_prefix");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("addr", addr);
    x.args().add("prefix_len", prefix_len);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv6_set_prefix, cb));
}


/* Unmarshall ipv6_set_prefix */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv6_set_prefix(
	const XrlError&	e,
	XrlArgs*	a,
	Ipv6SetPrefixCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_ipv6_set_enabled(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const bool&	enabled,
	const Ipv6SetEnabledCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/ipv6_set_enabled");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("addr", addr);
    x.args().add("enabled", enabled);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv6_set_enabled, cb));
}


/* Unmarshall ipv6_set_enabled */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv6_set_enabled(
	const XrlError&	e,
	XrlArgs*	a,
	Ipv6SetEnabledCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_ipv6_set_loopback(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const bool&	loopback,
	const Ipv6SetLoopbackCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/ipv6_set_loopback");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("addr", addr);
    x.args().add("loopback", loopback);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv6_set_loopback, cb));
}


/* Unmarshall ipv6_set_loopback */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv6_set_loopback(
	const XrlError&	e,
	XrlArgs*	a,
	Ipv6SetLoopbackCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_ipv6_set_multicast_capable(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const bool&	capable,
	const Ipv6SetMulticastCapableCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/ipv6_set_multicast_capable");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("addr", addr);
    x.args().add("capable", capable);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv6_set_multicast_capable, cb));
}


/* Unmarshall ipv6_set_multicast_capable */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv6_set_multicast_capable(
	const XrlError&	e,
	XrlArgs*	a,
	Ipv6SetMulticastCapableCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_ipv6_set_endpoint(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const IPv6&	endpoint_addr,
	const Ipv6SetEndpointCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/ipv6_set_endpoint");
    x.args().add("ifname", ifname);
    x.args().add("vifname", vifname);
    x.args().add("addr", addr);
    x.args().add("endpoint_addr", endpoint_addr);
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv6_set_endpoint, cb));
}


/* Unmarshall ipv6_set_endpoint */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_ipv6_set_endpoint(
	const XrlError&	e,
	XrlArgs*	a,
	Ipv6SetEndpointCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_hint_tree_complete(
	const char*	dst_xrl_target_name,
	const HintTreeCompleteCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/hint_tree_complete");
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_hint_tree_complete, cb));
}


/* Unmarshall hint_tree_complete */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_hint_tree_complete(
	const XrlError&	e,
	XrlArgs*	a,
	HintTreeCompleteCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaIfmgrMirrorV0p1Client::send_hint_updates_made(
	const char*	dst_xrl_target_name,
	const HintUpdatesMadeCB&	cb
)
{
    Xrl x(dst_xrl_target_name, "fea_ifmgr_mirror/0.1/hint_updates_made");
    return _sender->send(x, callback(this, &XrlFeaIfmgrMirrorV0p1Client::unmarshall_hint_updates_made, cb));
}


/* Unmarshall hint_updates_made */
void
XrlFeaIfmgrMirrorV0p1Client::unmarshall_hint_updates_made(
	const XrlError&	e,
	XrlArgs*	a,
	HintUpdatesMadeCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}
