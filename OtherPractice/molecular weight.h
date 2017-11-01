#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<vector>
#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char s[85];
	double  count[1000];
	int i=0;
	for( i = 0 ; i < n ; i ++)
	{
		scanf("%s",s);
		count[i]=0;
		int len = strlen(s);
		
		for(int j = 0 ;j<len;j++){
			if (isalpha(s[j]))
				{
					int num=1;
					if(isalpha(s[j+1])  || ((j+1) >= len ))
					
					{
						num=1;
						if(s[j]=='C') count[i]+=  12.01*num;
						if(s[j]=='N') count[i]+=  14.01*num;
						if(s[j]=='O') count[i]+=  16.00*num;
						if(s[j]=='H') count[i]+=  1.008*num;	
					}
					else
					{
						int k=1;
						while(  !isalpha(  s[j+k]  )  && j+k < len )
							{
								if(k==1)
									num=s[j+k]-'0';
								if(k>1)
									num=  num * 10 + (s[j+k]-'0');
								k++;
							}
						if(s[j]=='C') count[i]+=  12.01*num;
						if(s[j]=='N') count[i]+=  14.01*num;
						if(s[j]=='O') count[i]+=  16.00*num;
						if(s[j]=='H') count[i]+=  1.008*num;	
					}
				}
		
		}
	}
	for(int j = 0 ; j <n ; j++)
		cout << setiosflags(ios::fixed) << setprecision (3)<<count[j]<<endl;
	return 0;
}