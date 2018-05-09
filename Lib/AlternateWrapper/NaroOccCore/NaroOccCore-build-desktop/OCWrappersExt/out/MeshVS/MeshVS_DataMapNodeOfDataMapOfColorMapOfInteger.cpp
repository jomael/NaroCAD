// File generated by CPPExt (CPP file)
//

#include "MeshVS_DataMapNodeOfDataMapOfColorMapOfInteger.h"
#include "../Converter.h"
#include "../Quantity/Quantity_Color.h"
#include "../TColStd/TColStd_MapOfInteger.h"
#include "MeshVS_ColorHasher.h"
#include "MeshVS_DataMapOfColorMapOfInteger.h"
#include "MeshVS_DataMapIteratorOfDataMapOfColorMapOfInteger.h"


using namespace OCNaroWrappers;

OCMeshVS_DataMapNodeOfDataMapOfColorMapOfInteger::OCMeshVS_DataMapNodeOfDataMapOfColorMapOfInteger(Handle(MeshVS_DataMapNodeOfDataMapOfColorMapOfInteger)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MeshVS_DataMapNodeOfDataMapOfColorMapOfInteger(*nativeHandle);
}

OCMeshVS_DataMapNodeOfDataMapOfColorMapOfInteger::OCMeshVS_DataMapNodeOfDataMapOfColorMapOfInteger(OCNaroWrappers::OCQuantity_Color^ K, OCNaroWrappers::OCTColStd_MapOfInteger^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MeshVS_DataMapNodeOfDataMapOfColorMapOfInteger(new MeshVS_DataMapNodeOfDataMapOfColorMapOfInteger(*((Quantity_Color*)K->Handle), *((TColStd_MapOfInteger*)I->Handle), n));
}

OCQuantity_Color^ OCMeshVS_DataMapNodeOfDataMapOfColorMapOfInteger::Key()
{
  Quantity_Color* tmp = new Quantity_Color();
  *tmp = (*((Handle_MeshVS_DataMapNodeOfDataMapOfColorMapOfInteger*)nativeHandle))->Key();
  return gcnew OCQuantity_Color(tmp);
}

OCTColStd_MapOfInteger^ OCMeshVS_DataMapNodeOfDataMapOfColorMapOfInteger::Value()
{
  TColStd_MapOfInteger* tmp = new TColStd_MapOfInteger(0);
  *tmp = (*((Handle_MeshVS_DataMapNodeOfDataMapOfColorMapOfInteger*)nativeHandle))->Value();
  return gcnew OCTColStd_MapOfInteger(tmp);
}

