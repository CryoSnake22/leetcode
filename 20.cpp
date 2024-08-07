#include <stack>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  bool isValid(string s) {
    stack<char> st;
    for (char c : s) {
      // we check if the current item is an opening bracket, if so we push it to
      // the stack to be matched with a closing bracket
      if (c == '(' || c == '{' || c == '[') {
        st.push(c);
      }
      // otherwise that means its a closing bracket so we must check if its
      // matched with a corresponding opening bracket. if it's not at the top of
      // the stack it means the parenthises is being closed too early which
      // would imply that this is an invalid input
      //
      // if the stack is empty, that means that the closing bracket appeared
      // before the opening bracket which makes the input also invalid
      else {
        if (st.empty() || (c == ')' && st.top() != '(') ||
            (c == '}' && st.top() != '{') || (c == ']' && st.top() != '[')) {
          return false;
        }
        // if we passed all the cases that means that the closing bracket does
        // have a corresponding opening bracket so we can pop the bracket from
        // the stack.
        st.pop();
      }
    }
    // we return true only if the stack is empty which means there are no more
    // opening brackets to be matched up
    return st.empty();
  }
};
