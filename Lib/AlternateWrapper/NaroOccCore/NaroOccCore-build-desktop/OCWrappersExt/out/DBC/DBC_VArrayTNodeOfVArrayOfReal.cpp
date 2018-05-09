// File generated by CPPExt (CPP file)
//

#include "DBC_VArrayTNodeOfVArrayOfReal.h"
#include "../Converter.h"
#include "DBC_VArrayOfReal.h"
#include "DBC_VArrayNodeOfVArrayOfReal.h"


using namespace OCNaroWrappers;

OCDBC_VArrayTNodeOfVArrayOfReal::OCDBC_VArrayTNodeOfVArrayOfReal(DBC_VArrayTNodeOfVArrayOfReal* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCDBC_VArrayTNodeOfVArrayOfReal::OCDBC_VArrayTNodeOfVArrayOfReal() 
{
  nativeHandle = new DBC_VArrayTNodeOfVArrayOfReal();
}

OCDBC_VArrayTNodeOfVArrayOfReal::OCDBC_VArrayTNodeOfVArrayOfReal(Standard_Real aValue) 
{
  nativeHandle = new DBC_VArrayTNodeOfVArrayOfReal(aValue);
}

 void OCDBC_VArrayTNodeOfVArrayOfReal::SetValue(Standard_Real aValue)
{
  ((DBC_VArrayTNodeOfVArrayOfReal*)nativeHandle)->SetValue(aValue);
}

 Standard_Address OCDBC_VArrayTNodeOfVArrayOfReal::Value()
{
  return ((DBC_VArrayTNodeOfVArrayOfReal*)nativeHandle)->Value();
}

