#ifndef JRTEST_H
#define JRTEST_H

#include <iostream>

using namespace std;

class JRTest
{
    public:
        JRTest()
        {
            test_counter = 0;
            test_failed = 0;
            test_passed = 0;
        };

        ~JRTest()
        {
            cout << endl;
            cout << "* * * SUMMARY * * *" << endl;
            cout << test_failed << " Failed" << endl;
            cout << test_passed << " Passed" << endl;
            cout << test_counter << " Total Test's" << endl;
        };

        template<class T1, class T2>
        void equals(T1 a, T2 b)
        {
            test_counter++;

            if (a != b)
            {
                cout << "Test no. '" << test_counter << "' failed" << endl;
                test_failed++;
            }
            else
            {
                test_passed++;
            }
        };

    private:
        int test_counter;
        int test_failed;
        int test_passed;
};

#endif // JRTEST_H
