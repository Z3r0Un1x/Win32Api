// Example 1: Elevate current process during runtime

// ... Initializing stuffs

int __cdecl main(int argc, wchar_t* argv[]) {
  //This process is set to be run as asinvoker (non-elevate)
  if(AdministratorPrivilege() == FALSE)
    ElevateCurrentProcess(); // At this point, your process will be elevated to the highest privilege
  return 0;
}


