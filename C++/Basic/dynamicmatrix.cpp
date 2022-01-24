#include <iostream>

using namespace std;

int main()
{
    double dMatrix[2][3] = {{1,2,3},{4,5,6}};

    for(int row= 0; row<2; row++){
        for(int col = 0; col<3; col++){
            cout<<dMatrix[row][col] <<"\t";
        }
        cout << endl;
    }

    return 0;
}