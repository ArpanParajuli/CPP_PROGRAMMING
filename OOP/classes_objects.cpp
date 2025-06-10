#include <iostream>


/***
 * 
 * OOPS concepts
 * 
 * [+] Encapsulation
 * 
 * [+] Abstraction 
 * 
 * [+] Inheritance 
 * 
 * [+] Polymorphism
 * 
 * 
 */



class Test{
      

     public:

               // accessing the properties before declaring
               // compilers parses the Test class alread & knows that a and b exist before it compiles this->a = 999;

    Test(){   


        /**
         * 0x61fefc -> baseAddres of Test object  
         * 0x61fefc -> 0x61fefc -> also address for storing a
         * 0x61ff00 -> 4 byte (int) b  -> 0x61ff00 - 0x61fefc
         * 
         */

        std::cout << this << std::endl;
        std::cout << &(this->a) << std::endl;
        std::cout << &(this->b) << std::endl;
        

        this->a = 9999;
        this->b = 8888;
    }

     private:
     int a , b;


     protected:
     std::string userName;


    public:


    bool isPublic = true;

    void Display(){
         std::cout << "a = " << a;
         std::cout << "\n b = " << b;
         std::cout << "\n userName = " << userName;
         std::cout << "\n isPublic = " << isPublic;
    }


};

int main(){

    Test t;
    t.Display();

}