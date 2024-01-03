#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num;
    int size = pow(10,5);
	int arr[size];
	long long num1 = 0;
	long long num2 = 0;
	long long num3 = 0;

	cin>>num;

	for(int i=0 ; i<num ; i++)
	{
      cin>>arr[i];
	}

    for(int i=0 ; i<num ; i+=3)
	{
      num1 += arr[i];
	}

    for(int i=1 ; i<num ; i+=3)
	{
      num2 += arr[i];
	}

	for(int i=2 ; i<num ; i+=3)
	{
      num3 += arr[i];
	}

	cout<<num1<<" "<<num2<<" "<<num3<<endl;

}

