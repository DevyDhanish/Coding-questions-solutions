#include <iostream>
#include <cctype>

using std::tolower;

int main(){
    int n = 0;
    int x = 0;
    std::string s;

    std::cin >> n;
    for(int i=0;i<n;i++){
        std::cin >> s;

        int j = 0;
        while(j < s.size() && (tolower(s[0]) == 'x' || tolower(s[1]) == 'x' || tolower(s[2]) == 'x')){
            if(s[j] == '+'){
                x++;
                break; 
            }
            if(s[j] == '-'){
                x--;
                break;
            }
            j++;
        }
    }

    std::cout << x;
}