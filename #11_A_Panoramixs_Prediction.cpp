// A.Panoramix's Prediction

#include <iostream>
#include <vector>
using namespace std;

int len = 50;
vector<bool> isprime(len+1,true);
vector<int>primes;

void sieve(){
  isprime[0] = isprime[1] = false;

  for(int i = 2 ; i * i <= len ; i++){
       if(isprime[i] == true){
          for(int j = i * i ; j <= len ; j = j + i)
            isprime[j] = false;
       }
  }
  
  for(int i = 2 ; i < len + 1 ; i++){
       if(isprime[i] == true){
          primes.push_back(i);
       }
  }

	
}
int index(int n){
	
	int st = 0 , end = primes.size() - 1 , mid ;
	while(st <= end){
	    mid = (st + end) / 2;
	    if(primes[mid] == n){
	        return mid;
	    }
	    else if(primes[mid] > n){
	        end = mid - 1;
	    }else{
	       st = mid  + 1;
	    }
	}
	return -1; // element not found ;
}

int main(){
  sieve();
  int n,m;
  cin>>n>>m;

 // binary search on n;

 int indx = index(n);
	 if(primes[indx + 1] == m ){
	    cout<<"YES";
	 }
	 else{
	   cout<<"NO";
	 }


	return 0;


}