#include<iostream>
using namespace std;
enum textstyle {bold=20,italics=15,underline=25
};
int main(){
	textstyle style1,style2,style3;
	
	int val1=0,val2=0,val3=0;
	cout<<"enter 1 for bold \n 2 for italics \n 3 for underline\n given input... ";
	cin>>val1>>val2>>val3;
	if(val1==1 && val2==0&& val3==0){
		style1=bold;
	}
	cout<<"total cost"<<style1;
}
