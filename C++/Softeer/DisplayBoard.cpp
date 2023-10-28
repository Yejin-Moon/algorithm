#include<iostream>
#include<bitset>

using namespace std;

int cmpbit(int a) {
	int result=0;
	for(int i=0; i<8; i++) {
		if(a&(1<<i)) result++;
	}
	return result;
}

int main(int argc, char** argv)
{
	int arr[10] = {126,48,109,121,51,91,95,114,127,123};
	int n,A,B, res;
	cin>>n;
	for(int j=0; j<n; j++) {
		cin>>A>>B;
		res=0;
		for(int i=0; i<5; i++) {
			if(A==0 && B!=0) {
				res+=cmpbit(arr[B%10]);
				B/=10;
				continue;
			} 
			else if(A!=0 && B==0) {
				res+=cmpbit(arr[A%10]);
				A/=10;
				continue;
			}
			int tmp=(arr[A%10]^arr[B%10]);
			res+=cmpbit(tmp);
			if(A!=0) A/=10;
			if(B!=0) B/=10;
		}
		cout<<res<<endl;
	}
	return 0;
}
