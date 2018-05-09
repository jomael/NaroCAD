// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_Array2OfCartesianPoint_OCWrappers_HeaderFile
#define _StepGeom_Array2OfCartesianPoint_OCWrappers_HeaderFile

// include native header
#include <StepGeom_Array2OfCartesianPoint.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepGeom_CartesianPoint;



public ref class OCStepGeom_Array2OfCartesianPoint  {

protected:
  StepGeom_Array2OfCartesianPoint* nativeHandle;
  OCStepGeom_Array2OfCartesianPoint(OCDummy^) {};

public:
  property StepGeom_Array2OfCartesianPoint* Handle
  {
    StepGeom_Array2OfCartesianPoint* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepGeom_Array2OfCartesianPoint(StepGeom_Array2OfCartesianPoint* nativeHandle);

// Methods PUBLIC


OCStepGeom_Array2OfCartesianPoint(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCStepGeom_Array2OfCartesianPoint(OCNaroWrappers::OCStepGeom_CartesianPoint^ Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


 /*instead*/  void Init(OCNaroWrappers::OCStepGeom_CartesianPoint^ V) ;


 /*instead*/  OCStepGeom_Array2OfCartesianPoint^ Assign(OCNaroWrappers::OCStepGeom_Array2OfCartesianPoint^ Other) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCStepGeom_CartesianPoint^ Value) ;


 /*instead*/  OCStepGeom_CartesianPoint^ Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCStepGeom_CartesianPoint^ ChangeValue(Standard_Integer Row, Standard_Integer Col) ;

~OCStepGeom_Array2OfCartesianPoint()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif