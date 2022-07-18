#include <string>
#include <vector>
#include <algorithm> //알고리즘 헤더 사용
using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int idx =0; //Kim의 index 반환
    idx=find(seoul.begin(), seoul.end(), "Kim") - seoul.begin(); //find 함수를 통해 index 반환
    string str1 = to_string(idx); //int를 string으로
    answer="김서방은 "+str1+"에 있다"; //결과 양식 맞추기
    return answer;
}