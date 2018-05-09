// File generated by CPPExt (CPP file)
//

#include "TColGeom_SequenceNodeOfSequenceOfSurface.h"
#include "../Converter.h"
#include "../Geom/Geom_Surface.h"
#include "TColGeom_SequenceOfSurface.h"


using namespace OCNaroWrappers;

OCTColGeom_SequenceNodeOfSequenceOfSurface::OCTColGeom_SequenceNodeOfSequenceOfSurface(Handle(TColGeom_SequenceNodeOfSequenceOfSurface)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColGeom_SequenceNodeOfSequenceOfSurface(*nativeHandle);
}

OCTColGeom_SequenceNodeOfSequenceOfSurface::OCTColGeom_SequenceNodeOfSequenceOfSurface(OCNaroWrappers::OCGeom_Surface^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColGeom_SequenceNodeOfSequenceOfSurface(new TColGeom_SequenceNodeOfSequenceOfSurface(*((Handle_Geom_Surface*)I->Handle), n, p));
}

OCGeom_Surface^ OCTColGeom_SequenceNodeOfSequenceOfSurface::Value()
{
  Handle(Geom_Surface) tmp = (*((Handle_TColGeom_SequenceNodeOfSequenceOfSurface*)nativeHandle))->Value();
  return gcnew OCGeom_Surface(&tmp);
}

