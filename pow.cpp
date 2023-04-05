#include <iostream>

using std::cout;

class Solution {
public:
    double myPow(double x, long long n) {
        if(x==1) return 1;
        
        if(n==0) return 1;

        if(n < 0){
            return myPow(1/x, n*-1);
        }

        if(n > 0){
            double total = 1.0;
            int i = 0;
            while(i < n){
                total = total * x;
                i ++;
            }
            return total;
        }
    }
};

int main(){
    Solution sol;
    cout << sol.myPow(1.00000,2147483647);
}