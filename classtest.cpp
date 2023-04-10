#include <iostream>

using namespace std;

class Animal
{
public:
    string species;
    int total = 0;
    Animal(string animal_species)
    {
        species = animal_species;
        total++; 
    }
    ~Animal()
    {
        total--;
    }
};

 //int Animal::total = 0; // static member variables need to be set to something outside the class unless its a const (const string planet = "Earth")

// so the reason to use a static member variable is that if you need to use that variable even if there are no objects of that class, you can
// for example if i wanted to output the total number of objects a class has, and it was 0, then how can i see that variables value without having an object
// thats why we need a static member variable



int main()
{
    Animal *lion = new Animal("lion");
    Animal *tiger = new Animal("tiger");

    cout << "Lion: " << lion -> species << endl;
    cout << "Tiger: " << tiger -> species << endl;
    cout << "Total: " << Animal::total << endl;

    Animal *bear = new Animal("Bear");
    cout << "Total: " << tiger -> total << endl;
    delete lion;
    cout << "Total: " << Animal::total << endl;
    delete tiger;
    delete bear;
    cout << "Total: " << Animal::total << endl;
    return 0;
}