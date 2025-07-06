#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	int a[30];
	int k=0;
	int n,i,j,t;
	for(i=10;i<=100;i++)
	{
		n=0;
		for(j=2;j<=i-1;j++)
		if(i%j==0)
		n++;
	if(n==0)
	{
		a[k]=i;
		k++;
	}
	}
	for (t=0;t<k;t++)
	cout<<a[t]<<"*****";
	getch();
}
