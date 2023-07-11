#include <iostream>
using namespace std;

int main()
{
  int i = 0;
  while (i <= 20)
  {
    if(i % 2 == 0)
    {
      cout << "число " << i << " четное" <<endl;
    } 
    else
    {
      cout << "число " << i << " не четное" <<endl;
    }
    i++;
  }
  
  
}
