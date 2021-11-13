//Runge Kutta 1st Order ODE
#include <iostream>
#include<fstream>
#include<cmath>
using namespace std ;

// The differential equaion is Dy =f(x) 

float f(float x , float y)
{
	float w ;
	w = x*exp(-x) ;
	return w ;
 }	

float euler(int n , float h )
{
	ofstream myfile ;
	myfile.open("Data.txt") ;
	
	//Initial Conditions
	int x0=0 ;
	int y0=0 ;
	
	float x ;
	float y=y0 ;
	for (int i=1; i <=n ; ++i)
	{
			x=x0+h*i ;
			float b1 = h*f(x,y) ;
			float b2 = h*f(x+0.5*h,y+0.5*b1) ;
			float b3 = h*f(x+h,y+2*b2-b1) ;
			y=y+(b1+4*b2+b3)/6 ;
			myfile << x << "\t" << y << "\n" ;
	}
	myfile.close() ;
	return 0 ;
}

int main()
{
	int n ;
	n=10000 ;
	float h=0.001;
	float q ;
	q=euler(n,h) ;
	 cout << "Done !" ;
	return 0 ;
}