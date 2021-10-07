#include<iostream>
using namespace std;
int main()
{
   int a = 5;
   int b = 10;
   int c = 20;
   int d = 4;

   float x =static_cast<float> (a) * (b + (c / d));
   
   int z = x;
   
   cout << "Правильный ответ: " << z << endl;

return 0;

}