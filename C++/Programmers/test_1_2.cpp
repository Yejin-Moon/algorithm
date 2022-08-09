#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    vector<pair<string,int>> wv;
    map<string,int> m;

    int wlen = want.size();
    int dlen = discount.size();
    for(int i=0; i<wlen; i++)
    {
        wv.push_back(make_pair(want[i],number[i]));
    }
    for(int i=0; i<10; i++)
    {
        if(m.find(discount[i])==m.end())
        {
            m.insert({discount[i],1});
        }
        else m[discount[i]]++;
    }
    int dis = dlen-10;
    int idx=-1;
    for(int i=0; i<=dis; i++)
    {
        if(idx>-1)
        {
            if(m[discount[idx]]>0) m[discount[idx]]--;
            if(m.find(discount[idx+10])!=m.end())
            {
                m[discount[idx+10]]++;
            }
            else m.insert({discount[idx+10],1});
        }
        for(int j=0; j<wlen; j++)
        {
            if(m.find(wv[j].first)!=m.end())
            {
                if(m[wv[j].first]<number[j]) break;
                if(j==wlen-1) answer++;
            }
        }
        idx++;
    }
    
    return answer;
}