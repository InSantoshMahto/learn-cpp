#include <iostream>
using namespace std;

int convertCharToInt(char flag);

void handleString()
{
  char strUsingChar[10] = {'s', 'a', 'n', 't', 'o', 's', 'h'};
  unsigned int length = 0;
  // char str[10] = "santosh";
  // get length of the string using loop
  while (strUsingChar[length])
    length++;
  cout << "String length using iteratio is:- " << length << endl;
  string str = "https://InSantoshMahto.dev";
  cout << str.size() << endl;
  cout << str.length() << endl;
}

int main()
{
  char flag;
  cout << "Enter a charactor:- ";
  cin >> flag;
  int result = convertCharToInt(flag);
  cout << result << endl;
  /**
   * learn string in c++
   * */
  handleString();
  const bool isActive = true;
  float percentage = 6.5;
  double money = 89.7382797620349;
}

int convertCharToInt(char flag)
{
  cout << "You have entered:- " << flag << endl;
  int num = ((int)flag - 48);
  return num + 10;
}