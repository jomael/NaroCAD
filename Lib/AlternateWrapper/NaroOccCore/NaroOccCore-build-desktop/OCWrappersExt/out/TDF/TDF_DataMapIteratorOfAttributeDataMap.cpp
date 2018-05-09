// File generated by CPPExt (CPP file)
//

#include "TDF_DataMapIteratorOfAttributeDataMap.h"
#include "../Converter.h"
#include "TDF_Attribute.h"
#include "../TColStd/TColStd_MapTransientHasher.h"
#include "TDF_AttributeDataMap.h"
#include "TDF_DataMapNodeOfAttributeDataMap.h"


using namespace OCNaroWrappers;

OCTDF_DataMapIteratorOfAttributeDataMap::OCTDF_DataMapIteratorOfAttributeDataMap(TDF_DataMapIteratorOfAttributeDataMap* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTDF_DataMapIteratorOfAttributeDataMap::OCTDF_DataMapIteratorOfAttributeDataMap() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TDF_DataMapIteratorOfAttributeDataMap();
}

OCTDF_DataMapIteratorOfAttributeDataMap::OCTDF_DataMapIteratorOfAttributeDataMap(OCNaroWrappers::OCTDF_AttributeDataMap^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TDF_DataMapIteratorOfAttributeDataMap(*((TDF_AttributeDataMap*)aMap->Handle));
}

 void OCTDF_DataMapIteratorOfAttributeDataMap::Initialize(OCNaroWrappers::OCTDF_AttributeDataMap^ aMap)
{
  ((TDF_DataMapIteratorOfAttributeDataMap*)nativeHandle)->Initialize(*((TDF_AttributeDataMap*)aMap->Handle));
}

OCTDF_Attribute^ OCTDF_DataMapIteratorOfAttributeDataMap::Key()
{
  Handle(TDF_Attribute) tmp = ((TDF_DataMapIteratorOfAttributeDataMap*)nativeHandle)->Key();
  return gcnew OCTDF_Attribute(&tmp);
}

OCTDF_Attribute^ OCTDF_DataMapIteratorOfAttributeDataMap::Value()
{
  Handle(TDF_Attribute) tmp = ((TDF_DataMapIteratorOfAttributeDataMap*)nativeHandle)->Value();
  return gcnew OCTDF_Attribute(&tmp);
}

