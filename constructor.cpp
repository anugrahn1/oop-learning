#include <iostream>
#include <string>

using namespace std;

// constructors are called when an object is called

class Cat
{
private:
	string name;
	string color;
	string favorite_toy;
public:
	void print_cat()
	{
		cout << "Name: " << name << endl;
		cout << "Color: " << color << endl;
		cout << "Favorite Toy: " << favorite_toy << endl;
	}

	Cat() // the constructor has to be the name of the class of the object
	{
		name = "Unknown";
		color = "Unknown";
		favorite_toy = "Unknown";
	}

	Cat(string n) // there can't be ambiguity between multiple constructors
	{
		name = n;
		color = "Unknown";
		favorite_toy = "Unknown";
	}
	
	Cat(string n, string c, string ft = "Laser Pointer"); //laser pointer is the default value if no value is given

};

Cat::Cat(string n, string c, string ft) 
//this can be defined outside the class if the declaration is inside, also the default value is in the declaration so not needed here
	{
		name = n;
		color = c;
		favorite_toy = ft;
	}


int main()
{
	
	Cat cat1; // constructor is called automatically when cat1 is created

	cout << "Cat 1... " << endl;
	cat1.print_cat();
	cout << endl;

	Cat cat2("Bob"); // since this one takes an argument the computer knows not to use the first constructor, but the second one

	cout << "Cat 2... " << endl;
	cat2.print_cat();
	cout << endl;

	Cat cat3("Jeff", "Orange"); 

	cout << "Cat 3... " << endl;
	cat3.print_cat();
	cout << endl;

	

}