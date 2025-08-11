#include <iostream>
using namespace std;

int main()
{
  string desc = "C++ is a powerful general-purpose programming language. It can be used to develop operating systems, browsers, games, and so on. C++ supports different ways of programming like procedural, object-oriented, functional, and so on. This makes C++ powerful as well as flexible.";
  string sort_desc = "";
  int length = 50, last_white_space = 0;
  for (size_t i = 0; i < length; i++)
  {
    char charector = desc[i];
    if (charector == ' ')
      last_white_space = i;
    sort_desc.push_back(charector);
  }
  if ((sort_desc.length() - 1) == last_white_space)
    sort_desc.pop_back();
  if (desc[length] != ' ')
    sort_desc.erase(last_white_space);
  cout << sort_desc << endl;
  return 0;
}
