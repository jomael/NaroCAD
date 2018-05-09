// File generated by CPPExt (Transient)
//
#ifndef _WNT_Window_OCWrappers_HeaderFile
#define _WNT_Window_OCWrappers_HeaderFile

// include the wrapped class
#include <WNT_Window.hxx>
#include "../Converter.h"

#include "../Aspect/Aspect_Window.h"

#include "WNT_TypeOfImage.h"
#include "../Quantity/Quantity_NameOfColor.h"
#include "../Aspect/Aspect_FillMethod.h"
#include "../Aspect/Aspect_GradientFillMethod.h"
#include "../Aspect/Aspect_TypeOfResize.h"


namespace OCNaroWrappers
{

ref class OCWNT_WClass;
ref class OCWNT_ImageManager;
ref class OCWNT_Icon;
ref class OCWNT_WDriver;
ref class OCWNT_IconBox;
ref class OCWNT_GraphicDevice;
ref class OCAspect_Background;
ref class OCQuantity_Color;
ref class OCAspect_GradientBackground;


//! This class defines Windows NT window <br>
//!  Warning: The position and size for the creation of the window <br>
//!	    are defined in Device Screen Unit (DSU) <br>
//!	    floating [0,1] space. <br>
public ref class OCWNT_Window : OCAspect_Window {

protected:
  // dummy constructor;
  OCWNT_Window(OCDummy^) : OCAspect_Window((OCDummy^)nullptr) {};

public:

// constructor from native
OCWNT_Window(Handle(WNT_Window)* nativeHandle);

// Methods PUBLIC

//! Creates a Window defined by his Center and his Size <br>
//!	    in DSU from the Parent Window. If <aParent> is 0 then <br>
//!	    creates a window without parent. <br>
//!	    Creation of an WNT_Window automatically determines the <br>
//!	    smaller dimension of the screen (usually the height) <br>
//!	    and parametrises it as 1.0. <br>
//!	    The smaller dimension of the window is limited to 1.0 <br>
//!	    We can give a value greater than 1.0 to the larger <br>
//!	    dimension. <br>
//!	    No matter how large the values passed in argument, the <br>
//!	    window is automatically limited to the maximum size of <br>
//!	    the screen. <br>
//!	    The ratio of width to height of a conventional screen is <br>
//!	    of the order of 1.3. <br>
//!  Trigger: Raises WindowDefinitionError if the Position out of the <br>
//!          Screen Space or the window creation failed. <br>
OCWNT_Window(OCNaroWrappers::OCWNT_GraphicDevice^ aDevice, System::String^ aTitle, OCNaroWrappers::OCWNT_WClass^ aClass, WNT_Dword aStyle, Quantity_Parameter Xc, Quantity_Parameter Yc, Quantity_Parameter aWidth, Quantity_Parameter aHeight, OCQuantity_NameOfColor aBackColor, System::IntPtr aParent, System::IntPtr aMenu, Standard_Address aClientStruct);

//! Creates a Window defined by his position and size <br>
//!	    in pixles from the Parent Window. <br>
//!  Trigger: Raises WindowDefinitionError if the Position out of the <br>
//!          Screen Space or the window creation failed. <br>
OCWNT_Window(OCNaroWrappers::OCWNT_GraphicDevice^ theDevice, System::String^ theTitle, OCNaroWrappers::OCWNT_WClass^ theClass, WNT_Dword theStyle, Standard_Integer thePxLeft, Standard_Integer thePxTop, Standard_Integer thePxWidth, Standard_Integer thePxHeight, OCQuantity_NameOfColor theBackColor, System::IntPtr theParent, System::IntPtr theMenu, Standard_Address theClientStruct);

//! Creates a Window based on the existing window handle. <br>
//!          This handle equals ( aPart1 << 16 ) + aPart2. <br>
OCWNT_Window(OCNaroWrappers::OCWNT_GraphicDevice^ aDevice, System::IntPtr aHandle, OCQuantity_NameOfColor aBackColor);

//! Creates a Window based on the existing window <aHandle>. <br>
OCWNT_Window(OCNaroWrappers::OCWNT_GraphicDevice^ aDevice, Standard_Integer aPart1, Standard_Integer aPart2, OCQuantity_NameOfColor aBackColor);

//! Modifies the window background. <br>
virtual /*instead*/  void SetBackground(OCNaroWrappers::OCAspect_Background^ Background) ;

//! Modifies the window background. <br>
virtual /*instead*/  void SetBackground(OCQuantity_NameOfColor BackColor) ;

//! Modifies the window background. <br>
virtual /*instead*/  void SetBackground(OCNaroWrappers::OCQuantity_Color^ color) ;

//! Modifies the window background. <br>
 /*instead*/  void SetBackground(System::IntPtr aBackPixmap) ;

//! Loads the window background from an image file <aName> <br>
//! defined with a supported format XWD,GIF or BMP <br>
//! and returns TRUE if the operation is successfull. <br>
//!  Category: Methods to modify the class definition <br>
 /*instead*/  System::Boolean SetBackground(System::String^ aName, OCAspect_FillMethod aMethod) ;

//! Modifies the window gradient background. <br>
//!  Warning: the gradient background colours is ignored when the quality <br>
//!	   of this window is TRANSPARENT. <br>
virtual /*instead*/  void SetBackground(OCNaroWrappers::OCAspect_GradientBackground^ Background) ;

//! Modifies the window gradient background. <br>
//!  Warning: the gradient background colours are ignored when the quality <br>
//!	   of this window is TRANSPARENT. <br>
 /*instead*/  void SetBackground(OCNaroWrappers::OCQuantity_Color^ aCol1, OCNaroWrappers::OCQuantity_Color^ aCol2, OCAspect_GradientFillMethod aMethod) ;

//! Sets cursor <aCursor> for ENTIRE WINDOW CLASS to which <br>
//!          the Window belongs. <br>
 /*instead*/  void SetCursor(System::IntPtr aCursor) ;

//! Sets icon <anIcon> for window <br>
 /*instead*/  void SetIcon(System::IntPtr anIcon, System::String^ aName) ;

//! Sets name for window's icon <br>
 /*instead*/  void SetIconName(System::String^ aName) ;

//! Activates/Deactivates the Double Buffering capability <br>
//!	    for this window. <br>
//!  Warning: Double Buffering is always DISABLE by default. <br>
//!  Trigger: Raises if BackingStore () isn't allowed for this Window <br>
virtual /*instead*/  void SetDoubleBuffer(System::Boolean DBmode) ;

//!  Flushes all graphics to the screen and Swap the Double <br>
//!	     buffer if Enable <br>
//!  Trigger: Raises if Something is WRONG at Drawing Time. <br>
virtual /*instead*/  void Flush() ;

//!  Opens the window <me>. <br>
virtual /*instead*/  void Map() ;

//! Opens a window <me> according to <aMapMode>. <br>
//!          This method is specific to Windows NT. <br>
//!          <aMapMode> can be one of SW_xxx constants defined <br>
//!          in <windows.h>. See documentation. <br>
 /*instead*/  void Map(Standard_Integer aMapMode) ;

//! Closes the window <me>. <br>
virtual /*instead*/  void Unmap() ;

//! Applies the resizing to the window <me>. <br>
virtual /*instead*/  OCAspect_TypeOfResize DoResize() ;

//! Apply the mapping change to the window <me> <br>
//! and returns TRUE if the window is mapped at screen. <br>
virtual /*instead*/  System::Boolean DoMapping() ;

//! Clears the Window in the Background color. <br>
virtual /*instead*/  void Clear() ;

//!  Clears the Window Area defined by his center and PIXEL <br>
//!           size in the Background color <br>
//!  Trigger:  Raises if Window is not defined properly <br>
virtual /*instead*/  void ClearArea(Standard_Integer Xc, Standard_Integer Yc, Standard_Integer Width, Standard_Integer Height) ;

//! Restores The Window from the BackingStored Window <br>
//!	    See BackingStore () method. <br>
virtual /*instead*/  void Restore() ;

//! Restores The Window Area defined by his center <br>
//!	    and PIXEL size from the BackingStored Window <br>
//!	    See BackingStore () method. <br>
virtual /*instead*/  void RestoreArea(Standard_Integer Xc, Standard_Integer Yc, Standard_Integer Width, Standard_Integer Height) ;

//! Dumps the Window to an XWD,GIF or BMP filei with <br>
//! an optional gamma correction value according to the graphic system. <br>
//! and returns TRUE if the dump occurs normaly. <br>
//!  Trigger: Raises if Window is not defined properly <br>
virtual /*instead*/  System::Boolean Dump(System::String^ aFilename, Standard_Real aGammaValue) ;

//! Dumps the Window Area defined by his center and PIXEL size <br>
//!	to an image file with an optional gamma correction value <br>
//!  and returns TRUE if the dump occurs normaly. <br>
//!  Trigger: Raises if Window is not defined properly <br>
//!	    or the area is out of the Window. <br>
virtual /*instead*/  System::Boolean DumpArea(System::String^ aFilename, Standard_Integer Xc, Standard_Integer Yc, Standard_Integer Width, Standard_Integer Height, Standard_Real aGammaValue) ;

//! dump the full contents of the window to a pixmap. <br>
virtual /*instead*/  System::Boolean ToPixMap(Image_PixMap& theImage) ;

//! Loads the XWD file to this Window. <br>
//!          Returns TRUE if the loading occurs normaly. <br>
//!  Warning: Note that the Window is enlarged automatically <br>
//!          when the image size is too large for this window. <br>
//!  Trigger: Raises if Window is not defined properly <br>
virtual /*instead*/  System::Boolean Load(System::String^ aFilename) ;

//! Loads the XWD file to Window Area defined by his center <br>
//!          and PIXEL size. <br>
//!          Returns TRUE if the loading occurs normaly. <br>
//!  Warning: Note that the Image is zoomed automatically <br>
//!          when the image size is too large for this window area. <br>
//!  Trigger: Raises if Window is not defined properly <br>
//!          or the area is out of the Window. <br>
virtual /*instead*/  System::Boolean LoadArea(System::String^ aFilename, Standard_Integer Xc, Standard_Integer Yc, Standard_Integer Width, Standard_Integer Height) ;

//! Sets format of the image file created by Dump or <br>
//!          DumpArea methods. <br>
 /*instead*/  void SetOutputFormat(OCWNT_TypeOfImage aFormat) ;

//! Changes variables due to window position. <br>
 /*instead*/  void SetPos(Standard_Integer X, Standard_Integer Y, Standard_Integer X1, Standard_Integer Y1) ;

//! Sets user defined flags in the extra window data area. <br>
//!          Supported flags WDF_* are listed in InterfaceGraphic_WNT.hxx <br>
//!          In particular, the window backround can be turned off using this method. <br>
 /*instead*/  void SetFlags(Standard_Integer aFlags) ;

//! Reset specified flags in the extra window data area. <br>
//!          Supported flags WDF_* are listed in InterfaceGraphic_WNT.hxx <br>
//!          In particular, the window backround can be turned on using this method. <br>
 /*instead*/  void ResetFlags(Standard_Integer aFlags) ;

//! Returns the BackingStore capability for this Window. <br>
//!	    If Answer is True Exposure can be recovered by <br>
//!		Restore RestoreArea methods. <br>
//!	    If Answer is False, Application must Redraw the <br>
//!	        exposed area. <br>
virtual /*instead*/  System::Boolean BackingStore() ;

//! Returns the DoubleBuffer state. <br>
virtual /*instead*/  System::Boolean DoubleBuffer() ;

//! Returns True if the window <me> is opened <br>
//!	        and False if the window is closed. <br>
virtual /*instead*/  System::Boolean IsMapped() ;

//! Returns The Window RATIO equal to the physical <br>
//!	    WIDTH/HEIGHT dimensions. <br>
virtual /*instead*/  Quantity_Ratio Ratio() ;

//! Returns The Window POSITION in DSU <br>
virtual /*instead*/  void Position(Quantity_Parameter& X1, Quantity_Parameter& Y1, Quantity_Parameter& X2, Quantity_Parameter& Y2) ;

//! Returns The Window POSITION in PIXEL <br>
virtual /*instead*/  void Position(Standard_Integer& X1, Standard_Integer& Y1, Standard_Integer& X2, Standard_Integer& Y2) ;

//! Returns The Window SIZE in DSU <br>
virtual /*instead*/  void Size(Quantity_Parameter& Width, Quantity_Parameter& Height) ;

//! Returns The Window SIZE in PIXEL <br>
virtual /*instead*/  void Size(Standard_Integer& Width, Standard_Integer& Height) ;

//! Returns The Window SIZE in MM <br>
virtual /*instead*/  void MMSize(Standard_Real& Width, Standard_Real& Height) ;

//! Returns the DSU value depending of the PIXEL value. <br>
virtual /*instead*/  Quantity_Parameter Convert(Standard_Integer PV) ;

//! Returns the PIXEL value depending of the DSU value. <br>
virtual /*instead*/  Standard_Integer Convert(Quantity_Parameter DV) ;

//! Returns the DSU position depending of the PIXEL position. <br>
virtual /*instead*/  void Convert(Standard_Integer PX, Standard_Integer PY, Quantity_Parameter& DX, Quantity_Parameter& DY) ;

//! Returns the PIXEL position depending of the DSU position. <br>
virtual /*instead*/  void Convert(Quantity_Parameter DX, Quantity_Parameter DY, Standard_Integer& PX, Standard_Integer& PY) ;

//! Returns the Windows NT handle of the created window <me>. <br>
 /*instead*/  System::IntPtr HWindow() ;

//! Returns the Windows NT handle parent of the created window <me>. <br>
 /*instead*/  System::IntPtr HParentWindow() ;

//! Returns the Windows NT double buffer pixmap handle <br>
//!          of the created window <me>. <br>
//!	    If BackingStore () is permitted. <br>
 /*instead*/  System::IntPtr HPixmap() ;

//! Returns address of the window procedure. <br>
 /*instead*/  Standard_Address WndProc() ;

//! Returns ImageManager of the Window. <br>
 /*instead*/  OCWNT_ImageManager^ ImageManager() ;

~OCWNT_Window()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif