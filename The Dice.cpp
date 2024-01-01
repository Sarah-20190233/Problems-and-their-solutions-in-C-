#include <iostream>
using namespace std;
int main() {
	string num;
	int NumOfGirls = 0;
	int invalidCases = 0;
	cin >> num;   

	if(num[(num.length())-1] == '6')
	{
		NumOfGirls = -1;
		cout<<NumOfGirls<<endl;	
	}

	else
	{
        for(int i=0 ; i<num.length() ; i++)
        {
            if(num[i] != '6')
            {
                NumOfGirls++;
            }
            else
            {
                invalidCases++;
            }


            if(invalidCases == num.length())
            {
                NumOfGirls = -1;
                break;
            }

        }
	cout<<NumOfGirls<<endl;	
    }
}