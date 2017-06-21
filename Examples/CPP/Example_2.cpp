// Example 2: Assign current process to registry (non-elevate)

//... Initializing stuffs

int __cdecl main(int argc, wchar_t* argv[]) {
  EnableStartup(L"MyProgramName", "/onboot", L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run");
  return 0;
}
