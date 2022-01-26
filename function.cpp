#include <iostream>
using namespace std;

// function overloading
int sum(int num1, int num2)
{
  return num1 + num2;
}

// function overloading
int sum(float num1, float num2, int num3 = 10)
{
  return num1 + num2 + num3;
}

// default value
bool doMagic(bool isActive = true)
{
  return isActive == false;
}

int main()
{
  int result = sum(1, 3);
  cout << "Result:- " << result << endl;
  const bool flag = doMagic(false);
  cout << "Flag:- " << flag << endl;
}
