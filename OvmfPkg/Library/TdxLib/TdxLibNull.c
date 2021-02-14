#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <IndustryStandard/Tdx.h>
#include <Library/TdxLib.h>

UINT64
EFIAPI
TdReport (
  UINT64  Report,  // Rcx
  UINT64  AdditionalData  // Rdx
  ){
  ASSERT(FALSE);
  return 0;
}

UINT64
EFIAPI
TdAcceptPages (
  UINT64  PhysicalAddress,  // Rcx
  UINT64  NumberOfPages  // Rdx
  ){
  ASSERT(FALSE);
  return 0;
}

EFI_STATUS
EFIAPI
TdCall(
  IN UINT64           Leaf,
  IN UINT64           Arg1,
  IN UINT64           Arg2,
  IN UINT64           Arg3,
  IN VOID             *Results
  ){
  ASSERT(FALSE);
  return 0;
}

EFI_STATUS
EFIAPI
TdVmCall (
  IN UINT64          Leaf,
  IN UINT64          Arg1,
  IN UINT64          Arg2,
  IN UINT64          Arg3,
  IN UINT64          Arg4,
  IN VOID           *Results
  ){
  ASSERT(FALSE);
  return 0;
}


EFI_STATUS
EFIAPI
TdVmCall_cpuid (
  IN UINT64         Eax,
  IN UINT64         Ecx,
  VOID              *Results
  ){
  ASSERT(FALSE);
  return 0;
}


VOID
EFIAPI
TdBreak(
  IN UINT64           Param1,
  IN UINT64           Param2
  ){
  ASSERT(FALSE);
  return;
}

VOID
EFIAPI
SetTdGuest(
  BOOLEAN TdGuest)
{
}

BOOLEAN
EFIAPI
IsTdGuest(
  VOID){

  return FALSE;
}
