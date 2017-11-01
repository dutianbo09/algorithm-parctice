#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char s[85];
	int  count[1000];
	for(int i = 0 ; i < n ; i ++)
	{
		scanf("%s",s);
		count[i]=0;
		int len = strlen(s);
		int check =0;
		for(int j = 0 ;j<len;j++){
			if (s[j]=='O')
				{
					check++;
					count[i]+=check;
				}
			else{
				check=0;				
			}
		}
	}
	for(int j = 0 ; j <n ; j++)
		cout<<count[j]<<endl;
	return 0;
}