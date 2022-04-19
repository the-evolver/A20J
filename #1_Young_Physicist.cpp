//Young Physicist

#include <iostream>
using namespace std;

int main(){

 int n;
 cin>>n;

 int x = 0 , y = 0 , z = 0;
 int a1,b1,c1;
 for(int i = 0 ; i < n ; i++ ){
     cin>>a1>>b1>>c1;
     x = x + a1;
     y = y + b1;
     z = z + c1;

 }
	if(x == 0 && y == 0 && z == 0)
	cout<<"YES";
	else
	cout<<"NO";
	
	cout<<endl;

}