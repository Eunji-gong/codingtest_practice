#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int arr[14] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
    string date[8] = { "FRI","SAT" ,"SUN","MON","TUE","WED","THU" };
    int sum = 0;
    for (int i = 0; i < a; i++)
        sum += arr[i];
    sum += b;
    sum--;
    sum %= 7;
    answer += date[sum];
    return answer;
}

int main() {
    int a = 5, b = 24;
    cout << solution(a, b) << endl;
    return 0;
}