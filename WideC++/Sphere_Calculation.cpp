#include <iostream>

using namespace std;

const double PI = 3.14159;

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double getRadius() const {
        return radius;
    }

    double getPerimeter() const {
        return 2 * PI * radius;
    }

    double getArea() const {
        return PI * radius * radius;
    }

    void print() const {
        cout << "Radius: " << radius << endl;
    }
};

class Sphere : public Circle {
public:
    Sphere(double r) : Circle(r) {}

    double getSurface() const {
        return 2 * getRadius() * getPerimeter();
    }

    double getVolume() const {
        return (4.0 / 3.0) * getRadius() * getArea();
    }
};

int main()
{
    Circle cir(6.0);
    cout << "Circle: " << endl;
    cir.print();
    cout << "Perimeter: ";
    cout << cir.getPerimeter() << endl;
    cout << "Area: ";
    cout << cir.getArea() << endl << endl;
    
    Sphere sph(6.0);
    cout << "Sphere: " << endl;
    sph.print();
    cout << "Surface: ";
    cout << sph.getSurface() << endl;
    cout << "Volume: ";
    cout << sph.getVolume() << endl << endl;
    system("pause");
    return 0;
}
