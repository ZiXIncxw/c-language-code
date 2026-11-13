#include <iostream>
#include <vector> 
using namespace std;

int main()
{
	const int N = 2e6+10;
	int n,m;
	cin>>n>>m;
	vector<int> arr(N);
	for(int i = 1;i<=n;i++)
	{
		cin>>arr[i];
	}
	while(m--)
	{
		int t; 
		cin>>t;
		cout<<arr[t]<<endl;
	}
	
	return 0;
}
