#include "l1.hpp"
#include <iostream>

using namespace std;

/*
0. Абстрагирование - на первом месте потому что проявляется на всех остольных принципах
1. Инкапсуляция
2. Наследование
3. Полиморфизм

*/

class Point
{
private:
  int x;
  int y;
  int z;

public:
  void Init(int _x, int _y)
  {
    x = _x;
    y = _y;
    z = 0;
  }
  void Init(int _x, int _y, int _z)
  {
    x = _x;
    y = _y;
    z = _z;
  }
  void SetX(int a)
  {
    x = a;
  }
  int GetX()
  {
    return x;
  }
  void Print()
  {
    cout << "X: " << x << "\nY: " << y << "\nZ: " << z << endl;
  }
};

void l1()
{
  Point obj1;

  obj1.Init(1, 4);

  obj1.Print();

  cout << obj1.GetX() << endl;
}
