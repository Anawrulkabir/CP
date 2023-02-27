#include <iostream>
#include <math.h>
#include <vector>

using namespace std ;

//  24 = 2 X 2 X 2 X 3  = 2^3 , 3^1 
void prime_factorization_O_N(int n){
	
	for (int i=2 ; i<=n ; i++){
		
		if(n%i == 0){
			int count = 0;
			while(n%i == 0){
				count++;
				n /= i;
			}
			cout<<i<<"^"<<count<<endl;
		}
		
	}
}

void prime_factorization_sqrt_N(int n){
	
	for (int i=2 ; i*i<=n ; i++){
		
		if(n%i == 0){
			int count = 0;
			while(n%i == 0){
				count++;
				n /= i;
			}
			cout<<i<<"^"<<count<<",";
		}
		
	}
	if(n>1){
		cout<<n<<"^"<<"1"<<endl;
	}
	else{
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	prime_factorization_sqrt_N(n);
	
	
}
