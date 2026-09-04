class Solution {
public:

    int fun(int n){
        int sum = 0;
        while(n>0){
            int lastdigit = n%10;
            n = n/10;
            sum = sum + lastdigit*lastdigit;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        while(fast!=1){
            slow = fun(slow);
            fast = fun(fun(fast));
            
            if(slow==fast && fast!=1){
                return false;

            }
        }
        fast = 1;
        return true;
        
    }
};