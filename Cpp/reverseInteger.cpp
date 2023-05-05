#include <iostream>
#include <tuple>
#include <cmath>
#include <climits>

using std::tuple;
using std::cout;
using std::get;

class Solution{
public:
    int reverseInteger(int x) {
        int output = 0;
        while (x != 0) {
            int digit = x % 10;
            if (output > INT_MAX/10 || (output == INT_MAX/10 && digit > 7)) {
                return 0;
            }
            if (output < INT_MIN/10 || (output == INT_MIN/10 && digit < -8)) {
                return 0;
            }
            output = output * 10 + digit;
            x /= 10;
        }
        return output;
    }
};

int main(){
    Solution sol;
    cout << sol.reverseInteger(1534236469);

}
