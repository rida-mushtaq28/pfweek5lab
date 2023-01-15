#include <iostream>
using namespace std;
int pool();
main ()
{
pool();
   
}

int pool()
{
int volume,p1,p2,hours;
int p1per,p2per,poolfilled,overflow;
cout << "enter volume of pool:";
cin >> volume;
cout << "enter flow rate of p1:";
cin >> p1;
cout << "enter flow rate of p2:";
cin >> p2;
cout << "absence hours of worker:";
cin >> hours;
poolfilled=((hours*p1)+(hours*p2))*100/volume;
p1per=(p1*100)/(p1+p2);
p2per=100-p1per;

 if (poolfilled>volume)
  {
    overflow=(((hours*p1)+(hours*p2))*100/volume)-volume;
    cout << "for "<<hours<<"hours the pool overflows with "<<overflow<<" litres";

  }

  if (poolfilled<volume)
   {
   cout << "the pool is "<<poolfilled<<"% filled"<<"pipe1:"<<p1per<<"%"<<"pipe2:"<<p2per<<"%";
   }
}
