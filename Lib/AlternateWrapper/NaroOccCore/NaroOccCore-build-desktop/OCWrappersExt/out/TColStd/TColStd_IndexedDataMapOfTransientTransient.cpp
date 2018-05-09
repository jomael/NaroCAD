// File generated by CPPExt (CPP file)
//

#include "TColStd_IndexedDataMapOfTransientTransient.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "TColStd_MapTransientHasher.h"
#include "TColStd_IndexedDataMapNodeOfIndexedDataMapOfTransientTransient.h"


using namespace OCNaroWrappers;

OCTColStd_IndexedDataMapOfTransientTransient::OCTColStd_IndexedDataMapOfTransientTransient(TColStd_IndexedDataMapOfTransientTransient* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTColStd_IndexedDataMapOfTransientTransient::OCTColStd_IndexedDataMapOfTransientTransient(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TColStd_IndexedDataMapOfTransientTransient(NbBuckets);
}

OCTColStd_IndexedDataMapOfTransientTransient^ OCTColStd_IndexedDataMapOfTransientTransient::Assign(OCNaroWrappers::OCTColStd_IndexedDataMapOfTransientTransient^ Other)
{
  TColStd_IndexedDataMapOfTransientTransient* tmp = new TColStd_IndexedDataMapOfTransientTransient(0);
  *tmp = ((TColStd_IndexedDataMapOfTransientTransient*)nativeHandle)->Assign(*((TColStd_IndexedDataMapOfTransientTransient*)Other->Handle));
  return gcnew OCTColStd_IndexedDataMapOfTransientTransient(tmp);
}

 void OCTColStd_IndexedDataMapOfTransientTransient::ReSize(Standard_Integer NbBuckets)
{
  ((TColStd_IndexedDataMapOfTransientTransient*)nativeHandle)->ReSize(NbBuckets);
}

 Standard_Integer OCTColStd_IndexedDataMapOfTransientTransient::Add(OCNaroWrappers::OCStandard_Transient^ K, OCNaroWrappers::OCStandard_Transient^ I)
{
  return ((TColStd_IndexedDataMapOfTransientTransient*)nativeHandle)->Add(*((Handle_Standard_Transient*)K->Handle), *((Handle_Standard_Transient*)I->Handle));
}

 void OCTColStd_IndexedDataMapOfTransientTransient::Substitute(Standard_Integer I, OCNaroWrappers::OCStandard_Transient^ K, OCNaroWrappers::OCStandard_Transient^ T)
{
  ((TColStd_IndexedDataMapOfTransientTransient*)nativeHandle)->Substitute(I, *((Handle_Standard_Transient*)K->Handle), *((Handle_Standard_Transient*)T->Handle));
}

 void OCTColStd_IndexedDataMapOfTransientTransient::RemoveLast()
{
  ((TColStd_IndexedDataMapOfTransientTransient*)nativeHandle)->RemoveLast();
}

 System::Boolean OCTColStd_IndexedDataMapOfTransientTransient::Contains(OCNaroWrappers::OCStandard_Transient^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_IndexedDataMapOfTransientTransient*)nativeHandle)->Contains(*((Handle_Standard_Transient*)K->Handle)));
}

OCStandard_Transient^ OCTColStd_IndexedDataMapOfTransientTransient::FindKey(Standard_Integer I)
{
  Handle(Standard_Transient) tmp = ((TColStd_IndexedDataMapOfTransientTransient*)nativeHandle)->FindKey(I);
  return gcnew OCStandard_Transient(&tmp);
}

OCStandard_Transient^ OCTColStd_IndexedDataMapOfTransientTransient::FindFromIndex(Standard_Integer I)
{
  Handle(Standard_Transient) tmp = ((TColStd_IndexedDataMapOfTransientTransient*)nativeHandle)->FindFromIndex(I);
  return gcnew OCStandard_Transient(&tmp);
}

OCStandard_Transient^ OCTColStd_IndexedDataMapOfTransientTransient::ChangeFromIndex(Standard_Integer I)
{
  Handle(Standard_Transient) tmp = ((TColStd_IndexedDataMapOfTransientTransient*)nativeHandle)->ChangeFromIndex(I);
  return gcnew OCStandard_Transient(&tmp);
}

 Standard_Integer OCTColStd_IndexedDataMapOfTransientTransient::FindIndex(OCNaroWrappers::OCStandard_Transient^ K)
{
  return ((TColStd_IndexedDataMapOfTransientTransient*)nativeHandle)->FindIndex(*((Handle_Standard_Transient*)K->Handle));
}

OCStandard_Transient^ OCTColStd_IndexedDataMapOfTransientTransient::FindFromKey(OCNaroWrappers::OCStandard_Transient^ K)
{
  Handle(Standard_Transient) tmp = ((TColStd_IndexedDataMapOfTransientTransient*)nativeHandle)->FindFromKey(*((Handle_Standard_Transient*)K->Handle));
  return gcnew OCStandard_Transient(&tmp);
}

OCStandard_Transient^ OCTColStd_IndexedDataMapOfTransientTransient::ChangeFromKey(OCNaroWrappers::OCStandard_Transient^ K)
{
  Handle(Standard_Transient) tmp = ((TColStd_IndexedDataMapOfTransientTransient*)nativeHandle)->ChangeFromKey(*((Handle_Standard_Transient*)K->Handle));
  return gcnew OCStandard_Transient(&tmp);
}

 Standard_Address OCTColStd_IndexedDataMapOfTransientTransient::FindFromKey1(OCNaroWrappers::OCStandard_Transient^ K)
{
  return ((TColStd_IndexedDataMapOfTransientTransient*)nativeHandle)->FindFromKey1(*((Handle_Standard_Transient*)K->Handle));
}

 Standard_Address OCTColStd_IndexedDataMapOfTransientTransient::ChangeFromKey1(OCNaroWrappers::OCStandard_Transient^ K)
{
  return ((TColStd_IndexedDataMapOfTransientTransient*)nativeHandle)->ChangeFromKey1(*((Handle_Standard_Transient*)K->Handle));
}

