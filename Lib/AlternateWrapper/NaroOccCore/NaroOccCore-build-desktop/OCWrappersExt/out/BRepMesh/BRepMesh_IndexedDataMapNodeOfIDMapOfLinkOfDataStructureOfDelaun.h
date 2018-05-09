// File generated by CPPExt (Transient)
//
#ifndef _BRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun_OCWrappers_HeaderFile
#define _BRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "BRepMesh_Edge.h"


namespace OCNaroWrappers
{

ref class OCBRepMesh_Edge;
ref class OCBRepMesh_LinkHasherOfDataStructureOfDelaun;
ref class OCBRepMesh_IDMapOfLinkOfDataStructureOfDelaun;



public ref class OCBRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCBRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun(Handle(BRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun)* nativeHandle);

// Methods PUBLIC


OCBRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun(OCNaroWrappers::OCBRepMesh_Edge^ K1, Standard_Integer K2, BRepMesh_PairOfIndex I, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2);


 /*instead*/  OCBRepMesh_Edge^ Key1() ;


 /*instead*/  Standard_Integer Key2() ;


 /*instead*/  TCollection_MapNodePtr& Next2() ;


 /*instead*/  BRepMesh_PairOfIndex& Value() ;

~OCBRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif