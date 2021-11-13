//Euler Method 1st Order ODE

#include <iostream>
#include<fstream>
#include<cmath>
using namespace std ;

// The differential equaion is DDy =f(x,y,Dy) 

float f(float x , float y, float z)
{
	// x = independent variable , y = dependent variable , z = derivative of y 
	float w ;
	w = -4*y ;
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
	int z0=1 ;
	
	float x ;
	float y=y0 ;
	float z=z0 ;
	for (i=1; i <=n ; ++i)
	{
			x=x0+h*i ;
			z=z+h*f(x,y,z) ;
			y=y+h*z ;
			myfile << x << "\t" << y << "\n" ;
	}
	myfile.close() ;
	return 0 ;
}

int main()
{
	int n ;
	n=100000 ;
	float h=0.0001 ;
	float q=euler(n,h) ;
	cout << "Done !" ;
	return 0 ;
}