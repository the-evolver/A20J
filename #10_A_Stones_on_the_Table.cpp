//A .Stones on the Table

#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;
	string s;
	cin>>s;
	int cnt = 0;

	for(int i = 0 ; i < n ; ){
		int j = i + 1;
		for(; j < n && s[i] == s[j] ; j++){
              cnt++;
		}
		i = j;

	}
	cout<<cnt<<endl;
}
