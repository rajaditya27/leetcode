class Solution {
public:
    int reverse(int x) {
        long n=0;
        while(x!=0){
            int rem=x%10;
            n=n*10+rem;
            x/=10;
        }
        if(n>INT_MAX || n<INT_MIN) return 0;
        return n; 
    }
};