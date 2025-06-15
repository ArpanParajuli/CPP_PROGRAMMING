#include <iostream>
#include<string>
#include <exception>
using namespace std;


/*
Exception Handling...



*/




class Customer{


     public:


  string name;
  int  accountNumber;
  float balance;



 
  Customer(string name , float balance , int accountNumber){

    this->name = name;
     this->balance = balance; 
     this->accountNumber = accountNumber;
  }


  void Deposit(float balance){

    if(balance > 0 && balance < 10000000){  // 1 cr at time;
      this->balance += balance;
      std::cout << balance << " deposited successfully" << std::endl;
    }


    else throw "Deposited rules violated";

  }



   void Withdraw(float amount){

    if(amount > 0 && amount < this->balance){  // 1 cr at time;
      this->balance -= amount;
      std::cout << amount << " withdrawn successfully and current balalnce is "<< this->balance << std::endl;
    }


    else throw "Withdraw rules violated";

  }






    
};
int main(){

Customer c1("Arpan" , 15000 , 123456);
Customer c2("Anjali" , 21000 , 121212);


  try{
    c1.Deposit(10000);
     c1.Deposit(20000000000000000);
     c1.Withdraw(20000);
  }
  catch(const char * msg){
    std::cout << "\n Error occured" << msg;
  }





}