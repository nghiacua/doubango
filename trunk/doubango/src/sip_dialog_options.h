/*
	** Copyright (C) 2009 Doubango Telecom <imsframework(at)gmail.com> 

	This file is part of 'Doubango IMS Client Framework'.

    'Doubango IMS Client Framework' is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    'Doubango IMS Client Framework' is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with 'Doubango IMS Client Framework'.  If not, see <http://www.gnu.org/licenses/>.

	** For commercial use, you must purchase a proprietary license from Doubango Telecom.
*/

/* Copyright (C) 2009 Doubango Telecom
*
* Authors:	F0076RTY <imsframework@gmail.com>
*
*/

#ifndef __DOUBANGO_DIALOG_OPTIONS_SM_H__
#define __DOUBANGO_DIALOG_OPTIONS_SM_H__

#include "pref.h"
#include "sip_dialog.h"
#include "sm_dialog_options_sm.h"

PREF_NAMESPACE_START

/* OPTIONS */
class sip_dialog_options : public sip_dialog
{
public:
	sip_dialog_options(stack* stk);
	~sip_dialog_options();

private:
	sip_dialog_optionsContext sm_ctx;
};

PREF_NAMESPACE_END

#endif /* __DOUBANGO_DIALOG_OPTIONS_SM_H__ */