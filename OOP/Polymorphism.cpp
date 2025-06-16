#include <iostream>

class Parent{

 public:

 int a;
   virtual void collision(){
     std::cout << "This is Base collision";
   }

   // function overloading (sum function with int and string work)
   int sum(int a , int b){ return a + b;}
   

   std::string sum(std::string firstName , std::string lastName){ return firstName + " " + lastName;} // operator overloading

      virtual ~Parent(){
      std::cout << "This is Parent destructor!";
    }
};

class Child : public Parent{

    public:
  
    void collision() override {
        std::cout << "This is derived collision";
    }


    virtual ~Child(){
      std::cout << "This is child destructor!"; // for proper clean up of object
    }
};

int main(){
   


  // std::cout << sizeof(Parent);
    Parent * p = new Child(); // runtime polymorphism
     p->collision();


    int result =  p->sum(10 , 20);

    std::cout << "Sum int = " << result << std::endl;
    std::cout << "Sum string = " << p->sum("Arpan","Parajuli");

     delete p;


     return 0;

}