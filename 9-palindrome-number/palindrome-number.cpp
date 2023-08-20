class Solution {
public:
    bool isPalindrome(int x) {
        long long int  rev=0;
        long long int n=x;
        if(x<0){
            return false;
        }
        while(x!=0){
        int temp=x%10;
        rev=rev*10+temp;
        x=x/10;
        }
        cout<<rev<<endl;
    if(n==rev){ 
        return true;
    }
    else  {return false;
    }
    }
};