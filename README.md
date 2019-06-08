# ZeroDll
<p>A <b>light-weight</b> DLL (dynamic-link library) built in pure C++ for WIN32-API programming purpose.The library will be updated and optimized regularly.</p>

You can download the DLLs for x86 or x64 computer in <b>(x86)</b> and <b>(x64)</b> folder.

Read carefully the 'ReadMe.txt' for instruction.

Examples are put in the <b>'Example.cpp'</b> file. 

---

## What's inside? 
There are total <b>5</b> functions that I've put inside the library

<h2>1. <b>AdministratorPrivilege</b> function</h2>
- Origin: BOOL AdministratorPrivilege(<i>VOID</i>)

- Parameters: No

- Return-type: BOOL 

<h3>Info</h3>
- The function will return 'TRUE' (1) if the current process has administrator privilege or 'FALSE' (0) if not.

<h2>2. <b>ElevateCurrentProcess</b> function</h2>
- Origin: void ElevateCurrentProcess(<i>VOID</i>)

- Parameters: No

- Return-type: No return 

<h3>Info</h3>
- The function will elevate the privilege of the process to the highest during running. 

<h2>3. <b>IsStartup</b> function</h2>
- Origin: BOOL IsStartup(<i>LPWSTR pszAppName</i>, <i>LPWSTR hSubKey</i>);

- Parameters: 2 (LPWSTR)

- Return-type: BOOL

<h3>Info</h3>
- The function will check if the value is existed in registry with a user-specified key. Return 'TRUE'(1) if the value is existed.

<h2>4. <b>RegisterApp</b> function</h2>
- Origin:  BOOL RegisterApp(LPWSTR pszAppName, LPWSTR pathToExe, LPWSTR args, LPWSTR hSubKey);

- Parameters: 4 (LPWSTR)

- Return-type: BOOL

<h3>Info</h3>
- The function will assign the value name and its components (path, args) to a user-specified key (hSubKey). If the key (hSubKey) is <b>HKEY_LOCAL_MACHINE</b>, administrator privilege will be required. Return 'TRUE'(1) if success.

<h2>5. <b>EnableStartup</b> function</h2>
- Origin: VOID EnableStartup(LPWSTR pszAppName, LPWSTR args, LPWSTR hSubKey);

- Parameters: 3 (LPWSTR)

- Return-type: No return

<h3>Info</h3>
- The function is a combine version of <b>3</b> and <b>4</b> function together. 
