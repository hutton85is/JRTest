#ifndef JRTEST_H
#define JRTEST_H

#include <fstream>
#include <sstream>

class JRTest
{
public:

    /**
        Initialize all counter variables
    */
    JRTest()
    {
        test_counter = 0;
        test_failed = 0;
        test_passed = 0;
        file.open("JRTest_ErrorLog.txt");
    };

    /**
        When testing is done the de-constructor is run to do a summary
    */
    ~JRTest()
    {
        outs << std::endl;
        outs << "* * * SUMMARY * * *" << std::endl;
        outs << test_failed << " Failed" << std::endl;
        outs << test_passed << " Passed" << std::endl;
        outs << test_counter << " Total Test's" << std::endl;

        std::cout << outs.str();

        file << outs.str();
        file.close();
    };

    /**
        Test if input T1 equals T2
    */
    template<class T1, class T2>
    void isequal(T1 a, T2 b)
    {
        test_counter++;

        if (a != b)
        {
            outs << "Test no. '" << test_counter << "' failed" << std::endl;
            test_failed++;
        }
        else
        {
            test_passed++;
        }
    };

    /**
        Test if input T1 does not equal T2
    */
    template<class T1, class T2>
    void notequal(T1 a, T2 b)
    {
        test_counter++;

        if (a == b)
        {
            outs << "Test no. '" << test_counter << "' failed" << std::endl;
            test_failed++;
        }
        else
        {
            test_passed++;
        }
    };

    /**
        Test if input is true
    */
    void istrue(bool a)
    {
        test_counter++;

        if (!a)
        {
            outs << "Test no. '" << test_counter << "' failed" << std::endl;
            test_failed++;
        }
        else
        {
            test_passed++;
        }
    };

    /**
        Test if input is false
    */
    void isfalse(bool a)
    {
        test_counter++;

        if (a)
        {
            outs << "Test no. '" << test_counter << "' failed" << std::endl;
            test_failed++;
        }
        else
        {
            test_passed++;
        }
    };

    /**
        Test if first input is less than second input
    */
    template<class T1, class T2>
    void isless(T1 a, T2 b)
    {
        test_counter++;

        if (b <= a)
        {
            outs << "Test no. '" << test_counter << "' failed" << std::endl;
            test_failed++;
        }
        else
        {
            test_passed++;
        }
    };

    /**
        Test if first input is greater than second input
    */
    template<class T1, class T2>
    void isgreater(T1 a, T2 b)
    {
        test_counter++;

        if (a <= b)
        {
            outs << "Test no. '" << test_counter << "' failed" << std::endl;
            test_failed++;
        }
        else
        {
            test_passed++;
        }
    };

    /**
        Test if input array a is equal to input array b

        *Note* There will be an ERROR if index is out of bounds
    */
    template<class T1, class T2>
    void isarrayequal(T1 a, T2 b, unsigned int beg = 0, unsigned int en = 1)
    {
        test_counter++;

        bool passed = true;

        for (unsigned int i = beg; i <= en; i++)
        {
            std::cout << i << std::endl;
            if (a[i] != b[i])
            {
                passed = false;
                break;
            }
        }

        if (passed)
        {
            test_passed++;
        }
        else
        {
            outs << "Test no. '" << test_counter << "' failed" << std::endl;
            test_failed++;
        }
    };

private:

    /**
        Store number of Total test's
    */
    unsigned int test_counter;
    /**
        Store number of Failed test's
    */
    unsigned int test_failed;
    /**
        Store number of Passed test's
    */
    unsigned int test_passed;

    /**
        'file' is the error log file
    */
    std::ofstream file;
    /**
        'outs' is the stringstream keeping the test result
    */
    std::stringstream outs;
};

#endif // JRTEST_H
