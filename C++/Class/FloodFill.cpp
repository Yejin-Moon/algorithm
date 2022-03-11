#include <iostream>
#define WHITE 0
#define BLACK 1
#define YELLOW 2
using namespace std;

int screen[10][10] =
{{2,2,2,2,2,2,2,2,2,2},
 {2,2,2,2,2,2,2,2,2,2},
 {2,2,2,0,0,0,0,2,2,2},
 {2,2,2,2,0,0,0,2,2,2},
 {2,2,2,2,0,0,0,2,2,2},
 {2,2,2,2,0,0,0,0,2,2},
 {2,2,2,2,0,2,2,2,2,2},
 {2,2,2,2,0,2,2,2,2,2},
 {2,2,2,2,0,2,2,2,2,2},
 {2,2,2,2,2,2,2,2,2,2}};

 char read_pixel(int x, int y)
 {
     return screen[x][y];
 }

 void write_pixel(int x, int y, int color)
 {
     screen[x][y] = color;
 }

 void flood_fill(int x, int y)
 {
     if(read_pixel(x,y)==WHITE)
     {
         write_pixel(x,y,BLACK);
         if(x+1<10) flood_fill(x+1,y);
         if(y+1<10) flood_fill(x,y+1);
         if(x-1>-1) flood_fill(x-1,y); 
         if(y-1>-1) flood_fill(x,y-1);
     }
 }

void result_print()
{
    for(int i = 0; i<10;i++)
    {
        for(int j = 0;j<10;j++)
        {
            cout<<screen[i][j]<<' ';
        }
        cout<<endl;
    }
}

int main()
{
    flood_fill(2,3);
    result_print();
    return 0;
}