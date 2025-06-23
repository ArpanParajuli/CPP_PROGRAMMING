#include <iostream>

class Student
{
public:
    int age;
    std::string name;
    int *ptrStack;
    int *ptrHeap;

    Student(int age , std::string name , int valueToPointerStack , int valueToPointerHeap ){ 
      this->age = age;
      this->name = name;
      this->ptrStack = &valueToPointerStack;
      this->ptrHeap = new (int)(valueToPointerHeap);
      std::cout << "Constructor called\n";
    }

    ~Student()
    {
        std::cout << "Destructor called\n";
        delete ptrHeap;
    }
};

int main()
{

    Student *s = new Student(19 , "Arpan" , 10 , 20);
    Student *s1 = new Student(*s); // copy constructor


     Student s2(21 , "John" , 30 , 40);
    Student  s3(s2); // copy constructor


    std::cout << s2.age << std::endl;
    std::cout << s3.age << std::endl;


    std::cout << (s2.ptrStack) << std::endl; // 0x61fec8
    std::cout << (s3.ptrStack) << std::endl; // 0x61fec8


    std::cout << (s2.ptrHeap) << std::endl; // 0x1f7b00
    std::cout << (s3.ptrHeap) << std::endl; // 0x1f7b00


    // copy constructor have bugs over the pointer and dynamic memory stuffs


    std::cout << s->age << std::endl;
    std::cout << s1->age << std::endl;


    std::cout << (s->ptrStack) << std::endl; // 0x61fec8
    std::cout << (s1->ptrStack) << std::endl; // 0x61fec8


    std::cout << (s->ptrHeap) << std::endl; // 0x1f7f90
    std::cout << (s1->ptrHeap) << std::endl; // 0x1f7f90


    delete s; // will free 0xf47f90 this too 
    delete s1; // bug or crash ofc




}