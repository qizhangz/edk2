#ifndef __TDX_STARTUP_LIB_H__
#define __TDX_STARTUP_LIB_H__

#include <Library/BaseLib.h>
#include <Uefi/UefiBaseType.h>
#include <Library/DebugLib.h>
#include <Protocol/DebugSupport.h>

VOID
EFIAPI
TdxStartup(
  IN VOID * Context,
  IN VOID * VmmHobList,
  IN UINTN Info
);


#endif
