#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        int res=0;
        int a,b,c;
        cin>>a>>b>>c;

        for(int j=1; j<=a; j++){
            for(int k=1; k<=b; k++){
                for(int l=1; l<=c; l++){
                    if((j%k==k%l)&&(k%l==l%j)) res++;
                }
            }
        }
        cout<<res<<'\n';
    }
}