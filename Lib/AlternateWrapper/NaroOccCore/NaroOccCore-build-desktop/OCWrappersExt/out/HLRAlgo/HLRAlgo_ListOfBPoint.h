// File generated by CPPExt (MPV)
//
#ifndef _HLRAlgo_ListOfBPoint_OCWrappers_HeaderFile
#define _HLRAlgo_ListOfBPoint_OCWrappers_HeaderFile

// include native header
#include <HLRAlgo_ListOfBPoint.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCHLRAlgo_ListIteratorOfListOfBPoint;
ref class OCHLRAlgo_BiPoint;
ref class OCHLRAlgo_ListNodeOfListOfBPoint;



public ref class OCHLRAlgo_ListOfBPoint  {

protected:
  HLRAlgo_ListOfBPoint* nativeHandle;
  OCHLRAlgo_ListOfBPoint(OCDummy^) {};

public:
  property HLRAlgo_ListOfBPoint* Handle
  {
    HLRAlgo_ListOfBPoint* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCHLRAlgo_ListOfBPoint(HLRAlgo_ListOfBPoint* nativeHandle);

// Methods PUBLIC


OCHLRAlgo_ListOfBPoint();


 /*instead*/  void Assign(OCNaroWrappers::OCHLRAlgo_ListOfBPoint^ Other) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Prepend(OCNaroWrappers::OCHLRAlgo_BiPoint^ I) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCHLRAlgo_BiPoint^ I, OCNaroWrappers::OCHLRAlgo_ListIteratorOfListOfBPoint^ theIt) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCHLRAlgo_ListOfBPoint^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCHLRAlgo_BiPoint^ I) ;


 /*instead*/  void Append(OCNaroWrappers::OCHLRAlgo_BiPoint^ I, OCNaroWrappers::OCHLRAlgo_ListIteratorOfListOfBPoint^ theIt) ;


 /*instead*/  void Append(OCNaroWrappers::OCHLRAlgo_ListOfBPoint^ Other) ;


 /*instead*/  OCHLRAlgo_BiPoint^ First() ;


 /*instead*/  OCHLRAlgo_BiPoint^ Last() ;


 /*instead*/  void RemoveFirst() ;


 /*instead*/  void Remove(OCNaroWrappers::OCHLRAlgo_ListIteratorOfListOfBPoint^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCHLRAlgo_BiPoint^ I, OCNaroWrappers::OCHLRAlgo_ListIteratorOfListOfBPoint^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCHLRAlgo_ListOfBPoint^ Other, OCNaroWrappers::OCHLRAlgo_ListIteratorOfListOfBPoint^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCHLRAlgo_BiPoint^ I, OCNaroWrappers::OCHLRAlgo_ListIteratorOfListOfBPoint^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCHLRAlgo_ListOfBPoint^ Other, OCNaroWrappers::OCHLRAlgo_ListIteratorOfListOfBPoint^ It) ;

~OCHLRAlgo_ListOfBPoint()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif