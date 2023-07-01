#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    multiset<char, greater<char>> s;
    string str;
    cin>>str;
    int len = str.length();
    for(int i=0; i<len; i++) {
        s.insert(str[i]);
    }
    for(auto it = s.begin(); it!=s.end(); it++){
        cout<<*it;
    }
}