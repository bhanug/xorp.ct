// -*- c-basic-offset: 4; tab-width: 8; indent-tabs-mode: t -*-

// Copyright (c) 2001-2003 International Computer Science Institute
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

// $XORP: xorp/devnotes/template.hh,v 1.1.1.1 2002/12/11 23:55:54 hodson Exp $

#ifndef __POLICY_TERM_HH__
#define __POLICY_TERM_HH__

#include "xorp.h"
#include <list>
#include "policy_route.hh"
#include "from.hh"
#include "to.hh"
#include "then.hh"

class PolicyTerm {
public:
    PolicyTerm(const PolicyFrom& from, 
	       const PolicyTo& to, 
	       const PolicyThen& then);
    void apply_policy(PolicyRoute& route, 
		      bool& changed, bool& reject, bool& last_term) const;
private:
    PolicyFrom _from;
    PolicyTo _to;
    PolicyThen _then;
};

#endif // __POLICY_TERM_HH__
