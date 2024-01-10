#include <iostream>
using namespace std;

int main()
{
    int arrSize;
    int counter = 1; // Initialize counter to 1 assuming all numbers exist
    cin >> arrSize;

    int arr[arrSize];

    for (int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < arrSize; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    for (int i = min + 1; i < max; i++)
    {
        bool exists = false;
        for (int j = 0; j < arrSize; j++)
        {
            if (arr[j] == i)
            {
                exists = true;
                break;
            }
        }
        if (!exists)
        {
            counter = 0;
            break;
        }
    }

    if (counter == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}