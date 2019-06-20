#include <iostream>
using namespace std;

int f(int n){
	if(n <= 9)
		return n; int a =0;
	while(n >0){
		a += n % 10;
	n/=10;
	}
	f(a);

}

int main(){

	int n;
	cout<<"Input a natural number"<<endl;
	do{
	cin>>n;
	}
	while(n < 0);

	cout<<f(n)<<endl;
	system ("pause");
return 0;}