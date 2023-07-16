#include <iostream>
using namespace std;

#include<iostream>
using namespace std;

int main()
{   
  int width,height;
  cout << "ведите число которое будет висотой" <<endl;
  cin >> width;
  cout << "ведите число которое будет широтой" <<endl;
  cin >> height;

  for (int i = 0; i < width; i++)
  {
    for (int j = 0; j <= height; j++)
    {
      if (j == height)
      {
        cout <<endl;
      }
      else
      {
        cout << "*";
      }
      
    }
    
  }
  
}
