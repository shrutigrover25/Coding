class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        vector<int>right;
        stack<pair<int,int>>st;
        
        int n=heights.size();
        int pseudo=n;
        
        for(int i=n-1;i>=0;i--)
        {
            while(st.size()>0 && st.top().first >=heights[i])
                {
                    st.pop();
                }
                
            if(st.empty())
            {
                right.push_back(pseudo);
            }
            
            else 
            {
                right.push_back(st.top().second);
            }
            
            
            st.push({heights[i],i});
            
            
        }
        
        reverse(right.begin(),right.end());
        
        while(!st.empty())
        {
            st.pop();
        }
        
        vector<int>left;
        int p=-1;
        
        for(int i=0;i<n;i++)
        {
            
                while(st.size()>0 && st.top().first >=heights[i])
                {
                    st.pop();
                }
                
                if(st.empty())
            {
                left.push_back(p);
            }
            
            else
            {
                left.push_back(st.top().second);
            }
            
            
            st.push({heights[i],i});
            
            
        }
       
        vector<int>area;
        for(int i=0;i<n;i++)
        {
            area.push_back((right[i]-left[i]-1)*heights[i]);
            
        }
        
        int ans=*max_element(area.begin(),area.end());
        return ans;
    }
};