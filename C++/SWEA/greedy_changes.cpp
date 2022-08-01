#include <iostream>
using namespace std;

int main()
{
    int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int arr[8]={0,0,0,0,0,0,0,0};
        int money[8]={50000,10000,5000,1000,500,100,50,10};
        int m;
        cin>>m;
        while(m>9)
        {
            for(int i=0; i<8; i++)
            {
                if(m/money[i]>0)
                {
                    arr[i]=m/money[i];
                    m=m-(money[i]*arr[i]);
                }
            }
        }
        cout<<"#"<<test_case<<'\n';
        for(int i=0; i<8; i++)
        {
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}