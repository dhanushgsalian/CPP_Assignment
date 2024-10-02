// P1. Define a Person class like we did in the previous module. Only add name and age.


#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        // Constructor that accepts both name and age
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        // Getter for the name
        string getName() {
            return name;
        }

        // Getter for the age
        int getAge() {
            return age;
        }

        // Print information
        void print_info() {
            cout << "I am " << name << " and I am " << age << " years old." << endl;
        }

    private:
        string name;
        int age;
};

int main() {
    // Create a person object with name and age
    Person person1("Dhanush", 22);

    // Print info
    person1.print_info();

    return 0;
}
