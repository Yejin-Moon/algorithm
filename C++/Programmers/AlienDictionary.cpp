#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    vector<string> v;
    sort(spell.begin(),spell.end());
    do {
        string s;
        for(auto it=spell.begin(); it!= spell.end(); it++) s+=*it;
        v.push_back(s);
    } while (next_permutation(spell.begin(),spell.end()));
    int len = v.size();
    int dlen = dic.size();
    for(int i=0; i<len; i++) {
        for(int j=0; j<dlen; j++) {
            if(v[i]==dic[j]) {

                return 1;
            }
        }
    }
    return answer;
}
