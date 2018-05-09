// File generated by CPPExt (CPP file)
//

#include "AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs.h"
#include "../Converter.h"
#include "../SelectMgr/SelectMgr_EntityOwner.h"
#include "../Prs3d/Prs3d_Presentation.h"
#include "../TColStd/TColStd_MapTransientHasher.h"
#include "AIS_IndexedDataMapOfOwnerPrs.h"


using namespace OCNaroWrappers;

OCAIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs::OCAIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs(Handle(AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs(*nativeHandle);
}

OCAIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs::OCAIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs(OCNaroWrappers::OCSelectMgr_EntityOwner^ K1, Standard_Integer K2, OCNaroWrappers::OCPrs3d_Presentation^ I, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs(new AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs(*((Handle_SelectMgr_EntityOwner*)K1->Handle), K2, *((Handle_Prs3d_Presentation*)I->Handle), n1, n2));
}

OCSelectMgr_EntityOwner^ OCAIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs::Key1()
{
  Handle(SelectMgr_EntityOwner) tmp = (*((Handle_AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs*)nativeHandle))->Key1();
  return gcnew OCSelectMgr_EntityOwner(&tmp);
}

 Standard_Integer OCAIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs::Key2()
{
  return (*((Handle_AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs*)nativeHandle))->Key2();
}

 TCollection_MapNodePtr& OCAIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs::Next2()
{
  return (*((Handle_AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs*)nativeHandle))->Next2();
}

OCPrs3d_Presentation^ OCAIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs::Value()
{
  Handle(Prs3d_Presentation) tmp = (*((Handle_AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs*)nativeHandle))->Value();
  return gcnew OCPrs3d_Presentation(&tmp);
}

