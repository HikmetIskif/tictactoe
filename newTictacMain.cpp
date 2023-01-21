#include "newTicTacFunctions.cpp"

int main()
{
    int checkX = 0;
    int checkO = 0;
    string nameX, nameO;
    Tictac game;
    cout<<"Enter your name to play as X"<<endl;
    cin>>nameX;
    game.setNameX(nameX);
    cout<<"Enter your name to play as O"<<endl;
    cin>>nameO;
    game.setNameO(nameO);
    for (int i=0; i<8; i++)
    {
        game.printBoard();
        game.placerX();
        game.printBoard();
        game.checkerX(checkX);
        if (checkX == 4)
        {
            break;
        }
        game.placerO();
        game.checkerO(checkO);
        if (checkO == 4)
        {
            break;
        }
        else if (i == 7)
        {
            break;
        }
    }
    if (checkX == 4)
    {
        cout<<game.getNameX()<<" has won the game !";
    }
    else if (checkO == 4)
    {
        game.printBoard();
        cout<<game.getNameO()<<" has won the game !";
    }
    else
    {
        game.printBoard();
        cout<<"It's a draw !";
    }
    return 0;
}