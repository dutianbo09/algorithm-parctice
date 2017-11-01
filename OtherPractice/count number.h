#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<vector>
#include<iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int shu;
	int s[5000];
	
	double  count[5000][15];
	int i=0;
	for( i = 0 ; i < n ; i ++)
	{
		cin>>shu;
		
		for(int l = 0 ;l<10;l++)
		count[i][l]=0;
				
		for(int j = 0 ;j<shu;j++)
		{
			int num=j+1;
			int w=0;
			while(num)
			{
				num /= 10;
				w++;
			}
		
			num=j+1;
			while(w>0)
			{
				int zhe = num / pow(10,w-1);
				count[i][zhe]++;
				num=num-zhe*pow(10,w-1);
				w--;
			}
		}
	}
	for(i = 0 ; i < n ; i ++)
	{
		for(int k = 0 ; k <= 9 ; k++)
		{
			if(k==0)
				cout<<count[i][k];
			if(k>0)
				cout<<" "<<count[i][k];
		}
		cout<<endl;
	}
	return 0;
}