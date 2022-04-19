#include <iostream>
using namespace std;

int main(){

	int a , b , n;
	cin>>a>>b>>n;
    bool hai_ki_nhi = false;
	
	for(int i = 0 ; i < 10 ; i++){

		if((a * 10 +  i) % b == 0){
			hai_ki_nhi = true;
			cout<<a * 10 + i;
			string s(n-1,'0');
			
			cout<<s<<endl;
			break;
			
		}


	}
   if(hai_ki_nhi != true){
   	   cout<<-1<<endl;
   }

  return 0;

}









// ->  dont always think old school kbhi bs trick se bn jata hai 
// badi badi baten aur bada pav khate  - ! -
//                                      ~~~
// #include <iostream>
// using namespace std;


// // 100000 10 64479

// int main(){

// 	int a,b,n;
// 	cin>>a>>b>>n;
// 	int cpy_a = a;

// 	while(n--){
// 		 a = a * 10;
// 		 int rem = a % b ;
//          if(rem == 0){
//          	continue;
//          }

// 		 rem = b - rem ;
// 		 if(rem > 9){
// 		 	a = a / 10;
// 		 	break;
// 		 }
// 		 else{
//            a = a + rem ;

// 		 }


// 	}
// 	//cout<<a<<endl;
// 	if(cpy_a == a){
// 		cout<<"-1"<<endl;
// 	}else{
// 		cout<<a<<endl;
// 	}

// 	return 0;

// }

