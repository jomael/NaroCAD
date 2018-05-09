// File generated by CPPExt (CPP file)
//

#include "TDataStd_HLabelArray1.h"
#include "../Converter.h"
#include "../TDF/TDF_Label.h"
#include "TDataStd_LabelArray1.h"


using namespace OCNaroWrappers;

OCTDataStd_HLabelArray1::OCTDataStd_HLabelArray1(Handle(TDataStd_HLabelArray1)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_HLabelArray1(*nativeHandle);
}

OCTDataStd_HLabelArray1::OCTDataStd_HLabelArray1(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_HLabelArray1(new TDataStd_HLabelArray1(Low, Up));
}

OCTDataStd_HLabelArray1::OCTDataStd_HLabelArray1(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCTDF_Label^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_HLabelArray1(new TDataStd_HLabelArray1(Low, Up, *((TDF_Label*)V->Handle)));
}

 void OCTDataStd_HLabelArray1::Init(OCNaroWrappers::OCTDF_Label^ V)
{
  (*((Handle_TDataStd_HLabelArray1*)nativeHandle))->Init(*((TDF_Label*)V->Handle));
}

 Standard_Integer OCTDataStd_HLabelArray1::Length()
{
  return (*((Handle_TDataStd_HLabelArray1*)nativeHandle))->Length();
}

 Standard_Integer OCTDataStd_HLabelArray1::Lower()
{
  return (*((Handle_TDataStd_HLabelArray1*)nativeHandle))->Lower();
}

 Standard_Integer OCTDataStd_HLabelArray1::Upper()
{
  return (*((Handle_TDataStd_HLabelArray1*)nativeHandle))->Upper();
}

 void OCTDataStd_HLabelArray1::SetValue(Standard_Integer Index, OCNaroWrappers::OCTDF_Label^ Value)
{
  (*((Handle_TDataStd_HLabelArray1*)nativeHandle))->SetValue(Index, *((TDF_Label*)Value->Handle));
}

OCTDF_Label^ OCTDataStd_HLabelArray1::Value(Standard_Integer Index)
{
  TDF_Label* tmp = new TDF_Label();
  *tmp = (*((Handle_TDataStd_HLabelArray1*)nativeHandle))->Value(Index);
  return gcnew OCTDF_Label(tmp);
}

OCTDF_Label^ OCTDataStd_HLabelArray1::ChangeValue(Standard_Integer Index)
{
  TDF_Label* tmp = new TDF_Label();
  *tmp = (*((Handle_TDataStd_HLabelArray1*)nativeHandle))->ChangeValue(Index);
  return gcnew OCTDF_Label(tmp);
}

OCTDataStd_LabelArray1^ OCTDataStd_HLabelArray1::Array1()
{
  TDataStd_LabelArray1* tmp = new TDataStd_LabelArray1(0, 0);
  *tmp = (*((Handle_TDataStd_HLabelArray1*)nativeHandle))->Array1();
  return gcnew OCTDataStd_LabelArray1(tmp);
}

OCTDataStd_LabelArray1^ OCTDataStd_HLabelArray1::ChangeArray1()
{
  TDataStd_LabelArray1* tmp = new TDataStd_LabelArray1(0, 0);
  *tmp = (*((Handle_TDataStd_HLabelArray1*)nativeHandle))->ChangeArray1();
  return gcnew OCTDataStd_LabelArray1(tmp);
}

