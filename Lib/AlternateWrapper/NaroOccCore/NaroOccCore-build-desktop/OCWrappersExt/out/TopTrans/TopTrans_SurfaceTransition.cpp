// File generated by CPPExt (CPP file)
//

#include "TopTrans_SurfaceTransition.h"
#include "../Converter.h"
#include "../gp/gp_Dir.h"


using namespace OCNaroWrappers;

OCTopTrans_SurfaceTransition::OCTopTrans_SurfaceTransition(TopTrans_SurfaceTransition* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopTrans_SurfaceTransition::OCTopTrans_SurfaceTransition() 
{
  nativeHandle = new TopTrans_SurfaceTransition();
}

 void OCTopTrans_SurfaceTransition::Reset(OCNaroWrappers::OCgp_Dir^ Tgt, OCNaroWrappers::OCgp_Dir^ Norm, OCNaroWrappers::OCgp_Dir^ MaxD, OCNaroWrappers::OCgp_Dir^ MinD, Standard_Real MaxCurv, Standard_Real MinCurv)
{
  ((TopTrans_SurfaceTransition*)nativeHandle)->Reset(*((gp_Dir*)Tgt->Handle), *((gp_Dir*)Norm->Handle), *((gp_Dir*)MaxD->Handle), *((gp_Dir*)MinD->Handle), MaxCurv, MinCurv);
}

 void OCTopTrans_SurfaceTransition::Reset(OCNaroWrappers::OCgp_Dir^ Tgt, OCNaroWrappers::OCgp_Dir^ Norm)
{
  ((TopTrans_SurfaceTransition*)nativeHandle)->Reset(*((gp_Dir*)Tgt->Handle), *((gp_Dir*)Norm->Handle));
}

 void OCTopTrans_SurfaceTransition::Compare(Standard_Real Tole, OCNaroWrappers::OCgp_Dir^ Norm, OCNaroWrappers::OCgp_Dir^ MaxD, OCNaroWrappers::OCgp_Dir^ MinD, Standard_Real MaxCurv, Standard_Real MinCurv, OCTopAbs_Orientation S, OCTopAbs_Orientation O)
{
  ((TopTrans_SurfaceTransition*)nativeHandle)->Compare(Tole, *((gp_Dir*)Norm->Handle), *((gp_Dir*)MaxD->Handle), *((gp_Dir*)MinD->Handle), MaxCurv, MinCurv, (TopAbs_Orientation)S, (TopAbs_Orientation)O);
}

 void OCTopTrans_SurfaceTransition::Compare(Standard_Real Tole, OCNaroWrappers::OCgp_Dir^ Norm, OCTopAbs_Orientation S, OCTopAbs_Orientation O)
{
  ((TopTrans_SurfaceTransition*)nativeHandle)->Compare(Tole, *((gp_Dir*)Norm->Handle), (TopAbs_Orientation)S, (TopAbs_Orientation)O);
}

 OCTopAbs_State OCTopTrans_SurfaceTransition::StateBefore()
{
  return (OCTopAbs_State)(((TopTrans_SurfaceTransition*)nativeHandle)->StateBefore());
}

 OCTopAbs_State OCTopTrans_SurfaceTransition::StateAfter()
{
  return (OCTopAbs_State)(((TopTrans_SurfaceTransition*)nativeHandle)->StateAfter());
}

 OCTopAbs_State OCTopTrans_SurfaceTransition::GetBefore(OCTopAbs_Orientation Tran)
{
  return (OCTopAbs_State)(TopTrans_SurfaceTransition::GetBefore((TopAbs_Orientation)Tran));
}

 OCTopAbs_State OCTopTrans_SurfaceTransition::GetAfter(OCTopAbs_Orientation Tran)
{
  return (OCTopAbs_State)(TopTrans_SurfaceTransition::GetAfter((TopAbs_Orientation)Tran));
}

