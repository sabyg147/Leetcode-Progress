class Solution {
public:
    bool isPalindrome(int x) {

        if ( x < 0)
        return false;

        long long  revN = 0 ;
        int duplicate = x;
        while(x>0){
            int last_digit = x % 10;
            revN = (revN * 10) + last_digit;
            x = x / 10;
        }
        
        
        return revN==duplicate;
        
        
    }
};