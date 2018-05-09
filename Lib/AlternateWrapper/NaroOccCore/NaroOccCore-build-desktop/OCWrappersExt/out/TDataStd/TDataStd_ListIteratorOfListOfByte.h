// File generated by CPPExt (MPV)
//
#ifndef _TDataStd_ListIteratorOfListOfByte_OCWrappers_HeaderFile
#define _TDataStd_ListIteratorOfListOfByte_OCWrappers_HeaderFile

// include native header
#include <TDataStd_ListIteratorOfListOfByte.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTDataStd_ListOfByte;
ref class OCTDataStd_ListNodeOfListOfByte;



public ref class OCTDataStd_ListIteratorOfListOfByte  {

protected:
  TDataStd_ListIteratorOfListOfByte* nativeHandle;
  OCTDataStd_ListIteratorOfListOfByte(OCDummy^) {};

public:
  property TDataStd_ListIteratorOfListOfByte* Handle
  {
    TDataStd_ListIteratorOfListOfByte* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTDataStd_ListIteratorOfListOfByte(TDataStd_ListIteratorOfListOfByte* nativeHandle);

// Methods PUBLIC


OCTDataStd_ListIteratorOfListOfByte();


OCTDataStd_ListIteratorOfListOfByte(OCNaroWrappers::OCTDataStd_ListOfByte^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCTDataStd_ListOfByte^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  Standard_Byte Value() ;

~OCTDataStd_ListIteratorOfListOfByte()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif