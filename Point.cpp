#include <iostream>

class Point{
  private:
    int x, y;
  public:
    Point(int a, int b){
      x = a;
      y = b;
    }
    void MovePoint(int a, int b){
      x = a;
      y = b;
    }
    void print(){
      std::cout << "x = " << x << ", " << "y = " << y << std::endl;
    }
};

int main(){
  Point point(10, 10);
  point.print();
  point.MovePoint(2, 2);
  point.print();

  return 0;
}
