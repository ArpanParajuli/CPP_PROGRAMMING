#include <iostream>



class Test{
      
   public:
   
    int x;

    std::string name;

   // constructor overloading.. 

    Test(){
        std::cout << "This is constructor \n"; 
    }

     Test(std::string name){
        this->name = name;
        std::cout << "This is constructor of object " << this->name << std::endl; 
    }

 

    // destructor cannot be overload
    ~Test(){
         std::cout << "This is destructor of object  " << name << std::endl;
    }

  



};

int main(){

    Test t1("t1");
    Test t2("t2");
    Test t3("t3");


}


/*


 gets calls when object is created

This is constructor of object t1
This is constructor of object t2
This is constructor of object t3


// but this is working in reverse how?  

///////////// stack //////////////




stack follows LIFO method 


when main function will be finished

.......................
______________________

t3 is created & calls  
constructor of object t3 


(Gets removed firstly from stack) 
destructors of it gets called
______________________

t2 is created & calls  
constructor of object t2

(Gets removed secondly from stack) &
destructors of it gets called
______________________

t1 is created & calls  
constructor of object t1

(Gets removed thirdly from stack) & 
destructors of it gets called
______________________


.......................





///////////////// Output /////////////////////

This is constructor of object t1
This is constructor of object t2
This is constructor of object t3

This is destructor of object  t3
This is destructor of object  t2
This is destructor of object  t1

*/