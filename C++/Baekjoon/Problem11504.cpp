#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int makeNumber(int digit, vector<int> &nums) {
    int res = 0;
    for(auto n:nums) {
        res+=n*(pow(10,digit));
        digit--;
    }
    return res;
}

int main() {
    int T;
    cin>>T;
    for(int test_case=0; test_case<T; test_case++) {
        vector<int> Xnums, Ynums, nums;
        int N,M,cnt=0;
        cin>>N>>M;
        int tmp, X=0,Y=0;
        for(int digit=0; digit<M; digit++) {
            cin>>tmp;
            Xnums.push_back(tmp);
        }
        X = makeNumber(M-1,Xnums);
        for(int digit=0; digit<M; digit++) {
            cin>>tmp;
            Ynums.push_back(tmp);
        }
        Y = makeNumber(M-1,Ynums);
        for(int i=0; i<N; i++) {
            cin>>tmp;
            nums.push_back(tmp);
        }
        for(int i=0; i<N; i++) {
            vector<int> sliceVec;
            for(int j=0; j<M; j++) {
                sliceVec.push_back(nums[(i+j)%N]);
            }
            int result = makeNumber(M-1, sliceVec);
            if(result>=X && result<=Y) cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
