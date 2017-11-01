class Solution {
public:
    string longestPalindrome(string s) {
        int len= s.length();
		int l=0;
		string finalResult;
		for(int i= 0 ; i< len ; i ++)
			for(int j = len-1 ; j > i ; j--)
				{
					string result="";
					bool check=true;
					if(s[i]==s[j])
						{
							for(int k = i;k<=j;k++)
								{
									result+=s[k];
									if(s[k]!=s[i+j-k])
										{
											check=false;
											break;
										}
								}
						if(check)
							if(j-i+1 > l)
							{
								l=j-i+1;
								finalResult=result;
								if(l>(len+1)/2)return finalResult;
								break;
							}
						}
				}
		if(l==0)return s;
		return finalResult;
    }
};