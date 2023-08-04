#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    int len =quiz.size();
    for(int i=0; i<len; i++) {
        istringstream ss(quiz[i]);
        string stringBuf;
        vector<string> x;
        
        while(getline(ss,stringBuf,' ')) {
            x.push_back(stringBuf);
        }
        
        if(x[1]=="+") {
            if(stoi(x[0])+stoi(x[2])==stoi(x[4])) answer.push_back("O");
            else answer.push_back("X");
        }
        else {
            if(stoi(x[0])-stoi(x[2])==stoi(x[4])) answer.push_back("O");
            else answer.push_back("X");
        }
    }
    return answer;
}
