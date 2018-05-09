// File generated by CPPExt (MPV)
//
#ifndef _IntCurve_MyImpParToolOfIntImpConicParConic_OCWrappers_HeaderFile
#define _IntCurve_MyImpParToolOfIntImpConicParConic_OCWrappers_HeaderFile

// include native header
#include <IntCurve_MyImpParToolOfIntImpConicParConic.hxx>
#include "../Converter.h"

#include "../math/math_FunctionWithDerivative.h"

#include "IntCurve_IConicTool.h"
#include "../math/math_FunctionWithDerivative.h"


namespace OCNaroWrappers
{

ref class OCIntCurve_IConicTool;
ref class OCIntCurve_PConic;
ref class OCIntCurve_PConicTool;



public ref class OCIntCurve_MyImpParToolOfIntImpConicParConic  : public OCmath_FunctionWithDerivative {

protected:
  // dummy constructor;
  OCIntCurve_MyImpParToolOfIntImpConicParConic(OCDummy^) : OCmath_FunctionWithDerivative((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntCurve_MyImpParToolOfIntImpConicParConic(IntCurve_MyImpParToolOfIntImpConicParConic* nativeHandle);

// Methods PUBLIC


OCIntCurve_MyImpParToolOfIntImpConicParConic(OCNaroWrappers::OCIntCurve_IConicTool^ IT, OCNaroWrappers::OCIntCurve_PConic^ PC);


virtual /*instead*/  System::Boolean Value(Standard_Real Param, Standard_Real& F) ;


virtual /*instead*/  System::Boolean Derivative(Standard_Real Param, Standard_Real& D) ;


virtual /*instead*/  System::Boolean Values(Standard_Real Param, Standard_Real& F, Standard_Real& D) ;

~OCIntCurve_MyImpParToolOfIntImpConicParConic()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif