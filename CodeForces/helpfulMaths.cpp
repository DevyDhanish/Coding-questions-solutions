#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;

int main(){
    string input = "";
    vector<int> nums;

    while(cin >> input){
        if(cin.peek() == '\n') break;
    }

    for(int i=0;i<input.size();i++){
        if(input[i] != '+'){
            nums.push_back(int(input[i]) - 48);
        }
    }

    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if( nums[i] > nums[j] ){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    for(int i=0;i<nums.size();i++){
        (i != nums.size() - 1)? cout << nums[i] << '+' : cout << nums[i];
    }
    cout << "\n";
    return 0;
}