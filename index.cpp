#include <iostream>
using namespace std;

#include<iostream>
using namespace std;

int main()
{  
    int width,heigt;
    cin >> width;
    cin >> heigt;
  for (int i = 0; i <= width -1; i++)
  {
    // висота

    for (int j = 0; j < heigt; j++)
    {
        cout <<"*";
        if (j == heigt - 1)
        {
            cout <<endl;
        }        

    }
    
  }
  
    

}
