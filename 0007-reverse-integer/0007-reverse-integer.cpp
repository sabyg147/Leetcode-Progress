class Solution {
public:
    int reverse(int x) {
        long long revN=0;
        while(x!=0){
            int lastdigit = x % 10;
            revN= (revN*10)+lastdigit;
            x = x /10;
        }
        if (revN>INT_MAX || revN < INT_MIN)
        return 0 ;
        
        return (int)revN;
    }
};