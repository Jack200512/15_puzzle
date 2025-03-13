#include "board.h"

int main()
{
    board myboard(4);
    myboard.suffle();

    cout << endl;
    cout << "the problem is:" << endl;

    myboard.generalshow();
    cout << endl;
    cout << "start solving!";
    cout << endl;

    for (int i = 1; i <= 9; i++)
    {
        myboard.circlemethod(i);
    }
    myboard.solveten();
    myboard.solveeleven();
    myboard.solvetwelve();
    myboard.solverest();
    cout << endl;
    cout << "original problem:";
    myboard.showchart(myboard.chartphoto);
}