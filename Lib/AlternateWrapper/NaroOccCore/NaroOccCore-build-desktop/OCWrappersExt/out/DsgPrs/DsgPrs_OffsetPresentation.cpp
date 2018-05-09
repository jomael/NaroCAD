// File generated by CPPExt (CPP file)
//

#include "DsgPrs_OffsetPresentation.h"
#include "../Converter.h"
#include "../Prs3d/Prs3d_Presentation.h"
#include "../Prs3d/Prs3d_Drawer.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Dir.h"


using namespace OCNaroWrappers;

OCDsgPrs_OffsetPresentation::OCDsgPrs_OffsetPresentation(DsgPrs_OffsetPresentation* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 void OCDsgPrs_OffsetPresentation::Add(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer, OCNaroWrappers::OCTCollection_ExtendedString^ aText, OCNaroWrappers::OCgp_Pnt^ AttachmentPoint1, OCNaroWrappers::OCgp_Pnt^ AttachmentPoint2, OCNaroWrappers::OCgp_Dir^ aDirection, OCNaroWrappers::OCgp_Dir^ aDirection2, OCNaroWrappers::OCgp_Pnt^ OffsetPoint)
{
  DsgPrs_OffsetPresentation::Add(*((Handle_Prs3d_Presentation*)aPresentation->Handle), *((Handle_Prs3d_Drawer*)aDrawer->Handle), *((TCollection_ExtendedString*)aText->Handle), *((gp_Pnt*)AttachmentPoint1->Handle), *((gp_Pnt*)AttachmentPoint2->Handle), *((gp_Dir*)aDirection->Handle), *((gp_Dir*)aDirection2->Handle), *((gp_Pnt*)OffsetPoint->Handle));
}

 void OCDsgPrs_OffsetPresentation::AddAxes(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer, OCNaroWrappers::OCTCollection_ExtendedString^ aText, OCNaroWrappers::OCgp_Pnt^ AttachmentPoint1, OCNaroWrappers::OCgp_Pnt^ AttachmentPoint2, OCNaroWrappers::OCgp_Dir^ aDirection, OCNaroWrappers::OCgp_Dir^ aDirection2, OCNaroWrappers::OCgp_Pnt^ OffsetPoint)
{
  DsgPrs_OffsetPresentation::AddAxes(*((Handle_Prs3d_Presentation*)aPresentation->Handle), *((Handle_Prs3d_Drawer*)aDrawer->Handle), *((TCollection_ExtendedString*)aText->Handle), *((gp_Pnt*)AttachmentPoint1->Handle), *((gp_Pnt*)AttachmentPoint2->Handle), *((gp_Dir*)aDirection->Handle), *((gp_Dir*)aDirection2->Handle), *((gp_Pnt*)OffsetPoint->Handle));
}

