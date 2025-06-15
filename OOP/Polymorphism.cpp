#include <iostream>

class Parent{

 public:
   virtual void collision(){
     std::cout << "This is Base collision";
   }

};

class Child : public Parent{

    public:
  
    void collision() override {
        std::cout << "This is derived collision";
    }
};

int main(){

    Parent * p = new Child();
     p->collision();

}