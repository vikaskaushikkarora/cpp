#include<iostream>
using namespace std ;
int main(){
	int a , b ;
	cout << "Enter Two numbers : " ;
	cin>> a >> b ;
	int c = 0 ;
	if ( a < b) {
		c = a ;
	}
	else { c = b ; }
	for ( int i = c ; i >=1 ; i = i-1){
		if (a%i ==0 & b%i ==0) {
			cout << i << " is the greatest common divisor for the two numbers .";
		break ;
		}
	}
	return 0 ;
}
	
			