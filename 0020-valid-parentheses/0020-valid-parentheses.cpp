class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c : s){
            if(st.empty())
                st.push(c);
            else if(c==')'){
                if(st.top()!='(')return false;
                else st.pop();
            }
            else if(c=='}'){
                if(st.top()!='{')return false;
                else st.pop();
            }
            else if(c==']'){
                if(st.top()!='[')return false;
                else st.pop();
            }
            else
                st.push(c);
        }
        return st.empty();      
    }
};

// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> stack;
//         for(char c : s){
//             if(c == '(') {
//                 stack.push(')');
//             } else if(c == '{') {
//                 stack.push('}');
//             } else if(c == '[') {
//                 stack.push(']');
//             } else if(stack.empty() || stack.top() != c){
//                 return false;
//             } else {
//                 stack.pop();
//             }
//         }
//         return stack.empty();
//     }
// };