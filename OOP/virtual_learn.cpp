#include <iostream>

class Learn {
   // private 
    virtual void test() {
        std::cout << "this is virtual function of learn class\n";
    }
};


using functionCaller = void(*)();

int main() {
    Learn l;

    std::cout << "Size of Learn " << sizeof(l) << std::endl;

    // Get vptr (pointer to vtable)

    void **vptrPtr = (void**)&l;



    std::cout << "Address of object: " << &l << std::endl;

    void * vTableaddr = *vptrPtr; 

    std::cout << "vptr (address of vtable): " << vTableaddr << std::endl;


    functionCaller * f1  =  (functionCaller*)vTableaddr;
    f1[0](); // callig virtual function within private 

    return 0;
}
