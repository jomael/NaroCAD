// File generated by CPPExt (Transient)
//
#ifndef _Prs3d_Projector_OCWrappers_HeaderFile
#define _Prs3d_Projector_OCWrappers_HeaderFile

// include the wrapped class
#include <Prs3d_Projector.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../HLRAlgo/HLRAlgo_Projector.h"


namespace OCNaroWrappers
{

ref class OCHLRAlgo_Projector;


//! A projector object. <br>
//! This object defines the parameters of a view for a <br>
//! visualization algorithm. It is, for example, used by the <br>
//! hidden line removal algorithms. <br>
public ref class OCPrs3d_Projector : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCPrs3d_Projector(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCPrs3d_Projector(Handle(Prs3d_Projector)* nativeHandle);

// Methods PUBLIC


OCPrs3d_Projector(OCNaroWrappers::OCHLRAlgo_Projector^ Pr);

//! Constructs a projector framework from the following parameters <br>
//! -   Pers is true if the view is a perspective view and <br>
//!   false if it is an axonometric one; <br>
//! -   Focus is the focal length if a perspective view is defined; <br>
//! -   DX, DY and DZ are the coordinates of the <br>
//!   projection vector; <br>
//! -   XAt, YAt and ZAt are the coordinates of the view point; <br>
//! -   XUp, YUp and ZUp are the coordinates of the <br>
//!   vertical direction vector. <br>
OCPrs3d_Projector(System::Boolean Pers, Quantity_Length Focus, Quantity_Length DX, Quantity_Length DY, Quantity_Length DZ, Quantity_Length XAt, Quantity_Length YAt, Quantity_Length ZAt, Quantity_Length XUp, Quantity_Length YUp, Quantity_Length ZUp);

//! Returns a projector object for use in a hidden line removal algorithm. <br>
 /*instead*/  OCHLRAlgo_Projector^ Projector() ;

~OCPrs3d_Projector()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif