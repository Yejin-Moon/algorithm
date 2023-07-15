#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";
    int len = db.size();
    for(int i=0; i<len; i++) {
        if(id_pw[0]==db[i][0] && id_pw[1]==db[i][1]) return "login";
        else if(id_pw[0]==db[i][0] && id_pw[1]!=db[i][1]) return "wrong pw";
    }
    return answer;
}
