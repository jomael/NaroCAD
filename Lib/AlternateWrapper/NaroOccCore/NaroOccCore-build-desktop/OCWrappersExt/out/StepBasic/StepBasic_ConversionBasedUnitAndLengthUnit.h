// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_ConversionBasedUnitAndLengthUnit_OCWrappers_HeaderFile
#define _StepBasic_ConversionBasedUnitAndLengthUnit_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_ConversionBasedUnitAndLengthUnit.hxx>
#include "../Converter.h"

#include "StepBasic_ConversionBasedUnit.h"



namespace OCNaroWrappers
{

ref class OCStepBasic_LengthUnit;
ref class OCStepBasic_DimensionalExponents;
ref class OCTCollection_HAsciiString;
ref class OCStepBasic_MeasureWithUnit;



public ref class OCStepBasic_ConversionBasedUnitAndLengthUnit : OCStepBasic_ConversionBasedUnit {

protected:
  // dummy constructor;
  OCStepBasic_ConversionBasedUnitAndLengthUnit(OCDummy^) : OCStepBasic_ConversionBasedUnit((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_ConversionBasedUnitAndLengthUnit(Handle(StepBasic_ConversionBasedUnitAndLengthUnit)* nativeHandle);

// Methods PUBLIC

//! Returns a ConversionBasedUnitAndLengthUnit <br>
OCStepBasic_ConversionBasedUnitAndLengthUnit();


virtual /*instead*/  void Init(OCNaroWrappers::OCStepBasic_DimensionalExponents^ aDimensions) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCStepBasic_DimensionalExponents^ aDimensions, OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepBasic_MeasureWithUnit^ aConversionFactor) override;


 /*instead*/  void SetLengthUnit(OCNaroWrappers::OCStepBasic_LengthUnit^ aLengthUnit) ;


 /*instead*/  OCStepBasic_LengthUnit^ LengthUnit() ;

~OCStepBasic_ConversionBasedUnitAndLengthUnit()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif