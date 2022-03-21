#include <iostream>
#include <string>
#include <vector>

#include "MyTest.h"

int main()
{
  std::cout<<"Hello World 2022"<<std::endl;

  std::cout << __cplusplus<<std::endl;

  MyTest1 mytest1; 
  mytest1.print();
}