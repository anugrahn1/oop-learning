#include <iostream>
#include <string>

using namespace std;

class Number
{
private:
    double *number;

public:

    Number(double num) //constructor
    {
        number = (double *) malloc(sizeof(double)); //storing a double
        *number = num;
        cout << "Constructor executing!" << endl;
        cout << "Number: " << *number << endl;
        cout << endl << endl;
        
    }

    ~Number() //destructor because of the ~ (Fn + Shift + Esc)
    {
        cout << "Destructor executing!" << endl;
        cout << "Number: " << *number << endl << endl; // endl is a new line
        free(number); //the destructor can free 
    }

};

void test()
{
    Number six(6); //creates object and when function is finished, the deconstructor runs
}

int main()
{
    Number *five = new Number(5); // *five stores a mem address of a Number class and when you use new Number, it is like malloc(sizeof(Number)) 
    // the 5 just means that it will automatically go to that mem address in *five and set the value to 5
    // so if we have something like int *ptr = new int(5); it ptr will store a mem address that can hold a pointer, ex: 0x123. Then when you go
    // to 0x123, the value will already be 5. You don't need to do any dereferencing seperately
    //in this case the constructor will be called at new, and 5 will be used as the argument for the constructor
    delete five; //destructor is called here
    
    test();
    Number seven(7);
    


    
    return 0;
}