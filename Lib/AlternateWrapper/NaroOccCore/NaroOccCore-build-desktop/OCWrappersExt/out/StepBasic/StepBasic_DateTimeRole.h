// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_DateTimeRole_OCWrappers_HeaderFile
#define _StepBasic_DateTimeRole_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_DateTimeRole.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;



public ref class OCStepBasic_DateTimeRole : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_DateTimeRole(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_DateTimeRole(Handle(StepBasic_DateTimeRole)* nativeHandle);

// Methods PUBLIC

//! Returns a DateTimeRole <br>
OCStepBasic_DateTimeRole();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


 /*instead*/  void SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


 /*instead*/  OCTCollection_HAsciiString^ Name() ;

~OCStepBasic_DateTimeRole()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif