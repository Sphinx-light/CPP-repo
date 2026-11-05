// /*

// INFIX -> POSTFIX

// If operand - move to output (Postfix Expression)

// if opening bracket - move to stack 

// if closing bracket 
// - Pop operators until " ( " is found.
// - Remove " ( " 

// if incoming operator 
//  - stack empty - move to stack 
//  - top is opening bracket - move to stack
//  - lower / equal precedence than stack top - pop from stack & move to output
//  - higher precedence than stack top - push element into the stack

// and then push the operator into the stack


// After the entire expression has been scanned:
// Pop everything remaining in the stack.
// That gives your postfix expression.
// */





// #include <iostream>
// #include <stack>
// #include <string>
// #include <cctype>

// using namespace std;

// int precedence(char op)
// {
//     if (op == '^')
//         return 3;

//     if (op == '*' || op == '/' || op == '%')
//         return 2;

//     if (op == '+' || op == '-')
//         return 1;

//     return 0;
// }

// bool isOperator(char ch)
// {
//     return ch == '+' ||
//            ch == '-' ||
//            ch == '*' ||
//            ch == '/' ||
//            ch == '%' ||
//            ch == '^';
// }

// string infixToPostfix(string infix)
// {
//     stack<char> st;
//     string postfix = "";

//     for(int i = 0; i< infix.length();i++)
//     // for (char ch : infix)  for each loop
//     {
//         char ch = infix[i];
//         // 1. Operand
//         if (isalnum(ch))
//         {
//             postfix += ch;
//         }

//         // 2. Opening parenthesis
//         else if (ch == '(')
//         {
//             st.push(ch);
//         }

//         // 3. Closing parenthesis
//         else if (ch == ')')
//         {
//             while (!st.empty() && st.top() != '(')
//             {
//                 postfix += st.top();
//                 st.pop();
//             }

//             // Remove '('
//             if (!st.empty())
//             {
//                 st.pop();
//             }
//         }

//         // 4. Operator
//         else if (isOperator(ch))
//         {
//             while (!st.empty() &&
//                    st.top() != '(' &&
//                    precedence(st.top()) >= precedence(ch))
//             {
//                 postfix += st.top();
//                 st.pop();
//             }

//             st.push(ch);
//         }
//     }

//     // 5. Pop remaining operators
//     while (!st.empty())
//     {
//         postfix += st.top();
//         st.pop();
//     }

//     return postfix;
// }

// int main()
// {
//     string infix;

//     cout << "Enter infix expression: ";
//     cin >> infix;

//     cout << "Postfix expression: "
//          << infixToPostfix(infix);

//     return 0;
// }


#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("data.txt");
    // File operations
    file.close();
    return 0;
}