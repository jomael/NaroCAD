// File generated by CPPExt (CPP file)
//

#include "StepBasic_SecurityClassificationLevel.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"


using namespace OCNaroWrappers;

OCStepBasic_SecurityClassificationLevel::OCStepBasic_SecurityClassificationLevel(Handle(StepBasic_SecurityClassificationLevel)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_SecurityClassificationLevel(*nativeHandle);
}

OCStepBasic_SecurityClassificationLevel::OCStepBasic_SecurityClassificationLevel() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_SecurityClassificationLevel(new StepBasic_SecurityClassificationLevel());
}

 void OCStepBasic_SecurityClassificationLevel::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  (*((Handle_StepBasic_SecurityClassificationLevel*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

 void OCStepBasic_SecurityClassificationLevel::SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  (*((Handle_StepBasic_SecurityClassificationLevel*)nativeHandle))->SetName(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_SecurityClassificationLevel::Name()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_SecurityClassificationLevel*)nativeHandle))->Name();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

