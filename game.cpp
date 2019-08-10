#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int row,column;
bool draw;
char turn='X';
 char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int Display_board();
int Player_chance();
bool game_over();
int main()
{
 while(game_over())
 { 
    Display_board();
 Player_chance();
        Display_board();
        game_over();
        }
  if(turn=='O'&& draw==false)      
cout<<"Player 1 WIn";      
 else if(turn=='X' && draw==false)      
cout<<"Player 2 WIn";      
  else 
  cout<<"game Draw\n";      
    getch();
    return 0;
}
bool game_over()
{
     
int i,j;
// player win line
for(int i=0;i<3;i++)
if(board[i][0]==board[i][1]&&board[i][0]==board[i][2]|| board[0][i]==board[1][i]&&board[0][i]==board[2][i])
return false;

// column wise
if(board[0][0]==board[1][1]&&board[0][0]==board[2][2]|| board[0][2]==board[1][1]&&board[0][2]==board[2][0])
return false;


// game continue....
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
if(board[i][j]!='X'&& board[i][j]!='O')
return true;
// draw condition
draw=true;
return false;
}




int Player_chance()
{
    int choice;
   if(turn=='X')
   cout<<"Player 1 Chance [X]";
    if(turn=='O')
   cout<<"Player 2 Chance [O]";
  
cin>>choice;
switch(choice)
{
 case 1:
     row=0;column=0; break; 
      case 2:
     row=0;column=1; break; 
      case 3:
     row=0;column=2; break; 
      case 4:          
row=1;column=0; break; 
 case 5:
row=1;column=1; break; 
 case 6:
row=1;column=2; break; 
 case 7:
row=2;column=0; break; 
 case 8:
row=2;column=1; break; 
 case 9:
row=2;column=2; break; 
       default:
               cout<<"wrong choice \n";
               break;             
        } 
    if(turn=='X')
    {
      board[row][column]='X'; 
      turn='O' ;       
}
 else if(turn=='O')
    {
      board[row][column]='O'; 
      turn='X' ; 
}

}

int Display_board()
{
    system("cls");
cout<<"\n\n Tic Tac Toe \n\n";
cout<<"Player 1[X]  -  Player 2[o]"<<endl <<endl;
cout<<endl;
cout<<"    |    |    "<<endl;
cout<<" "<<board[0][0]<<"  | "<<board[0][1]<<"  |  "<<board[0][2]  <<endl;
cout<<"____|____|____"<<endl;
cout<<"    |    |    "<<endl;
cout<<" "<<board[1][0]<<"  | "<<board[1][1]<<"  |  "<<board[1][2]  <<endl;
cout<<"____|____|____"<<endl;
cout<<"    |    |    "<<endl;
cout<<" "<<board[2][0]<<"  | "<<board[2][1]<<"  |  "<<board[2][2]  <<endl;
cout<<"    |    |    "<<endl;

}
