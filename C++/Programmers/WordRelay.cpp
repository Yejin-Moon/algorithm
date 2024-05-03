#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer = {0,0};
    set<string> s;
    int len = words.size();

    for(int i=0; i<len; i++) {
        if(s.find(words[i])!=s.end()) {
            answer = {(i%n)+1,(i/n)+1};
            break;
        }
        else s.insert(words[i]);
        if(i!=0 && words[i-1].back()!=words[i].front()) {
            answer = {(i%n)+1,(i/n)+1};
            break;
        }
    }

    return answer;
}
