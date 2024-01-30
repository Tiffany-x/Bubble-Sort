#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int numbers[n] = {4, 13, 2, 1, 6};
    for (int iterat = 0; iterat < n-1; iterat++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    cout << "The sorted list is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << "\t";
    }
}
