#include<iostream>
using namespace std;

int main()
{
   int a;
   int b;
   int c;
   cin >> a >> b >> c;
   int sum = a + b + c;
   int second = a * b * c;
   double thre = (double)(a + b + c) / 3;
   cout  << sum  << "\t" << second << "\t"  << thre <<endl;
}