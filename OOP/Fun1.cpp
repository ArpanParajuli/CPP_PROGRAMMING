#include <iostream>
#include <stdlib.h>
#include <cstring>



const int modifyMe = 10;

int main(){

   int fakeNumber = 999;
    // before 
   std::cout << modifyMe << std::endl;
   int * ptrToModifyMe = (int *)&modifyMe;

    //after


   *ptrToModifyMe = 9999;

    std::cout << modifyMe << std::endl;


   /*
   
      output 


      10
      10

      const variables goes to read only segment so cannotm modfiy it 

      but in C we can do it

   
   */

}