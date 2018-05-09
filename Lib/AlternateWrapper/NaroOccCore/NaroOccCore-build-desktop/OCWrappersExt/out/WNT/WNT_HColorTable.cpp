// File generated by CPPExt (CPP file)
//

#include "WNT_HColorTable.h"
#include "../Converter.h"
#include "WNT_ColorTable.h"


using namespace OCNaroWrappers;

OCWNT_HColorTable::OCWNT_HColorTable(Handle(WNT_HColorTable)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_WNT_HColorTable(*nativeHandle);
}

OCWNT_HColorTable::OCWNT_HColorTable(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_WNT_HColorTable(new WNT_HColorTable(Low, Up));
}

OCWNT_HColorTable::OCWNT_HColorTable(Standard_Integer Low, Standard_Integer Up, WNT_ColorRef V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_WNT_HColorTable(new WNT_HColorTable(Low, Up, V));
}

 void OCWNT_HColorTable::Init(WNT_ColorRef V)
{
  (*((Handle_WNT_HColorTable*)nativeHandle))->Init(V);
}

 Standard_Integer OCWNT_HColorTable::Length()
{
  return (*((Handle_WNT_HColorTable*)nativeHandle))->Length();
}

 Standard_Integer OCWNT_HColorTable::Lower()
{
  return (*((Handle_WNT_HColorTable*)nativeHandle))->Lower();
}

 Standard_Integer OCWNT_HColorTable::Upper()
{
  return (*((Handle_WNT_HColorTable*)nativeHandle))->Upper();
}

 void OCWNT_HColorTable::SetValue(Standard_Integer Index, WNT_ColorRef Value)
{
  (*((Handle_WNT_HColorTable*)nativeHandle))->SetValue(Index, Value);
}

 WNT_ColorRef OCWNT_HColorTable::Value(Standard_Integer Index)
{
  return (*((Handle_WNT_HColorTable*)nativeHandle))->Value(Index);
}

 WNT_ColorRef OCWNT_HColorTable::ChangeValue(Standard_Integer Index)
{
  return (*((Handle_WNT_HColorTable*)nativeHandle))->ChangeValue(Index);
}

OCWNT_ColorTable^ OCWNT_HColorTable::Array1()
{
  WNT_ColorTable* tmp = new WNT_ColorTable(0, 0);
  *tmp = (*((Handle_WNT_HColorTable*)nativeHandle))->Array1();
  return gcnew OCWNT_ColorTable(tmp);
}

OCWNT_ColorTable^ OCWNT_HColorTable::ChangeArray1()
{
  WNT_ColorTable* tmp = new WNT_ColorTable(0, 0);
  *tmp = (*((Handle_WNT_HColorTable*)nativeHandle))->ChangeArray1();
  return gcnew OCWNT_ColorTable(tmp);
}

