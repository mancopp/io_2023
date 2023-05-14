#include <iostream>
using namespace std;

template <typename T>
class A {
    public:
        void pokaz_t() {
            cout << this->t << endl;
        };
        A(T t){
            this->t = t;
        }
        
    protected:
        T t;
};

int main(){
    A<int> a1(12);
    a1.pokaz_t();
    
    A<char> a2('A');
    a2.pokaz_t();
    
    A<double> a3(3.14);
    a3.pokaz_t();
}