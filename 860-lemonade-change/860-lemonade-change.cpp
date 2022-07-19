class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count5=0,count10=0,count20=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                count5++;
            }
            else if(bills[i]==10){
                if(count5<1){
                    return false;
                }
                else{
                    count10++;
                    count5--;
                }
            }
            else{
                if(count5<3 && count10<1){
                    return false;
                }
                else if(count5<1 && count10>=1){
                    return false;
                }
                else if(count5>=1 && count10>=1){
                    count5--;
                    count10--;
                    count20++;
                }
                else if(count10<1 && count5>=3){
                    count5-=3;
                }
            }
        }
        return true;
    }
};