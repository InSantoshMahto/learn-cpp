#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec_nums;

  for (size_t i = 0; i < 99; i++)
  {
    vec_nums.push_back(i);
  }
  cout << "Size of Vector:- " << vec_nums.size();

  cout << endl;
  return 0;
}