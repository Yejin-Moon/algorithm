#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    vector<int> tmp;
    tmp.push_back(-1);
    int len = order.size();
    int idx=0, i=1;
    while(1)
    {
        if(tmp.back()!=order[idx] && i>order[idx]) return answer;
        if(order[idx]==i)
        {
            answer++;
            idx++;
            i++;
        }
        else if(order[idx]==tmp.back())
        {
            answer++;
            idx++;
            tmp.erase(tmp.end()-1);
        }
        else if(i<=len)
        {
            tmp.push_back(i);
            i++;
        }
    }
    
    return answer;
}