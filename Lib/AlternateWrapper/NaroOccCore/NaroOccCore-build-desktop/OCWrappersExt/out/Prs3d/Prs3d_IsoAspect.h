// File generated by CPPExt (Transient)
//
#ifndef _Prs3d_IsoAspect_OCWrappers_HeaderFile
#define _Prs3d_IsoAspect_OCWrappers_HeaderFile

// include the wrapped class
#include <Prs3d_IsoAspect.hxx>
#include "../Converter.h"

#include "Prs3d_LineAspect.h"

#include "../Quantity/Quantity_NameOfColor.h"
#include "../Aspect/Aspect_TypeOfLine.h"


namespace OCNaroWrappers
{

ref class OCQuantity_Color;


//! A framework to define the display attributes of isoparameters. <br>
//! This framework can be used to modify the default <br>
//! setting for isoparameters in AIS_Drawer. <br>
public ref class OCPrs3d_IsoAspect : OCPrs3d_LineAspect {

protected:
  // dummy constructor;
  OCPrs3d_IsoAspect(OCDummy^) : OCPrs3d_LineAspect((OCDummy^)nullptr) {};

public:

// constructor from native
OCPrs3d_IsoAspect(Handle(Prs3d_IsoAspect)* nativeHandle);

// Methods PUBLIC

//! Constructs a framework to define display attributes of isoparameters. <br>
//! These include: <br>
//! -   the color attribute aColor <br>
//! -   the type of line aType <br>
//! -   the width value aWidth <br>
//! -   aNumber, the number of isoparameters to be   displayed. <br>
OCPrs3d_IsoAspect(OCQuantity_NameOfColor aColor, OCAspect_TypeOfLine aType, Standard_Real aWidth, Standard_Integer aNumber);


OCPrs3d_IsoAspect(OCNaroWrappers::OCQuantity_Color^ aColor, OCAspect_TypeOfLine aType, Standard_Real aWidth, Standard_Integer aNumber);

//! defines the number of U or V isoparametric curves <br>
//!         to be drawn for a single face. <br>
//!          Default value: 10 <br>
 /*instead*/  void SetNumber(Standard_Integer aNumber) ;

//! returns the number of U or V isoparametric curves drawn for a single face. <br>
 /*instead*/  Standard_Integer Number() ;

~OCPrs3d_IsoAspect()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif