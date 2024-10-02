// P8. Create an instance of Student and call print_info() on it.

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

class Student : public Person {
    public:
        Student(string name, int age, string department) : Person(name, age) {
            this->department = department;
        }

        // Print information with department
        void print_info() {
            cout << "Name: " << name << " Age: " << age << " Department: " << department << endl;
        }

    private:
        string department;
};

int main() {
    // Create student objects with names, ages, and departments
    Student student1("Dhanush", 30, "EEE");
    Student student2("Mohan", 10, "ECE");

    // Call print_info() for both
    student1.print_info();
    student2.print_info();

    return 0;
}
