// File generated by CPPExt (CPP file)
//

#include "Geom2d_Parabola.h"
#include "../Converter.h"
#include "../gp/gp_Parab2d.h"
#include "../gp/gp_Ax2d.h"
#include "../gp/gp_Ax22d.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Vec2d.h"
#include "../gp/gp_Trsf2d.h"
#include "Geom2d_Geometry.h"


using namespace OCNaroWrappers;

OCGeom2d_Parabola::OCGeom2d_Parabola(Handle(Geom2d_Parabola)* nativeHandle) : OCGeom2d_Conic((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom2d_Parabola(*nativeHandle);
}

OCGeom2d_Parabola::OCGeom2d_Parabola(OCNaroWrappers::OCgp_Parab2d^ Prb) : OCGeom2d_Conic((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom2d_Parabola(new Geom2d_Parabola(*((gp_Parab2d*)Prb->Handle)));
}

OCGeom2d_Parabola::OCGeom2d_Parabola(OCNaroWrappers::OCgp_Ax2d^ MirrorAxis, Standard_Real Focal, System::Boolean Sense) : OCGeom2d_Conic((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom2d_Parabola(new Geom2d_Parabola(*((gp_Ax2d*)MirrorAxis->Handle), Focal, OCConverter::BooleanToStandardBoolean(Sense)));
}

OCGeom2d_Parabola::OCGeom2d_Parabola(OCNaroWrappers::OCgp_Ax22d^ Axis, Standard_Real Focal) : OCGeom2d_Conic((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom2d_Parabola(new Geom2d_Parabola(*((gp_Ax22d*)Axis->Handle), Focal));
}

OCGeom2d_Parabola::OCGeom2d_Parabola(OCNaroWrappers::OCgp_Ax2d^ D, OCNaroWrappers::OCgp_Pnt2d^ F) : OCGeom2d_Conic((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom2d_Parabola(new Geom2d_Parabola(*((gp_Ax2d*)D->Handle), *((gp_Pnt2d*)F->Handle)));
}

 void OCGeom2d_Parabola::SetFocal(Standard_Real Focal)
{
  (*((Handle_Geom2d_Parabola*)nativeHandle))->SetFocal(Focal);
}

 void OCGeom2d_Parabola::SetParab2d(OCNaroWrappers::OCgp_Parab2d^ Prb)
{
  (*((Handle_Geom2d_Parabola*)nativeHandle))->SetParab2d(*((gp_Parab2d*)Prb->Handle));
}

OCgp_Parab2d^ OCGeom2d_Parabola::Parab2d()
{
  gp_Parab2d* tmp = new gp_Parab2d();
  *tmp = (*((Handle_Geom2d_Parabola*)nativeHandle))->Parab2d();
  return gcnew OCgp_Parab2d(tmp);
}

 Standard_Real OCGeom2d_Parabola::ReversedParameter(Standard_Real U)
{
  return (*((Handle_Geom2d_Parabola*)nativeHandle))->ReversedParameter(U);
}

 Standard_Real OCGeom2d_Parabola::FirstParameter()
{
  return (*((Handle_Geom2d_Parabola*)nativeHandle))->FirstParameter();
}

 Standard_Real OCGeom2d_Parabola::LastParameter()
{
  return (*((Handle_Geom2d_Parabola*)nativeHandle))->LastParameter();
}

 System::Boolean OCGeom2d_Parabola::IsClosed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom2d_Parabola*)nativeHandle))->IsClosed());
}

 System::Boolean OCGeom2d_Parabola::IsPeriodic()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom2d_Parabola*)nativeHandle))->IsPeriodic());
}

OCgp_Ax2d^ OCGeom2d_Parabola::Directrix()
{
  gp_Ax2d* tmp = new gp_Ax2d();
  *tmp = (*((Handle_Geom2d_Parabola*)nativeHandle))->Directrix();
  return gcnew OCgp_Ax2d(tmp);
}

 Standard_Real OCGeom2d_Parabola::Eccentricity()
{
  return (*((Handle_Geom2d_Parabola*)nativeHandle))->Eccentricity();
}

OCgp_Pnt2d^ OCGeom2d_Parabola::Focus()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = (*((Handle_Geom2d_Parabola*)nativeHandle))->Focus();
  return gcnew OCgp_Pnt2d(tmp);
}

 Standard_Real OCGeom2d_Parabola::Focal()
{
  return (*((Handle_Geom2d_Parabola*)nativeHandle))->Focal();
}

 Standard_Real OCGeom2d_Parabola::Parameter()
{
  return (*((Handle_Geom2d_Parabola*)nativeHandle))->Parameter();
}

 void OCGeom2d_Parabola::D0(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P)
{
  (*((Handle_Geom2d_Parabola*)nativeHandle))->D0(U, *((gp_Pnt2d*)P->Handle));
}

 void OCGeom2d_Parabola::D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1)
{
  (*((Handle_Geom2d_Parabola*)nativeHandle))->D1(U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V1->Handle));
}

 void OCGeom2d_Parabola::D2(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2)
{
  (*((Handle_Geom2d_Parabola*)nativeHandle))->D2(U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V1->Handle), *((gp_Vec2d*)V2->Handle));
}

 void OCGeom2d_Parabola::D3(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2, OCNaroWrappers::OCgp_Vec2d^ V3)
{
  (*((Handle_Geom2d_Parabola*)nativeHandle))->D3(U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V1->Handle), *((gp_Vec2d*)V2->Handle), *((gp_Vec2d*)V3->Handle));
}

OCgp_Vec2d^ OCGeom2d_Parabola::DN(Standard_Real U, Standard_Integer N)
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = (*((Handle_Geom2d_Parabola*)nativeHandle))->DN(U, N);
  return gcnew OCgp_Vec2d(tmp);
}

 void OCGeom2d_Parabola::Transform(OCNaroWrappers::OCgp_Trsf2d^ T)
{
  (*((Handle_Geom2d_Parabola*)nativeHandle))->Transform(*((gp_Trsf2d*)T->Handle));
}

 Standard_Real OCGeom2d_Parabola::TransformedParameter(Standard_Real U, OCNaroWrappers::OCgp_Trsf2d^ T)
{
  return (*((Handle_Geom2d_Parabola*)nativeHandle))->TransformedParameter(U, *((gp_Trsf2d*)T->Handle));
}

 Standard_Real OCGeom2d_Parabola::ParametricTransformation(OCNaroWrappers::OCgp_Trsf2d^ T)
{
  return (*((Handle_Geom2d_Parabola*)nativeHandle))->ParametricTransformation(*((gp_Trsf2d*)T->Handle));
}

OCGeom2d_Geometry^ OCGeom2d_Parabola::Copy()
{
  Handle(Geom2d_Geometry) tmp = (*((Handle_Geom2d_Parabola*)nativeHandle))->Copy();
  return gcnew OCGeom2d_Geometry(&tmp);
}

