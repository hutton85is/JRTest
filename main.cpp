#include <iostream>
#include "JRTest.h"

using namespace std;

int main()
{
    JRTest test;

    /**
        Test 'equals' function
    */
    // test 1
    test.equals(1,4);
    // test 2
    test.equals(2,2);
    // test 3
    test.equals("russell","russell");
    // test 4
    test.equals("russell","russ");
    // test 5
    test.equals('s','a');
    // test 6
    test.equals("a","a");
    // test 7
    test.equals('a','a');

    /**
        Test 'notequals' function
    */
    // test 8
    test.notequal('a', 'a');
    // test 9
    test.notequal('b','a');
    // test 10
    test.notequal(1,1);
    // test 11
    test.notequal(1,-733);
    // test 12
    test.notequal("Hutton", "hutton");
    // test 13
    test.notequal("JRHutton", "JRHutton");

    /**
        Test 'istrue' function
    */
    // test 14
    test.istrue(1);
    // test 15
    test.istrue(0);
    // test 16
    test.istrue('a' == 'a');
    //test 17
    test.istrue("mama" == "papa");

    /**
        Test 'isfalse' function
    */
    // test 18
    test.isfalse(1);
    // test 19
    test.isfalse(0);
    // test 20
    test.isfalse('a' == 'a');
    //test 21
    test.isfalse("mama" == "papa");

    return 0;
}
