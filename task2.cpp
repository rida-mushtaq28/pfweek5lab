#include <iostream>
#include <cmath>
float pquad();
float nquad();
using namespace std;

main ()
{
 float X;

 X=nquad();
 cout << "value of x is :"<< X << endl;
 X=pquad();
 cout << "value of x is :"<< X << endl;
  
}

  float nquad()
  {
  float a;
  float b;
  float c;
  float d=2;
  float X;
  float insq;
  float acX4;
  float bSQ;
  float sQrt;
  float numerator;
  float denominator;
  cout << "enter a:";
  cin >> a;
  cout << "enter b:";
  cin >> b;
  cout << "enter c:";
  cin >> c;
  
  acX4=(4*a*c);
  bSQ=pow(b,d);
  insq=(bSQ)-(acX4);
  sQrt=sqrt(insq);
  numerator=-b-sQrt;
  denominator=(2*a);
  X=numerator/denominator;
  return X;
  }
  
   float pquad()
  {
  float a;
  float b;
  float c;
  float d=2;
  float X;
  float insq;
  float acX4;
  float bSQ;
  float sQrt;
  float numerator;
  float denominator;
  cout << "enter a:";
  cin >> a;
  cout << "enter b:";
  cin >> b;
  cout << "enter c:";
  cin >> c;
  
  acX4=(4*a*c);
  bSQ=pow(b,d);
  insq=(bSQ)-(acX4);
  sQrt=sqrt(insq);
  numerator=-b+sQrt;
  denominator=(2*a);
  X=numerator/denominator;
  return X;
  }
  
  