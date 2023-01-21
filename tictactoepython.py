table = [['-','-','-','-'],['-','-','-','-'],['-','-','-','-'],['-','-','-','-']]

def printTable():
    for i in range(4):
        for j in range(4):
            if j!=3:
                print(table[i][j]," ",end="")
            else:
                print(table[i][j]," ")


def placerX():
    global nameX
    while True:
        row = 0
        column=0
        print(nameX,"'s turn.")
        print("Select the row you would like to place")
        row = input()
        row = int(row)
        print("Select the column you would like to place")
        column = input()
        column = int(column)
        if table[row-1][column-1] == "-":
            table[row-1][column-1] = 'X'
            break
        else:
            print("The place you have chosen is occupied. Choose another one.")
            printTable()
            continue

def placerO():
    global nameO
    while True:
        row = 0
        column=0
        print(nameO,"'s turn.")
        print("Select the row you would like to place")
        row = input()
        row = int(row)
        print("Select the column you would like to place")
        column = input()
        column = int(column)
        if table[row-1][column-1] == '-':
            table[row-1][column-1] = 'O'
            break
        else:
            print("The place you have chosen is occupied. Choose another one.")
            printTable()
            continue

def checkerX():
    global counterX
    counterX = 0
    for i in range(4):
        counterX = 0
        for j in range(4):
            if table[i][j] == 'X':
                counterX +=1
        if counterX == 4:
            break
    if counterX !=4:
        for i in range(4):
            counterX = 0
            for j in range(4):
                if table[j][i] == 'X':
                    counterX +=1
            if counterX == 4:
                break
    if counterX !=4:
        if table[0][0] =='X' and table[1][1] =='X'  and table[2][2]=='X' and table[3][3]=='X':
            counterX = 4
        if table[0][3] =='X' and table[1][2] =='X'  and table[2][1]=='X' and table[3][0]=='X':
            counterX = 4

def checkerO():
    global counterO
    counterO = 0
    for i in range(4):
        counterO = 0
        for j in range(4):
            if table[i][j] == 'O':
                counterO +=1
        if counterO == 4:
            break
    if counterO !=4:
        for i in range(4):
            counterO = 0
            for j in range(4):
                if table[j][i] == 'O':
                    counterO +=1
            if counterO == 4:
                break
    if counterO !=4:
        if table[0][0] =='O' and table[1][1] =='O'  and table[2][2]=='O' and table[3][3]=='O':
            counterO = 4
        if table[0][3] =='O' and table[1][2] =='O'  and table[2][1]=='O' and table[3][0]=='O':
            counterO = 4


print ("Welcome to tictactoe.")
nameX = input("Enter your name to play as X.")
print(nameX,"will be play as X.")
nameO = input("Enter your name to play as O.")
print(nameO,"will play as O")
drawCounter = 0
while drawCounter<8:
    printTable()
    placerX()
    checkerX()
    if counterX == 4:
        printTable()
        print(nameX,"has won the game.")
        break
    printTable()
    placerO()
    checkerO()
    if counterO == 4:
        printTable()
        print(nameO,"has won the game.")
        break
    drawCounter+=1

if drawCounter == 8:
    printTable()
    print("It's a draw.")