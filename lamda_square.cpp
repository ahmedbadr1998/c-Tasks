
#include <iostream>
#include <iomanip>
#include <functional>

int main() {
  std::function<int(int)>fun=[](int x){
    return x*x;
  };
  int num=fun(5);
  std::cout<<std::setw(4)<<"the value of num: "<<num<<std::endl;

    return 0;
}
