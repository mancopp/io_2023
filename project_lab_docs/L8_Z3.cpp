class A {
    public:
        int mi_publicLiczba;
        int pokazLiczbe();
        void przypiszWartosc(int a, int b, int c) {
            this->mi_publicLiczba = a;
            this->mi_protLiczba = b;
            this->mi_privLiczba = c;
        };
        A(){
            this->przypiszWartosc(0, 1, 2);
        }
        
    protected:
        int mi_protLiczba;
    private:
        int mi_privLiczba;
};

int A:: pokazLiczbe() {
    cout << this->mi_publicLiczba << endl; 
    cout << this->mi_protLiczba << endl; 
    cout << this->mi_privLiczba << endl; 
    return 0; 
}

int main(){
    A a;
    a.pokazLiczbe();
    a.przypiszWartosc(3,4,5);
    a.pokazLiczbe();
}