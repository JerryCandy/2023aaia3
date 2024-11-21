#include <iostream>
#include <vector>
#include <unordered_map> //c++11

using namespace std;
int main(){
    vector<int> a;
    unordered_map<int,int> m;
    m[999]=13;
    m[137]=7;
    cout << "m[999] ans " <<m[999]<<endl;
    cout << "m[137] ans " <<m[137]<<endl;
    return 0;
}
