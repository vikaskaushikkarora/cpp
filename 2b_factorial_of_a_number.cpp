#include<iostream>
using namespace std ;
int main (){
	int num ;
	cout << "Enter the number : " ;
	cin >> num ;
	double factorial = 1 ;
	for (int i = 1 ; i<= num ; i=i+1){
		factorial = factorial*i ;
	}
	cout << "The factorial of the number is " << factorial ;
	return 0 ;
}
