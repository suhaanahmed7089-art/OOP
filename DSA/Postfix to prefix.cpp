#include <iostream>
#include <stack>
using namespace std;

int main() {
    string postfix;
    stack<string> s;

    cout << "Enter postfix expression: ";
    cin >> postfix;

    for (char ch : postfix) {
        if (isalnum(ch)) {
            s.push(string(1, ch));
        }
        else {
            string b = s.top(); 
            s.pop();
            string a = s.top();  
            s.pop();

            string result = ch + a + b;
            s.push(result);
        }
    }

    cout << "Prefix expression: " << s.top();

    return 0;
}
