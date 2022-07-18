#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    //initialize
    string answer = "";
    int count = 0;

    //Check all string elements
    for(auto i : s){
        if(count % 2 == 0 && islower(i))    //lower case
            answer += toupper(i);
        else if(count % 2 == 1 && isupper(i))   //upper case
            answer += tolower(i);
        else
            answer += i;   //else

        if(i == ' ')   //next word
            count = 0;
        else
            count++;
    }
    
    return answer;
}