class Solution {
public:
    int fib(int n) {

        // Recursion 


        // base case
        if(n==0)
            return 0 ;
        if(n==1)
            return 1;

        // function inside function 1
        int ans1 = fib(n-1);

        // function inside function 2
        int ans2 = fib(n-2);


        return ans1 + ans2 ; 

        
    }
};