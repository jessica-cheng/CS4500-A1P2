#pragma once

#include <cstdlib>
#include "object.h"
#include "string.h"

// assuming an array is a java-style arraylist
// note: array doesn't own the object.
// meaning: deleting this array doesn't automatically delete objects in it.
// tests will fail if otherwise.
class Array : public Object {
   public:

    // constructor
    Array() {}

    // destructor
    ~Array() {}

    // putting an item at the end of the array
    virtual void append(Object* oo) {}

    // get the n'th item in the array
    Object* get(int nn) {}

    // remove the n'th item in the array
    // returning the removed item to the caller
    Object* remove(int nn) {}


    // returns the length of the array.
    virtual int length() {}

    // set n'th element to the given object
    // returns the replace Object.
    virtual Object* set(int nn, Object* oo) {}

    // get the index of an object in the array
    virtual int index_of(Object* oo) {}

    // Compares other with this array for equality.
    bool equals(Object* oo) {}

    size_t hash() {}
};



class IntArray : public Array {
 public:


  // constructor
  IntArray() {}

  // destructor
  ~IntArray() {}

  // putting an item at the end of the array
  void append(int oo) {}

  // get the n'th item in the array
  int get(int nn) {}


  // remove the n'th item in the array
  // returning the removed item to the caller
  int remove(int nn) {}

  // set n'th element to the given element
  // returns the replace Object.
  int set(int nn, int oo) {}

  int index_of(Object* oo) {}

  // get the index of an element in the array
  int index_of(int oo) {}

  // Compares other with this array for equality.
  bool equals(Object* oo) {}

  size_t hash() {}
};

class FloatArray : public Array {
 public:

  // constructor
  FloatArray() {}

  // destructor
  ~FloatArray() {}

  // putting an item at the end of the array
  void append(float oo) {}

  // get the n'th item in the array
  float get(int nn) {}

  // remove the n'th item in the array
  // returning the removed item to the caller
  float remove(int nn) {}

  // set n'th element to the given element
  // returns the replace Object.
  float set(int nn, float oo) {}

  // get the index of an float in the array
  int index_of(float oo) {}

  // Compares other with this array for equality.
  bool equals(Object* oo) {}

  size_t hash() {}
};

class BoolArray : public Array {
 public:
  // constructor
  BoolArray() {}

  // destructor
  ~BoolArray() {}

  // putting an item at the end of the array
  void append(bool oo);

  // get the n'th item in the array
  bool get(int nn);

  // remove the n'th item in the array
  // returning the removed item to the caller
  bool remove(int nn);

  // set n'th element to the given element
  // returns the replace Object.
  bool set(int nn, bool oo);

  // get the index of an element in the array
  int index_of(bool oo);

  // Compares other with this array for equality.
  bool equals(Object* oo);

  size_t hash();
};

class StringArray : public Array {
 public:

  // constructor
  StringArray() {}

  // destructor
  ~StringArray() {}

  // putting an item at the end of the array
  void append(String* oo);

  String* get(int nn);

  int index_of(String* ss);

  // remove the n'th item in the array
  // returning the removed item to the caller
  String* remove(int nn);

  String* set(int nn, String* oo);

  // set n'th element to the given object
  // returns the replace Object.
  String* set(int nn, String* oo);
};
