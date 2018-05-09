// File generated by CPPExt (MPV)
//
#ifndef _DsgPrs_DiameterPresentation_OCWrappers_HeaderFile
#define _DsgPrs_DiameterPresentation_OCWrappers_HeaderFile

// include native header
#include <DsgPrs_DiameterPresentation.hxx>
#include "../Converter.h"


#include "DsgPrs_ArrowSide.h"


namespace OCNaroWrappers
{

ref class OCPrs3d_Presentation;
ref class OCPrs3d_Drawer;
ref class OCTCollection_ExtendedString;
ref class OCgp_Pnt;
ref class OCgp_Circ;


//! A framework for displaying diameters in shapes. <br>
public ref class OCDsgPrs_DiameterPresentation  {

protected:
  DsgPrs_DiameterPresentation* nativeHandle;
  OCDsgPrs_DiameterPresentation(OCDummy^) {};

public:
  property DsgPrs_DiameterPresentation* Handle
  {
    DsgPrs_DiameterPresentation* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCDsgPrs_DiameterPresentation(DsgPrs_DiameterPresentation* nativeHandle);

// Methods PUBLIC

//! Draws the diameter of the circle aCircle displayed in <br>
//! the presentation aPresentation and with attributes <br>
//! defined by the attribute manager aDrawer. The point <br>
//! AttachmentPoint defines the point of contact <br>
//! between the circle and the diameter presentation. <br>
//! The value of the enumeration ArrowSide controls <br>
//! whether arrows will be displayed at either or both <br>
//! ends of the length. The text aText labels the diameter. <br>
static /*instead*/  void Add(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer, OCNaroWrappers::OCTCollection_ExtendedString^ aText, OCNaroWrappers::OCgp_Pnt^ AttachmentPoint, OCNaroWrappers::OCgp_Circ^ aCircle, OCDsgPrs_ArrowSide ArrowSide, System::Boolean IsDiamSymbol) ;

//! Draws the diameter of the arc anArc displayed in the <br>
//! presentation aPresentation and with attributes <br>
//! defined by the attribute manager aDrawer. The point <br>
//! AttachmentPoint defines the point of contact <br>
//! between the arc and the diameter presentation. The <br>
//! value of the enumeration ArrowSide controls whether <br>
//! arrows will be displayed at either or both ends of the <br>
//! length. The parameters uFirst and uLast define the <br>
//! first and last points of the arc. The text aText labels the diameter. <br>
static /*instead*/  void Add(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer, OCNaroWrappers::OCTCollection_ExtendedString^ aText, OCNaroWrappers::OCgp_Pnt^ AttachmentPoint, OCNaroWrappers::OCgp_Circ^ aCircle, Standard_Real uFirst, Standard_Real uLast, OCDsgPrs_ArrowSide ArrowSide, System::Boolean IsDiamSymbol) ;

~OCDsgPrs_DiameterPresentation()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif