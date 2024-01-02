#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string word;

    const int maxSize = 2 * pow(10, 5);
    string arr[maxSize];

    int c = 0;
    int j = 0;
    cin>>word;

    for(int i=0 ; i<word.length() ; i++)
    {
        if(word[i] == word[i+1])
        {
            arr[j] = word.substr(c, (i-c)+1);
            c += arr[j].length();
            j++;
        }
        else if(word[i] != word[i+1] && (i == word.length() || (i+1) == word.length() ))
        {
            arr[j] = word.substr(c, (i-c)+1);
        }
    }
    int maxLength;

    for(int i=0 ; i<word.length() ; i++)
    {
        if(arr[0].length() < arr[i].length())
        {
            arr[0] = arr[i];
        }
    }

    cout<<arr[0].length()<<endl;
    return 0;
}
