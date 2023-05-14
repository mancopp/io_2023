class D {
    // ...
};

class B : public D {
    // ...
};

class C : public D {
    // ...
};

class A : virtual public B, virtual public C {
    // ...
};

int main()
{
    A a;

    return 0;
}
