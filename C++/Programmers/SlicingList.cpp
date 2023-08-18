#include <string>
#include <vector>

using namespace std;

vector<int> slice(vector<int> v, int a, int b, int c) {
    vector<int> tmpv;
    int len = v.size();
    for(int i=a; i<=b; i+=c) {
        if(i>len) break;
        tmpv.push_back(v[i]);
    }
    return tmpv;
}

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    if(n==1) answer = slice(num_list,0,slicer[1],1);
    else if(n==2) answer = slice(num_list,slicer[0],num_list.size()-1,1);
    else if(n==3) answer = slice(num_list,slicer[0],slicer[1],1);
    else answer = slice(num_list,slicer[0],slicer[1],slicer[2]);
    return answer;
}
