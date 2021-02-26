#include "binomial.h"
#include <iostream>
//attach to header

using namespace std;

//method implementation
//defining all functions using 
//returnType Classname::functionName(variables){do something} aka //method implementation


//constructor w 4 parameters -arguments
//what's the difference between arguments and parameters?




//Member Function with Parameters : Indexes-Nested loop
int Binomial::GetPower(int index){
  if (index == 1){
      return powa1;
      }
      else if (index==2){
      return powa2;
      }
      else
      {
         return -1;
      }

}

//should return a floating point value
double Binomial::GetCoefficient(double index){
  if (index==1.0) { 
    return coeffe1;
    }
    else if (index==2.0){
      return coeffe2;
    }   
    else{
    return -1.0;
    }
}

// 2 index 

int Binomial::SetPower(int index , int expovalue ){
  if (index ==1){
    if (expovalue < 1){  //if the value is not (+) then power =1
         powa1 = 1;
    }
    else if(powa1 == expovalue){
         return 0; //successfully set
    }
     else if (index==2)
     {
         if (expovalue < 1) { // if the value is not (+) then power = 1
          powa2 = 1;
          }
          else{
            powa2 = expovalue;
            return 0;   // successfullyset
        }
      } 
  else{
    return -1; // otherwise the method returns -1
  }
}

int Binomial::Add(const Binomial B){
  if (powa1==B.powa1 && powa2==B.powa1){// must have same power to 
    coeffe1= coeffe1+ B.coeffe1;
    coeffe2= coeffe2 +B.coeffe2;
    return 0;
  }
  else
  {
    return -1;
  }
}


void Binomial::Multiply (double realnum)
{
    coeff1= coeffe2 * realnum;
    coeff2 =coeffe2 * realnum;
}
void Binomial::Multiply(double monoco, int monopo)
{
    coeffe1=coeffe1 * monoco;
    powa1= powa1 + monopo;
    coeffe2= coeffe2 * monoco;
    powa2= powa2 + monopo;
}