#include <iostream>
using namespace std;

int main()
{
  int i = 0;
  int type;
  char symbol;
  int raz;
  cout << "ведите симбол" <<endl;
  cin >> symbol;
  cout << "ведите такое скольно ви хотите чтоб вивело симбвол" <<endl;
  cin >> raz;
  cout << "виберите режим: 1 = vertical; 2 = horinzontal" <<endl;
  cin >> type;
  if(type != NULL)
  {
    switch (type)
  {
  case 1:
   while (i <= raz)
  {
    cout << symbol <<endl;
  }
    break;
    case 2:
    while (i <= raz)
  {
    cout << symbol ;
  }
  break;
  
  default:
  cout <<"not value" <<endl;
    break;
  }
  }
  
}   