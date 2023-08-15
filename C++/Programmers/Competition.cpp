#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    int flag=10000;
    map<int,int> m;
    int len = rank.size();
    for(int i=0; i<len; i++) {
        if(attendance[i]==true) m.insert({rank[i],i});
    }
    for(auto it=m.begin(); it!=m.end(); it++) {
        answer+=it->second*flag;
        if(flag==1) break;
        flag/=100;
    }
    return answer;
}
