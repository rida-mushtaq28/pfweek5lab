#include <iostream>
#include <cmath>
float calculateheight(float distance,float degree);
using namespace std;

main ()
{
  float degree;
  float distance;
  float height;
  height=calculateheight(distance,degree);
  cout << "height is :"<< height << endl;
}
 float calculateheight(float distance,float degree)
 {
  float result;
  float angle;
  float radian;
  float base;
  float height;
  cout << "enter base:";
  cin >> base;
  cout << "enter angle:";
  cin >> angle;
  radian=angle/57.29;
  result=tan(radian);
  cout << "angle is :"<< result << endl;
 
  height=result*base;
  return height;


 }