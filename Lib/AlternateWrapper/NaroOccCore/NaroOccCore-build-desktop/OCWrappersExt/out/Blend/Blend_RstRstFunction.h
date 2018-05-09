// File generated by CPPExt (MPV)
//
#ifndef _Blend_RstRstFunction_OCWrappers_HeaderFile
#define _Blend_RstRstFunction_OCWrappers_HeaderFile

// include native header
#include <Blend_RstRstFunction.hxx>
#include "../Converter.h"

#include "Blend_AppFunction.h"

#include "Blend_AppFunction.h"
#include "Blend_DecrochStatus.h"
#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCmath_Vector;
ref class OCmath_Matrix;
ref class OCgp_Pnt;
ref class OCgp_Pnt2d;
ref class OCgp_Vec;
ref class OCgp_Vec2d;
ref class OCTColStd_Array1OfReal;
ref class OCTColStd_Array1OfInteger;
ref class OCBlend_Point;
ref class OCTColgp_Array1OfPnt;
ref class OCTColgp_Array1OfPnt2d;
ref class OCTColgp_Array1OfVec;
ref class OCTColgp_Array1OfVec2d;


//! Deferred class for a function used to compute a blending <br>
//!          surface between a surface and a pcurve on an other Surface, <br>
//!          using a guide line. <br>
//!          The vector <X> used in Value, Values and Derivatives methods <br>
//!          may be the vector of the parametric coordinates U,V, <br>
//!          W of the extremities of a section on the surface  and <br>
//!          the curve. <br>
public ref class OCBlend_RstRstFunction  : public OCBlend_AppFunction {

protected:
  // dummy constructor;
  OCBlend_RstRstFunction(OCDummy^) : OCBlend_AppFunction((OCDummy^)nullptr) {};

public:

// constructor from native
OCBlend_RstRstFunction(Blend_RstRstFunction* nativeHandle);

// Methods PUBLIC

//! Returns   the    minimal  Distance  beetween   two <br>
//!          extremitys of calculed sections. <br>
 /*instead*/  Standard_Real GetMinimalDistance() ;

//! Returns the point on the first support. <br>
 /*instead*/  OCgp_Pnt^ Pnt1() ;

//! Returns the point on the seconde support. <br>
 /*instead*/  OCgp_Pnt^ Pnt2() ;

~OCBlend_RstRstFunction()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif