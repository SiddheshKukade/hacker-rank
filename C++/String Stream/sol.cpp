#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> output ;
    
    stringstream ss(str);
    char ch ;
    int i ;
    while(ss >> i){
        output.push_back(i);
        ss>>ch;
    } 
    return output;
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
