#include<math.h>
class Solution {
public:
    int reverse(int x) {
        int now,result=0;
		if(x>0)now = x;
		else now = -x;
		int d=0;
		while(now)
			{
				now /= 10;
				d++;
			}
		if(x>0)now = x;
		else now = -x;
		for(int i = 0 ;i<d;i++)
			{
				int current=now / pow(10,d-1-i);
				result+= current * pow(10,i);
				now = now % pow(10,d-1-i);
			}
		if(x>0)return result;
		else return result*-1;
    }
};