#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <IndustryStandard/Tdx.h>
#include <Library/TdxLib.h>

static BOOLEAN gIsTdGuest = FALSE;

VOID
EFIAPI
SetTdGuest(
  BOOLEAN TdGuest)
{
  gIsTdGuest = TdGuest;
}


BOOLEAN
EFIAPI
IsTdGuest(
  VOID){

  //
  // TODO add code here to check whether we are in TDX guest
  //
  return gIsTdGuest;
}

