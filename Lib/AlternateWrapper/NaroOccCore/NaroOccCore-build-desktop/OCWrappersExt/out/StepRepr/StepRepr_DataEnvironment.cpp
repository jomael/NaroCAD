// File generated by CPPExt (CPP file)
//

#include "StepRepr_DataEnvironment.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepRepr_HArray1OfPropertyDefinitionRepresentation.h"


using namespace OCNaroWrappers;

OCStepRepr_DataEnvironment::OCStepRepr_DataEnvironment(Handle(StepRepr_DataEnvironment)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepRepr_DataEnvironment(*nativeHandle);
}

OCStepRepr_DataEnvironment::OCStepRepr_DataEnvironment() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepRepr_DataEnvironment(new StepRepr_DataEnvironment());
}

 void OCStepRepr_DataEnvironment::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription, OCNaroWrappers::OCStepRepr_HArray1OfPropertyDefinitionRepresentation^ aElements)
{
  (*((Handle_StepRepr_DataEnvironment*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((Handle_TCollection_HAsciiString*)aDescription->Handle), *((Handle_StepRepr_HArray1OfPropertyDefinitionRepresentation*)aElements->Handle));
}

OCTCollection_HAsciiString^ OCStepRepr_DataEnvironment::Name()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepRepr_DataEnvironment*)nativeHandle))->Name();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepRepr_DataEnvironment::SetName(OCNaroWrappers::OCTCollection_HAsciiString^ Name)
{
  (*((Handle_StepRepr_DataEnvironment*)nativeHandle))->SetName(*((Handle_TCollection_HAsciiString*)Name->Handle));
}

OCTCollection_HAsciiString^ OCStepRepr_DataEnvironment::Description()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepRepr_DataEnvironment*)nativeHandle))->Description();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepRepr_DataEnvironment::SetDescription(OCNaroWrappers::OCTCollection_HAsciiString^ Description)
{
  (*((Handle_StepRepr_DataEnvironment*)nativeHandle))->SetDescription(*((Handle_TCollection_HAsciiString*)Description->Handle));
}

OCStepRepr_HArray1OfPropertyDefinitionRepresentation^ OCStepRepr_DataEnvironment::Elements()
{
  Handle(StepRepr_HArray1OfPropertyDefinitionRepresentation) tmp = (*((Handle_StepRepr_DataEnvironment*)nativeHandle))->Elements();
  return gcnew OCStepRepr_HArray1OfPropertyDefinitionRepresentation(&tmp);
}

 void OCStepRepr_DataEnvironment::SetElements(OCNaroWrappers::OCStepRepr_HArray1OfPropertyDefinitionRepresentation^ Elements)
{
  (*((Handle_StepRepr_DataEnvironment*)nativeHandle))->SetElements(*((Handle_StepRepr_HArray1OfPropertyDefinitionRepresentation*)Elements->Handle));
}

