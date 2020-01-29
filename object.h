// --------------------------------README--------------------------------------------------

// the following is written by Jan Vltek
// can be found on https://piazza.com/class/k51bluky59n2jr?cid=166

// ----------------------------------------------------------------------------------------

#pragma once                                                                     
//lang::CwC                                                                                                                                                       
#include "helper.h"                                                                                                                                               
/**                                                                              
 * A class that represents the top of the object hierarchy.                      
 * author: vitekj@me.com */                                                      
class Object : public Sys {                                                      
 public:                                       
                                                                                 
  /** Default constructor ensure that hash is initialized */                     
  Object();                                             
                                                                                 
  /** Default constructor is virtual to support subclasses */                    
  virtual ~Object();                                                           
                                                                                 
  /** Returns the object's hash value. Two objects that are equal should         
   * have the same hash; object's that are not, may have the same hash.          
   * Subclasses should implement hash_me_(). */                                  
  size_t hash();               
                                                                                 
  /** Trivial hash function. */                                                  
  virtual size_t hash_me_();                                       
                                                                                 
  /** Use the address of the other object to determine equality. */              
  virtual bool equals(Object* other);
                                               
  /** Return a newly allocated string describin the object */                    
  virtual char* to_string();
                                                        
  /** Print to stdout. */                                                        
  virtual void print();                                                                                                                 
};   