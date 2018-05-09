// File generated by CPPExt (Transient)
//
#ifndef _SelectMgr_SequenceNodeOfSequenceOfOwner_OCWrappers_HeaderFile
#define _SelectMgr_SequenceNodeOfSequenceOfOwner_OCWrappers_HeaderFile

// include the wrapped class
#include <SelectMgr_SequenceNodeOfSequenceOfOwner.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCSelectMgr_EntityOwner;
ref class OCSelectMgr_SequenceOfOwner;



public ref class OCSelectMgr_SequenceNodeOfSequenceOfOwner : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCSelectMgr_SequenceNodeOfSequenceOfOwner(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCSelectMgr_SequenceNodeOfSequenceOfOwner(Handle(SelectMgr_SequenceNodeOfSequenceOfOwner)* nativeHandle);

// Methods PUBLIC


OCSelectMgr_SequenceNodeOfSequenceOfOwner(OCNaroWrappers::OCSelectMgr_EntityOwner^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCSelectMgr_EntityOwner^ Value() ;

~OCSelectMgr_SequenceNodeOfSequenceOfOwner()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif