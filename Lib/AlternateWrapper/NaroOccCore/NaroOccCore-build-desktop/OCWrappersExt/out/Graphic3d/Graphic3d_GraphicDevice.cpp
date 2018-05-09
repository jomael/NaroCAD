// File generated by CPPExt (CPP file)
//

#include "Graphic3d_GraphicDevice.h"
#include "../Converter.h"
#include "Graphic3d_GraphicDriver.h"
#include "../Aspect/Aspect_GraphicDriver.h"
#include "../TCollection/TCollection_AsciiString.h"


using namespace OCNaroWrappers;

OCGraphic3d_GraphicDevice::OCGraphic3d_GraphicDevice(Handle(Graphic3d_GraphicDevice)* nativeHandle) : OCXw_GraphicDevice((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Graphic3d_GraphicDevice(*nativeHandle);
}

OCGraphic3d_GraphicDevice::OCGraphic3d_GraphicDevice(System::String^ Connexion, OCXw_TypeOfMapping Mapping, Standard_Integer Ncolors, System::Boolean UseDefault) : OCXw_GraphicDevice((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Graphic3d_GraphicDevice(new Graphic3d_GraphicDevice(OCConverter::StringToStandardCString(Connexion), (Xw_TypeOfMapping)Mapping, Ncolors, OCConverter::BooleanToStandardBoolean(UseDefault)));
}

OCGraphic3d_GraphicDevice::OCGraphic3d_GraphicDevice(Aspect_Display DisplayHandle) : OCXw_GraphicDevice((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Graphic3d_GraphicDevice(new Graphic3d_GraphicDevice(DisplayHandle));
}

OCAspect_GraphicDriver^ OCGraphic3d_GraphicDevice::GraphicDriver()
{
  Handle(Aspect_GraphicDriver) tmp = (*((Handle_Graphic3d_GraphicDevice*)nativeHandle))->GraphicDriver();
  return gcnew OCAspect_GraphicDriver(&tmp);
}

