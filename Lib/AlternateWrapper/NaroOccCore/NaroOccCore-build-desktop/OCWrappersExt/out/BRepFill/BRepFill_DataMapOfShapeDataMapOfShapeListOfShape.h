// File generated by CPPExt (MPV)
//
#ifndef _BRepFill_DataMapOfShapeDataMapOfShapeListOfShape_OCWrappers_HeaderFile
#define _BRepFill_DataMapOfShapeDataMapOfShapeListOfShape_OCWrappers_HeaderFile

// include native header
#include <BRepFill_DataMapOfShapeDataMapOfShapeListOfShape.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_DataMapOfShapeListOfShape;
ref class OCTopTools_ShapeMapHasher;
ref class OCBRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape;
ref class OCBRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape;



public ref class OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape(BRepFill_DataMapOfShapeDataMapOfShapeListOfShape* nativeHandle);

// Methods PUBLIC


OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape(Standard_Integer NbBuckets);


 /*instead*/  OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape^ Assign(OCNaroWrappers::OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopTools_DataMapOfShapeListOfShape^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCTopTools_DataMapOfShapeListOfShape^ Find(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCTopTools_DataMapOfShapeListOfShape^ ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif