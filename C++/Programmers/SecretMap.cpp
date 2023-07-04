#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i=0; i<n; i++) {
        int tmp = arr1[i]|arr2[i];
        string stmp="";
        while(tmp>0) {
            if(tmp%2==1) stmp='#'+stmp;
            else stmp=' '+stmp;
            tmp=tmp/2;
        }
        while(stmp.length()<n) stmp=' '+stmp;
        answer.push_back(stmp);
    }
    return answer;
}
