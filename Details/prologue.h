/* Vlinder Software's exceptions base classes
 * Copyright 2014  Vlinder Software
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
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


