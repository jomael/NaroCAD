// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepBuild_Tools2d_OCWrappers_HeaderFile
#define _TopOpeBRepBuild_Tools2d_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepBuild_Tools2d.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTopoDS_Wire;
ref class OCTopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo;
ref class OCTopTools_ListOfShape;



public ref class OCTopOpeBRepBuild_Tools2d  {

protected:
  TopOpeBRepBuild_Tools2d* nativeHandle;
  OCTopOpeBRepBuild_Tools2d(OCDummy^) {};

public:
  property TopOpeBRepBuild_Tools2d* Handle
  {
    TopOpeBRepBuild_Tools2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepBuild_Tools2d(TopOpeBRepBuild_Tools2d* nativeHandle);

// Methods PUBLIC


static /*instead*/  void MakeMapOfShapeVertexInfo(OCNaroWrappers::OCTopoDS_Wire^ aWire, OCNaroWrappers::OCTopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo^ aMap) ;


static /*instead*/  void DumpMapOfShapeVertexInfo(OCNaroWrappers::OCTopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo^ aMap) ;


static /*instead*/  void Path(OCNaroWrappers::OCTopoDS_Wire^ aWire, OCNaroWrappers::OCTopTools_ListOfShape^ aResList) ;

~OCTopOpeBRepBuild_Tools2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif