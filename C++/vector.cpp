#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec_a; //이름만 선언
    vector<int> vec_b(10); //크기를 10으로 선언
    vector<int> vec_c(10,8); //크기 10, 초기화 8
    vector<int> vec_d{10,20,30,40}; //4개 요소로 벡터 생성

    for(int i : vec_c)
    {
        cout << i << '\t';
    }
    cout<<endl;
    return 0;
}