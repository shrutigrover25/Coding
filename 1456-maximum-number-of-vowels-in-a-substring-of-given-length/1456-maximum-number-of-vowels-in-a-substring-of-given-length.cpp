class Solution {
public:
    int maxVowels(string s, int k) {
        
        int n=s.length();
	int maxii=0;
	
	int i=0;
	int j=0;
	int count=0;
	
	for(;i<k;i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i')
		{
			count++;
		}
	}
	
	 
	
	
	maxii=max(count,maxii);
	
	while(i<n)
	{
		
		if(s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='a')
		{
			count-=1;
			
			
		}
		
	    if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i')
		{
			count+=1;
			
			
		}
		
		
		i++;
		j++;
		
		
		
		
		maxii=max(count,maxii);
		
		
	}
	
	return maxii;
        
    }
};