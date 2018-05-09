// File generated by CPPExt (MPV)
//
#ifndef _Extrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d_OCWrappers_HeaderFile
#define _Extrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d_OCWrappers_HeaderFile

// include native header
#include <Extrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCExtrema_POnCurv2d;
ref class OCExtrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d;



public ref class OCExtrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCExtrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCExtrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d(Extrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d* nativeHandle);

// Methods PUBLIC


OCExtrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d();


 /*instead*/  OCExtrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d^ Assign(OCNaroWrappers::OCExtrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCExtrema_POnCurv2d^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCExtrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCExtrema_POnCurv2d^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCExtrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCExtrema_POnCurv2d^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCExtrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCExtrema_POnCurv2d^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCExtrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d^ S) ;


 /*instead*/  OCExtrema_POnCurv2d^ First() ;


 /*instead*/  OCExtrema_POnCurv2d^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCExtrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d^ Sub) ;


 /*instead*/  OCExtrema_POnCurv2d^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCExtrema_POnCurv2d^ I) ;


 /*instead*/  OCExtrema_POnCurv2d^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCExtrema_SeqPOnCOfCCLocFOfLocECC2dOfLocateExtCC2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif