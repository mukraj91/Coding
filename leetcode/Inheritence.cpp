

#include<iostream>

using namespace std;


// Singale Inheritence


class Vehicle
{
 // logic
};

class Car : public Vehicle
{
  // logic
};

// Multiple Inheritence

class Vehicle1 
{

};

class FourWheeler1
{

};

class Car1 : public Vehicle1, public FourWheeler1
{

};


// MultiLevel Inheritence

class Vehicle2
{
    // logic 
};

class FourWheeler2:public Vehicle2
{
    // logic 
};


class Car2 : public FourWheeler2
{
    // logic
};


// Hierarchical Inheritence


class Vehicle3
{
  // logic
};

class Car3: public Vehicle3
{
  // logic
};


class Bus: public Vehicle3
{
  // logic 
};


// Virtual Inheritence(Combination of Hierarchical + Multiple Inheritence)



class Vehicle4
{
  // Base Class logic

  public :
  int a;
};

class Car5 : virtual public Vehicle4
{
   // Sub class Car
   public:
   int b;
};


class Bus5 : virtual public Vehicle4
{
  // Sub class Bus
  public:
  int c;
};

class FourWheeler3 : public Car5, public Bus5
{
   // FourWheeler subclass
   public:
   int d;
};

int main()
{

FourWheeler3 fourWheeler2Obj;
fourWheeler2Obj.a = 10;
fourWheeler2Obj.a = 100;



fourWheeler2Obj.b = 200;
fourWheeler2Obj.c = 300;
fourWheeler2Obj.d = 400;


cout<<"\n a : "<<fourWheeler2Obj.a<<endl;
cout<<"\n b : "<<fourWheeler2Obj.b<<endl;
cout<<"\n c : "<<fourWheeler2Obj.c<<endl;
cout<<"\n d : "<<fourWheeler2Obj.d<<endl;
return 0;
}