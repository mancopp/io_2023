#include <iostream>
using namespace std;


// Aggregation

class A 
{
    public:
    
    void fA(){
        cout << "fA" << endl;
    };
};

class B 
{
    public:
    
    B(A a)
    {
        this->pa = a;
    }
    
    void fB()
    { 
        cout << "fB" << endl;
        this->pa.fA();
    }
    
    private:
    
    A pa;
};

// Composition

class Punkt 
{
    public:
    
    Punkt(int v) : znaczenie(v) { }
    
    int GetPunkt()
    {
        return this->znaczenie;
    }
    
    private:
    
    int znaczenie;
};

class Kolo 
{
    public:
    
        Kolo() { }
        
        void WstawSrodek(Punkt *p)
        {
            this->srodekKola = p;
        }
        
        void PrintSrodek()
        {
            cout << this->srodekKola->GetPunkt() << endl;
        }
    
    private:
    
    double dPromienKola;
    Punkt *srodekKola;
};


int main()
{
    // Aggregation
    
    A a = A();
    B b = B(a);
    b.fB();
    
    // Composition
    
    Kolo k = Kolo();
    k.WstawSrodek(new Punkt(2));
    k.PrintSrodek();

    return 0;
}