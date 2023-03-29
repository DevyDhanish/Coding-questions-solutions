#include <iostream>
#include <tuple>
#include <cmath>

using std::tuple;
using std::cout;
using std::get;

class Solution{
public:
    long reverseInteger(int x){
        long output = 0;
        while(true){
            tuple<int,int> nums = divmod(x);
            if(get<1>(nums) == 0 && get<0>(nums) == 0) break;
            if(output <= pow(2, 31) && output >= pow(-2, 31)){
                output = output * 10 + get<1>(nums);
            }
            else{return 0;}
            x = get<0>(nums);
        } 
        
        if(output < 0) output * -1;

        return output;
    }
private:
    tuple<int, int> divmod(int x){
        return tuple<int, int>{x/10, x%10};
    }
};

int main(){
    Solution sol;
    cout << sol.reverseInteger(-132);

}
