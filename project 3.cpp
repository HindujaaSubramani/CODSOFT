#include<iostream>
int row,column;
char b[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
int try1=0,try2=0,draw_check=0;
char c,choose;
void board()
{
    std::cout<<"- - - - - - -"<<"\n";
    for(int i=0;i<3;i++)
    {
        std::cout<<"| ";
        for(int j=0;j<3;j++)
        {
            std::cout<<b[i][j]<<" | ";
        }
        std::cout<<"\n- - - - - - -\n";
    }
}
void check()
{
    for(int i=0;i<3;i++)
    {
        if(c=='X' || c=='x')
        {
            if(b[i][0]=='X' && b[i][1]=='X' && b[i][2]=='X' || b[0][i]=='X' && b[1][i]=='X' && b[2][i]=='X' || b[0][0]=='X' && b[1][1]=='X' && b[2][2]=='X' || b[0][2]=='X' && b[1][1]=='X' && b[2][0]=='X')
            {
                try1=1;
                std::cout<<"Hurray!! PLAYER-1 has Won the Game!!\n";
                break;
            }
            else if(b[i][0]=='O' && b[i][1]=='O' && b[i][2]=='O'|| b[0][i]=='O' && b[1][i]=='O' && b[2][i]=='O' || b[0][0]=='O' && b[1][1]=='O' && b[2][2]=='O' || b[0][2]=='O' && b[1][1]=='O' && b[2][0]=='O')
            {
                try1=1;
                std::cout<<"Hurray!! PLAYER-2 has won the Game!!\n";
                break;
            }
            else if(draw_check==4)
            {
                std::cout<<"The match is declared as DRAW!!\n";
                try1=1;
                break;
            }
        }
        else if(c=='O'||c=='o')
        {
            if(b[i][0]=='X' && b[i][1]=='X' && b[i][2]=='X' || b[0][i]=='X' && b[1][i]=='X' && b[2][i]=='X' || b[0][0]=='X' && b[1][1]=='X' && b[2][2]=='X' || b[0][2]=='X' && b[1][1]=='X' && b[2][0]=='X')
            {
                try2=1;
                std::cout<<"Hurray!! PLAYER-2 has won the Game!!\n";
                break;
            }
            else if(b[i][0]=='O' && b[i][1]=='O' && b[i][2]=='O'|| b[0][i]=='O' && b[1][i]=='O' && b[2][i]=='O' || b[0][0]=='O' && b[1][1]=='O' && b[2][2]=='O' || b[0][2]=='O' && b[1][1]=='O' && b[2][0]=='O')
            {
                try2=1;
                std::cout<<"Hurray!! PLAYER-1 has won the Game!!\n";
                break;
            }
            else if(draw_check==4)
            {
                std::cout<<"The match is declared as DRAW!!\n";
                try2=1;
                break;
            }
        }
    }   
}
void in1()
{
    if(try1==0)
    {
        std::cout<<"PLAYER-1->Enter your move in row and coloumn: ";
        std::cin>>row>>column;
        b[row-1][column-1]='X';
        board();
        check();
    }
    if(try1==0)
    {
        std::cout<<"PLAYER-2->Enter your move in row and coloumn: ";
        std::cin>>row>>column;
        b[row-1][column-1]='O';
        board();
        check();
    }
}
void in2()
{
    if(try2==0)
    {
        std::cout<<"PLAYER-1->Enter your move in row and coloumn: ";
        std::cin>>row>>column;
        b[row-1][column-1]='O';
        board();
        check();
    }
    if(try2==0)
    {
        std::cout<<"PLAYER-2->Enter your move in row and coloumn: ";
        std::cin>>row>>column;
        b[row-1][column-1]='X';
        board();
        check();
    }
}    
int main()
{
    std::cout<<"Welcome to the TIC-TAC-TOE Game!!\n";
    std::cout<<"-> X and O are the variables that will be assigned to the players according to their wish!!\n";
    std::cout<<"-> One has to arrange their assigned variables Horizontally or Vertically or Diagonally to win the Game!!\n";
    std::cout<<"-> Otherwise the match will be declared as draw!!\n";
    board();
    std::cout<<"Select X or O for PLAYER-1: ";
    std::cin>>c;
    if(c=='X' || c=='x')
    {
        std::cout<<"Player 1: X\n";
        std::cout<<"Player 2: O\n";
        std::cout<<"Start the game!!Best of luck!!\n";
        while(try1==0)
        {
            in1();
            ++draw_check;
        }
        if(try1==1)
        {
            std::cout<<"Do you wanna continue(Y/N): ";
            std::cin>>choose;
            std::cout<<"\n";
            if(choose=='Y' || choose=='y')
            {
                for(int i=0;i<3;i++)
                {
                    for(int j=0;j<3;j++)
                    {
                        b[i][j]=' ';
                    }
                }
                try1=0,try2=0,draw_check=0;
                main();
            }
            else
            {
                std::cout<<"Thank You for playing TIC-TAC-TOE Game!!\n";
                exit;
            }
        }
    }
    else if(c=='O' || c=='o')
    {
        std::cout<<"Player 1: O\n";
        std::cout<<"Player 2: X\n";
        std::cout<<"Start the game!!Best of luck!!\n";
        while(try2==0)
        {
            in2();
            ++draw_check;
        }
        if(try2==1)
        {
            std::cout<<"Do you wanna continue(Y/N): ";
            std::cin>>choose;
            std::cout<<"\n";
            if(choose=='Y'|| choose=='y')
            {
                for(int i=0;i<3;i++)
                {
                    for(int j=0;j<3;j++)
                    {
                        b[i][j]=' ';
                    }
                }
                try1=0,try2=0,draw_check=0;
                main();
            }
            else
            {
                std::cout<<"Thank You for playing TIC-TAC-TOE Game!!\n";
                exit;
            }
        }
    }
    return 0;
}