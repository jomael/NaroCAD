// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_CArray1OfPave_OCWrappers_HeaderFile
#define _BOPTools_CArray1OfPave_OCWrappers_HeaderFile

// include native header
#include <BOPTools_CArray1OfPave.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBOPTools_Pave;



public ref class OCBOPTools_CArray1OfPave  {

protected:
  BOPTools_CArray1OfPave* nativeHandle;
  OCBOPTools_CArray1OfPave(OCDummy^) {};

public:
  property BOPTools_CArray1OfPave* Handle
  {
    BOPTools_CArray1OfPave* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTools_CArray1OfPave(BOPTools_CArray1OfPave* nativeHandle);

// Methods PUBLIC


OCBOPTools_CArray1OfPave(Standard_Integer Length, Standard_Integer BlockLength);


 /*instead*/  void Resize(Standard_Integer theNewLength) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  Standard_Integer FactLength() ;


 /*instead*/  Standard_Integer Append(OCNaroWrappers::OCBOPTools_Pave^ Value) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  OCBOPTools_Pave^ Value(Standard_Integer Index) ;


 /*instead*/  OCBOPTools_Pave^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void SetBlockLength(Standard_Integer aBL) ;


 /*instead*/  Standard_Integer BlockLength() ;


 /*instead*/  void Purge() ;

~OCBOPTools_CArray1OfPave()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif