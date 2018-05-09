// File generated by CPPExt (CPP file)
//

#include "TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger.h"
#include "../Converter.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../TColStd/TColStd_HArray1OfInteger.h"
#include "TDataStd_DataMapOfStringHArray1OfInteger.h"
#include "TDataStd_DataMapNodeOfDataMapOfStringHArray1OfInteger.h"


using namespace OCNaroWrappers;

OCTDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger::OCTDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger(TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger::OCTDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger();
}

OCTDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger::OCTDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger(OCNaroWrappers::OCTDataStd_DataMapOfStringHArray1OfInteger^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger(*((TDataStd_DataMapOfStringHArray1OfInteger*)aMap->Handle));
}

 void OCTDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger::Initialize(OCNaroWrappers::OCTDataStd_DataMapOfStringHArray1OfInteger^ aMap)
{
  ((TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger*)nativeHandle)->Initialize(*((TDataStd_DataMapOfStringHArray1OfInteger*)aMap->Handle));
}

OCTCollection_ExtendedString^ OCTDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger::Key()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = ((TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger*)nativeHandle)->Key();
  return gcnew OCTCollection_ExtendedString(tmp);
}

OCTColStd_HArray1OfInteger^ OCTDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger::Value()
{
  Handle(TColStd_HArray1OfInteger) tmp = ((TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger*)nativeHandle)->Value();
  return gcnew OCTColStd_HArray1OfInteger(&tmp);
}

