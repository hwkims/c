// 10_3_exception.cpp

#include <iostream>

using namespace std;

int divide (int a , int b ){

    if (b==0)

    throw "divide by zero exception";

    if (b==-1)
    throw "b must not have -1";

    return a/b;
}

int main()
{

    int a = 7, b = 1;

    // cout << a/b<<endl;

    cout << "start" << endl;

    try
    {

        throw -1;
    }

    catch (int e)
    {

        cout << "int exception occurred " << endl;
    }

    catch (const char *s)
    {

        cout << "char* exception occurred" << endl;
    }

    catch (...)
    {

        cout << "any exception occurred" << endl;
    }

    cout << "finish" << endl;
    return 0;
}