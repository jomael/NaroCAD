// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_DataMapOfMeshVertexInteger_OCWrappers_HeaderFile
#define _BRepMesh_DataMapOfMeshVertexInteger_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_DataMapOfMeshVertexInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCBRepMesh_Vertex;
ref class OCBRepMesh_VertexHasher;
ref class OCBRepMesh_DataMapNodeOfDataMapOfMeshVertexInteger;
ref class OCBRepMesh_DataMapIteratorOfDataMapOfMeshVertexInteger;



public ref class OCBRepMesh_DataMapOfMeshVertexInteger  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCBRepMesh_DataMapOfMeshVertexInteger(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_DataMapOfMeshVertexInteger(BRepMesh_DataMapOfMeshVertexInteger* nativeHandle);

// Methods PUBLIC


OCBRepMesh_DataMapOfMeshVertexInteger(Standard_Integer NbBuckets);


 /*instead*/  OCBRepMesh_DataMapOfMeshVertexInteger^ Assign(OCNaroWrappers::OCBRepMesh_DataMapOfMeshVertexInteger^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCBRepMesh_Vertex^ K, Standard_Integer I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCBRepMesh_Vertex^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCBRepMesh_Vertex^ K) ;


 /*instead*/  Standard_Integer Find(OCNaroWrappers::OCBRepMesh_Vertex^ K) ;


 /*instead*/  Standard_Integer ChangeFind(OCNaroWrappers::OCBRepMesh_Vertex^ K) ;

~OCBRepMesh_DataMapOfMeshVertexInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif