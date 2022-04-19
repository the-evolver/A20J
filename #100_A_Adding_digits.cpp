#include <iostream>
using namespace std;

int main(){

	int a , b , n;
	cin>>a>>b>>n;
    bool prsnt = false;
	
	for(int i = 0 ; i < 10 ; i++){

		if((a * 10 +  i) % b == 0){
			prsnt = true;
			cout<<a * 10 + i;
			string s(n-1,'0');
			
			cout<<s<<endl;
			break;
			
		}


	}
   if(prsnt != true){
   	   cout<<-1<<endl;
   }

  return 0;

}
