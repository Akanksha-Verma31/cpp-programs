//#include<cmath>
#include<iostream>
/* Re throw exception from a function */
using namespace std;
double Xhandler(){
	try{
		throw "hello";
	}catch(const char*){
		cout<<"cought char* out of function\n";
		throw ;
	}
}

int main()
{
	cout<<"start::\n";
	try{
		Xhandler();
	}//catch(const char *){
	//	cout<<"caught char * inside main\n";
	//}
	//cout<<"end";
	
}

/* Rethrow exception inside main */
/* int main(){
	int a=1,b=5;
	
	try{
		try{
		if(a<b) throw "a is less than b";
		else cout<<(double) a/b;
	}catch(const char *e){
		cout<<"i cannot handle it...\n";
		throw e;
	}catch(cont char *e){
		cout<<"i am ready to handle...";
		cout<<"the inputt is wrong, because "<<e;
	}
}   */
