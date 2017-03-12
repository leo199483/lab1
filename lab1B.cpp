/*********************
HW1
Leo Chien
2017/03/12
*********************/

#include <iostream>

using namespace std;

int main(){
	int n;	

	cin>>n;
	step2:cout<<n<<endl;

	if(n==1) return 0;
	if(n%2==1) n=3*n+1;	
	else n=n/2;
	
	goto step2;	

	return 0;
}
