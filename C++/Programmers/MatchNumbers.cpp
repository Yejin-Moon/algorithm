#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector<int> v;
    sort(X.begin(),X.end(),greater<>());
    sort(Y.begin(),Y.end(),greater<>());
    int xlen = X.size(), ylen = Y.size();
    int start=0;
    for(int i=0; i<xlen; i++) {
        for(int j=start; j<ylen; j++) {
            if(X[i]==Y[j]) {
                answer+=X[i];
                v.push_back(X[i]);
                start=j+1;
                break;
            }
        }
    }
    if(answer.length()==0) return "-1";
    if(answer[0]=='0') return "0";
    else return answer;
}
