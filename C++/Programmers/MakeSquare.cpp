#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    int one = arr.size()-arr[0].size();
    int two = arr[0].size()-arr.size();
    if(arr.size()==arr[0].size()) return arr;
    if(arr.size()<arr[0].size()) {
        for(int i=0; i<two; i++) {
            vector<int> tmp;
            for(int j=0; j<arr[0].size(); j++) {
                tmp.push_back(0);
            }
            arr.push_back(tmp);
        }
    }
    else {
        for(int i=0; i<arr.size(); i++) {
            for(int j=0; j<one; j++) {
                arr[i].push_back(0);
            }
        }
    }
    return arr;
}
