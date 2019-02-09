#include <iostream>

int main(){
  enum weekdays{
    Monday,Tuesday,Wednesday,Thursday,Friday
  };

  weekdays today;

  today = Monday;
  std::cout << today << std::endl;

  today = Tuesday;
  std::cout << today << std::endl;

  return 0;
}
