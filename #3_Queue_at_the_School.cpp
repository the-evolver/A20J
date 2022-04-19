//Queue at the School
#include <iostream>
using namespace std;

int main(){

   int num_c,time;
   cin>>num_c>>time;

   string s ;
   cin>>s;

   for(int i = 1 ; i <= time ; i++){
       for(int i = 0 ; i + 1 < s.length() ; i++){
           if(s[i] == 'B' && s[i+1] == 'G'){
             swap(s[i],s[i+1]);
             i++;
           }
       }
   }
   cout<<s<<endl;
	

}