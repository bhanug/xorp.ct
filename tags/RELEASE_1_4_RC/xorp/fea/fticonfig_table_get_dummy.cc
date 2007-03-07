// -*- c-basic-offset: 4; tab-width: 8; indent-tabs-mode: t -*-

// Copyright (c) 2001-2007 International Computer Science Institute
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

#ident "$XORP: xorp/fea/fticonfig_table_get_dummy.cc,v 1.14 2006/03/16 00:03:51 pavlin Exp $"

#include "fea_module.h"

#include "libxorp/xorp.h"
#include "libxorp/xlog.h"
#include "libxorp/debug.h"

#include "fticonfig.hh"
#include "fticonfig_table_get.hh"


//
// Get the whole table information from the unicast forwarding table.
//
// The mechanism to obtain the information is dummy (for testing purpose).
//


FtiConfigTableGetDummy::FtiConfigTableGetDummy(FtiConfig& ftic)
    : FtiConfigTableGet(ftic)
{
#if 0	// XXX: by default Dummy is never registering by itself
    register_ftic_primary();
#endif
}

FtiConfigTableGetDummy::~FtiConfigTableGetDummy()
{
    string error_msg;

    if (stop(error_msg) != XORP_OK) {
	XLOG_ERROR("Cannot stop the dummy mechanism to get "
		   "whole forwarding table from the underlying "
		   "system: %s",
		   error_msg.c_str());
    }
}

int
FtiConfigTableGetDummy::start(string& error_msg)
{
    UNUSED(error_msg);

    if (_is_running)
	return (XORP_OK);

    _is_running = true;

    return (XORP_OK);
}
    
int
FtiConfigTableGetDummy::stop(string& error_msg)
{
    UNUSED(error_msg);

    if (! _is_running)
	return (XORP_OK);

    _is_running = false;

    return (XORP_OK);
}

bool
FtiConfigTableGetDummy::get_table4(list<Fte4>& fte_list)
{
    Trie4::iterator ti;
    for (ti = ftic().trie4().begin(); ti != ftic().trie4().end(); ++ti) {
	const Fte4& fte = ti.payload();
	fte_list.push_back(fte);
    }
    
    return true;
}

bool
FtiConfigTableGetDummy::get_table6(list<Fte6>& fte_list)
{
    Trie6::iterator ti;
    for (ti = ftic().trie6().begin(); ti != ftic().trie6().end(); ++ti) {
	const Fte6& fte = ti.payload();
	fte_list.push_back(fte);
    }
    
    return true;
}