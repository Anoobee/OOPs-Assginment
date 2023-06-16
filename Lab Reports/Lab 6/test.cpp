#include<iostream>

class complex;

class FriendClass {
public:
    complex Sub(const complex& c1);
};

class complex {
protected:
    int real, img;

public:
    complex() {
        std::cout << "Enter the complex number:" << std::endl;
        std::cout << "Real part: ";
        std::cin >> real;
        std::cout << "Imaginary part: ";
        std::cin >> img;
    }

    void Display() {
        std::cout << real << " + " << img << "i" << std::endl;
    }

    friend class FriendClass;
    friend complex Derived::Add(const complex& c);
};

class Derived : public complex {
public:
    complex Add(const complex& c1) {
        complex temp;
        temp.real = real + c1.real;
        temp.img = img + c1.img;
        return temp;
    }
};

complex FriendClass::Sub(const complex& c1) {
    complex temp;
    temp.real = real - c1.real;
    temp.img = img - c1.img;
    return temp;
}

int main() {
    complex c1;
    Derived d1;

    complex result = d1.Add(c1);
    std::cout << "After addition: ";
    result.Display();

    FriendClass f;
    result = f.Sub(c1);
    std::cout << "After subtraction: ";
    result.Display();

    return 0;
}
