#include <iostream>
#include <string>
int static x = 4;
static int z = 4;
char player = 'L';
using namespace std;
char ground[10][10] = {{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
                       {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
                       {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
                       {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
                       {'#', '#', '#', '#', player, '#', '#', '#', '#', '#'},
                       {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
                       {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
                       {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
                       {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
                       {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}};


void draw()
{
    cout << ground[0][0] << " " << ground[0][1] << " " << ground[0][2] << " " << ground[0][3] << " " << ground[0][4] << " " << ground[0][5] << " " << ground[0][6] << " " << ground[0][7] << " " << ground[0][8] << " " << ground[0][9] << endl;
    cout << ground[1][0] << " " << ground[1][1] << " " << ground[1][2] << " " << ground[1][3] << " " << ground[1][4] << " " << ground[1][5] << " " << ground[1][6] << " " << ground[1][7] << " " << ground[1][8] << " " << ground[1][9] << endl;
    cout << ground[2][0] << " " << ground[2][1] << " " << ground[2][2] << " " << ground[2][3] << " " << ground[2][4] << " " << ground[2][5] << " " << ground[2][6] << " " << ground[2][7] << " " << ground[2][8] << " " << ground[2][9] << endl;
    cout << ground[3][0] << " " << ground[3][1] << " " << ground[3][2] << " " << ground[3][3] << " " << ground[3][4] << " " << ground[3][5] << " " << ground[3][6] << " " << ground[3][7] << " " << ground[3][8] << " " << ground[3][9] << endl;
    cout << ground[4][0] << " " << ground[4][1] << " " << ground[4][2] << " " << ground[4][3] << " " << ground[4][4] << " " << ground[4][5] << " " << ground[4][6] << " " << ground[4][7] << " " << ground[4][8] << " " << ground[4][9] << endl;
    cout << ground[5][0] << " " << ground[5][1] << " " << ground[5][2] << " " << ground[5][3] << " " << ground[5][4] << " " << ground[5][5] << " " << ground[5][6] << " " << ground[5][7] << " " << ground[5][8] << " " << ground[5][9] << endl;
    cout << ground[6][0] << " " << ground[6][1] << " " << ground[6][2] << " " << ground[6][3] << " " << ground[6][4] << " " << ground[6][5] << " " << ground[6][6] << " " << ground[6][7] << " " << ground[6][8] << " " << ground[6][9] << endl;
    cout << ground[7][0] << " " << ground[7][1] << " " << ground[7][2] << " " << ground[7][3] << " " << ground[7][4] << " " << ground[7][5] << " " << ground[7][6] << " " << ground[7][7] << " " << ground[7][8] << " " << ground[7][9] << endl;
    cout << ground[8][0] << " " << ground[8][1] << " " << ground[8][2] << " " << ground[8][3] << " " << ground[8][4] << " " << ground[8][5] << " " << ground[8][6] << " " << ground[8][7] << " " << ground[8][8] << " " << ground[8][9] << endl;
    cout << ground[9][0] << " " << ground[9][1] << " " << ground[9][2] << " " << ground[9][3] << " " << ground[9][4] << " " << ground[9][5] << " " << ground[9][6] << " " << ground[9][7] << " " << ground[9][8] << " " << ground[9][9] << endl;
}
void key8()
{
    ground[z - 1][x] = ground[z][x];
    ground[z][x] = '#';
    z--;
}
void key4()
{
    ground[z][x - 1] = ground[z][x];
    ground[z][x] = '#';
    x--;
}
void key6()
{
    ground[z][x + 1] = ground[z][x];
    ground[z][x] = '#';
    x++;
}
void key5()
{
    ground[z + 1][x] = ground[z][x];
    ground[z][x] = '#';
    z++;
}
void move()
{
    int input;
    cin >> input;
    switch (input)
    {
    case 8:
        key8();
        break;
    case 4:

        key4();

        break;
    case 5:
        key5();
        break;
    case 6:
        key6();
        break;
    default:
        cout << "wrong input \n";
    }
}

int main()
{
    while (true)
    {
        draw();
        move();
        if(z == -1){
            cout<<"game over \n";
            break;

        }
        if(z == 10 ){
           cout<<"game over \n";
            break; 
        }
        if(x == -1){
            cout<<"game over \n";
            break;

        }
        if(x == 10 ){
           cout<<"game over \n";
            break; 
        }
        
    }

    return 0;
}