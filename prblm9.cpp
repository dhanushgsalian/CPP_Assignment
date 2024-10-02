// P9. Create a class called Teacher that inherits from Person. Add a field called salary. Add a constructor that takes a name, age and salary. Add a method called print_info() that prints out the name, age and salary of the teacher

#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        // Print information
        void print_info() {
            cout << "Name: " << name << " Age: " << age << endl;
        }

    public:
        string name;
        int age;
};

class Teacher : public Person {
    public:
        Teacher(string name, int age, int salary) : Person(name, age) {
            this->salary = salary;
        }

        // Print information with salary
        void print_info() {
            cout << "Name: " << name << " Age: " << age << " Salary: " << salary << endl;
        }

    private:
        int salary;
};

int main() {
    // Create teacher objects
    Teacher teacher1("Dhanush", 22, 19000);
    Teacher teacher2("Mohan", 22, 19000);

    // Call print_info() for both
    teacher1.print_info();
    teacher2.print_info();

    return 0;
}
