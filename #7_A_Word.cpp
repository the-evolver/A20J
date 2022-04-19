//A. Word
#include <iostream>
using namespace std;

int main(){
	string s;
	cin>>s;

	int len = s.length();
	int uppr = 0 , lowr = 0;
	for(int i = 0 ; i < len ; i++){
	   if(s[i] > 'Z'){
	     lowr++;
	   }else{
         uppr++;
	   }
	}

	if(uppr == lowr || lowr > uppr){ // all in lowr
	   for(int i = 0 ; i < len ; i++){
	    if(s[i] <= 'Z'){
	      s[i] = s[i] + 32;

	    }
	     
	  }
	                                 



	}else{ // all in uppr

	 for(int i = 0 ; i < len ; i++){
	    if(s[i] > 'Z'){
	      s[i] = s[i] - 32;

	    }
	     
	  }

	}
  cout<<s<<endl;
  return 0;

}