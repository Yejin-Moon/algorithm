#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int len = queries.size();
    for(int i=0; i<len; i++) {
        int tmp=-1;
        for(int j=queries[i][0]; j<=queries[i][1]; j++) {
            if(arr[j]>queries[i][2]) {
                if(tmp==-1) tmp=arr[j];
                else if(tmp>arr[j]) tmp=arr[j];
            }
        }
        answer.push_back(tmp);
    }
    return answer;
}
