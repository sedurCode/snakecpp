#ifndef GRAPHICS_H
#define GRAPHICS_H
#include <vector>   // for std::vector
#include <iostream> // for std::cout
#include "snake.h" // for the definition of the snake

using namespace std;
class Graphics
{
public:
  void Graphics(int xSize, int ySize);
  ~Graphics();
  int redraw();
  int drawline();
protected:
  int xSize, ySize;

private:
  vector<vector<char>> playArea(xSize, vector<char>(ySize));
};

#endif
