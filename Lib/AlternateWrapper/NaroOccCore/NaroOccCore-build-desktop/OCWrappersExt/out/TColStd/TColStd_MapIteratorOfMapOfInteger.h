// File generated by CPPExt (MPV)
//
#ifndef _TColStd_MapIteratorOfMapOfInteger_OCWrappers_HeaderFile
#define _TColStd_MapIteratorOfMapOfInteger_OCWrappers_HeaderFile

// include native header
#include <TColStd_MapIteratorOfMapOfInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTColStd_MapIntegerHasher;
ref class OCTColStd_MapOfInteger;
ref class OCTColStd_StdMapNodeOfMapOfInteger;



public ref class OCTColStd_MapIteratorOfMapOfInteger  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCTColStd_MapIteratorOfMapOfInteger(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_MapIteratorOfMapOfInteger(TColStd_MapIteratorOfMapOfInteger* nativeHandle);

// Methods PUBLIC


OCTColStd_MapIteratorOfMapOfInteger();


OCTColStd_MapIteratorOfMapOfInteger(OCNaroWrappers::OCTColStd_MapOfInteger^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCTColStd_MapOfInteger^ aMap) ;


 /*instead*/  Standard_Integer Key() ;

~OCTColStd_MapIteratorOfMapOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif