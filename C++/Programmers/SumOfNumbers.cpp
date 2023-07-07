#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int idx, mid=total/num;
    if(num%2==0) idx = num/2-1;
    else idx = num/2;
    for(int i=idx; i>0; i--) {
        answer.push_back(mid-i);
    }
    answer.push_back(mid);
    for(int i=1; i<num-idx; i++) {
        answer.push_back(mid+i);
    }

    return answer;
}
