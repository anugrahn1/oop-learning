#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    string name;

    void print(){
        cout << name << endl;
    }
    void set_salary(double potential_salary)
    {
        if (potential_salary < 0) salary = 0; //guarding access to salary
        else salary = potential_salary;
    }
    double get_salary()
    {
        return salary;
    }
    void print_bonus()
    {
        cout << name << " bonus: " << calculate_bonus() << endl; 
    }
private:
    double salary; // private members / attributes can be accessed by things in the same class

    double calculate_bonus()  //information hiding, hides how the function works
    {
        return salary * 0.10;
    }
    
};
int main()
{
    Employee employee1;
    employee1.name = "Kevin";
    employee1.print();
    
    employee1.set_salary(50000);
    cout << "salary: " << employee1.get_salary() << endl;
    employee1.print_bonus();

    return 0;
}