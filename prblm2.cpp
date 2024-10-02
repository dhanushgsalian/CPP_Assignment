// P2. Create two instances of Person and call print_info() on them.

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

        // Print information
        void print_info() {
            cout << "Name: " << name << " Age: " << age << endl;
        }

    private:
        string name;
        int age;
};

int main() {
    // Create two person objects with name and age
    Person person1("Dhanush", 30);
    Person person2("Mohan", 10);

    // Call print_info() on both
    person1.print_info();
    person2.print_info();

    return 0;
}
