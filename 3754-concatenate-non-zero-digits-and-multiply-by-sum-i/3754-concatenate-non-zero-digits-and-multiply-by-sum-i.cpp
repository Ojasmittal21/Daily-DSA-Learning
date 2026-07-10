class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        string s="";
        string s1=to_string(n);
        for(int i=0;i<s1.size();i++){
            if(s1[i]!='0') s+=s1[i];
        }
        long long x=stoi(s);
        long long temp=x;
        int sum=0;
        while(temp>0){
            sum+=temp%10;
            temp/=10;
        }
        return sum*x;
    }
};