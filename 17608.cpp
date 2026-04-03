#include<iostream>
using namespace std;

int main() {
    int top = 0; // 현재 가장 큰 막대기의 길이
    int cnt = 0; // 보이는 막대기의 수
    int num; // 막대기 총 개수

    cin >> num;

    int list[num];
    for (int i=0;i<num;i++){
        cin >> list[i];
    }

    for (int i=num-1;i>=0;i--){
        if(top<list[i]) {
            top = list[i];
            cnt++;
        }
    }
    cout << cnt << '\n';

    return 0;
}