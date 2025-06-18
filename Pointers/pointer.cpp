#include <iostream>



int main(){

  int a = 5;

  int * ptr1 = &a;
  int ** ptr2 = &ptr1;
  int *** ptr3 = &ptr2;


  std::cout << &a << std::endl;

  std::cout << ptr1 << std::endl;

  std::cout << &ptr1 << std::endl;
  std::cout << ptr2 << std::endl;

  std::cout << &ptr2 << std::endl;
  std::cout << ptr3 << std::endl;
  
  std::cout << &ptr3 << std::endl;

}