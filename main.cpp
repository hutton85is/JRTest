#include <iostream>
#include <string>
#include "JRTest.h"

using namespace std;

int main()
{
    JRTest test;

    /**
        Test 'isequal' function
    */
    // test 1
    test.isequal(1,4);
    // test 2
    test.isequal(2,2);
    // test 3
    test.isequal("russell","russell");
    // test 4
    test.isequal("russell","russ");
    // test 5
    test.isequal('s','a');
    // test 6
    test.isequal("a","a");
    // test 7
    test.isequal('a','a');

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
    string cmp1 ("mama");
    string cmp2 ("papa");

    // test 14
    test.istrue(1);
    // test 15
    test.istrue(0);
    // test 16
    test.istrue('a' == 'a');
    //test 17
    test.istrue(cmp1.compare(cmp2));

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
    test.isfalse(cmp1.compare(cmp2));

    /**
        Test 'isless' function
    */
    // test 22
    test.isless(1, 2);
    // test 23
    test.isless(2, 2);
    // test 24
    test.isless(-5, 2);
    // test 25
    test.isless(100, 2);


    /**
        Test 'isgreater' function
    */
    // test 26
    test.isgreater(1, 2.5);
    // test 27
    test.isgreater(2, 1.8);
    // test 28
    test.isgreater(-5, 2);
    // test 29
    test.isgreater(100, 2);
    // test 30
    test.isgreater(-50, -70);

    /**
        Test 'isarrayequal' function
    */
    int a[6] = {1,2,3,4,5,6};
    int b[6] = {1,2,3,4,5,6};
    string c[6] = {"ab", "tre", "fis", "kall"};
    string d[6] = {"ab", "tre", "fis", "kall"};

    // test 31
    test.isarrayequal(a, b, 0, 5);
    a[1] = -2;
    // test 32
    test.isarrayequal(a, b, 0, 4);
    // test 33
    test.isarrayequal(c, d, 0, 4);
    d[0] = "russell";
    // test 34
    test.isarrayequal(c, d, 0, 4);

    return 0;
}
