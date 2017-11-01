#include<math.h>
#include<string.h>
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> result(num+1);
		result[0]=0;
		result[1]=1;
		for(int i = 2 ; i<=num ; i++)
			{
				int o=floor(log(i)/log(2));//按对数分组
				result[i]=1+result[i-pow(2,o)];//结果为上一组+1
			}	
		return result;
    }
};