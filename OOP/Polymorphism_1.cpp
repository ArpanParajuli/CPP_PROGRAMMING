#include <iostream>

class Student {


    private :

    int rollno;

    public:


    Student(int a){
        this->rollno = a;
    }


    bool operator == (Student c){

        if(this->rollno == c.rollno){
            return true;
        }

        return  false;
        
    }


       bool operator - (Student c){

        this->rollno == -(this->rollno);
        c.rollno = -(c.rollno);

        
    }





};




int main(){
   

    Student s1(10) , s2(10);


    // bool isSame =  s1 == (s2);

    //  bool isSame =  s1.operator ==(s2);

    //  bool isSame =  s1==(s2);


    std::cout << isSame;

    std::cout <<  (bool) (s1==(s2));




     return 0;

}


