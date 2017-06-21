
/*
				MIT License
			Copyright (c) 2017 ZeroUnix
	Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

// **Note: Please read the 'README.md' first 
// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the DLLEXPORTPROJ_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// DLLEXPORTPROJ_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DLLEXPORTPROJ_EXPORTS
#define DLLEXPORTPROJ_API __declspec(dllexport)
#else
#define DLLEXPORTPROJ_API __declspec(dllimport)
#endif

//Windows Header 
#include <windows.h>

#include <windowsx.h>

#include <AccCtrl.h>
#include <AclAPI.h>

#include <shellapi.h>
#include <stdlib.h>

DLLEXPORTPROJ_API BOOL AdministratorPrivilege(VOID);

DLLEXPORTPROJ_API VOID ElevateCurrentProcess(VOID);


DLLEXPORTPROJ_API BOOL IsStartup(LPWSTR pszAppName, LPWSTR hSubKey);

DLLEXPORTPROJ_API BOOL RegisterApp(LPWSTR pszAppName, LPWSTR pathToExe, LPWSTR args, LPWSTR hSubKey);

DLLEXPORTPROJ_API VOID EnableStartup(LPWSTR pszAppName, LPWSTR args);
