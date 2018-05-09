// File generated by CPPExt (CPP file)
//

#include "BRepGProp_VinertGK.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "BRepGProp_Face.h"
#include "BRepGProp_Domain.h"
#include "BRepGProp_UFunctionOfVinertGK.h"
#include "BRepGProp_TFunctionOfVinertGK.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Pln.h"


using namespace OCNaroWrappers;

OCBRepGProp_VinertGK::OCBRepGProp_VinertGK(BRepGProp_VinertGK* nativeHandle) : OCGProp_GProps((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepGProp_VinertGK::OCBRepGProp_VinertGK() : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_VinertGK();
}

OCBRepGProp_VinertGK::OCBRepGProp_VinertGK(OCNaroWrappers::OCBRepGProp_Face^ theSurface, OCNaroWrappers::OCgp_Pnt^ theLocation, Standard_Real theTolerance, System::Boolean theCGFlag, System::Boolean theIFlag) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_VinertGK(*((BRepGProp_Face*)theSurface->Handle), *((gp_Pnt*)theLocation->Handle), theTolerance, OCConverter::BooleanToStandardBoolean(theCGFlag), OCConverter::BooleanToStandardBoolean(theIFlag));
}

OCBRepGProp_VinertGK::OCBRepGProp_VinertGK(OCNaroWrappers::OCBRepGProp_Face^ theSurface, OCNaroWrappers::OCgp_Pnt^ thePoint, OCNaroWrappers::OCgp_Pnt^ theLocation, Standard_Real theTolerance, System::Boolean theCGFlag, System::Boolean theIFlag) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_VinertGK(*((BRepGProp_Face*)theSurface->Handle), *((gp_Pnt*)thePoint->Handle), *((gp_Pnt*)theLocation->Handle), theTolerance, OCConverter::BooleanToStandardBoolean(theCGFlag), OCConverter::BooleanToStandardBoolean(theIFlag));
}

OCBRepGProp_VinertGK::OCBRepGProp_VinertGK(OCNaroWrappers::OCBRepGProp_Face^ theSurface, OCNaroWrappers::OCBRepGProp_Domain^ theDomain, OCNaroWrappers::OCgp_Pnt^ theLocation, Standard_Real theTolerance, System::Boolean theCGFlag, System::Boolean theIFlag) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_VinertGK(*((BRepGProp_Face*)theSurface->Handle), *((BRepGProp_Domain*)theDomain->Handle), *((gp_Pnt*)theLocation->Handle), theTolerance, OCConverter::BooleanToStandardBoolean(theCGFlag), OCConverter::BooleanToStandardBoolean(theIFlag));
}

OCBRepGProp_VinertGK::OCBRepGProp_VinertGK(OCNaroWrappers::OCBRepGProp_Face^ theSurface, OCNaroWrappers::OCBRepGProp_Domain^ theDomain, OCNaroWrappers::OCgp_Pnt^ thePoint, OCNaroWrappers::OCgp_Pnt^ theLocation, Standard_Real theTolerance, System::Boolean theCGFlag, System::Boolean theIFlag) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_VinertGK(*((BRepGProp_Face*)theSurface->Handle), *((BRepGProp_Domain*)theDomain->Handle), *((gp_Pnt*)thePoint->Handle), *((gp_Pnt*)theLocation->Handle), theTolerance, OCConverter::BooleanToStandardBoolean(theCGFlag), OCConverter::BooleanToStandardBoolean(theIFlag));
}

OCBRepGProp_VinertGK::OCBRepGProp_VinertGK(OCNaroWrappers::OCBRepGProp_Face^ theSurface, OCNaroWrappers::OCgp_Pln^ thePlane, OCNaroWrappers::OCgp_Pnt^ theLocation, Standard_Real theTolerance, System::Boolean theCGFlag, System::Boolean theIFlag) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_VinertGK(*((BRepGProp_Face*)theSurface->Handle), *((gp_Pln*)thePlane->Handle), *((gp_Pnt*)theLocation->Handle), theTolerance, OCConverter::BooleanToStandardBoolean(theCGFlag), OCConverter::BooleanToStandardBoolean(theIFlag));
}

OCBRepGProp_VinertGK::OCBRepGProp_VinertGK(OCNaroWrappers::OCBRepGProp_Face^ theSurface, OCNaroWrappers::OCBRepGProp_Domain^ theDomain, OCNaroWrappers::OCgp_Pln^ thePlane, OCNaroWrappers::OCgp_Pnt^ theLocation, Standard_Real theTolerance, System::Boolean theCGFlag, System::Boolean theIFlag) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new BRepGProp_VinertGK(*((BRepGProp_Face*)theSurface->Handle), *((BRepGProp_Domain*)theDomain->Handle), *((gp_Pln*)thePlane->Handle), *((gp_Pnt*)theLocation->Handle), theTolerance, OCConverter::BooleanToStandardBoolean(theCGFlag), OCConverter::BooleanToStandardBoolean(theIFlag));
}

 void OCBRepGProp_VinertGK::SetLocation(OCNaroWrappers::OCgp_Pnt^ theLocation)
{
  ((BRepGProp_VinertGK*)nativeHandle)->SetLocation(*((gp_Pnt*)theLocation->Handle));
}

 Standard_Real OCBRepGProp_VinertGK::Perform(OCNaroWrappers::OCBRepGProp_Face^ theSurface, Standard_Real theTolerance, System::Boolean theCGFlag, System::Boolean theIFlag)
{
  return ((BRepGProp_VinertGK*)nativeHandle)->Perform(*((BRepGProp_Face*)theSurface->Handle), theTolerance, OCConverter::BooleanToStandardBoolean(theCGFlag), OCConverter::BooleanToStandardBoolean(theIFlag));
}

 Standard_Real OCBRepGProp_VinertGK::Perform(OCNaroWrappers::OCBRepGProp_Face^ theSurface, OCNaroWrappers::OCgp_Pnt^ thePoint, Standard_Real theTolerance, System::Boolean theCGFlag, System::Boolean theIFlag)
{
  return ((BRepGProp_VinertGK*)nativeHandle)->Perform(*((BRepGProp_Face*)theSurface->Handle), *((gp_Pnt*)thePoint->Handle), theTolerance, OCConverter::BooleanToStandardBoolean(theCGFlag), OCConverter::BooleanToStandardBoolean(theIFlag));
}

 Standard_Real OCBRepGProp_VinertGK::Perform(OCNaroWrappers::OCBRepGProp_Face^ theSurface, OCNaroWrappers::OCBRepGProp_Domain^ theDomain, Standard_Real theTolerance, System::Boolean theCGFlag, System::Boolean theIFlag)
{
  return ((BRepGProp_VinertGK*)nativeHandle)->Perform(*((BRepGProp_Face*)theSurface->Handle), *((BRepGProp_Domain*)theDomain->Handle), theTolerance, OCConverter::BooleanToStandardBoolean(theCGFlag), OCConverter::BooleanToStandardBoolean(theIFlag));
}

 Standard_Real OCBRepGProp_VinertGK::Perform(OCNaroWrappers::OCBRepGProp_Face^ theSurface, OCNaroWrappers::OCBRepGProp_Domain^ theDomain, OCNaroWrappers::OCgp_Pnt^ thePoint, Standard_Real theTolerance, System::Boolean theCGFlag, System::Boolean theIFlag)
{
  return ((BRepGProp_VinertGK*)nativeHandle)->Perform(*((BRepGProp_Face*)theSurface->Handle), *((BRepGProp_Domain*)theDomain->Handle), *((gp_Pnt*)thePoint->Handle), theTolerance, OCConverter::BooleanToStandardBoolean(theCGFlag), OCConverter::BooleanToStandardBoolean(theIFlag));
}

 Standard_Real OCBRepGProp_VinertGK::Perform(OCNaroWrappers::OCBRepGProp_Face^ theSurface, OCNaroWrappers::OCgp_Pln^ thePlane, Standard_Real theTolerance, System::Boolean theCGFlag, System::Boolean theIFlag)
{
  return ((BRepGProp_VinertGK*)nativeHandle)->Perform(*((BRepGProp_Face*)theSurface->Handle), *((gp_Pln*)thePlane->Handle), theTolerance, OCConverter::BooleanToStandardBoolean(theCGFlag), OCConverter::BooleanToStandardBoolean(theIFlag));
}

 Standard_Real OCBRepGProp_VinertGK::Perform(OCNaroWrappers::OCBRepGProp_Face^ theSurface, OCNaroWrappers::OCBRepGProp_Domain^ theDomain, OCNaroWrappers::OCgp_Pln^ thePlane, Standard_Real theTolerance, System::Boolean theCGFlag, System::Boolean theIFlag)
{
  return ((BRepGProp_VinertGK*)nativeHandle)->Perform(*((BRepGProp_Face*)theSurface->Handle), *((BRepGProp_Domain*)theDomain->Handle), *((gp_Pln*)thePlane->Handle), theTolerance, OCConverter::BooleanToStandardBoolean(theCGFlag), OCConverter::BooleanToStandardBoolean(theIFlag));
}

 Standard_Real OCBRepGProp_VinertGK::GetErrorReached()
{
  return ((BRepGProp_VinertGK*)nativeHandle)->GetErrorReached();
}

 Standard_Real OCBRepGProp_VinertGK::GetAbsolutError()
{
  return ((BRepGProp_VinertGK*)nativeHandle)->GetAbsolutError();
}

