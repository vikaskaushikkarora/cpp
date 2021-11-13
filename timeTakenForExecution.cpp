#include<iostream>
#include<time.h>
using namespace std;

int main(){

	clock_t start = clock ();
	
	int z=3;
	for(int i=0;i<=10000000;i++){
		z=i;
	}

	cout<<fixed<< float(clock()-start)/CLOCKS_PER_SEC << endl;
	return 0;
}
