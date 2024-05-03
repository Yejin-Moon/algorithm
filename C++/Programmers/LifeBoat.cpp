#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    deque<int> dq;

    int len = people.size();
    for(int i=0; i<len; i++) {
        dq.push_back(people[i]);
    }
    sort(dq.begin(),dq.end(),greater<>());
    while(dq.size()!=0) {
        if(dq.size()>1 && dq.front()+dq.back()<=limit) {
            dq.pop_front();
            dq.pop_back();
        }
        else dq.pop_front();
        answer++;
    }
    return answer;
}
