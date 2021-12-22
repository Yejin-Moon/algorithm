#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //바깥쪽 벡터는 크기 2, 안의 요소는 크기 3. 2x3 배열
    vector<vector<int>> v(2, vector<int>(3));

    //입력
    for(vector<int>& row : v){
        for(int& elem : row){
            cin >> elem;
        }
    }

    //출력
    for(vector<int>& row : v){
        for(int& elem : row){
            cout << elem << '\t';
        }
        cout << endl;
    }

    return 0;
}