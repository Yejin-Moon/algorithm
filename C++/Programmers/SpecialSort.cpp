#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gn;

int absval(int a) {
    if(a<0) return -a;
    else return a;
}

bool comp(int a, int b) {
    if(absval(gn-a)<absval(gn-b)) return b<a;
    else if(absval(gn-a)==absval(gn-b)) {
        if(a>b) return b<a;
        else return a<b;
    }
    else return a<b;
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    gn=n;
    sort(numlist.begin(),numlist.end());
    stable_sort(numlist.begin(),numlist.end(),comp);

    return numlist;
}
