#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
float hagm(float r,float h)
{
	float a;
	a=3.14*r*r*h;
	return a;
}
main()
{
	int r;
	cout<<"enter r  :";
	cin>>r;
	int h;
	cout<<"enter h :";
	cin>>h;
	cout<<hagm(r,h);
  
  getch();	
}
