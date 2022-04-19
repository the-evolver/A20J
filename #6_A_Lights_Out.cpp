//A. Lights Out
#include <iostream>
using namespace std;

int main(){
	
	int arr[3][3]={ {1,1,1},
                    {1,1,1},
	                {1,1,1}   };

	int ins[3][3];
	for(int i = 0 ; i < 3 ; i++){
	    for(int j = 0 ; j < 3 ; j++){
	           cin>>ins[i][j];
	      }
	}

	for(int i = 0 ; i < 3 ; i++){
	  for(int j = 0 ; j < 3 ; j++){
             if(ins[i][j] != 0 && ins[i][j] % 2 != 0){
                 arr[i][j] = 1 - arr[i][j];
                 if(i-1 >= 0){ //up
                    arr[i-1][j] = 1 - arr[i-1][j];
                 }
                 if(i+1 <= 2){ //down
                   arr[i+1][j] = 1 - arr[i+1][j];
                 }
                 if(j+1 <= 2){ //right
                   arr[i][j+1] = 1 - arr[i][j+1];
                 }
                 if(j-1 >= 0){
                   arr[i][j-1] = 1 - arr[i][j-1];
                 }



             }

	  }
	}
	for(int i = 0 ; i < 3 ; i++){
	    for(int j = 0 ; j < 3 ; j++){
	           cout<<arr[i][j];
	      }
	      cout<<endl;
	}
    cout<<endl;

	return 0;
}