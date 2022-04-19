//Beautiful Year
#include <iostream>
using namespace std;

bool distict(int y){
   int arr[10] ={0};

  while(y > 0){
  	 arr[y % 10]++;
  	 if(arr[y % 10 ] > 1){
          return false;
  	 }
  	 y = y / 10;
   }
  return true;

}

int main(){

  int y;
  cin>>y;
  

  
  y++;
  while(distict(y) == false){
  	    y++;
  }
  cout<<y<<endl;


}