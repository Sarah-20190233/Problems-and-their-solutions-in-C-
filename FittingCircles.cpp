#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num; // Reading input from STDIN

    for (int i = 0; i < num; i++)
    {
        int a, b;
        cin >> a >> b;

        int diameter = min(a, b);
        int length = max(a, b);

        int numCircles = length / diameter;
        cout << numCircles << endl;
    }

    return 0;
}