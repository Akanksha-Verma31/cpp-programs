#include<iostream>
using namespace std;
enum colors {green,black,red,white,blue,yellow
};
int main()
{  
   colors bg_color,fore_color;
   int color_code;
   cout<<"enter a color";
   cin>>color_code;
   bg_color=(colors)color_code;
   if(bg_color==red){
   	fore_color=yellow;
   }
   cout<<"total"<<bg_color+fore_color;
}
