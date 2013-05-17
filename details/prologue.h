/* Exceptions library
 * Generic support for exceptions and Contract theory
 * Copyright (C) 2010-2012  Vlinder Software
 *
 * $$__LICENSE__$$
 *
 * To obtain a different license, or for more information about this
 * and related software, contact us at <support@vlinder.ca>
 */
#ifndef exceptions_details_prologue_h
#define exceptions_details_prologue_h

#ifndef EXCEPTIONS_API
#	if defined(WIN32) && !defined(__CYGWIN32__) && !defined(EXCEPTIONS_LINK_STATIC)
#		ifdef EXCEPTIONS_EXPORTS
#			define EXCEPTIONS_API __declspec(dllexport)
#		else
#			define EXCEPTIONS_API __declspec(dllimport)
#		endif
#	else
#		define EXCEPTIONS_API
#	endif
#endif

#endif

