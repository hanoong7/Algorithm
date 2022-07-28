#include <string>
#include <vector>
#include <algorithm> // 정렬을 위한 sort 매서드를 포함한 헤더파일

using namespace std; 

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
  
    for(int i = 0; i < commands.size(); i ++){
        vector<int> temp(0); // array 벡터는 반복 사용되므로, 임시 벡터 선언 후 초기화
        int num = commands[i][1] - commands[i][0] + 1; // 새 vector에 할당할 원소 갯수

        for(int j = 0; j < num; j++){
            temp.push_back(array[j + commands[i][0] - 1]);
        }

        sort(temp.begin(), temp.end());
        answer.push_back(temp[commands[i][2] - 1]);
    }
    
    return answer;
    
}