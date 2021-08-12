
#include<iostream>
using namespace std;

int check = 0;

class Box{
int length;
int height;
int breadth;
static int count;

public:
int setValues(int l=0, int h=0, int b=0){
if(getObjectCount()<2){
length = l;
height = h;
breadth = b;
count++;
if(count==2)
check=1;
return 1;
}
else{
if(check==1){
check = 0;
return 0;
}
else{
length = l;
height = h;
breadth = b;
}

return 0;
}

}
static int getObjectCount(){
return count;
}
int getLength(){
return length;
}
};
int Box::count = 0;

int main(){
Box b1, b2;

b1.setValues(10,20,50);
cout<<Box::getObjectCount();

b2.setValues(50,6,89);
cout<<endl<<Box::getObjectCount();

Box b3;
int i = b3.setValues(7,8,9);
if(i==0){
cout<<"Checking the values of length after fail::\n";
cout<<b3.getLength()<<endl<<endl;
cout<<endl<<"Object creationg failed....set the default values";
b3.setValues();
cout<<b3.getLength()<<endl<<endl;
}
}
