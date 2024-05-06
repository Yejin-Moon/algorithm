#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int arr[10000001];
int solution(int k, vector<int> tangerine) {
    int answer = 0;
    int len = tangerine.size();
    for(int i=0; i<len; i++) {
        arr[tangerine[i]]++;
    }
    sort(arr,arr+10000001,greater<>());
    int idx=0;
    while(1) {
        k-=arr[idx];
        answer++;
        idx++;
        if(k<=0) return answer;
    }
    return answer;
}
