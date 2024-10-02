// P10. Create an instance of Teacher and call print_info() on it.

#include <string>
#include <iostream>

using namespace std;

class Person {
    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

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

        void print_info() {
            cout << "Name: " << name << " Age: " << age << " Salary: " << salary << endl;
        }

    private:
        int salary;
};

int main() {
    Teacher teacher1("Dhanush", 22, 19000);
    Teacher teacher2("Mohan", 22, 19000);

    teacher1.print_info();
    teacher2.print_info();

    return 0;
}
