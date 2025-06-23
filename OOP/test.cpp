#include <iostream>

 struct {
   int a = 10;

   
   void check(){
    std::cout << "Check \n";
   }
}s1;


int main(){
  
    s1.a = 20;
    s1.check();
    std::cout << s1.a;
}