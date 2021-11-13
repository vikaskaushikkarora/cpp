//Runge Kutta 2nd Order ODE
#include <iostream>
#include<fstream>
#include<cmath>
using namespace std ;

// The differential equaion is DDy =f(x,y,z) , z = Dy

float f(float x , float y , float z)
{
	float w ;
	w = -y-0.15*z ;
	return w ;
 }	

float euler(int n , float h )
{
	ofstream myfile ;
	myfile.open("Data.txt") ;
	
	//Initial Conditions
	int x0=0 ;
	int y0=0 ;
	int z0=1 ;
	
	float x ;
	float y=y0 ;
	float z=z0 ;
	for (int i=1; i <=n ; ++i)
	{
			x=x0+h*i ;
			float a1 = h*f(x,y,z) ;
			float b1 = h*z ;
			float a2 = h*f(x+0.5*h,y+0.5*b1,z+0.5*a1) ;
			float b2 = h*(z+0.5*a1) ;
			float a3 = h*f(x+0.5*h,y+0.5*b2,z+0.5*a2) ;
			float b3 = h*(z+0.5*a2) ;
			float a4 = h*f(x+h,y+b3,z+a3) ;
			float b4 = h*(z+a3) ;
			z=z+(a1+2*a2+2*a3+a4)/6 ;
			y=y+(b1+2*b2+2*b3+b4)/6 ;
			myfile << x << "\t" << y << "\n" ;
	}
	myfile.close() ;
	return 0 ;
}

int main()
{
	int n ;
	n=50000 ;
	float h=0.001;
	float q ;
	q=euler(n,h) ;
	 cout << "Done !" ;
	return 0 ;
}