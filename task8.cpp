#include <iostream>
using namespace std;
int number(int num);
main ()
{  
  int num;
  number(num);   
}

  int number(int num)
   {
      int no,num1,num2;
      cout << "enter number= ";
      cin >> no;
      num1=no%10;
      num2=no/10;
        if (num2==2)
        {
            cout <<"twenty" ;
        }

        if (num2==3)
        {
            cout <<"thirty" ;
        }

        if (num2==4)
        {
            cout <<"fourty" ;
        }

        if (num2==5)
        {
            cout <<"fifty" ;
        }

        if (num2==6)
        {
            cout <<"sixty" ;
        }

        if (num2==7)
        {
            cout <<"seventy" ;
        }

        if (num2==8)
        {
            cout <<"eighty" ;
        } 

   if (num1==1)
        {
            cout <<"one" << endl;
        }

        if (num1==2)
        {
            cout <<"two" << endl;
        }

        if (num1==3)
        {
            cout <<"three" << endl;
        }

        if (num1==4)
        {
            cout <<"four" << endl;
        }

        if (num1==5)
        {
            cout <<"five" << endl;
        }

        if (num1==6)
        {
            cout <<"six" << endl;
        }

        if (num1==7)
        {
            cout <<"seven" << endl;
        }

        if (num1==8)
        {
            cout <<"eight" << endl;
        }

        if (num1==9)
        {
            cout <<"nine" << endl;
        }


   }