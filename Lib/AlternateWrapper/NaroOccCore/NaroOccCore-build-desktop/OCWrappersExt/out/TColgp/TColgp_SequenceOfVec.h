// File generated by CPPExt (MPV)
//
#ifndef _TColgp_SequenceOfVec_OCWrappers_HeaderFile
#define _TColgp_SequenceOfVec_OCWrappers_HeaderFile

// include native header
#include <TColgp_SequenceOfVec.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCgp_Vec;
ref class OCTColgp_SequenceNodeOfSequenceOfVec;



public ref class OCTColgp_SequenceOfVec  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCTColgp_SequenceOfVec(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColgp_SequenceOfVec(TColgp_SequenceOfVec* nativeHandle);

// Methods PUBLIC


OCTColgp_SequenceOfVec();


 /*instead*/  OCTColgp_SequenceOfVec^ Assign(OCNaroWrappers::OCTColgp_SequenceOfVec^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCgp_Vec^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCTColgp_SequenceOfVec^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCgp_Vec^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTColgp_SequenceOfVec^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCgp_Vec^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColgp_SequenceOfVec^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCgp_Vec^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColgp_SequenceOfVec^ S) ;


 /*instead*/  OCgp_Vec^ First() ;


 /*instead*/  OCgp_Vec^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCTColgp_SequenceOfVec^ Sub) ;


 /*instead*/  OCgp_Vec^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_Vec^ I) ;


 /*instead*/  OCgp_Vec^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCTColgp_SequenceOfVec()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif