#ifndef SNAKE_H
#define SNAKE_H
#include <vector>
#include "segment.h"

enum LOOKDIRECTION
{left, right, up, down}; //0 1 2 3
class Snake
{
public:
  void Snake();
  ~Snake();
  void moveSnake();
  void addSegment();
  int lookDirection;
protected:
  std::vector<Segment> body;
private:
  int defaultLength {5};
};

#endif
