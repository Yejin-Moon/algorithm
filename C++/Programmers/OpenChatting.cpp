#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string,string> m;
    vector<pair<string,string>> arr;
    string a,b,c;
    int len = record.size();
    for(int i=0; i<len; i++)
    {
        stringstream ss;
        ss.str(record[i]);
        ss>>a>>b>>c;
        arr.push_back(make_pair(a,b));
        if(a=="Leave") continue;
        if(m.find(b)==m.end()) m.insert({b,c});
        else m[b]=c;
    }
    for(int i=0; i<len; i++)
    {
        string ans;
        if(arr[i].first=="Enter") ans+=m[arr[i].second]+"님이 들어왔습니다.";
        else if(arr[i].first=="Leave") ans+=m[arr[i].second]+"님이 나갔습니다.";
        else if(arr[i].first=="Change") continue;
        answer.push_back(ans);
    }
    return answer;
}