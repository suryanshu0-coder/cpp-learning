#include <iostream>
#include <cmath>
using namespace std;

class Polar {
private:
    double radius;
    double angle;

public:
    Polar(double r = 0, double a = 0) : radius(r), angle(a) {}

    void display() {
        cout << "Radius: " << radius << ", Angle: " << angle << " degrees" << endl;
    }
};

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l = 0, double w = 0) : length(l), width(w) {}

    // Conversion operator to convert Rectangle to Polar
    operator Polar() {
        double r = sqrt(length * length + width * width);
        double a = atan2(width, length) * 180 / M_PI;
        return Polar(r, a);
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rectangle(4, 3);
    Polar polar;

    cout << "Rectangle: ";
    rectangle.display();

    // Convert Rectangle to Polar using the casting operator
    polar = static_cast<Polar>(rectangle);

    cout << "Polar: ";
    polar.display();

    return 0;
}
