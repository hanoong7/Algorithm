#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    vector<int> temp(numbers);
    for(int i : numbers){
        for(int j = 1; j < temp.size(); j++){
            answer.push_back(i + temp[j]);
        }
        temp.erase(temp.begin() + 0);
    }
    
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    
    return answer;
}