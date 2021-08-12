#include<iostream>

using namespace std;


class Student
{
    int roll;
    char grade;
    string name;
    public:
    void input()
    {
        cout<<"Enter Name:";
        getline (cin, name);
        cout<<"\nEnter Grade:";
        cin>>grade;
        cout<<"\nEnter Roll No.:";
        cin>>roll;
    }
    void display()
    {
        cout<<"Name: "<<name;
        cout<<"\nGrade: "<<grade;
        cout<<"\nRoll No.: "<<roll<<"\n";
    }
};

int main()
{
    int r,g;
    string name;
    Student S1;
    Student *ptr;
    ptr=&S1;
    ptr->input();
    ptr->display();
    return 0;
}

