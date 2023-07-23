#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    int len = query.size();
    for(int i=0; i<len; i++) {
        if(i%2==0) arr.erase(arr.begin()+query[i]+1,arr.end()); 
        else arr.erase(arr.begin(),arr.begin()+query[i]);
    }
    return arr;
}
