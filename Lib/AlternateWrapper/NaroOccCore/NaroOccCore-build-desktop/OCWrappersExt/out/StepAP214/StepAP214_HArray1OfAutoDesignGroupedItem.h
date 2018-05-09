// File generated by CPPExt (Transient)
//
#ifndef _StepAP214_HArray1OfAutoDesignGroupedItem_OCWrappers_HeaderFile
#define _StepAP214_HArray1OfAutoDesignGroupedItem_OCWrappers_HeaderFile

// include the wrapped class
#include <StepAP214_HArray1OfAutoDesignGroupedItem.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepAP214_Array1OfAutoDesignGroupedItem.h"


namespace OCNaroWrappers
{

ref class OCStepAP214_AutoDesignGroupedItem;
ref class OCStepAP214_Array1OfAutoDesignGroupedItem;



public ref class OCStepAP214_HArray1OfAutoDesignGroupedItem : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepAP214_HArray1OfAutoDesignGroupedItem(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP214_HArray1OfAutoDesignGroupedItem(Handle(StepAP214_HArray1OfAutoDesignGroupedItem)* nativeHandle);

// Methods PUBLIC


OCStepAP214_HArray1OfAutoDesignGroupedItem(Standard_Integer Low, Standard_Integer Up);


OCStepAP214_HArray1OfAutoDesignGroupedItem(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepAP214_AutoDesignGroupedItem^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepAP214_AutoDesignGroupedItem^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP214_AutoDesignGroupedItem^ Value) ;


 /*instead*/  OCStepAP214_AutoDesignGroupedItem^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepAP214_AutoDesignGroupedItem^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepAP214_Array1OfAutoDesignGroupedItem^ Array1() ;


 /*instead*/  OCStepAP214_Array1OfAutoDesignGroupedItem^ ChangeArray1() ;

~OCStepAP214_HArray1OfAutoDesignGroupedItem()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif