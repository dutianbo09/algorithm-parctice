 #include <stdlib.h> 
class Solution {
public:
    vector<string> fizzBuzz(int n) {
		vector<string> s;
		for(int i=1;i<=n;i++)
			{
			if(i % 3 == 0 && i%5==0)
				s.push_back("FizzBuzz");
			if(i % 3 == 0 && i%5!=0)
				s.push_back ("Fizz");
			if(i % 5 == 0 && i%3!=0)
				s.push_back ("Buzz");
			if(i % 5 != 0 && i%3!=0)
				{
					string a = to_string(i);
					s.push_back (a);
				}	
			}
			return s;
    }
};