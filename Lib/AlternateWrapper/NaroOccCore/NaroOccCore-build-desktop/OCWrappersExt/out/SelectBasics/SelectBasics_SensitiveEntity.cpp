// File generated by CPPExt (CPP file)
//

#include "SelectBasics_SensitiveEntity.h"
#include "../Converter.h"
#include "SelectBasics_EntityOwner.h"
#include "SelectBasics_ListOfBox2d.h"
#include "../TColgp/TColgp_Array1OfPnt2d.h"
#include "../Bnd/Bnd_Box2d.h"


using namespace OCNaroWrappers;

OCSelectBasics_SensitiveEntity::OCSelectBasics_SensitiveEntity(Handle(SelectBasics_SensitiveEntity)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_SelectBasics_SensitiveEntity(*nativeHandle);
}

OCSelectBasics_SensitiveEntity::OCSelectBasics_SensitiveEntity(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, Standard_ShortReal aSensitivityFactor) : OCMMgt_TShared((OCDummy^)nullptr)

{}

 void OCSelectBasics_SensitiveEntity::Set(OCNaroWrappers::OCSelectBasics_EntityOwner^ TheOwnerId)
{
  (*((Handle_SelectBasics_SensitiveEntity*)nativeHandle))->Set(*((Handle_SelectBasics_EntityOwner*)TheOwnerId->Handle));
}

OCSelectBasics_EntityOwner^ OCSelectBasics_SensitiveEntity::OwnerId()
{
  Handle(SelectBasics_EntityOwner) tmp = (*((Handle_SelectBasics_SensitiveEntity*)nativeHandle))->OwnerId();
  return gcnew OCSelectBasics_EntityOwner(&tmp);
}

 Standard_Real OCSelectBasics_SensitiveEntity::Depth()
{
  return (*((Handle_SelectBasics_SensitiveEntity*)nativeHandle))->Depth();
}

 void OCSelectBasics_SensitiveEntity::SetSensitivityFactor(Standard_ShortReal aFactor)
{
  (*((Handle_SelectBasics_SensitiveEntity*)nativeHandle))->SetSensitivityFactor(aFactor);
}

 Standard_ShortReal OCSelectBasics_SensitiveEntity::SensitivityFactor()
{
  return (*((Handle_SelectBasics_SensitiveEntity*)nativeHandle))->SensitivityFactor();
}

