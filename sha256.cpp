#include <iostream>
#include <sstream>
#include <functional>
using namespace std;

string sha256(const string& str) {
    hash<string> hasher;
    ostringstream word;
    word << hasher(str);

    return word.str();
}

int main() {
    string input = "Little mermaid";
    string hash = sha256(input);
    cout << "Result of SHA-256 hashing method: " << hash << endl;

    return 0;
}
