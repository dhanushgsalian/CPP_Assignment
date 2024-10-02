// P3. Make the attributes private and see if you can still access them from outside the class.

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
    // Create two person objects
    Person person1("Mahesh", 30);
    Person person2("Praveen", 10);

    // Call print_info() on both
    person1.print_info();
    person2.print_info();

    return 0;
}
