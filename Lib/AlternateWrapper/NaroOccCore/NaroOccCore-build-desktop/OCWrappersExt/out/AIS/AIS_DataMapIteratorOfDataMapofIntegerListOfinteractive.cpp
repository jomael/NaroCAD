// File generated by CPPExt (CPP file)
//

#include "AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive.h"
#include "../Converter.h"
#include "AIS_ListOfInteractive.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "AIS_DataMapofIntegerListOfinteractive.h"
#include "AIS_DataMapNodeOfDataMapofIntegerListOfinteractive.h"


using namespace OCNaroWrappers;

OCAIS_DataMapIteratorOfDataMapofIntegerListOfinteractive::OCAIS_DataMapIteratorOfDataMapofIntegerListOfinteractive(AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCAIS_DataMapIteratorOfDataMapofIntegerListOfinteractive::OCAIS_DataMapIteratorOfDataMapofIntegerListOfinteractive() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive();
}

OCAIS_DataMapIteratorOfDataMapofIntegerListOfinteractive::OCAIS_DataMapIteratorOfDataMapofIntegerListOfinteractive(OCNaroWrappers::OCAIS_DataMapofIntegerListOfinteractive^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive(*((AIS_DataMapofIntegerListOfinteractive*)aMap->Handle));
}

 void OCAIS_DataMapIteratorOfDataMapofIntegerListOfinteractive::Initialize(OCNaroWrappers::OCAIS_DataMapofIntegerListOfinteractive^ aMap)
{
  ((AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive*)nativeHandle)->Initialize(*((AIS_DataMapofIntegerListOfinteractive*)aMap->Handle));
}

 Standard_Integer OCAIS_DataMapIteratorOfDataMapofIntegerListOfinteractive::Key()
{
  return ((AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive*)nativeHandle)->Key();
}

OCAIS_ListOfInteractive^ OCAIS_DataMapIteratorOfDataMapofIntegerListOfinteractive::Value()
{
  AIS_ListOfInteractive* tmp = new AIS_ListOfInteractive();
  *tmp = ((AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive*)nativeHandle)->Value();
  return gcnew OCAIS_ListOfInteractive(tmp);
}

