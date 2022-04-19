// A. Nearly Lucky Number
#include <iostream>
using namespace std;

int main(){

	long long int n ;
	cin>>n;
	
	int cnt_4 = 0;
	int cnt_7 = 0;

	while(n > 0){
		
		if(n % 10 == 4){
			cnt_4++;
		}
		if(n % 10 == 7){
			cnt_7++;
		}
		n = n /10;
	}
	if( (cnt_4 + cnt_7 )  == 4 || (cnt_4 + cnt_7 )  == 7){
		cout<<"YES";

	}else{
		cout<<"NO";
	}
	cout<<endl;

}
