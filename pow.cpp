#include <iostream>
#include <cmath>

using std::cout;
using std::log;
using std::exp;

class Solution {
public:
    double antilog(double x, long long n){
        return exp(n * log(x));
    }
    double myPow(double x, long long n) {
        if(x==1) return 1;
        
        if(n==0) return 1;

        if(n < 0){
            return myPow(1/x, n*-1);
        }

        if(n > 0){
            if(x < 0){
                if(n%2==0){
                    return antilog(x * -1,n);
                }
                else{
                    return antilog(x*-1, n) * -1;
                }
            }
            return antilog(x,n);
        }
    }
};

int main(){
    Solution sol;
    cout << sol.myPow(2,10);
}