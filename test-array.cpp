#include <iostream>
#include "array.h"
#include <assert.h>


int
main(int argc, char **argv)
{
    // tests

    // Object array
    printf("tests for Object Array\n");

    Array* aa = new Array();
    if(aa)
    {
        puts("Object array constructor: OK");
    }
    else
    {
        abort();
    }
    

    assert(aa->length() == 0);
    Object* foo = new Object();
    aa->append(foo);
    assert(aa->length() == 1);
    assert(aa->get(0)->equals(foo));
    
    Object* bar = new Object();
    Object* oo = aa->set(0, bar);

    // tests for set
    assert(foo->equals(oo));
    assert(bar->equals(aa->get(0)));

    // tests for remove
    Object* nn = aa->remove(0);
    assert(nn->equals(bar));
    assert(aa->length() == 0);
    delete(foo);
    delete(bar);

    // tests for index_of
    foo = new Object;
    bar = new Object;
    aa->append(foo);
    aa->append(bar);
    assert(aa->index_of(bar) == 1);

    // tests for destructor
    delete(aa);
    if(aa)
    {
        abort();
    }
    else{
        puts("Object array destructor: OK");
    }

    printf("tests for Object Array passed\n");

    // tests for IntArray

    // tests for append
    IntArray *ia = new IntArray();
    if(ia)
    {
        puts("Intger array constructor: OK");
    }
    else
    {
        abort();
    }

    // tests for append and get
    assert(ia->length() == 0);
    ia->append(0);
    assert(ia->length() == 1);
    ia->append(1);
    assert(ia->length() == 2);

    
    assert(ia->get(0) == 0);
    assert(ia->get(1) == 1);

    //tests for set

    int ii = ia->set(0, 100);
    assert(ii == 0);
    assert(ia->get(0) == 100);

    // indexof
    assert(ia->index_of(100) == 0);
    assert(ia->index_of(1) == 1);

    // tests for remove
    ii = ia->remove(0);
    assert(ii = 100);
    assert(ia->length() == 1);
    ii = ia->remove(0);
    assert(ii = 1);
    assert(ia->length() == 0);

    // delete
    delete(ia);
    if(ia)
    {
        abort();
    }
    else
    {
        puts("intArray destructor: OK");
    }

    printf("tests for Integer Array passed\n");
    
    // FloatArray
    
    FloatArray* fa = new FloatArray();
    if(fa)
    {
        puts("float array constructor: OK");
    }
    
    assert(fa->length() == 0);
    fa->append(1.0);
    assert(fa->length == 1);

    puts("all tests passed");
    return 0;
}