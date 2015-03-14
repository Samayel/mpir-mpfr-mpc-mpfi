
#if defined _WINDLL
#  if defined( _WIN64 )
#    if defined( _DEBUG )
#      include "..\..\mpir\dll\x64\debug\config.h"
#    else
#      include "..\..\mpir\dll\x64\release\config.h"
#    endif
#  else
#    if defined( _DEBUG )
#      include "..\..\mpir\dll\win32\debug\config.h"
#    else
#      include "..\..\mpir\dll\win32\release\config.h"
#    endif 
#  endif
#else
#  if defined( _WIN64 )
#    if defined( _DEBUG )
#      include "..\..\mpir\lib\x64\debug\config.h"
#    else
#      include "..\..\mpir\lib\x64\release\config.h"
#    endif
#  else
#    if defined( _DEBUG )
#      include "..\..\mpir\lib\win32\debug\config.h"
#    else
#      include "..\..\mpir\lib\win32\release\config.h"
#    endif 
#  endif
#endif

#define PACKAGE_STRING "mpc" 
#define PACKAGE_VERSION "0.9-rc1" 
#define STDC_HEADERS 1 
#define MPC_CC MSC_VERSION
#define dlsym(handle, name) GetProcAddress(GetModuleHandle(handle), name) 
#include "windows.h" 
