#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
ifstream fin("input.txt");
ofstream fout("out.dat");
string line;

while(getline(fin, line)) {
    stringstream ss(line);
    string word, result;
    while(ss >> word) {
        result += word + " ";
    }
    fout << result << "\n";
}
}