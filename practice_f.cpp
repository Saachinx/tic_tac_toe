#include <iostream>
#include <string>
#include <vector>
#include "practice_.hpp"


using namespace std;

 vector<char> t_grid = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
 vector<char> status;
 char player;
    int i = 0;
      int t;
      int j = 0;

      
      
      bool endloop = false;

   


     
 

void grid(){
 

cout <<   "      |          |          \n"; 
  cout <<   "    " <<    t_grid[0] <<          " |    "    <<   t_grid[1]          << "     |   "    << t_grid[2]        << "\n";
  cout <<   "      |          |          \n";
  cout <<   "------------------------    \n";
  cout <<   "      |          |          \n";
  cout <<   "    " <<    t_grid[3] <<          " |    "    <<   t_grid[4]          << "     |   "    << t_grid[5]        << "\n";
  cout <<   "      |          |          \n";
  cout <<   "------------------------    \n"; 
  cout <<   "      |          |          \n";
  cout <<   "    " <<    t_grid[6] <<          " |    "    <<   t_grid[7]          << "     |   "    << t_grid[8]        << "\n";
  cout <<   "      |          |          \n";
}

void instruct(){
    cout << "Welcome to Tic-Tac-Toe.\n";
    cout << "The rules are as follows.\n";
    cout << "The game is played on a grid that's 3 squares by 3 squares.\n";
    cout << "You are X , your friend is O . Players take turns putting their marks in empty squares.\n";
    cout << "The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.\n";
    cout << "When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie.\n";
}



int turn(){
    //changes the turn for each player 
     cout << "'X' Plays first \n";
    while(i <= t_grid.size()){
      grid();
       
      
       if(i % 2 == 0){
        cout << "X to play\n";
        player = 'X';

       }else{
        cout << "O to play\n";
        player = 'O';
       }
          if(endloop == true){
         break;
      }
      play();
     check();
      
     ++i;
         
    
    }
      return 0;

}

void play(){



cout << "Enter a number that corresponds with a postion\n";
      cin >> t; 
    
     t_grid[t];
       if(t_grid[t] == 'X' xor t_grid[t] == 'O' ){
        cout << "invalid input\n";
         --i;
         cout << "try again\n";
         cout << i << "\n";
       }else{
       
           t_grid[t] = player;
       }
     
   
 
 
 
}



//objective 
//create a check win function 
//Create logic to check if the columns and rows have 3 Xs or 3 Os 
// 

void check(){
  if(t_grid[0] == 'X' && t_grid[1] == 'X' && t_grid[2] == 'X' ||  t_grid[0] == 'O' && t_grid[1] == 'O' && t_grid[2] == 'O' ){
  if(t_grid[t] == 'X'){
    cout << "X won\n";
    endloop = true;
  }else if(t_grid[t] == 'O'){
    cout << "O wins\n";
    endloop = true;
  }
  }else if(t_grid[3] == 'X' && t_grid[4] == 'X'  && t_grid[5] == 'X' || t_grid[3] == 'O' && t_grid[4] == 'O'  && t_grid[5] == 'O'){
     if(t_grid[t] == 'X'){
    cout << "X won\n";
    endloop = true;
  }else if(t_grid[t] == 'O'){
    cout << "O wins\n";
    endloop = true;
  }
  }else if(t_grid[6] == 'X' && t_grid[7] == 'X'  && t_grid[8] == 'X' || t_grid[6] == 'O' && t_grid[7] == 'O'  && t_grid[8] == 'O'){
     if(t_grid[t] == 'X'){
    cout << "X won\n";
    endloop = true;
  }else if(t_grid[t] == 'O'){
    cout << "O wins\n";
    endloop = true;
  }
  }else if(t_grid[0] == 'X'  && t_grid[3]== 'X'  && t_grid[6] == 'X' || t_grid[0] == 'O'  && t_grid[3]== 'O'  && t_grid[6] == 'O'){
     if(t_grid[t] == 'X'){
    cout << "X won\n";
    endloop = true;
  }else if(t_grid[t] == 'O'){
    cout << "O wins\n";
    endloop = true;
  }
  }else if(t_grid[1] == 'X'  && t_grid[4]== 'X'  && t_grid[7] == 'X' || t_grid[1] == 'O'  && t_grid[4]== 'O'  && t_grid[7] == 'O'){
    if(t_grid[t] == 'X'){
    cout << "X won\n";
    endloop = true;
  }else if(t_grid[t] == 'O'){
    cout << "O wins\n";
    endloop = true;
  }
  }else if(t_grid[2] == 'X' && t_grid[5] == 'X'  && t_grid[8] == 'X' || t_grid[2] == 'O' && t_grid[5] == 'O'  && t_grid[8] == 'O'){
     if(t_grid[t] == 'X'){
    cout << "X won\n";
    endloop = true;
  }else if(t_grid[t] == 'O'){
    cout << "O wins\n";
    endloop = true;
  }
  }else if(t_grid[2] == 'X' && t_grid[4] == 'X'  && t_grid[6] == 'X' || t_grid[2] == 'O' && t_grid[4] == 'O'  && t_grid[6] == 'O'){
     if(t_grid[t] == 'X'){
    cout << "X won\n";
    endloop = true;
  }else if(t_grid[t] == 'O'){
    cout << "O wins\n";
    endloop = true;
  }
  }else if(t_grid[0] == 'X' && t_grid[4] == 'X'  && t_grid[8] == 'X' || t_grid[2] == 'O' && t_grid[4] == 'O'  && t_grid[6] == 'O'){
     if(t_grid[t] == 'X'){
    cout << "X won\n";
    endloop = true;
  }else if(t_grid[t] == 'O'){
    cout << "O wins\n";
    endloop = true;
  }
  }else if(t == 9){
    cout << "DRAW\n";
  }
}