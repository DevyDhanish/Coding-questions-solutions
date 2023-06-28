#include <iostream>

using std::cin;
using std::cout;

int main(){
    int n = 0;
    int p = 0, v = 0, t = 0;

    cin >> n;
    int n_s = 0;
    for(int i=0;i<n;i++){

        cin >> p >> v >> t;

        if((p+v+t) > 1){
            n_s++;
        }
    }

    cout << n_s;
    
    return 0;
}