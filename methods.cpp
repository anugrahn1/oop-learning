#include <iostream>

using namespace std;

class Rectangle
{
private:
    double length;
    double width;
    double area()
    {
        return length * width;
    }

public:
    void set_dimensions(double l, double w = 5)  //automatically sets w to 5 if a value isn't provided
    {
        length = l;
        width = w;
    }

    double perimeter();

    void print_area()
    {
        cout << "Area: " << area() << endl;
    }
    void print_perimeter()
    {
        cout << "Perimeter: " << perimeter() << endl;
    }

};

double Rectangle::perimeter() //shows that perimeter declaration is inside Rectangle class
{
    return 2* (length + width);
}



int main()
{
    Rectangle rectangle1;
    rectangle1.set_dimensions(10, 20);
   // cout << "Perimeter: " << rectangle1.perimeter() << endl;
    rectangle1.print_perimeter();
    rectangle1.print_area();

    Rectangle rectangle2;
    rectangle2.set_dimensions(5);
    rectangle2.print_perimeter();
    rectangle2.print_area();

}

