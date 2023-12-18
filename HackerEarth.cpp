#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string word;

    int n, minGroup1, minGroup2;
    cin>>n;
    cin>>word;

    int a=0;
    int e=0;
    int h=0;
    int r=0;
    int c=0;
    int k=0;
    int t=0;

    for(int i=0 ; i<n ; i++)
    {
        if(word[i] == 'a')
        {
            a++;
        }
        else if(word[i] == 'e')
        {
            e++;
        }
        else if(word[i] == 'h')
        {
            h++;
        }
        else if(word[i] == 'r')
        {
            r++;
        }
        else if(word[i] == 'c')
        {
            c++;
        }
        else if(word[i] == 'k')
        {
            k++;
        }
        else if(word[i] == 't')
        {
            t++;
        }
    }

    minGroup2 = std::min(a, std::min(e, std::min(h, r)));
    minGroup1 = std::min(c, std::min(k, t));

    if(minGroup1 == 0 || minGroup2 == 0 || minGroup2<2)
    {
        cout<<0<<endl;
    }
    else if(minGroup1 < minGroup2)
    {
        if((minGroup2 / minGroup1) >= 2)
        {
            cout<<minGroup1<<endl;
        }
        else if((minGroup2 / minGroup1) < 2 && (minGroup2/2) < minGroup1 )
        {
            cout<<minGroup2/2<<endl;
        }
        else if((minGroup2 / minGroup1) < 2 && (minGroup2/2) > minGroup1 )
        {
            cout<<minGroup1<<endl;
        }

    }

    else if(minGroup1 > minGroup2)
    {
        if((minGroup1 / minGroup2) >= 2)
        {
            cout<<minGroup2<<endl;
        }

        else if((minGroup1 / minGroup2) < 2 && (minGroup2/2) < minGroup1 )
        {
            cout<<minGroup2/2<<endl;
        }

        else if((minGroup2 / minGroup1) < 2 && (minGroup2/2) > minGroup1 )
        {
            cout<<minGroup1<<endl;
        }

    }

    else if(minGroup1 == minGroup2)
    {
        cout<<minGroup1/minGroup2<<endl;
    }

    return 0;
}
