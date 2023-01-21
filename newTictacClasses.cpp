#include <iostream>
using namespace std;

class Tictac
{
    string nameX;
    string nameO;
    char board[4][4];

public:
    Tictac();
    void placerX();
    void placerO();
    void checkerX(int &checkX);
    void checkerO(int &checkO);
    void printBoard();
    void setNameX(string nameIn);
    void setNameO(string nameIn);
    string getNameX();
    string getNameO();
};