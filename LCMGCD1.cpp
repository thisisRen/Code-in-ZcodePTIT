#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void UCBC( long long a,long long b){
	long long c=a*b;
	if(a==b) cout <<a<<" "<<b;
	else{
		long long tmp;
	    while(b != 0) {
	        tmp = a % b;
	        a = b;
	        b = tmp;
	    }
        cout <<c/a <<" "<<a<<endl;
    }
	
	
}
int main(){
	int t;
	cin >>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		UCBC(a,b);
	}
}
