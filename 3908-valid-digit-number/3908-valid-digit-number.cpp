class Solution {
public:
    bool validDigit(int n, int x) {
        int c=0;
        while(n>9){
            if(n%10==x) c++;
            n/=10;
        }
        if(c>=1 && n!=x) return true;
        return false;
    }
};