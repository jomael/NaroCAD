// File generated by CPPExt (CPP file)
//

#include "BlendFunc_Ruled.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "../Adaptor3d/Adaptor3d_HCurve.h"
#include "../math/math_Vector.h"
#include "../math/math_Matrix.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Vec2d.h"
#include "../TColgp/TColgp_Array1OfPnt.h"
#include "../TColgp/TColgp_Array1OfVec.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "../TColStd/TColStd_Array1OfInteger.h"
#include "../Blend/Blend_Point.h"
#include "../TColgp/TColgp_Array1OfPnt2d.h"
#include "../TColgp/TColgp_Array1OfVec2d.h"
#include "../gp/gp_Ax1.h"


using namespace OCNaroWrappers;

OCBlendFunc_Ruled::OCBlendFunc_Ruled(BlendFunc_Ruled* nativeHandle) : OCBlend_Function((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBlendFunc_Ruled::OCBlendFunc_Ruled(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCNaroWrappers::OCAdaptor3d_HCurve^ C) : OCBlend_Function((OCDummy^)nullptr)

{
  nativeHandle = new BlendFunc_Ruled(*((Handle_Adaptor3d_HSurface*)S1->Handle), *((Handle_Adaptor3d_HSurface*)S2->Handle), *((Handle_Adaptor3d_HCurve*)C->Handle));
}

 Standard_Integer OCBlendFunc_Ruled::NbEquations()
{
  return ((BlendFunc_Ruled*)nativeHandle)->NbEquations();
}

 System::Boolean OCBlendFunc_Ruled::Value(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Ruled*)nativeHandle)->Value(*((math_Vector*)X->Handle), *((math_Vector*)F->Handle)));
}

 System::Boolean OCBlendFunc_Ruled::Derivatives(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Matrix^ D)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Ruled*)nativeHandle)->Derivatives(*((math_Vector*)X->Handle), *((math_Matrix*)D->Handle)));
}

 System::Boolean OCBlendFunc_Ruled::Values(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F, OCNaroWrappers::OCmath_Matrix^ D)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Ruled*)nativeHandle)->Values(*((math_Vector*)X->Handle), *((math_Vector*)F->Handle), *((math_Matrix*)D->Handle)));
}

 void OCBlendFunc_Ruled::Set(Standard_Real Param)
{
  ((BlendFunc_Ruled*)nativeHandle)->Set(Param);
}

 void OCBlendFunc_Ruled::Set(Standard_Real First, Standard_Real Last)
{
  ((BlendFunc_Ruled*)nativeHandle)->Set(First, Last);
}

 void OCBlendFunc_Ruled::GetTolerance(OCNaroWrappers::OCmath_Vector^ Tolerance, Standard_Real Tol)
{
  ((BlendFunc_Ruled*)nativeHandle)->GetTolerance(*((math_Vector*)Tolerance->Handle), Tol);
}

 void OCBlendFunc_Ruled::GetBounds(OCNaroWrappers::OCmath_Vector^ InfBound, OCNaroWrappers::OCmath_Vector^ SupBound)
{
  ((BlendFunc_Ruled*)nativeHandle)->GetBounds(*((math_Vector*)InfBound->Handle), *((math_Vector*)SupBound->Handle));
}

 System::Boolean OCBlendFunc_Ruled::IsSolution(OCNaroWrappers::OCmath_Vector^ Sol, Standard_Real Tol)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Ruled*)nativeHandle)->IsSolution(*((math_Vector*)Sol->Handle), Tol));
}

 Standard_Real OCBlendFunc_Ruled::GetMinimalDistance()
{
  return ((BlendFunc_Ruled*)nativeHandle)->GetMinimalDistance();
}

OCgp_Pnt^ OCBlendFunc_Ruled::PointOnS1()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((BlendFunc_Ruled*)nativeHandle)->PointOnS1();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Pnt^ OCBlendFunc_Ruled::PointOnS2()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((BlendFunc_Ruled*)nativeHandle)->PointOnS2();
  return gcnew OCgp_Pnt(tmp);
}

 System::Boolean OCBlendFunc_Ruled::IsTangencyPoint()
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Ruled*)nativeHandle)->IsTangencyPoint());
}

OCgp_Vec^ OCBlendFunc_Ruled::TangentOnS1()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((BlendFunc_Ruled*)nativeHandle)->TangentOnS1();
  return gcnew OCgp_Vec(tmp);
}

OCgp_Vec2d^ OCBlendFunc_Ruled::Tangent2dOnS1()
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((BlendFunc_Ruled*)nativeHandle)->Tangent2dOnS1();
  return gcnew OCgp_Vec2d(tmp);
}

OCgp_Vec^ OCBlendFunc_Ruled::TangentOnS2()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((BlendFunc_Ruled*)nativeHandle)->TangentOnS2();
  return gcnew OCgp_Vec(tmp);
}

OCgp_Vec2d^ OCBlendFunc_Ruled::Tangent2dOnS2()
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((BlendFunc_Ruled*)nativeHandle)->Tangent2dOnS2();
  return gcnew OCgp_Vec2d(tmp);
}

 void OCBlendFunc_Ruled::Tangent(Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, OCNaroWrappers::OCgp_Vec^ TgFirst, OCNaroWrappers::OCgp_Vec^ TgLast, OCNaroWrappers::OCgp_Vec^ NormFirst, OCNaroWrappers::OCgp_Vec^ NormLast)
{
  ((BlendFunc_Ruled*)nativeHandle)->Tangent(U1, V1, U2, V2, *((gp_Vec*)TgFirst->Handle), *((gp_Vec*)TgLast->Handle), *((gp_Vec*)NormFirst->Handle), *((gp_Vec*)NormLast->Handle));
}

 System::Boolean OCBlendFunc_Ruled::GetSection(Standard_Real Param, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, OCNaroWrappers::OCTColgp_Array1OfPnt^ tabP, OCNaroWrappers::OCTColgp_Array1OfVec^ tabV)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Ruled*)nativeHandle)->GetSection(Param, U1, V1, U2, V2, *((TColgp_Array1OfPnt*)tabP->Handle), *((TColgp_Array1OfVec*)tabV->Handle)));
}

 System::Boolean OCBlendFunc_Ruled::IsRational()
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Ruled*)nativeHandle)->IsRational());
}

 Standard_Real OCBlendFunc_Ruled::GetSectionSize()
{
  return ((BlendFunc_Ruled*)nativeHandle)->GetSectionSize();
}

 void OCBlendFunc_Ruled::GetMinimalWeight(OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths)
{
  ((BlendFunc_Ruled*)nativeHandle)->GetMinimalWeight(*((TColStd_Array1OfReal*)Weigths->Handle));
}

 Standard_Integer OCBlendFunc_Ruled::NbIntervals(OCGeomAbs_Shape S)
{
  return ((BlendFunc_Ruled*)nativeHandle)->NbIntervals((GeomAbs_Shape)S);
}

 void OCBlendFunc_Ruled::Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S)
{
  ((BlendFunc_Ruled*)nativeHandle)->Intervals(*((TColStd_Array1OfReal*)T->Handle), (GeomAbs_Shape)S);
}

 void OCBlendFunc_Ruled::GetShape(Standard_Integer& NbPoles, Standard_Integer& NbKnots, Standard_Integer& Degree, Standard_Integer& NbPoles2d)
{
  ((BlendFunc_Ruled*)nativeHandle)->GetShape(NbPoles, NbKnots, Degree, NbPoles2d);
}

 void OCBlendFunc_Ruled::GetTolerance(Standard_Real BoundTol, Standard_Real SurfTol, Standard_Real AngleTol, OCNaroWrappers::OCmath_Vector^ Tol3d, OCNaroWrappers::OCmath_Vector^ Tol1D)
{
  ((BlendFunc_Ruled*)nativeHandle)->GetTolerance(BoundTol, SurfTol, AngleTol, *((math_Vector*)Tol3d->Handle), *((math_Vector*)Tol1D->Handle));
}

 void OCBlendFunc_Ruled::Knots(OCNaroWrappers::OCTColStd_Array1OfReal^ TKnots)
{
  ((BlendFunc_Ruled*)nativeHandle)->Knots(*((TColStd_Array1OfReal*)TKnots->Handle));
}

 void OCBlendFunc_Ruled::Mults(OCNaroWrappers::OCTColStd_Array1OfInteger^ TMults)
{
  ((BlendFunc_Ruled*)nativeHandle)->Mults(*((TColStd_Array1OfInteger*)TMults->Handle));
}

 System::Boolean OCBlendFunc_Ruled::Section(OCNaroWrappers::OCBlend_Point^ P, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfVec^ DPoles, OCNaroWrappers::OCTColgp_Array1OfVec^ D2Poles, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles2d, OCNaroWrappers::OCTColgp_Array1OfVec2d^ DPoles2d, OCNaroWrappers::OCTColgp_Array1OfVec2d^ D2Poles2d, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths, OCNaroWrappers::OCTColStd_Array1OfReal^ DWeigths, OCNaroWrappers::OCTColStd_Array1OfReal^ D2Weigths)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Ruled*)nativeHandle)->Section(*((Blend_Point*)P->Handle), *((TColgp_Array1OfPnt*)Poles->Handle), *((TColgp_Array1OfVec*)DPoles->Handle), *((TColgp_Array1OfVec*)D2Poles->Handle), *((TColgp_Array1OfPnt2d*)Poles2d->Handle), *((TColgp_Array1OfVec2d*)DPoles2d->Handle), *((TColgp_Array1OfVec2d*)D2Poles2d->Handle), *((TColStd_Array1OfReal*)Weigths->Handle), *((TColStd_Array1OfReal*)DWeigths->Handle), *((TColStd_Array1OfReal*)D2Weigths->Handle)));
}

 System::Boolean OCBlendFunc_Ruled::Section(OCNaroWrappers::OCBlend_Point^ P, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfVec^ DPoles, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles2d, OCNaroWrappers::OCTColgp_Array1OfVec2d^ DPoles2d, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths, OCNaroWrappers::OCTColStd_Array1OfReal^ DWeigths)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_Ruled*)nativeHandle)->Section(*((Blend_Point*)P->Handle), *((TColgp_Array1OfPnt*)Poles->Handle), *((TColgp_Array1OfVec*)DPoles->Handle), *((TColgp_Array1OfPnt2d*)Poles2d->Handle), *((TColgp_Array1OfVec2d*)DPoles2d->Handle), *((TColStd_Array1OfReal*)Weigths->Handle), *((TColStd_Array1OfReal*)DWeigths->Handle)));
}

 void OCBlendFunc_Ruled::Section(OCNaroWrappers::OCBlend_Point^ P, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles2d, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths)
{
  ((BlendFunc_Ruled*)nativeHandle)->Section(*((Blend_Point*)P->Handle), *((TColgp_Array1OfPnt*)Poles->Handle), *((TColgp_Array1OfPnt2d*)Poles2d->Handle), *((TColStd_Array1OfReal*)Weigths->Handle));
}

OCgp_Ax1^ OCBlendFunc_Ruled::AxeRot(Standard_Real Prm)
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((BlendFunc_Ruled*)nativeHandle)->AxeRot(Prm);
  return gcnew OCgp_Ax1(tmp);
}

 void OCBlendFunc_Ruled::Resolution(Standard_Integer IC2d, Standard_Real Tol, Standard_Real& TolU, Standard_Real& TolV)
{
  ((BlendFunc_Ruled*)nativeHandle)->Resolution(IC2d, Tol, TolU, TolV);
}

