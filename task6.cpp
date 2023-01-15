#include <iostream>
using namespace std;
int behaviour(int n1);
main ()
{  
   int sum;
   int n1;
   
  sum=behaviour(n1);
   
}
int behaviour(int n1)
  {
    int num1;
    int number1;
    int number2;
    int number3;
    int number4;
    int number5;
    int digit;
    int sum;
   cout << "enter number :";
   cin >> num1;
   number1=(num1%10);
   digit=(num1/10);

   number2=(digit%10);
   digit=(digit/10);

   number3=(digit%10);
   digit=(digit/10);

   number4=(digit%10);
   digit=(digit/10);

   number5=(digit%10);
  

   sum=number1+number2+number3+number4+number5;
   if (sum%2==0)
    {
       cout<< sum << " is evenish" << endl;
        return sum;
    }

    if (sum%2!=0)
    {
       cout<< sum << " is oddish" << endl;
        return sum;
    }


  }