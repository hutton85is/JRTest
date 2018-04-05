#ifndef JRTEST_H
#define JRTEST_H

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
    };

    /**
        When testing is done the de-constructor is run to do a summary
    */
    ~JRTest()
    {
        std::cout << std::endl;
        std::cout << "* * * SUMMARY * * *" << std::endl;
        std::cout << test_failed << " Failed" << std::endl;
        std::cout << test_passed << " Passed" << std::endl;
        std::cout << test_counter << " Total Test's" << std::endl;
    };


    /**
        Test if variable T1 equals T2
    */
    template<class T1, class T2>
    void isequal(T1 a, T2 b)
    {
        test_counter++;

        if (a != b)
        {
            std::cout << "Test no. '" << test_counter << "' failed" << std::endl;
            test_failed++;
        }
        else
        {
            test_passed++;
        }
    };

    /**
        Test if variable T1 does not equal T2
    */
    template<class T1, class T2>
    void notequal(T1 a, T2 b)
    {
        test_counter++;

        if (a == b)
        {
            std::cout << "Test no. '" << test_counter << "' failed" << std::endl;
            test_failed++;
        }
        else
        {
            test_passed++;
        }
    };

    /**
        Test if statement is true
    */
    void istrue(bool a)
    {
        test_counter++;

        if (!a)
        {
            std::cout << "Test no. '" << test_counter << "' failed" << std::endl;
            test_failed++;
        }
        else
        {
            test_passed++;
        }
    };

    /**
        Test if statement is false
    */
    void isfalse(bool a)
    {
        test_counter++;

        if (a)
        {
            std::cout << "Test no. '" << test_counter << "' failed" << std::endl;
            test_failed++;
        }
        else
        {
            test_passed++;
        }
    };

private:

    unsigned int test_counter;
    unsigned int test_failed;
    unsigned int test_passed;
};

#endif // JRTEST_H
