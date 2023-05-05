#include <iostream>
#include <tuple>
#include <vector>
#include <cmath>

using std::vector;
using std::tuple;
using std::cout;
using std::get;

class Solution{
public:
	bool isHappy(int n){

		int sum = 0;
		int iterator = 6;

		while(sum != 1){
			sum = 0;			
			vector<int> x = getNums(100);

			for(int i : x){
				sum += i * i;
	    	}

			n = sum;

			if(iterator <= 0 && sum != 1){
				return false;
			}

			iterator--;
		}

		return true;

	}	

	vector<int> getNums(int n){
		vector<int> output;
		while(true){
			auto x = divmod(n, 10);
			if(get<0>(x) == 0 && get<1>(x) == 0) break;
			output.push_back(get<1>(x));
			n = get<0>(x);
		}
		return output;
	}

	tuple<int, int> divmod(int a, int b){
		return tuple<int, int> {a/b, a%b};
	}

	
};

int main(){
	Solution sol;
	auto ans = sol.isHappy(1);
	if(ans) cout << "It is a happy num";
	else cout << "It is not a happy num";
	return 0;
}
