
/*
How to use a pointer to the data member of a class?
1) If we want to assign the address of a data member to a pointer
that member need to be declared as public

2) create the pointer outside and after the class

3) The number of pointers should be equal to the data types of the
class data members.

4) Assign the address of data members to the respective pointers

5) Access the data members using either an object or a pointer of
class type
*/
#include<iostream>
using namespace std;

class PointerMember{
public:
int a;
int b;
float f;
bool flag;
};

//pointer to int type data members
//Now int_ptr can only access int type data member of class PointerMember
int PointerMember::*int_ptr;

int main(){
//pointer to float type data members of class PointerMember
float PointerMember::*float_ptr;

//assigning the address of the data member
int_ptr = &PointerMember::a;
float_ptr = &PointerMember::f;

//Create an object of class PointerMember
PointerMember obj;

//access the data member through pointer to that member
obj.*int_ptr = 90;
cout<<obj.*int_ptr;

//accessing b uisng pointer to
int_ptr = &PointerMember::b;
obj.*int_ptr = 100;
cout<<endl<<obj.b;

//accessing the floating point data member
float_ptr = &PointerMember::f;
obj.*float_ptr = 2.345f;
cout<<endl<<obj.f;

bool PointerMember::*bool_ptr = &PointerMember::flag;
obj.*bool_ptr = true;
cout<<endl<<obj.*bool_ptr;

//Accessing data members using the pointer of class type
PointerMember *ptr;
ptr = &obj;
ptr->*int_ptr = 110;
cout<<ptr->*int_ptr;
}
