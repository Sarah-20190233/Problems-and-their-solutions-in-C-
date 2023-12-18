#include <iostream>
using namespace std;
int main()
{
    string num;
    int k;
    cin >> num;
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        if (num[i] != '9')
        {
            num[i] = '9';
        }
        else
        {
            k++;
        }
    }

    cout << num << endl;
}