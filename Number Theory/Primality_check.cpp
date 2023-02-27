#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

//prime number test in O(N) complexity
bool prime_int_O_N(int n){
	for (int i = 2 ; i<n ; ++i){
		if(n%i == 0) return false;
		
	}
	return true;
	
}

//prime number test in O(sqrt(n)) complexity
bool prime_sqrt_N(int n){
	if(n < 2) return false;
	if(n <=3) return true;
	if(n%2 == 0) return false ;
	for(int i=3 ; i*i <= n ; ++i){
		if(n%i == 0) return false;
	}
	return true;
}

int main(){
	int t ;
	cin>>t;
	
	while (t--){
		
	
	int n;
	cin>>n;
	
	if(prime_sqrt_N(n)){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}
	
	}
	
}
