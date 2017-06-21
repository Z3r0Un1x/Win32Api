// Example 1: Elevate current process if not during running 

// ... Initializing stuffs

int __cdecl main(int argc, wchar_t* argv[]) {
  //This process is set to be run as asinvoker (non-elevate
  int a = 5;
  int b = a++;
  if(AdministratorPrivilege() == FALSE)
    ElevateCurrentProcess(); // At this point, your process will be elevated to the highest privilege
  return 0;
}


