// File generated by CPPExt (MPV)
//
#ifndef _math_FunctionWithDerivative_OCWrappers_HeaderFile
#define _math_FunctionWithDerivative_OCWrappers_HeaderFile

// include native header
#include <math_FunctionWithDerivative.hxx>
#include "../Converter.h"

#include "math_Function.h"

#include "math_Function.h"


namespace OCNaroWrappers
{




//! This abstract class describes the virtual functions associated with <br>
//! a function of a single variable for which the first derivative is <br>
//! available. <br>
public ref class OCmath_FunctionWithDerivative  : public OCmath_Function {

protected:
  // dummy constructor;
  OCmath_FunctionWithDerivative(OCDummy^) : OCmath_Function((OCDummy^)nullptr) {};

public:

// constructor from native
OCmath_FunctionWithDerivative(math_FunctionWithDerivative* nativeHandle);

// Methods PUBLIC


virtual /*instead*/  void Delete() ;

~OCmath_FunctionWithDerivative()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif