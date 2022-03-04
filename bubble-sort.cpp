#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int no_of_item;
  bool swap_check = true;
  vector<int> numbers;

  cout << "Enter the amount of numbers to sort: ";
  cin >> no_of_item;
  cout << "Enter " << no_of_item << " numbers: ";

  // Input
  int num;
  for (int i = 0; i < no_of_item; i++)
  {
    cin >> num;
    numbers.push_back(num);
  }

  // Bubble Sorting
  for (int i = 0; (i < no_of_item) && (swap_check); i++)
  {
    swap_check = false;
    for (int j = 0; j < no_of_item - 1 - i; j++)
    {
      if (numbers[j] > numbers[j + 1])
      {
        swap_check = true;
        swap(numbers[j], numbers[j + 1]);
      }
    }
  }

  // Output
  cout << "\nSorted Array : ";
  for (int i = 0; i < numbers.size(); i++)
  {
    if (i != numbers.size() - 1)
    {
      cout << numbers[i] << ", ";
    }
    else
    {
      cout << numbers[i] << endl;
    }
  }
  return 0;
}