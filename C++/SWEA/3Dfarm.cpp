#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

int n,m;
int c1,c2;
int horse;
int cow[500001];
int tmp;
int left,right;

int lower (int x){
	int left = 0;
	int right = n;
	int mid;
	while(left!=right)
    {
		mid = left + (right - left)/2;
		if(cow[mid] >= x) right = mid;
		else left = mid+1;
	}
	return left;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin>>n>>m;
        cin>>c1>>c2;
		for(int i=0;i<n;i++) cin >> cow[i];
		sort(cow, cow+n);
		int res = INT_MAX;
		int cnt=0;
		for(int i=0; i<m; i++){
            cin>>horse;
			int tmp1 = lower(horse);
			int tmp2 = tmp1 ? tmp1-1 : 0;
			int dis1,dis2;
			if (tmp1 < n)
            {
                dis1 = abs(cow[tmp1] - horse);
                if (dis1 < res) 
                {
                    res = dis1;
                    cnt = 1;
                }
                else if(dis1 == res) cnt++;
                tmp1++;
            }
            if (tmp2 >= 0)
            {
                dis2 = abs(cow[tmp2] - horse);
                if (dis2 < res) 
                {
                    res = dis2;
                    cnt = 1;
                }
                else if(dis2 == res) cnt++;
                tmp2--;
            }
		}
        cout<<res+abs(c1-c2)<<' '<<cnt<<'\n';
        //printf("#%d %d %d\n",test_case,res+abs(c1-c2),cnt);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}