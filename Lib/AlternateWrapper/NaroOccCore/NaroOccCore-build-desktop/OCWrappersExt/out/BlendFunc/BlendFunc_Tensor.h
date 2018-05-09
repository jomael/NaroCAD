// File generated by CPPExt (MPV)
//
#ifndef _BlendFunc_Tensor_OCWrappers_HeaderFile
#define _BlendFunc_Tensor_OCWrappers_HeaderFile

// include native header
#include <BlendFunc_Tensor.hxx>
#include "../Converter.h"


#include "../TColStd/TColStd_Array1OfReal.h"


namespace OCNaroWrappers
{

ref class OCmath_Vector;
ref class OCmath_Matrix;


//! used to store the "gradient of gradient" <br>
public ref class OCBlendFunc_Tensor  {

protected:
  BlendFunc_Tensor* nativeHandle;
  OCBlendFunc_Tensor(OCDummy^) {};

public:
  property BlendFunc_Tensor* Handle
  {
    BlendFunc_Tensor* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBlendFunc_Tensor(BlendFunc_Tensor* nativeHandle);

// Methods PUBLIC


OCBlendFunc_Tensor(Standard_Integer NbRow, Standard_Integer NbCol, Standard_Integer NbMat);

//!Initialize all the elements of a Tensor to InitialValue. <br>
 /*instead*/  void Init(Standard_Real InitialValue) ;

//! accesses (in read or write mode) the value of index <Row>, <br>
//!          <Col> and <Mat> of a Tensor. <br>
//!          An exception is raised if <Row>, <Col> or <Mat> are not <br>
//!          in the correct range. <br>
 /*instead*/  Standard_Real Value(Standard_Integer Row, Standard_Integer Col, Standard_Integer Mat) ;

//! accesses (in read or write mode) the value of index <Row>, <br>
//!          <Col> and <Mat> of a Tensor. <br>
//!          An exception is raised if <Row>, <Col> or <Mat> are not <br>
//!          in the correct range. <br>
 /*instead*/  Standard_Real ChangeValue(Standard_Integer Row, Standard_Integer Col, Standard_Integer Mat) ;


 /*instead*/  void Multiply(OCNaroWrappers::OCmath_Vector^ Right, OCNaroWrappers::OCmath_Matrix^ Product) ;

~OCBlendFunc_Tensor()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif