// File generated by CPPExt (CPP file)
//

#include "SelectMgr_IndexedDataMapOfOwnerCriterion.h"
#include "../Converter.h"
#include "../SelectBasics/SelectBasics_EntityOwner.h"
#include "SelectMgr_SortCriterion.h"
#include "../TColStd/TColStd_MapTransientHasher.h"
#include "SelectMgr_IndexedDataMapNodeOfIndexedDataMapOfOwnerCriterion.h"


using namespace OCNaroWrappers;

OCSelectMgr_IndexedDataMapOfOwnerCriterion::OCSelectMgr_IndexedDataMapOfOwnerCriterion(SelectMgr_IndexedDataMapOfOwnerCriterion* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCSelectMgr_IndexedDataMapOfOwnerCriterion::OCSelectMgr_IndexedDataMapOfOwnerCriterion(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new SelectMgr_IndexedDataMapOfOwnerCriterion(NbBuckets);
}

OCSelectMgr_IndexedDataMapOfOwnerCriterion^ OCSelectMgr_IndexedDataMapOfOwnerCriterion::Assign(OCNaroWrappers::OCSelectMgr_IndexedDataMapOfOwnerCriterion^ Other)
{
  SelectMgr_IndexedDataMapOfOwnerCriterion* tmp = new SelectMgr_IndexedDataMapOfOwnerCriterion(0);
  *tmp = ((SelectMgr_IndexedDataMapOfOwnerCriterion*)nativeHandle)->Assign(*((SelectMgr_IndexedDataMapOfOwnerCriterion*)Other->Handle));
  return gcnew OCSelectMgr_IndexedDataMapOfOwnerCriterion(tmp);
}

 void OCSelectMgr_IndexedDataMapOfOwnerCriterion::ReSize(Standard_Integer NbBuckets)
{
  ((SelectMgr_IndexedDataMapOfOwnerCriterion*)nativeHandle)->ReSize(NbBuckets);
}

 Standard_Integer OCSelectMgr_IndexedDataMapOfOwnerCriterion::Add(OCNaroWrappers::OCSelectBasics_EntityOwner^ K, OCNaroWrappers::OCSelectMgr_SortCriterion^ I)
{
  return ((SelectMgr_IndexedDataMapOfOwnerCriterion*)nativeHandle)->Add(*((Handle_SelectBasics_EntityOwner*)K->Handle), *((SelectMgr_SortCriterion*)I->Handle));
}

 void OCSelectMgr_IndexedDataMapOfOwnerCriterion::Substitute(Standard_Integer I, OCNaroWrappers::OCSelectBasics_EntityOwner^ K, OCNaroWrappers::OCSelectMgr_SortCriterion^ T)
{
  ((SelectMgr_IndexedDataMapOfOwnerCriterion*)nativeHandle)->Substitute(I, *((Handle_SelectBasics_EntityOwner*)K->Handle), *((SelectMgr_SortCriterion*)T->Handle));
}

 void OCSelectMgr_IndexedDataMapOfOwnerCriterion::RemoveLast()
{
  ((SelectMgr_IndexedDataMapOfOwnerCriterion*)nativeHandle)->RemoveLast();
}

 System::Boolean OCSelectMgr_IndexedDataMapOfOwnerCriterion::Contains(OCNaroWrappers::OCSelectBasics_EntityOwner^ K)
{
  return OCConverter::StandardBooleanToBoolean(((SelectMgr_IndexedDataMapOfOwnerCriterion*)nativeHandle)->Contains(*((Handle_SelectBasics_EntityOwner*)K->Handle)));
}

OCSelectBasics_EntityOwner^ OCSelectMgr_IndexedDataMapOfOwnerCriterion::FindKey(Standard_Integer I)
{
  Handle(SelectBasics_EntityOwner) tmp = ((SelectMgr_IndexedDataMapOfOwnerCriterion*)nativeHandle)->FindKey(I);
  return gcnew OCSelectBasics_EntityOwner(&tmp);
}

OCSelectMgr_SortCriterion^ OCSelectMgr_IndexedDataMapOfOwnerCriterion::FindFromIndex(Standard_Integer I)
{
  SelectMgr_SortCriterion* tmp = new SelectMgr_SortCriterion();
  *tmp = ((SelectMgr_IndexedDataMapOfOwnerCriterion*)nativeHandle)->FindFromIndex(I);
  return gcnew OCSelectMgr_SortCriterion(tmp);
}

OCSelectMgr_SortCriterion^ OCSelectMgr_IndexedDataMapOfOwnerCriterion::ChangeFromIndex(Standard_Integer I)
{
  SelectMgr_SortCriterion* tmp = new SelectMgr_SortCriterion();
  *tmp = ((SelectMgr_IndexedDataMapOfOwnerCriterion*)nativeHandle)->ChangeFromIndex(I);
  return gcnew OCSelectMgr_SortCriterion(tmp);
}

 Standard_Integer OCSelectMgr_IndexedDataMapOfOwnerCriterion::FindIndex(OCNaroWrappers::OCSelectBasics_EntityOwner^ K)
{
  return ((SelectMgr_IndexedDataMapOfOwnerCriterion*)nativeHandle)->FindIndex(*((Handle_SelectBasics_EntityOwner*)K->Handle));
}

OCSelectMgr_SortCriterion^ OCSelectMgr_IndexedDataMapOfOwnerCriterion::FindFromKey(OCNaroWrappers::OCSelectBasics_EntityOwner^ K)
{
  SelectMgr_SortCriterion* tmp = new SelectMgr_SortCriterion();
  *tmp = ((SelectMgr_IndexedDataMapOfOwnerCriterion*)nativeHandle)->FindFromKey(*((Handle_SelectBasics_EntityOwner*)K->Handle));
  return gcnew OCSelectMgr_SortCriterion(tmp);
}

OCSelectMgr_SortCriterion^ OCSelectMgr_IndexedDataMapOfOwnerCriterion::ChangeFromKey(OCNaroWrappers::OCSelectBasics_EntityOwner^ K)
{
  SelectMgr_SortCriterion* tmp = new SelectMgr_SortCriterion();
  *tmp = ((SelectMgr_IndexedDataMapOfOwnerCriterion*)nativeHandle)->ChangeFromKey(*((Handle_SelectBasics_EntityOwner*)K->Handle));
  return gcnew OCSelectMgr_SortCriterion(tmp);
}

 Standard_Address OCSelectMgr_IndexedDataMapOfOwnerCriterion::FindFromKey1(OCNaroWrappers::OCSelectBasics_EntityOwner^ K)
{
  return ((SelectMgr_IndexedDataMapOfOwnerCriterion*)nativeHandle)->FindFromKey1(*((Handle_SelectBasics_EntityOwner*)K->Handle));
}

 Standard_Address OCSelectMgr_IndexedDataMapOfOwnerCriterion::ChangeFromKey1(OCNaroWrappers::OCSelectBasics_EntityOwner^ K)
{
  return ((SelectMgr_IndexedDataMapOfOwnerCriterion*)nativeHandle)->ChangeFromKey1(*((Handle_SelectBasics_EntityOwner*)K->Handle));
}

