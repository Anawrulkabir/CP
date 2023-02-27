#include <iostream>
#include <math.h>
#include <vector>

using namespace std ;


//Use can also decalare array globally in which every element hold as 0
// or we can manually decalare each element as 0 using memset()

void sieve(int n){
	
	// Algorithm for Sieve of Eratosthenes
	
	int prime[n+1];
	memset(prime,0,sizeof(prime));
	

	//Main part of algorithm
	for(int i=2 ; i*i <= n ; ++i){
		if(prime[i] == 0){
			for(int j = i*i ; j <= n ; j += i){
				prime[j] = 1 ;
			}
		}
	}
	
	// counting how many prime available
	int count = 0;
	for(int i=2 ; i<=n ; ++i){
		if(prime[i] == 0) {
			count ++;
			
		}
	}
	
	
	// then print them
	cout<<count<<endl;
	for(int i=2 ; i<=n ; ++i){
		if(prime[i] == 0) {
			cout<<i<<" ";
			
		}
	}
	cout<<endl;
}





int  main(){
	int n ;
	cin>>n;
	sieve(n);
	
}



