#include "newTictacClasses.cpp"

Tictac::Tictac()
{
    for (int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            board[i][j] = '-';
        }
    }
}

void Tictac::printBoard()
{
    for (int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Tictac::placerX()
{
    int row,column;
    while (1)
    {
        cout<<nameX<<", select the row you would like to place."<<endl;
        cin>>row;
        cout<<nameX<<", select the column you would like to place."<<endl;
        cin>>column;
        if (board[row-1][column-1] == '-')
        {
            board[row-1][column-1] = 'X';
            break;
        }
        else
        {
            cout<<"This field is occupied. Place again."<<endl;
            continue;
        }
    }
}


void Tictac::placerO()
{
    int row,column;
    while (1)
    {
        cout<<nameO<<", select the row you would like to place."<<endl;
        cin>>row;
        cout<<nameO<<", select the column you would like to place."<<endl;
        cin>>column;
        if (board[row-1][column-1] == '-')
        {
            board[row-1][column-1] = 'O';
            break;
        }
        else
        {
            cout<<"This field is occupied. Place again."<<endl;
            continue;
        }
    }
}


void Tictac::checkerX(int &checkX)
{
    for (int i=0; i<4; i++)
    {
        checkX = 0;
        for(int j=0; j<4; j++)
        {
            if (board[i][j] == 'X')
            {
                checkX++;
            }
        }
        if (checkX == 4)
        {
            break;
        }
    }
    
    if (checkX != 4)
    {
        for (int i=0; i<4; i++)
        {
            checkX = 0;
            for(int j=0; j<4; j++)
            {
                if (board[j][i] == 'X')
                {
                    checkX++;
                }
            }
            if (checkX == 4)
            {
                break;
            }
        }
    }

    if (checkX != 4)
    {
        if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' && board[3][3] == 'X')
        {
            checkX = 4;
        }
        else if (board[3][0] == 'X' && board[2][1] == 'X' && board[1][2] == 'X' && board[0][3] == 'X')
        {
            checkX = 4;
        }
    }
}



void Tictac::checkerO(int &checkO)
{
    for (int i=0; i<4; i++)
    {
        checkO = 0;
        for(int j=0; j<4; j++)
        {
            if (board[i][j] == 'O')
            {
                checkO++;
            }
        }
        if (checkO == 4)
        {
            break;
        }
    }
    
    if (checkO != 4)
    {
        for (int i=0; i<4; i++)
        {
            checkO = 0;
            for(int j=0; j<4; j++)
            {
                if (board[j][i] == 'O')
                {
                    checkO++;
                }
            }
            if (checkO == 4)
            {
                break;
            }
        }
    }

    if (checkO != 4)
    {
        if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O' && board[3][3] == 'O')
        {
            checkO = 4;
        }
        else if (board[3][0] == 'O' && board[2][1] == 'O' && board[1][2] == 'O' && board[0][3] == 'O')
        {
            checkO = 4;
        }
    }
}


void Tictac::setNameX(string nameIn)
{
    nameX = nameIn;
}


void Tictac::setNameO(string nameIn)
{
    nameO = nameIn;
}

string Tictac::getNameX()
{
    return nameX;
}

string Tictac::getNameO()
{
    return nameO;
}