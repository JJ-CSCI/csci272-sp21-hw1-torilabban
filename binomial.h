// header inclusion (9.6 pg 377)
#ifndef BINOMIAL_H
#define BINOMIAL_H
using namespace std;

// class & call of functions

class Binomial{
  private: // access modifier
    double coeffe1;
    int   powa1;
    double coeffe2;
    int powa2;

   public:  //access modifier with member functions
    Binomial(){}; //without parameters
    Binomial(double){};
    Binomial(double, int){};
    Binomial(double, int,double){};
  Binomial (double co1=1.0 , int po1=1, double co2=1.0,int po2=1)
   {
  coeffe1= co1;
  coeffe2= co2;
  //if the power value(s)? is less than 1 set (powa1 & 2) to 1
  if (po1 < 1){
    powa1 = 1;
    }
    else{
      powa1= po1;
      }
      if (po2 < 1){
        powa2 = 1;
        }
        else{
          powa2 = po2;
          }
}
    double GetCoefficient(double);
    int  GetPower(int index2);
    int SetPower (int index, int expovalue);
    void Multiply (double realnum);
    void Multiply (double monoco, int monopo);
    int Add (const Binomial B) ; //const Binomial &B?
    
    

};

#endif

