#include <iostream>
using namespace std;

int main() {
	int arraySize;

	cin >> arraySize;

	long long int arr[arraySize];
	long long sum = 0;

	for(int i=0 ; i<arraySize ; i++)
    {
        cin>>arr[i];
    }


    for(int i=0 ; i<arraySize ; i++)
    {
        sum += arr[i];
    }

    cout<<sum<<endl;
}
