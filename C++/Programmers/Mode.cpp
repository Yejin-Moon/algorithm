#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0, cnt = 0, flag = 0, max = 0;
    sort(array.begin(),array.end());
    int len = array.size();
    for(int i=0; i<len; i++) {
        cnt++;
        if(array[i+1]!=array[i]) {
            if(cnt>max) {
                max=cnt;
                answer=array[i];
                if(flag==1) flag=0;
            }
            else if(cnt==max) flag=1;
            cnt=0;
        }
    }
    if(flag==1) answer=-1;
    return answer;
}
