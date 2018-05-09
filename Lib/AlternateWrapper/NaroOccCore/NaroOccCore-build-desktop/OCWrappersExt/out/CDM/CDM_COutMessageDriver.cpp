// File generated by CPPExt (CPP file)
//

#include "CDM_COutMessageDriver.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCCDM_COutMessageDriver::OCCDM_COutMessageDriver(Handle(CDM_COutMessageDriver)* nativeHandle) : OCCDM_MessageDriver((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_CDM_COutMessageDriver(*nativeHandle);
}

 void OCCDM_COutMessageDriver::Write(System::String^ aString)
{
  (*((Handle_CDM_COutMessageDriver*)nativeHandle))->Write(OCConverter::StringToStandardExtString(aString));
}

