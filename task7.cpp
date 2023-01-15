#include <iostream>
using namespace std;
int time(int HH,int MM);
main ()
{
 int HH ;
 int MM ;
 time (HH ,MM);
}
 int time(int HH,int MM)
  {
   int hours,minutes;
   cout << "enter hours:";
   cin >> hours;
   cout << "enter minutes:";
   cin >> minutes;
   cout << "current time is :"<< hours << " " << minutes << endl;
   minutes=minutes+15; 
     
   if (minutes>59)
     {
       hours=hours+1;
       minutes=minutes-60;
     }
   if (hours>23)
     {
       hours=hours-24;
       
     }
   cout << "time aftr 15 mins will be :"<< hours << " " << minutes<<endl; 
  }
 