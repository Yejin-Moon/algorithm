#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    multimap<float,int,greater<float>> tmp;
    int len = stages.size();
    int m=len,s=0;
    for(int i=1; i<=N; i++)
    {
        s=0;
        for(int j=0; j<len; j++)
        {
            if(stages[j]==i) s++;
        }
        tmp.insert({float(s)/float(m),i});
        m-=s;
    }
    for(auto iter=tmp.begin(); iter!=tmp.end();iter++)
    {
        answer.push_back(iter->second);
    }
    return answer;
}