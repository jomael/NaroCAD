// File generated by CPPExt (Transient)
//
#ifndef _BOP_SolidSolidHistoryCollector_OCWrappers_HeaderFile
#define _BOP_SolidSolidHistoryCollector_OCWrappers_HeaderFile

// include the wrapped class
#include <BOP_SolidSolidHistoryCollector.hxx>
#include "../Converter.h"

#include "BOP_HistoryCollector.h"

#include "BOP_Operation.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;



public ref class OCBOP_SolidSolidHistoryCollector : OCBOP_HistoryCollector {

protected:
  // dummy constructor;
  OCBOP_SolidSolidHistoryCollector(OCDummy^) : OCBOP_HistoryCollector((OCDummy^)nullptr) {};

public:

// constructor from native
OCBOP_SolidSolidHistoryCollector(Handle(BOP_SolidSolidHistoryCollector)* nativeHandle);

// Methods PUBLIC


OCBOP_SolidSolidHistoryCollector(OCNaroWrappers::OCTopoDS_Shape^ theShape1, OCNaroWrappers::OCTopoDS_Shape^ theShape2, OCBOP_Operation theOperation);


 /*instead*/  void AddNewShape(OCNaroWrappers::OCTopoDS_Shape^ theOldShape, OCNaroWrappers::OCTopoDS_Shape^ theNewShape, BOPTools_PDSFiller theDSFiller) ;


virtual /*instead*/  void SetResult(OCNaroWrappers::OCTopoDS_Shape^ theResult, BOPTools_PDSFiller theDSFiller) override;

~OCBOP_SolidSolidHistoryCollector()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif