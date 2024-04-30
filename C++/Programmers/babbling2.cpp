#include <iostream>
#include <string>
#include <vector>

using namespace std;
string arr[4] = {"aya","ye","woo","ma"};
string exarr[4] = {"ayaaya","yeye","woowoo","mama"};

int solution(vector<string> babbling) {
    int answer = 0;
    int sz = babbling.size();
    
    for(int i=0; i<sz; i++) {
        for(int j=0; j<4; j++) {
            if(babbling[i].find(exarr[j])!=string::npos) {
                babbling[i]="z";
                break;
            }
        }
    }

    for(int i=0; i<sz; i++) {
        while(babbling[i].length()>=2) {
            bool flag=false;
            for(int j=0; j<4; j++) {
                if(babbling[i].find(arr[j])!=string::npos) {
                    int idx = babbling[i].find(arr[j]);
                    babbling[i].replace(idx, arr[j].length(),"1");
                    flag=true;
                }
            }
            if(!flag) break;
        }
        
        bool flag2=true;
        for(int k=0; k<babbling[i].length(); k++) {
            if(babbling[i][k]!='1') {
                flag2=false;
                break;
            }
        }
        if(flag2) answer++;
        
    }

    return answer;
}
