class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=s.length();
        int result = 0 ;
        
        for(int i = 0 ; i <len ; i ++ )
			{
			    if(len-i==1)
			        {
			            result=1;
			        }
			    bool check[256];
			    for(int j = 0; j <256 ; j ++)
		        	{
				    check[j]=true;
		        	}
				int current=0;
				while(check[s[i+current]] == true)
					{
						check[s[i+current]]=false;
						current++;
					}
			
				if(current>=result)
					result=current;
			}
		return result;
    }
};