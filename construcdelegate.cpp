#include <iostream>
using namespace std;

class Square
{
public:
    int side_length;
    string color;

    void print()
    {
        cout << "Side length: " << side_length;
        cout << ", color: " << color << endl;
    }
};


int main()
{
    Square squares[3];
    
    for (int i = 0; i < 3; i++)
    {
        cout << "Length: " << squares[i].side_length << endl;
        cout << "Color: " << squares[i].color << endl;
    }

    return 0;
}