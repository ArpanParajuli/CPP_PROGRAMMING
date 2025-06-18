   #include <iostream>



   class Student {

      private:
      int rollno = 10;
      std::string name = "";
      

      inline friend bool dost(Student & s1 , Student &s2){
         return (s1.rollno == s2.rollno) ? true : false;
      }


      public:

      Student (int a , std::string name){
         this->rollno = a;
         this->name = name;
      }


         int operator- (Student s){
            return -(s.rollno);
         }

   };



   int main(){
         

      Student s1(1 , "Utsav");
      Student s2(2 , "Mohit");
      

      // using friend function to access
      //  std::cout << (dost(s1, s2) ? "Roll no is same" : "Roll no is not same");


      std::cout << ((int)s1.operator-(s1));


      return 0;




   }


