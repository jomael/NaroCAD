// File generated by CPPExt (MPV)
//
#ifndef _TDF_AttributeIndexedMap_OCWrappers_HeaderFile
#define _TDF_AttributeIndexedMap_OCWrappers_HeaderFile

// include native header
#include <TDF_AttributeIndexedMap.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTDF_Attribute;
ref class OCTColStd_MapTransientHasher;
ref class OCTDF_IndexedMapNodeOfAttributeIndexedMap;



public ref class OCTDF_AttributeIndexedMap  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTDF_AttributeIndexedMap(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_AttributeIndexedMap(TDF_AttributeIndexedMap* nativeHandle);

// Methods PUBLIC


OCTDF_AttributeIndexedMap(Standard_Integer NbBuckets);


 /*instead*/  OCTDF_AttributeIndexedMap^ Assign(OCNaroWrappers::OCTDF_AttributeIndexedMap^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  Standard_Integer Add(OCNaroWrappers::OCTDF_Attribute^ K) ;


 /*instead*/  void Substitute(Standard_Integer I, OCNaroWrappers::OCTDF_Attribute^ K) ;


 /*instead*/  void RemoveLast() ;


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCTDF_Attribute^ K) ;


 /*instead*/  OCTDF_Attribute^ FindKey(Standard_Integer I) ;


 /*instead*/  Standard_Integer FindIndex(OCNaroWrappers::OCTDF_Attribute^ K) ;

~OCTDF_AttributeIndexedMap()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif