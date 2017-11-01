#include<iostream>
using namespace std;
int main()
{
	int a[100005];
	int i ;
	for(i =1;i<=100000;i++)
		{
			int count=i;
			int n = i;
			while(n>0)
			{
				count += (n - n / 10 *10);
				n /= 10;
			}
			a[i]=count;
		}
	int t;
	cin>>t;
	bool b = false;
	for (i = 1 ; i<=100000 ; i++){
		if(a[i]==t){
			cout<<i;b=true;break;}
	}
	if(b == false)
		cout<<0;
	return 0;
}