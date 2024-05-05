void display(char board[][3])
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf(" %c ", board[row][col]);
        }
        printf("\n");
    }
}

int moveleft(char board[][3])
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (board[row][col] == '_')
            {
                return 1;
            }
        }
    }
    return 0;
}

int evaluation(char board[][3])
{
    // Vertical Evaluation
    for (int col = 0; col < 3; col++)
    {
        if (board[0][col] == 'X' && board[1][col] == 'X' && board[2][col] == 'X')
            return 1;
        else if (board[0][col] == 'O' && board[1][col] == 'O' && board[2][col] == 'O')
            return -1;
        // if(board[0][col] ==  board[1][col] && board[1][col] == board[2][col]){
        //     if(board[0][col] = 'X')
        //         return 1;
        //     else if(board[0][col] = 'O')
        //         return -1;
        // }
    }

    // Horizontal Evaluation
    for (int row = 0; row < 3; row++)
    {
        if (board[row][0] == 'X' && board[row][1] == 'X' && board[row][2] == 'X')
            return 1;
        else if (board[row][0] == 'O' && board[row][1] == 'O' && board[row][2] == 'O')
            return -1;
    }
    // Left Diagonals Evaluation
    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
        return 1;
    else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
        return -1;

    // Right Diagonals Evaluation
    if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
        return 1;
    else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
        return -1;
}

// void input(char board[][3])
// {
//     char Player = 'X';
//     char Opponent = 'O';
//     static int i;
//     int row, col;
//     for(i=2; i<10; i++)
//     {
//         if(i%2==0){
//             printf("X\'s turn: ");
//             scanf("%1d%1d",&row, &col);
//             if(board[row][col]=='_')
//             {
//                 board[row][col] = Player;
//                 continue;
//             }
//             i--;
//         }
//         else
//         {
//             printf("O\'s turn: ");
//             scanf("%1d%1d",&row, &col);
//             if(board[row][col]=='_')
//             {
//                 board[row][col] = Opponent;
//                 continue;
//             }
//             i--;
//         }
//     }
// }