#include<iostream>
using namespace std ;
int main(){
	int a , b ;
	bool flag =  true ;
	cout << "Enter Two numbers : " ;
	cin>> a >> b ;
	int c = 0 ;
	if ( a < b) {
		c = b ;
	}
	else { c = a ; }
	for ( int i = 2 ; i <= c ; i = i+1){
		if (a%i ==0 & b%i ==0) {
			cout << i << " is the lowest common multiples for the two numbers .";
			flag = false ;
		break ;
		}
	}
	if (flag){
		cout << "These number have no common multiple except one ." ;
	}
	return 0 ;
}
	
	
