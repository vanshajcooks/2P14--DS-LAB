// Q1.
// #include <iostream>
// using namespace std;

// class Stack {
// private:
//     static const int maximumCapacity = 100;
//     int dataContainer[maximumCapacity];
//     int currentTop;

// public:
//     Stack() {
//         currentTop = -1;
//     }

//     void push(int value) {
//         if (isFull()) {
//             cout << "Error: Stack has reached maximum capacity!" << endl;
//             return;
//         }
//         currentTop++;
//         dataContainer[currentTop] = value;
//         cout << "Successfully added " << value << " to the stack." << endl;
//     }

//     void pop() {
//         if (isEmpty()) {
//             cout << "Error: Cannot remove from an empty stack!" << endl;
//             return;
//         }
//         cout << "Removed " << dataContainer[currentTop] << " from the stack." << endl;
//         currentTop--;
//     }

//     bool isEmpty() {
//         return currentTop == -1;
//     }

//     bool isFull() {
//         return currentTop == maximumCapacity - 1;
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "The stack contains no elements." << endl;
//             return;
//         }
//         cout << "Current stack contents (top to bottom): ";
//         for (int index = currentTop; index >= 0; index--) {
//             cout << dataContainer[index] << " ";
//         }
//         cout << endl;
//     }

//     void peek() {
//         if (isEmpty()) {
//             cout << "No elements available - stack is empty." << endl;
//             return;
//         }
//         cout << "Element at the top: " << dataContainer[currentTop] << endl;
//     }
// };

// int main() {
//     Stack containerStack;
//     int userChoice, inputValue;

//     while (true) {
//         cout << "\n--- Stack Management System ---" << endl;
//         cout << "1. Add Element (Push)" << endl;
//         cout << "2. Remove Element (Pop)" << endl;
//         cout << "3. Verify Empty Status" << endl;
//         cout << "4. Verify Full Status" << endl;
//         cout << "5. Show All Elements" << endl;
//         cout << "6. View Top Element" << endl;
//         cout << "7. Quit Program" << endl;
//         cout << "Select an option: ";
//         cin >> userChoice;

//         switch (userChoice) {
//             case 1:
//                 cout << "Enter value to add: ";
//                 cin >> inputValue;
//                 containerStack.push(inputValue);
//                 break;

//             case 2:
//                 containerStack.pop();
//                 break;

//             case 3:
//                 if (containerStack.isEmpty()) {
//                     cout << "Confirmed: Stack contains no elements." << endl;
//                 } else {
//                     cout << "Stack has elements present." << endl;
//                 }
//                 break;

//             case 4:
//                 if (containerStack.isFull()) {
//                     cout << "Confirmed: Stack has reached maximum capacity." << endl;
//                 } else {
//                     cout << "Stack has available space." << endl;
//                 }
//                 break;

//             case 5:
//                 containerStack.display();
//                 break;

//             case 6:
//                 containerStack.peek();
//                 break;

//             case 7:
//                 cout << "Terminating application..." << endl;
//                 return 0;

//             default:
//                 cout << "Invalid selection! Choose options 1-7 only." << endl;
//         }
//     }

//     return 0;
// }
// Q2.
// #include <iostream>
// using namespace std;

// void Reverse(char stack[], int top) {
//     int s = 0, e = top;
//     while (s < e) {
//         char t = stack[s];
//         stack[s] = stack[e];
//         stack[e] = t;
//         s++;
//         e--;
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     char stack[100];
//     int top = -1;

//     cout << "Enter a string: " << endl;
//     string str;
//     cin >> str;

//     for (char ch : str) 
//         stack[++top] = ch;

//     Reverse(stack, top);

//     cout << "Reversed string: ";
//     for (int i = 0; i <= top; i++) 
//         cout << stack[i];

//     return 0;
// }
// Q3.
// #include <iostream>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     char stack[100];
//     int top = -1;
//     cout << "Enter the Expression: " << endl;
//     string exp;
//     cin >> exp;

//     for (char ch : exp) {
//         if (ch == '(') {
//             stack[++top] = ch;   // push
//         } else if (ch == ')') {
//             if (top == -1) {     // no matching '('
//                 cout << "Unbalanced Expression\n";
//                 return 0;
//             }
//             top--; // pop
//         }
//     }

//     // After scanning: check if all '(' are matched
//     if (top == -1)
//         cout << "Balanced Expression\n";
//     else
//         cout << "Unbalanced Expression\n";

//     return 0;
// }

// Q4.
// #include <iostream>
// #include <cctype>
// using namespace std;
// #define N 100
// struct S{
//     char x[N];
//     int t=-1;
//     void p(char c){if(t<N-1)x[++t]=c;}
//     char o(){if(t>=0)return x[t--];return '\0';}
//     char k(){if(t>=0)return x[t];return '\0';}
//     bool e(){return t==-1;}
// };
// int pr(char c){
//     if(c=='^')return 3;
//     if(c=='*'||c=='/')return 2;
//     if(c=='+'||c=='-')return 1;
//     return -1;
// }
// bool r(char c){return c=='^';}
// string f(string s){
//     S z;
//     string y="";
//     for(char c:s){
//         if(isalnum(c))y+=c;
//         else if(c=='(')z.p(c);
//         else if(c==')'){
//             while(!z.e()&&z.k()!='(')y+=z.o();
//             z.o();
//         }
//         else{
//             while(!z.e()&&((pr(z.k())>pr(c))||(pr(z.k())==pr(c)&&!r(c)))&&z.k()!='(')y+=z.o();
//             z.p(c);
//         }
//     }
//     while(!z.e())y+=z.o();
//     return y;
// }
// int main(){
//     string s;
//     cin>>s;
//     cout<<f(s);
// }
// Q5.
// #include <iostream>
// #include <sstream>
// using namespace std;
// #define N 100
// struct S{
//     int x[N];
//     int t=-1;
//     void p(int c){if(t<N-1)x[++t]=c;}
//     int o(){if(t>=0)return x[t--];return 0;}
// };
// int f(string s){
//     S z;
//     string w;
//     stringstream ss(s);
//     while(ss>>w){
//         if(isdigit(w[0]))z.p(stoi(w));
//         else{
//             int b=z.o();
//             int a=z.o();
//             if(w[0]=='+')z.p(a+b);
//             else if(w[0]=='-')z.p(a-b);
//             else if(w[0]=='*')z.p(a*b);
//             else if(w[0]=='/')z.p(a/b);
//         }
//     }
//     return z.o();
// }
// int main(){
//     string s;
//     getline(cin,s);
//     cout<<f(s);
// }