#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;  
    
    cout.precision(10); // 소수점 몇자리까지 나타내기
    cout << a/(double)b << '\n';
}