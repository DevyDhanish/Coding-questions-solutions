#include <iostream>
#include <string>

using std::string;
using std::to_string;
using std::cin;
using std::cout;

int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string output = "";
        string s = "";
        cin >> s;


        if(s.size() > 10)
        {
            output = output + s[0] + to_string(s.size() - 2) + s[s.size() - 1];
            cout << output << "\n";
        }
        else{
            cout << s << "\n";
        }
    }

    return 0;
}