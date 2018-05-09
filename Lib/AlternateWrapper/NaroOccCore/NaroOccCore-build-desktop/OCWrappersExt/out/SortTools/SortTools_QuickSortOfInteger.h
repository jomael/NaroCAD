// File generated by CPPExt (MPV)
//
#ifndef _SortTools_QuickSortOfInteger_OCWrappers_HeaderFile
#define _SortTools_QuickSortOfInteger_OCWrappers_HeaderFile

// include native header
#include <SortTools_QuickSortOfInteger.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTColStd_Array1OfInteger;
ref class OCTCollection_CompareOfInteger;



public ref class OCSortTools_QuickSortOfInteger  {

protected:
  SortTools_QuickSortOfInteger* nativeHandle;
  OCSortTools_QuickSortOfInteger(OCDummy^) {};

public:
  property SortTools_QuickSortOfInteger* Handle
  {
    SortTools_QuickSortOfInteger* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCSortTools_QuickSortOfInteger(SortTools_QuickSortOfInteger* nativeHandle);

// Methods PUBLIC


static /*instead*/  void Sort(OCNaroWrappers::OCTColStd_Array1OfInteger^ TheArray, OCNaroWrappers::OCTCollection_CompareOfInteger^ Comp) ;

~OCSortTools_QuickSortOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif