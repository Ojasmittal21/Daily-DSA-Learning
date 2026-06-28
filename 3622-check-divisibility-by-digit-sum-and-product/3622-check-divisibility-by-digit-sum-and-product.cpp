class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,prod=1,temp=n;
        while(temp>0){
            int rem=temp%10;
            sum+=rem;
            prod*=rem;
            temp/=10;
        }
        if(n%(prod+sum)==0) return true;
        else return false;
    }
};