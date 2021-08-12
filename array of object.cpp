/*
Pointer to class array of objects
*/

#include<iostream>
#include<cstdio>
using namespace std;

class Box{
int height;
int width;
public:
void setH(int h){
height = h;
}
int getH()const{
return this->height;
}
void setW(int w){
width = w;
}
int getW()const{
return this->width;
}
};

int main(){
//Create 3 boxes as array of class Box
//array of object
Box box[3];
Box *ptr = box;

for(int i=0;i<3;i++){
/*
base address + 0 = 1000 + 0 = 1000, address of obj[0]
1000 + 1 = 1000 + (sizeof(obj)*1) = 1008, address of obj[1]
1000 + 2 = 1000 + (sizeof(obj)*2) = 1016, address of obj[2]

sizeof(obj) = sizeof(width) + sizeof(height) = 4 + 4 = 8

*/
(ptr+i)->setH(20+i);
(ptr+i)->setW(30+i);
}

//print the values of the boxes
for(int i=0;i<3;i++){
cout<<(ptr+i)->getW()<<" "<<(ptr+i)->getH()<<endl;
}
}
