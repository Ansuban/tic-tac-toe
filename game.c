#include <stdio.h>
#include <stdlib.h>
#include "header_file.h"
void input(char board[][3]);
int main()
{

    static char board[3][3] = {{'_', '_', '_'}, {'_', '_', '_'}, {'_', '_', '_'}};
    display(board);
    if (moveleft(board) != 1)
    {
        return 0;
    }
    input(board);
}
void input(char board[][3])
{
    char Player = 'X';
    char Opponent = 'O';
    if (evaluation(board) == 1 || evaluation(board) == -1 || evaluation(board) == 0)
    {
        if (evaluation(board) == 1)
        {
            printf("X is winner.");
            return;
        }
        else if (evaluation(board) == -1)
        {
            printf("O is winner.");
            return;
        }
        else
        {
            printf("draw");
            return;
        }
    }
    if (moveleft(board) != 1)
    {
        return;
    }
    static int i = 2;
    int row, col;
    if (i % 2 == 0)
    {
        printf("X\'s Turn:  ");
        scanf("%1d%1d", &row, &col);
        if (board[row][col] != '_')
            input(board);
        board[row][col] = Player;
        i++;
    }
    else
    {
        printf("O\'s Turn:  ");
        scanf("%1d%1d", &row, &col);
        if (board[row][col] != '_')
            input(board);
        board[row][col] = Opponent;
        i++;
    }
    system("clear");
    display(board);
    if (evaluation(board) == 1 || evaluation(board) == -1 || evaluation(board) == 0)
    {
        if (evaluation(board) == 1)
        {
            printf("X is winner.");
            return;
        }
        else if (evaluation(board) == -1)
        {
            printf("O is winner.");
            return;
        }
        else
        {
            printf("draw");
            return;
        }
    }
    if (moveleft(board) != 1)
    {
        return;
    }
    input(board);
}