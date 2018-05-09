// File generated by CPPExt (MPV)
//
#ifndef _Intf_Array1OfLin_OCWrappers_HeaderFile
#define _Intf_Array1OfLin_OCWrappers_HeaderFile

// include native header
#include <Intf_Array1OfLin.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCgp_Lin;



public ref class OCIntf_Array1OfLin  {

protected:
  Intf_Array1OfLin* nativeHandle;
  OCIntf_Array1OfLin(OCDummy^) {};

public:
  property Intf_Array1OfLin* Handle
  {
    Intf_Array1OfLin* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntf_Array1OfLin(Intf_Array1OfLin* nativeHandle);

// Methods PUBLIC


OCIntf_Array1OfLin(Standard_Integer Low, Standard_Integer Up);


OCIntf_Array1OfLin(OCNaroWrappers::OCgp_Lin^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCgp_Lin^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCIntf_Array1OfLin^ Assign(OCNaroWrappers::OCIntf_Array1OfLin^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_Lin^ Value) ;


 /*instead*/  OCgp_Lin^ Value(Standard_Integer Index) ;


 /*instead*/  OCgp_Lin^ ChangeValue(Standard_Integer Index) ;

~OCIntf_Array1OfLin()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif