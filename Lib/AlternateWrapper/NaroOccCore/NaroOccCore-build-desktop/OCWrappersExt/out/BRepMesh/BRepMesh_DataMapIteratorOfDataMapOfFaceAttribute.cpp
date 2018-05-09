// File generated by CPPExt (CPP file)
//

#include "BRepMesh_DataMapIteratorOfDataMapOfFaceAttribute.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Face.h"
#include "BRepMesh_FaceAttribute.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepMesh_DataMapOfFaceAttribute.h"
#include "BRepMesh_DataMapNodeOfDataMapOfFaceAttribute.h"


using namespace OCNaroWrappers;

OCBRepMesh_DataMapIteratorOfDataMapOfFaceAttribute::OCBRepMesh_DataMapIteratorOfDataMapOfFaceAttribute(BRepMesh_DataMapIteratorOfDataMapOfFaceAttribute* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepMesh_DataMapIteratorOfDataMapOfFaceAttribute::OCBRepMesh_DataMapIteratorOfDataMapOfFaceAttribute() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepMesh_DataMapIteratorOfDataMapOfFaceAttribute();
}

OCBRepMesh_DataMapIteratorOfDataMapOfFaceAttribute::OCBRepMesh_DataMapIteratorOfDataMapOfFaceAttribute(OCNaroWrappers::OCBRepMesh_DataMapOfFaceAttribute^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepMesh_DataMapIteratorOfDataMapOfFaceAttribute(*((BRepMesh_DataMapOfFaceAttribute*)aMap->Handle));
}

 void OCBRepMesh_DataMapIteratorOfDataMapOfFaceAttribute::Initialize(OCNaroWrappers::OCBRepMesh_DataMapOfFaceAttribute^ aMap)
{
  ((BRepMesh_DataMapIteratorOfDataMapOfFaceAttribute*)nativeHandle)->Initialize(*((BRepMesh_DataMapOfFaceAttribute*)aMap->Handle));
}

OCTopoDS_Face^ OCBRepMesh_DataMapIteratorOfDataMapOfFaceAttribute::Key()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((BRepMesh_DataMapIteratorOfDataMapOfFaceAttribute*)nativeHandle)->Key();
  return gcnew OCTopoDS_Face(tmp);
}

OCBRepMesh_FaceAttribute^ OCBRepMesh_DataMapIteratorOfDataMapOfFaceAttribute::Value()
{
  Handle(BRepMesh_FaceAttribute) tmp = ((BRepMesh_DataMapIteratorOfDataMapOfFaceAttribute*)nativeHandle)->Value();
  return gcnew OCBRepMesh_FaceAttribute(&tmp);
}

