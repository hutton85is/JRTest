# JRTest
Test Class that is able to do unit tests in C++. 

The program will display fails by their relative test number

The program summarizes test fails, successes and total number of test's to be 
displayed in console and written to a text file 'JRTest_ErrorLog.txt'

To run test class simply copy the 'JRTest.h' class file to a known path and include in your program

Functions working now are:

  -void isequal(T1 a, T2 b)
    
    compares variable 'a' and 'b'
    
  -void notequal(T1 a, T2 b)
    
    compares if variable 'a' and 'b' are not equal
    
  -void istrue(bool a)
    
    verifies if boolean variable 'a' is true
    
  -void isfalse(bool a)
    
    verifies if boolean variable 'a' is false

  -void isless(T1 a, T2 b)
    
    verifies if template variable 'a' is less than template variable 'b'

  -void isgreater(T1 a, T2 b)
    
    verifies if template variable 'a' is greater than template variable 'b'