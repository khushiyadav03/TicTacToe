# TicTacToe

A command-line Tic Tac Toe game implemented in C++.

## Features
- Interactive two-player game (Player vs Computer)
- Real-time board display
- Win detection for rows, columns, and diagonals
- Draw detection when the board is full

## How to Play
1. Compile the program:
   ```bash
   g++ -o tictactoe main.cpp
   ```

2. Run the executable:
   ```bash
   ./tictactoe
   ```

3. Enter your move (1-9) when prompted:
   - Positions are numbered 1-9 on the board
   - Player X goes first
   - Computer is O

## Game Rules
- First player to get three marks in a row (horizontal, vertical, or diagonal) wins
- If all 9 squares are filled with no winner, the game is a draw
- Each position can only be played once