#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int test_case=1; test_case<=T; test_case++)
    {
        int n,m;
        cin>>n>>m;
        
        int bit = m&((1<<n)-1);
        int flag = (1<<n)-1;
        if(flag==bit) cout<<"#"<<test_case<<" ON\n";
        else cout<<"#"<<test_case<<" OFF\n";
    }
}