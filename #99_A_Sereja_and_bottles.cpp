#include <iostream>
using namespace std;


int main(){

	int n;
	cin>>n;

	
	int key_cnt[1001]  ={0};
    int x1 , x2 ;

    
    pair<int,int>p1[n];
   
    for(int i = 0 ; i < n ; i++){
    	cin>>x1>>x2;
    	p1[i].first  = x1 ;
    	p1[i].second = x2 ;
    	
    	key_cnt[x2]++;


    }
    int not_open = 0;
    for(int i = 0 ; i < n ; i++){
    	if(p1[i].first == p1[i].second){
    		 if(key_cnt[p1[i].first] == 1){
    		 	not_open++;
    		 }

    	}else{
    		if(key_cnt[p1[i].first] == 0){
                  not_open++;
    		}

    	}
    }
    cout<<not_open<<endl;
    
  return 0 ;
}

