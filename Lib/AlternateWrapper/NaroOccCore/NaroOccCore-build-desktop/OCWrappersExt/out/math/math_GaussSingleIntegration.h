// File generated by CPPExt (MPV)
//
#ifndef _math_GaussSingleIntegration_OCWrappers_HeaderFile
#define _math_GaussSingleIntegration_OCWrappers_HeaderFile

// include native header
#include <math_GaussSingleIntegration.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCmath_Function;



//! This class implements the integration of a function of a single variable <br>
//! between the parameter bounds Lower and Upper. <br>
//!  Warning: Order must be inferior or equal to 61. <br>
public ref class OCmath_GaussSingleIntegration  {

protected:
  math_GaussSingleIntegration* nativeHandle;
  OCmath_GaussSingleIntegration(OCDummy^) {};

public:
  property math_GaussSingleIntegration* Handle
  {
    math_GaussSingleIntegration* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCmath_GaussSingleIntegration(math_GaussSingleIntegration* nativeHandle);

// Methods PUBLIC


OCmath_GaussSingleIntegration();


//! The Gauss-Legendre integration with N = Order points of integration, <br>
//! is done on the function F between the bounds Lower and Upper. <br>
OCmath_GaussSingleIntegration(OCNaroWrappers::OCmath_Function^ F, Standard_Real Lower, Standard_Real Upper, Standard_Integer Order);


//! The Gauss-Legendre integration with N = Order points of integration  and <br>
//! given tolerance = Tol is done on the function F between the bounds <br>
//! Lower and Upper. <br>
OCmath_GaussSingleIntegration(OCNaroWrappers::OCmath_Function^ F, Standard_Real Lower, Standard_Real Upper, Standard_Integer Order, Standard_Real Tol);

//! returns True if all has been correctly done. <br>
 /*instead*/  System::Boolean IsDone() ;

//! returns the value of the integral. <br>
 /*instead*/  Standard_Real Value() ;

//! Prints information on the current state of the object. <br>
 /*instead*/  void Dump(Standard_OStream& o) ;

~OCmath_GaussSingleIntegration()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif