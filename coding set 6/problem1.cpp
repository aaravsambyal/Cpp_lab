#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
};
class Student : public Person
{
public:
    string course;
     void input()
    {
        cout << "Enter name:" << '\n';
        cin >> name;
        cout << '\n';
        cout << "Enter age:" << '\n';
        cin >> age;
        cout << '\n';
        cout << "Enter course:" << '\n';
        cin >> course;
    }
    void display()
    {
        cout<<""<<name<<'\n';
        cout<<""<<age<<'\n';
        cout<<""<<course<<'\n';
    }
    
};

    
int main()
{
    Student s1;
    s1.input();
    s1.display();
}