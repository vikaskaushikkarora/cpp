// Creating a text file 
#include<iostream>
#include<fstream>
using namespace std ;

int main()
{
	int n = 100 ;
	ofstream myfile ;
	myfile.open("/sdcard/sample.txt") ;
	for(int i =0 ; i <= n ; i++){
		myfile << i << "\n" ; }
	myfile.close() ;
}
