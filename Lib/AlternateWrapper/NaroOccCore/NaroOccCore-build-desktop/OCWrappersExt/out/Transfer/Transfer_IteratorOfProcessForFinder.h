// File generated by CPPExt (MPV)
//
#ifndef _Transfer_IteratorOfProcessForFinder_OCWrappers_HeaderFile
#define _Transfer_IteratorOfProcessForFinder_OCWrappers_HeaderFile

// include native header
#include <Transfer_IteratorOfProcessForFinder.hxx>
#include "../Converter.h"

#include "Transfer_TransferIterator.h"

#include "Transfer_TransferIterator.h"


namespace OCNaroWrappers
{

ref class OCTransfer_HSequenceOfFinder;
ref class OCTransfer_Finder;
ref class OCTransfer_FindHasher;
ref class OCTransfer_ProcessForFinder;
ref class OCTransfer_TransferMapOfProcessForFinder;
ref class OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder;
ref class OCTransfer_ActorOfProcessForFinder;
ref class OCTransfer_Binder;



public ref class OCTransfer_IteratorOfProcessForFinder  : public OCTransfer_TransferIterator {

protected:
  // dummy constructor;
  OCTransfer_IteratorOfProcessForFinder(OCDummy^) : OCTransfer_TransferIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCTransfer_IteratorOfProcessForFinder(Transfer_IteratorOfProcessForFinder* nativeHandle);

// Methods PUBLIC


OCTransfer_IteratorOfProcessForFinder(System::Boolean withstarts);


 /*instead*/  void Add(OCNaroWrappers::OCTransfer_Binder^ binder) ;


 /*instead*/  void Add(OCNaroWrappers::OCTransfer_Binder^ binder, OCNaroWrappers::OCTransfer_Finder^ start) ;


 /*instead*/  void Filter(OCNaroWrappers::OCTransfer_HSequenceOfFinder^ list, System::Boolean keep) ;


 /*instead*/  System::Boolean HasStarting() ;


 /*instead*/  OCTransfer_Finder^ Starting() ;

~OCTransfer_IteratorOfProcessForFinder()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif