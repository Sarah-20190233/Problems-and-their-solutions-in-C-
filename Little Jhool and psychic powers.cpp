#include <iostream>

using namespace std;

int main()
{
    string word;
    int counter1=0;
    int counter2=0;

    cin>>word;

    for(int i=0 ; i<word.length() ; i++)
    {
        if(word[i] == word[i+1] && word[i] == '1')
        {
            counter1++;
        }
        else if(word[i] != word[i+1] && word[i] == '1')
        {
            if(counter1 > 0  && counter1 < 6)
            {
                counter1--;
            }

        }

        if(word[i] == word[i+1] && word[i] == '0')
        {
            counter2++;
        }
        else if(word[i] != word[i+1] && word[i] == '0')

        {
            if(counter2 > 0 && counter2 < 6)
            {
                counter2--;
            }

        }
    }

    if(counter1 >= 6 || counter2 >= 6)
    {
        cout<<"Sorry, sorry!"<<endl;
    }
    else
    {
        cout<<"Good luck!"<<endl;
    }
    return 0;
}
