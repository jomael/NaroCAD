// File generated by CPPExt (CPP file)
//

#include "IntPatch_Point.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HVertex.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"
#include "../gp/gp_Pnt.h"
#include "../IntSurf/IntSurf_Transition.h"
#include "../IntSurf/IntSurf_PntOn2S.h"


using namespace OCNaroWrappers;

OCIntPatch_Point::OCIntPatch_Point(IntPatch_Point* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_Point::OCIntPatch_Point() 
{
  nativeHandle = new IntPatch_Point();
}

 void OCIntPatch_Point::SetValue(OCNaroWrappers::OCgp_Pnt^ Pt, Standard_Real Tol, System::Boolean Tangent)
{
  ((IntPatch_Point*)nativeHandle)->SetValue(*((gp_Pnt*)Pt->Handle), Tol, OCConverter::BooleanToStandardBoolean(Tangent));
}

 void OCIntPatch_Point::SetValue(OCNaroWrappers::OCgp_Pnt^ Pt)
{
  ((IntPatch_Point*)nativeHandle)->SetValue(*((gp_Pnt*)Pt->Handle));
}

 void OCIntPatch_Point::SetTolerance(Standard_Real Tol)
{
  ((IntPatch_Point*)nativeHandle)->SetTolerance(Tol);
}

 void OCIntPatch_Point::SetParameters(Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2)
{
  ((IntPatch_Point*)nativeHandle)->SetParameters(U1, V1, U2, V2);
}

 void OCIntPatch_Point::SetParameter(Standard_Real Para)
{
  ((IntPatch_Point*)nativeHandle)->SetParameter(Para);
}

 void OCIntPatch_Point::SetVertex(System::Boolean OnFirst, OCNaroWrappers::OCAdaptor3d_HVertex^ V)
{
  ((IntPatch_Point*)nativeHandle)->SetVertex(OCConverter::BooleanToStandardBoolean(OnFirst), *((Handle_Adaptor3d_HVertex*)V->Handle));
}

 void OCIntPatch_Point::SetArc(System::Boolean OnFirst, OCNaroWrappers::OCAdaptor2d_HCurve2d^ A, Standard_Real Param, OCNaroWrappers::OCIntSurf_Transition^ TLine, OCNaroWrappers::OCIntSurf_Transition^ TArc)
{
  ((IntPatch_Point*)nativeHandle)->SetArc(OCConverter::BooleanToStandardBoolean(OnFirst), *((Handle_Adaptor2d_HCurve2d*)A->Handle), Param, *((IntSurf_Transition*)TLine->Handle), *((IntSurf_Transition*)TArc->Handle));
}

 void OCIntPatch_Point::SetMultiple(System::Boolean IsMult)
{
  ((IntPatch_Point*)nativeHandle)->SetMultiple(OCConverter::BooleanToStandardBoolean(IsMult));
}

OCgp_Pnt^ OCIntPatch_Point::Value()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((IntPatch_Point*)nativeHandle)->Value();
  return gcnew OCgp_Pnt(tmp);
}

 Standard_Real OCIntPatch_Point::ParameterOnLine()
{
  return ((IntPatch_Point*)nativeHandle)->ParameterOnLine();
}

 Standard_Real OCIntPatch_Point::Tolerance()
{
  return ((IntPatch_Point*)nativeHandle)->Tolerance();
}

 System::Boolean OCIntPatch_Point::IsTangencyPoint()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_Point*)nativeHandle)->IsTangencyPoint());
}

 void OCIntPatch_Point::ParametersOnS1(Standard_Real& U1, Standard_Real& V1)
{
  ((IntPatch_Point*)nativeHandle)->ParametersOnS1(U1, V1);
}

 void OCIntPatch_Point::ParametersOnS2(Standard_Real& U2, Standard_Real& V2)
{
  ((IntPatch_Point*)nativeHandle)->ParametersOnS2(U2, V2);
}

 System::Boolean OCIntPatch_Point::IsMultiple()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_Point*)nativeHandle)->IsMultiple());
}

 System::Boolean OCIntPatch_Point::IsOnDomS1()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_Point*)nativeHandle)->IsOnDomS1());
}

 System::Boolean OCIntPatch_Point::IsVertexOnS1()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_Point*)nativeHandle)->IsVertexOnS1());
}

OCAdaptor3d_HVertex^ OCIntPatch_Point::VertexOnS1()
{
  Handle(Adaptor3d_HVertex) tmp = ((IntPatch_Point*)nativeHandle)->VertexOnS1();
  return gcnew OCAdaptor3d_HVertex(&tmp);
}

OCAdaptor2d_HCurve2d^ OCIntPatch_Point::ArcOnS1()
{
  Handle(Adaptor2d_HCurve2d) tmp = ((IntPatch_Point*)nativeHandle)->ArcOnS1();
  return gcnew OCAdaptor2d_HCurve2d(&tmp);
}

OCIntSurf_Transition^ OCIntPatch_Point::TransitionLineArc1()
{
  IntSurf_Transition* tmp = new IntSurf_Transition();
  *tmp = ((IntPatch_Point*)nativeHandle)->TransitionLineArc1();
  return gcnew OCIntSurf_Transition(tmp);
}

OCIntSurf_Transition^ OCIntPatch_Point::TransitionOnS1()
{
  IntSurf_Transition* tmp = new IntSurf_Transition();
  *tmp = ((IntPatch_Point*)nativeHandle)->TransitionOnS1();
  return gcnew OCIntSurf_Transition(tmp);
}

 Standard_Real OCIntPatch_Point::ParameterOnArc1()
{
  return ((IntPatch_Point*)nativeHandle)->ParameterOnArc1();
}

 System::Boolean OCIntPatch_Point::IsOnDomS2()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_Point*)nativeHandle)->IsOnDomS2());
}

 System::Boolean OCIntPatch_Point::IsVertexOnS2()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_Point*)nativeHandle)->IsVertexOnS2());
}

OCAdaptor3d_HVertex^ OCIntPatch_Point::VertexOnS2()
{
  Handle(Adaptor3d_HVertex) tmp = ((IntPatch_Point*)nativeHandle)->VertexOnS2();
  return gcnew OCAdaptor3d_HVertex(&tmp);
}

OCAdaptor2d_HCurve2d^ OCIntPatch_Point::ArcOnS2()
{
  Handle(Adaptor2d_HCurve2d) tmp = ((IntPatch_Point*)nativeHandle)->ArcOnS2();
  return gcnew OCAdaptor2d_HCurve2d(&tmp);
}

OCIntSurf_Transition^ OCIntPatch_Point::TransitionLineArc2()
{
  IntSurf_Transition* tmp = new IntSurf_Transition();
  *tmp = ((IntPatch_Point*)nativeHandle)->TransitionLineArc2();
  return gcnew OCIntSurf_Transition(tmp);
}

OCIntSurf_Transition^ OCIntPatch_Point::TransitionOnS2()
{
  IntSurf_Transition* tmp = new IntSurf_Transition();
  *tmp = ((IntPatch_Point*)nativeHandle)->TransitionOnS2();
  return gcnew OCIntSurf_Transition(tmp);
}

 Standard_Real OCIntPatch_Point::ParameterOnArc2()
{
  return ((IntPatch_Point*)nativeHandle)->ParameterOnArc2();
}

OCIntSurf_PntOn2S^ OCIntPatch_Point::PntOn2S()
{
  IntSurf_PntOn2S* tmp = new IntSurf_PntOn2S();
  *tmp = ((IntPatch_Point*)nativeHandle)->PntOn2S();
  return gcnew OCIntSurf_PntOn2S(tmp);
}

 void OCIntPatch_Point::Parameters(Standard_Real& U1, Standard_Real& V1, Standard_Real& U2, Standard_Real& V2)
{
  ((IntPatch_Point*)nativeHandle)->Parameters(U1, V1, U2, V2);
}

 void OCIntPatch_Point::ReverseTransition()
{
  ((IntPatch_Point*)nativeHandle)->ReverseTransition();
}

 void OCIntPatch_Point::Dump()
{
  ((IntPatch_Point*)nativeHandle)->Dump();
}

