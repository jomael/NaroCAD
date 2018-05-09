// File generated by CPPExt (MPV)
//
#ifndef _MAT2d_DataMapOfBiIntInteger_OCWrappers_HeaderFile
#define _MAT2d_DataMapOfBiIntInteger_OCWrappers_HeaderFile

// include native header
#include <MAT2d_DataMapOfBiIntInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCMAT2d_BiInt;
ref class OCMAT2d_MapBiIntHasher;
ref class OCMAT2d_DataMapNodeOfDataMapOfBiIntInteger;
ref class OCMAT2d_DataMapIteratorOfDataMapOfBiIntInteger;



public ref class OCMAT2d_DataMapOfBiIntInteger  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCMAT2d_DataMapOfBiIntInteger(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT2d_DataMapOfBiIntInteger(MAT2d_DataMapOfBiIntInteger* nativeHandle);

// Methods PUBLIC


OCMAT2d_DataMapOfBiIntInteger(Standard_Integer NbBuckets);


 /*instead*/  OCMAT2d_DataMapOfBiIntInteger^ Assign(OCNaroWrappers::OCMAT2d_DataMapOfBiIntInteger^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCMAT2d_BiInt^ K, Standard_Integer I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCMAT2d_BiInt^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCMAT2d_BiInt^ K) ;


 /*instead*/  Standard_Integer Find(OCNaroWrappers::OCMAT2d_BiInt^ K) ;


 /*instead*/  Standard_Integer ChangeFind(OCNaroWrappers::OCMAT2d_BiInt^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCMAT2d_BiInt^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCMAT2d_BiInt^ K) ;

~OCMAT2d_DataMapOfBiIntInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif