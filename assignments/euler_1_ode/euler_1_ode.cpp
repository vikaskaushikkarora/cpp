//Euler Method 1st Order ODE
#include <iostream>
#include<fstream>
#include<cmath>
using namespace std ;

// The differential equaion is Dy =f(x,y) 

float f(float x , float y)
{
	float w ;
	w = x ;
	return w ;
 }	

float euler(int n , float h )
{
	ofstream myfile ;
	myfile.open("Data.txt") ;
	int i ;
	//Initial Conditions
	int x0=0 ;
	int y0=0 ;
	float x ;
	float y=y0 ;
	for (i=1; i <=n ; ++i)
	{
			x=x0+h*i ;
			y=y+h*f(x,y);
			myfile << x << "\t" << y << "\n" ;
	}
	myfile.close() ;
	return 0 ;
}

int main()
{
	int n ;
	n=1000 ;
	float h=0.01;
	float q ;
	q=euler(n,h) ;
	 cout << "Done !" ;
	return 0 ;
}
