// File generated by CPPExt (MPV)
//
#ifndef _MoniTool_DataMapIteratorOfDataMapOfShapeTransient_OCWrappers_HeaderFile
#define _MoniTool_DataMapIteratorOfDataMapOfShapeTransient_OCWrappers_HeaderFile

// include native header
#include <MoniTool_DataMapIteratorOfDataMapOfShapeTransient.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCStandard_Transient;
ref class OCTopTools_ShapeMapHasher;
ref class OCMoniTool_DataMapOfShapeTransient;
ref class OCMoniTool_DataMapNodeOfDataMapOfShapeTransient;



public ref class OCMoniTool_DataMapIteratorOfDataMapOfShapeTransient  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCMoniTool_DataMapIteratorOfDataMapOfShapeTransient(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCMoniTool_DataMapIteratorOfDataMapOfShapeTransient(MoniTool_DataMapIteratorOfDataMapOfShapeTransient* nativeHandle);

// Methods PUBLIC


OCMoniTool_DataMapIteratorOfDataMapOfShapeTransient();


OCMoniTool_DataMapIteratorOfDataMapOfShapeTransient(OCNaroWrappers::OCMoniTool_DataMapOfShapeTransient^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCMoniTool_DataMapOfShapeTransient^ aMap) ;


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  OCStandard_Transient^ Value() ;

~OCMoniTool_DataMapIteratorOfDataMapOfShapeTransient()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif