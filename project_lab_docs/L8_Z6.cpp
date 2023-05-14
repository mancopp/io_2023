/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class B {
    public:
        void funkcjaB(){
            cout << "funkcjaB" << endl;
        };
};

class A : public B {
    public:
        void funkcjaA(){
            cout << "funkcjaA" << endl;
        };
};

int main()
{
    A a;
    a.funkcjaA();
    a.funkcjaB();

    return 0;
}
