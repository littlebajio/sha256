#include <iostream>
#include <sstream>
#include <functional>
using namespace std;

string sha256(const string& str) {
    hash<string> hasher;
    ostringstream oss;
    oss << hasher(str);

    return oss.str();
}

int main() {
    string input = "Anel is the genius";
    string hash = sha256(input);
    cout << "Result of SHA-256 hashing method: " << hash << endl;

    return 0;
}