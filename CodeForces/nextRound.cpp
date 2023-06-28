#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::cin;


int main(){
    vector<int> scores;
    int score;
    int minimumScoreIndex = 0;
    int totalParticipants = 0;

    cin >> totalParticipants >> minimumScoreIndex;
    
    while(cin >> score){
        scores.push_back(score);

        if(cin.peek() == '\n' || cin.peek() == EOF){
            break;
        }
    }


    int num_passed = 0;

    for(int i=0;i<totalParticipants;i++){
        if(scores[i] >= scores[minimumScoreIndex] && scores[i] > 0){
            num_passed++;
        }
    }

    cout << num_passed << "\n";
    return 0;
}