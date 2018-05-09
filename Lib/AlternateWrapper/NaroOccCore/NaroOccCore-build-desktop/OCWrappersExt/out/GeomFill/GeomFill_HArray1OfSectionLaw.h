// File generated by CPPExt (Transient)
//
#ifndef _GeomFill_HArray1OfSectionLaw_OCWrappers_HeaderFile
#define _GeomFill_HArray1OfSectionLaw_OCWrappers_HeaderFile

// include the wrapped class
#include <GeomFill_HArray1OfSectionLaw.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "GeomFill_Array1OfSectionLaw.h"


namespace OCNaroWrappers
{

ref class OCGeomFill_SectionLaw;
ref class OCGeomFill_Array1OfSectionLaw;



public ref class OCGeomFill_HArray1OfSectionLaw : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCGeomFill_HArray1OfSectionLaw(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeomFill_HArray1OfSectionLaw(Handle(GeomFill_HArray1OfSectionLaw)* nativeHandle);

// Methods PUBLIC


OCGeomFill_HArray1OfSectionLaw(Standard_Integer Low, Standard_Integer Up);


OCGeomFill_HArray1OfSectionLaw(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCGeomFill_SectionLaw^ V);


 /*instead*/  void Init(OCNaroWrappers::OCGeomFill_SectionLaw^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCGeomFill_SectionLaw^ Value) ;


 /*instead*/  OCGeomFill_SectionLaw^ Value(Standard_Integer Index) ;


 /*instead*/  OCGeomFill_SectionLaw^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCGeomFill_Array1OfSectionLaw^ Array1() ;


 /*instead*/  OCGeomFill_Array1OfSectionLaw^ ChangeArray1() ;

~OCGeomFill_HArray1OfSectionLaw()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif