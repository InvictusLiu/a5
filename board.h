#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <memory>

class block;

class Board{
  int row, col;
  int score, Highscore;
  
  public:
  void clearBoard();
  
