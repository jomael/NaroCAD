// File generated by CPPExt (CPP file)
//

#include "TDataStd_ListOfExtendedString.h"
#include "../Converter.h"
#include "TDataStd_ListIteratorOfListOfExtendedString.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "TDataStd_ListNodeOfListOfExtendedString.h"


using namespace OCNaroWrappers;

OCTDataStd_ListOfExtendedString::OCTDataStd_ListOfExtendedString(TDataStd_ListOfExtendedString* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTDataStd_ListOfExtendedString::OCTDataStd_ListOfExtendedString() 
{
  nativeHandle = new TDataStd_ListOfExtendedString();
}

 void OCTDataStd_ListOfExtendedString::Assign(OCNaroWrappers::OCTDataStd_ListOfExtendedString^ Other)
{
  ((TDataStd_ListOfExtendedString*)nativeHandle)->Assign(*((TDataStd_ListOfExtendedString*)Other->Handle));
}

 Standard_Integer OCTDataStd_ListOfExtendedString::Extent()
{
  return ((TDataStd_ListOfExtendedString*)nativeHandle)->Extent();
}

 System::Boolean OCTDataStd_ListOfExtendedString::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((TDataStd_ListOfExtendedString*)nativeHandle)->IsEmpty());
}

 void OCTDataStd_ListOfExtendedString::Prepend(OCNaroWrappers::OCTCollection_ExtendedString^ I)
{
  ((TDataStd_ListOfExtendedString*)nativeHandle)->Prepend(*((TCollection_ExtendedString*)I->Handle));
}

 void OCTDataStd_ListOfExtendedString::Prepend(OCNaroWrappers::OCTCollection_ExtendedString^ I, OCNaroWrappers::OCTDataStd_ListIteratorOfListOfExtendedString^ theIt)
{
  ((TDataStd_ListOfExtendedString*)nativeHandle)->Prepend(*((TCollection_ExtendedString*)I->Handle), *((TDataStd_ListIteratorOfListOfExtendedString*)theIt->Handle));
}

 void OCTDataStd_ListOfExtendedString::Prepend(OCNaroWrappers::OCTDataStd_ListOfExtendedString^ Other)
{
  ((TDataStd_ListOfExtendedString*)nativeHandle)->Prepend(*((TDataStd_ListOfExtendedString*)Other->Handle));
}

 void OCTDataStd_ListOfExtendedString::Append(OCNaroWrappers::OCTCollection_ExtendedString^ I)
{
  ((TDataStd_ListOfExtendedString*)nativeHandle)->Append(*((TCollection_ExtendedString*)I->Handle));
}

 void OCTDataStd_ListOfExtendedString::Append(OCNaroWrappers::OCTCollection_ExtendedString^ I, OCNaroWrappers::OCTDataStd_ListIteratorOfListOfExtendedString^ theIt)
{
  ((TDataStd_ListOfExtendedString*)nativeHandle)->Append(*((TCollection_ExtendedString*)I->Handle), *((TDataStd_ListIteratorOfListOfExtendedString*)theIt->Handle));
}

 void OCTDataStd_ListOfExtendedString::Append(OCNaroWrappers::OCTDataStd_ListOfExtendedString^ Other)
{
  ((TDataStd_ListOfExtendedString*)nativeHandle)->Append(*((TDataStd_ListOfExtendedString*)Other->Handle));
}

OCTCollection_ExtendedString^ OCTDataStd_ListOfExtendedString::First()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = ((TDataStd_ListOfExtendedString*)nativeHandle)->First();
  return gcnew OCTCollection_ExtendedString(tmp);
}

OCTCollection_ExtendedString^ OCTDataStd_ListOfExtendedString::Last()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = ((TDataStd_ListOfExtendedString*)nativeHandle)->Last();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 void OCTDataStd_ListOfExtendedString::RemoveFirst()
{
  ((TDataStd_ListOfExtendedString*)nativeHandle)->RemoveFirst();
}

 void OCTDataStd_ListOfExtendedString::Remove(OCNaroWrappers::OCTDataStd_ListIteratorOfListOfExtendedString^ It)
{
  ((TDataStd_ListOfExtendedString*)nativeHandle)->Remove(*((TDataStd_ListIteratorOfListOfExtendedString*)It->Handle));
}

 void OCTDataStd_ListOfExtendedString::InsertBefore(OCNaroWrappers::OCTCollection_ExtendedString^ I, OCNaroWrappers::OCTDataStd_ListIteratorOfListOfExtendedString^ It)
{
  ((TDataStd_ListOfExtendedString*)nativeHandle)->InsertBefore(*((TCollection_ExtendedString*)I->Handle), *((TDataStd_ListIteratorOfListOfExtendedString*)It->Handle));
}

 void OCTDataStd_ListOfExtendedString::InsertBefore(OCNaroWrappers::OCTDataStd_ListOfExtendedString^ Other, OCNaroWrappers::OCTDataStd_ListIteratorOfListOfExtendedString^ It)
{
  ((TDataStd_ListOfExtendedString*)nativeHandle)->InsertBefore(*((TDataStd_ListOfExtendedString*)Other->Handle), *((TDataStd_ListIteratorOfListOfExtendedString*)It->Handle));
}

 void OCTDataStd_ListOfExtendedString::InsertAfter(OCNaroWrappers::OCTCollection_ExtendedString^ I, OCNaroWrappers::OCTDataStd_ListIteratorOfListOfExtendedString^ It)
{
  ((TDataStd_ListOfExtendedString*)nativeHandle)->InsertAfter(*((TCollection_ExtendedString*)I->Handle), *((TDataStd_ListIteratorOfListOfExtendedString*)It->Handle));
}

 void OCTDataStd_ListOfExtendedString::InsertAfter(OCNaroWrappers::OCTDataStd_ListOfExtendedString^ Other, OCNaroWrappers::OCTDataStd_ListIteratorOfListOfExtendedString^ It)
{
  ((TDataStd_ListOfExtendedString*)nativeHandle)->InsertAfter(*((TDataStd_ListOfExtendedString*)Other->Handle), *((TDataStd_ListIteratorOfListOfExtendedString*)It->Handle));
}

