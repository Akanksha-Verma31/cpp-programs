#include<iostream>
using namespace std;
class myclass{
	public:
		int i,j,k;
		
};
	int main(){
		myclass a,b;
		a.i=100;
		a.j=4;
		a.k=a.i*a.j;
		b.k=12;
		cout<<a.k<<" "<<b.k;
		//defining enum gender
		enum gender{ male,female
		};
		gender g=male;
		switch(g)
		{
			case male:
				cout<<"male";
				break;
			case female:
			    cout<<"female";
				break;
					
		}
	}


