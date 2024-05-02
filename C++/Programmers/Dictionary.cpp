#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>

using namespace std;
char carr[5] = {'A','E','I','O','U'}; 
char arr[5];
int M=1;
set<string> s;
void backTracking(int cnt, int num) {
    if(cnt==M) {
        string str="";
        for(int i=0; i<M; i++) {
            str+=arr[i];
        }
        s.insert(str);
        return;
    }
    for(int i=num; i<5+num; i++) {
        arr[cnt]=carr[i%5];
        backTracking(cnt+1,i%5);
    }
}

int solution(string word) {
    int answer = 0;
    for(int i=0; i<5; i++){
        backTracking(0,i);
        M++;
    }

    for(auto it=s.begin(); it!=s.end(); it++) {
        answer++;
        if(*it==word) return answer;
    }
    return answer;
}
