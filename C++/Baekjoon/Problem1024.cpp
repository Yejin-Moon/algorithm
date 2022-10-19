#include <iostream>
using namespace std;

int main(){

    long int n;
    int L;
    cin>>n>>L;

    long int s=-1, e=-1;

    for(long int i = L ; i <= 100 ; i++){
        if(i%2 == 1){
            if(n%i == 0){
                s = n/i - i/2;
                e = n/i + i/2;
                break;
            }
        }

        else{
            if(n%i == i/2){
                s = n/i - i/2 +1;
                e = n/i + i/2;
                break;
            }
        }
    }
    
    if(s < 0){
        cout<<-1<<'\n';
    }
    else{
        for(long int i = s ; i<= e; i++){
            cout<<i<<" ";
        } 
        cout<<'\n';
    }
    return 0;
}