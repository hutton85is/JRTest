#include <iostream>
#include "JRTest.h"

using namespace std;

int main()
{
    JRTest test;
    int a = 1;
    int b = 2;
    test.equals(a,b);
    test.equals(1,4);
    test.equals(2,2);
    test.equals("russell","russell");
    test.equals("russell","russ");
    test.equals('s','a');
    test.equals("a","a");
    test.equals('a','a');
    return 0;
}
