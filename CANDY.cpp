#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	while(true)
	{
		int n;
		cin>>n;
		if(n==-1)
		break;
		vector <int> candy(n);
		int i;
		long long sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>candy[i];
			sum=sum+candy[i];
		
		}
		if(sum%n==0)
		{
			long long avg=sum/n;
			long long r=0;
			for(int i=0;i<n;i++)
			{
				if(candy[i]>avg)
				{
					r=r+candy[i]-avg;
				}
			}
			cout<<r<<endl;
		}
		
		else
		{
			cout<<"-1"<<endl;
		}
	}
	
	
	
 
 
	return 0;
} 