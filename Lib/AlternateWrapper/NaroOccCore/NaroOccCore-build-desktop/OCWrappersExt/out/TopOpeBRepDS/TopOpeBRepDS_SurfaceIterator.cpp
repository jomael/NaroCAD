// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_SurfaceIterator.h"
#include "../Converter.h"
#include "TopOpeBRepDS_ListOfInterference.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_SurfaceIterator::OCTopOpeBRepDS_SurfaceIterator(TopOpeBRepDS_SurfaceIterator* nativeHandle) : OCTopOpeBRepDS_InterferenceIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepDS_SurfaceIterator::OCTopOpeBRepDS_SurfaceIterator(OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ L) : OCTopOpeBRepDS_InterferenceIterator((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_SurfaceIterator(*((TopOpeBRepDS_ListOfInterference*)L->Handle));
}

 Standard_Integer OCTopOpeBRepDS_SurfaceIterator::Current()
{
  return ((TopOpeBRepDS_SurfaceIterator*)nativeHandle)->Current();
}

 OCTopAbs_Orientation OCTopOpeBRepDS_SurfaceIterator::Orientation(OCTopAbs_State S)
{
  return (OCTopAbs_Orientation)(((TopOpeBRepDS_SurfaceIterator*)nativeHandle)->Orientation((TopAbs_State)S));
}

