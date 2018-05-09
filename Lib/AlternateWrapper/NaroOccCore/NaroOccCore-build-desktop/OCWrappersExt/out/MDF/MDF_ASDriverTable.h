// File generated by CPPExt (Transient)
//
#ifndef _MDF_ASDriverTable_OCWrappers_HeaderFile
#define _MDF_ASDriverTable_OCWrappers_HeaderFile

// include the wrapped class
#include <MDF_ASDriverTable.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "MDF_TypeASDriverMap.h"
#include "MDF_TypeDriverListMapOfASDriverTable.h"


namespace OCNaroWrappers
{

ref class OCMDF_ASDriver;
ref class OCMDF_ASDriverHSequence;
ref class OCMDF_TypeASDriverMap;
ref class OCMDF_DriverListOfASDriverTable;
ref class OCMDF_ListNodeOfDriverListOfASDriverTable;
ref class OCMDF_ListIteratorOfDriverListOfASDriverTable;
ref class OCMDF_TypeDriverListMapOfASDriverTable;
ref class OCMDF_DataMapNodeOfTypeDriverListMapOfASDriverTable;
ref class OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable;
ref class OCStandard_Type;



public ref class OCMDF_ASDriverTable : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCMDF_ASDriverTable(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCMDF_ASDriverTable(Handle(MDF_ASDriverTable)* nativeHandle);

// Methods PUBLIC


OCMDF_ASDriverTable();


 /*instead*/  void SetDriver(OCNaroWrappers::OCMDF_ASDriver^ anHDriver) ;


 /*instead*/  void SetDrivers(OCNaroWrappers::OCMDF_ASDriverHSequence^ aDriverHSeq) ;


 /*instead*/  OCMDF_TypeASDriverMap^ GetDrivers(Standard_Integer aVersion) ;


 /*instead*/  System::Boolean GetDriver(OCNaroWrappers::OCStandard_Type^ aType, OCNaroWrappers::OCMDF_ASDriver^ anHDriver, Standard_Integer aVersion) ;

~OCMDF_ASDriverTable()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif