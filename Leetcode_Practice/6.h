#include<math.h>
class Solution {
public:
    string convert(string s, int numRows) {
	int  n = numRows;
	int len = s.length();
	if(n==1) return s;
	string result = "";
	bool a[10000]={false};
	for(int i = 1; i <=len ; i++)
		a[i]=true;
	int p = ceil(len *1.0 / (2*n -2 ));
		for(int i = 1;i<=p;i++)
			{
				if(a[(2*n-2)*(i-1)+1])
						result+=s[(2*n-2)*(i-1)+1-1];
			}
		for(int i=2;i<=n-1;i++)
			for(int j=1;j<=p;j++)
				{
					if(a[(2*n-2)*(j-1)+i])
						result+=s[(2*n-2)*(j-1)+i-1];
					if(a[2*( (2*n-2)*(j-1)+n  ) - ((2*n-2)*(j-1)+i) ])
						result+=s[2*( (2*n-2)*(j-1)+n  )
						- ((2*n-2)*(j-1)+i)-1 ];
				}
		for(int i = 1;i<=p;i++)
			{
				if(a[(2*n-2)*(i-1)+n])
						result+=s[(2*n-2)*(i-1)+n-1];
			}
		return result;
    }	
};