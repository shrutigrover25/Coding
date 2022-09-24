class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        int n=tokens.size();
        
        sort(tokens.begin(),tokens.end());
        
        int i=0;
        int j=n-1;
        
        int score=0;
        
        while(i<=j)
        {
            while(i<=j && power>=tokens[i])
            {
                score++;
                power-=tokens[i];
                i++;
            }
        
        
        if(i>=j || score<=0)
        {
            break;
        }
        
        score--;
        power+=tokens[j];
        j--;
            
        }
        
    
    
    return score;
    }
};