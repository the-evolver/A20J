//Borze
#include <iostream>
#include <vector>
using namespace std;

int main(){
   
   string inp;
   cin>>inp;

   vector<int> v;
   for(int i = 0 ; i < inp.length() ; i++){
   	   if(inp[i] =='.'){
   	   	v.push_back(0);

   	   }else if(inp[i] =='-' && inp[i+1] == '.'){
            v.push_back(1);
            i++;
   	   }else if(inp[i] =='-' && inp[i+1] == '-'){
           v.push_back(2);
           i++;
   	   }
   }
   for(int i = 0 ; i < v.size() ; i++){
   	  cout<<v[i];
   }
   cout<<endl;


}