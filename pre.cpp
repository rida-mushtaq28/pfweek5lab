#include <iostream>
#include <cmath>

using namespace std;

main ()
{
  float num1;
  float num2;
  float result;
  cout << "enter num1:";
  cin >> num1;
  cout << "enter num2:";
  cin >> num2;

  result =max (num1,num2);
  cout << "max num is :"<< result << endl;
  
  result =min (num1,num2);
  cout << "min num is :"<< result << endl;

  result=pow(num1,num2);
  cout << "value is:"<< result << endl;
 
  result=ceil(num1);
  cout << "value becomes:"<< result << endl;

  result=floor(num1);
  cout << "value becomes:"<< result << endl;

  result=sqrt(num1);
  cout << "value is:"<< result << endl;
  
  result=cbrt(num1);
  cout << "value is:"<< result << endl;

  
  
  
  

}