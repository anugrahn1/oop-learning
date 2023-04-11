#include <iostream>
using namespace std;

class Square
{
public:
    int side_length; //stored with garbage values if there isn't a constructor
    string color;

    void print()
    {
        cout << "Side length: " << side_length;
        cout << ", color: " << color << endl;
    }

    Square()
    {
        side_length = 0;
        color = "black";
    }
    
   Square(int set_length, string set_color)
   {
    color = set_color;
    side_length = set_length;
   }

   Square(int set_length)
   {
    side_length = set_length;
    color = "black";
   }
};


int main()
{
    Square squares[3] = {Square(8, "red"), Square(4, "orange"), Square(2, "green")}; 
    Square squares1[3] = {2, 4, 8}; // C++ is smart enough to put in one argument with this syntax
    Square squares2[3] = {2}; // if there aren't enough arguments, the default constructor will automatically be called
    Square squares3[3] = {2, Square(5, "red")}; // you can use different number of arguments provided you have the constructors
    //so objects in an array can all use different constructors by using different number of arguments
    //default constructor is called if no arguments are provided
    //if there is a constructor that we defined but no default constructor, then there will be an error
    
    for (int i = 0; i < 3; i++)
    {
      //  squares[i].print();
        squares1[i].print();
    }

    return 0;
}