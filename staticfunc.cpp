#include <iostream>

using namespace std;

class Square
{
private:
    int side_length;
    static int total_squares;

    static void incrementTotal() // private static member function, not usable outside of class
    {
        total_squares++;
    }
public:
    Square(int length)
    {
        side_length = length;
        incrementTotal();
    }

    int area()
    {
        cout << "Side length: " << this -> side_length << endl; //'this' is a pointer to the current object. 'this' cannot be used 
        // in a static member function since it is associated with a specific object
        return side_length * side_length;
    }
    
    static int getTotal()    // static member function, associated with the class
    {
        // something like side_length++ won't work because that isn't a static member variable
        return total_squares;
    }
    

};
int Square::total_squares = 0; 


int main()
{   
    Square square1(5);

    cout << "square1 area: " << square1.area() << endl;
    cout << "total squares: " << Square::getTotal() << endl;

    Square square2(10);
    cout << "square2 area: " << square2.area() << endl;
    cout << "total squares: " << square2.getTotal() << endl; // objects can access static member functions, but not best practice

    


    return 0;
}