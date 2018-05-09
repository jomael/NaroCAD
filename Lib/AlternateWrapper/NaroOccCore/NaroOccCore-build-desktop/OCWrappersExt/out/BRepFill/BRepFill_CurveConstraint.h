// File generated by CPPExt (Transient)
//
#ifndef _BRepFill_CurveConstraint_OCWrappers_HeaderFile
#define _BRepFill_CurveConstraint_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepFill_CurveConstraint.hxx>
#include "../Converter.h"

#include "../GeomPlate/GeomPlate_CurveConstraint.h"



namespace OCNaroWrappers
{

ref class OCAdaptor3d_HCurveOnSurface;
ref class OCAdaptor3d_HCurve;



public ref class OCBRepFill_CurveConstraint : OCGeomPlate_CurveConstraint {

protected:
  // dummy constructor;
  OCBRepFill_CurveConstraint(OCDummy^) : OCGeomPlate_CurveConstraint((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepFill_CurveConstraint(Handle(BRepFill_CurveConstraint)* nativeHandle);

// Methods PUBLIC

//! Create a constraint <br>
//!  Order is the order of the constraint. The possible values for order are -1,0,1,2. <br>
//!  Order i means constraints Gi <br>
//!  Npt is the number of points associated with the constraint. <br>
//!  TolDist is the maximum error to satisfy for G0 constraints <br>
//!  TolAng is the maximum error to satisfy for G1 constraints <br>
//!  TolCurv is the maximum error to satisfy for G2 constraints <br>
//!  These errors can be replaced by laws of criterion. <br>
OCBRepFill_CurveConstraint(OCNaroWrappers::OCAdaptor3d_HCurveOnSurface^ Boundary, Standard_Integer Order, Standard_Integer NPt, Standard_Real TolDist, Standard_Real TolAng, Standard_Real TolCurv);


OCBRepFill_CurveConstraint(OCNaroWrappers::OCAdaptor3d_HCurve^ Boundary, Standard_Integer Tang, Standard_Integer NPt, Standard_Real TolDist);

~OCBRepFill_CurveConstraint()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif