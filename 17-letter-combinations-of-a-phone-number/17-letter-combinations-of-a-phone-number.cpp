class Solution {
public:
    
void callfunc(string digits, vector<string>&ans,string output, int index, string mapping[])
{
    if(index>=digits.size())
    {
        ans.push_back(output);
        return;
    }
    
    int n=digits[index]-'0';
    string val=mapping[n];
    
    for(int i=0;i<val.size();i++)
    {
        output.push_back(val[i]);
        callfunc(digits,ans,output,index+1,mapping);
        output.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        
        vector<string>ans;
        string output;
        
        int index=0;
        
        if(digits.size()==0)
        {
            return ans;
        }
        
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        callfunc(digits,ans,output,index,mapping);
        
        return ans;        
    }
};