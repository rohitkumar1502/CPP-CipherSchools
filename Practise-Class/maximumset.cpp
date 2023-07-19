#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of digits: ";
    cin >> n;

    set<int> digits;
    cout << "Enter the digits: ";
    for (int i = 0; i < n; i++)
    {
        int digit;
        cin >> digit;
        digits.insert(digit);
    }

    set<int> sums;
    for (auto it1 = digits.begin(); it1 != digits.end(); ++it1) //find the first iterator, second itertor till end and insert into sum set 
    {
        for (auto it2 = next(it1); it2 != digits.end(); ++it2)
        {
            sums.insert(*it1 + *it2);
        }
    }

    int maxSum = *sums.rbegin(); // Get the maximum value from the set

    cout << "The maximum sum of pairs (a+b) is: " << maxSum << endl;

    return 0;
}
