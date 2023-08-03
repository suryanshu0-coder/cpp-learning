// Write a C++ class named "Circle" with a member variable for the radius and member functions to calculate the area and circumference of the circle.

#include <iostream>
using namespace std;
#define pi 3.14
class Circle
{
private:
         float radius;

public:
         void setRadius(float r)
         {
                  radius = r;
         }
         int getRadius()
         {
                  return radius;
         }
         int calculateArea(float area)
         {
                  area = pi * radius * radius;
                  return area;
         }

         int calculateCircumference(float circumference)
         {
                  circumference = 2 * pi * radius;
                  return circumference;
         }
};
int main()
{
         Circle c;
         float radius, area, circumference, finalArea, finalCircumference;
         cout << "Enter radius: " << endl;
         cin >> radius;

         c.setRadius(radius);
         c.getRadius();
         finalArea = c.calculateArea(area);
         finalCircumference = c.calculateCircumference(circumference);

         cout << "The area of circle is: " << finalArea << endl;
         cout << "The circumference of circle is: " << finalCircumference << endl;
         return 0;
}
