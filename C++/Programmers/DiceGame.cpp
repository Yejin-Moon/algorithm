#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int min(int a, int b, int c, int d) {
    int arr[4]={a,b,c,d};
    int minval=7;
    for(int i=0; i<4; i++) {
        if(arr[i]<minval) minval=arr[i];
    }
    return minval;
}

int solution(int a, int b, int c, int d) {
    int answer = 0;
    int arr[4]={a,b,c,d};
    map<int, int> m;
    for(auto i:arr) {
        if(m.find(i)!=m.end()) m[i]++;
        else m.insert({i,1});
    }
    int fm = m.begin()->first;
    int lm = m.rbegin()->first;
    if(m.size()==1) answer=1111*a;
    else if(m.size()==4) answer=min(a,b,c,d);
    else if(m.size()==2) {
        if(m[fm]==2 && m[lm]==2) answer=(fm+lm)*(lm-fm);
        else if(m[fm]==3) answer=(10*fm+lm)*(10*fm+lm);
        else if(m[lm]==3) answer=(10*lm+fm)*(10*lm+fm);
    }
    else {
        int tmp=1;
        for(auto it=m.begin();it!=m.end(); it++) {
            if(it->second==2) continue;
            tmp*=it->first;
        }
        answer=tmp;
    }
    return answer;
}
