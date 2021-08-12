#include<iostream>
using namespace;
class box{
	int length;
	int height;
	int breadth;
	static int count;
	public:
		int setValues(int l=0,int h=0,int b=0)     //set values of box parameters
	{   if(getobjectcount()<2){
		lenght=l;
	    height=h;
    	breadth=b;
    	count++;
    	return 1;
    }
    else{
    	
    	return 0;    //values are not set
	}
		static int getobjectcount(){    //check how many boxes created
			return count;
		}
	}
};
int box::count=0;
int main(){
	box b1,b2; //max 2 boxes
	b1.setValues(10,20,30);
	cout<<box::getobjectcount;   //to access static member function
	
	b2.setValues(1,3,67);
	cout<<box::getobjectcount;
}
