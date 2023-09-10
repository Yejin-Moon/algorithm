#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int u=board[1]/2, d=-board[1]/2, l=-board[0]/2, r=board[0]/2;
    int x=0, y=0;
    for(auto k:keyinput) {
        if(k=="up") {
            y++;
            if(y>u) y=u;
        }
        else if(k=="down") {
            y--;
            if(y<d) y=d;
        }
        else if(k=="left") {
            x--;
            if(x<l) x=l;
        }
        else {
            x++;
            if(x>r) x=r;
        }
    }
    answer={x,y};
    return answer;
}
