#include <iostream>

using namespace std;

class Animal
{
public:
    string species;
    static int total;
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

 int Animal::total = 0; // static member variables need to be set to something outside the class unless its a const (const string planet = "Earth")





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