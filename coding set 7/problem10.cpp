#include <iostream>
#include <exception>
using namespace std;

class NotTxtException : public exception {
public:
    const char* what() const noexcept {
        return "Not txt";
    }
};

int main() {
    string filename;
    cin >> filename;

    try {
        if (filename.size() < 4 ||
            filename.substr(filename.size() - 4) != ".txt") {
            throw NotTxtException();
        }
        cout << "OK";
    }
    catch (NotTxtException& e) {
        cout << e.what();
    }

    return 0;
}