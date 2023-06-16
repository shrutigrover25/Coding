class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int fuel=0;
        int n=gas.size();
        int ans=0;
        
         int sumoffuel=0;
        int totalcost=0;
        
        for(int i=0;i<n;i++)
        {
            sumoffuel+=gas[i];
            totalcost+=cost[i];
        }
        
        if(sumoffuel<totalcost)
        {
            return -1;
        }
        
        
        
       for(int i=0;i<n;i++)
       {
           
           if(fuel<0)
           {
               ans=i;
               fuel=0;
           }
           
           fuel+=gas[i]-cost[i];
       }
        
        
        
        
        
        return ans;
        
    }
};