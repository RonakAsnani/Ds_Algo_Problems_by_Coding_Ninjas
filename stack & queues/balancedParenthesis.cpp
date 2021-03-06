/*
Code : Balanced Parenthesis
Given a string expression, check if brackets present in the expression are balanced or not. Brackets are balanced if the bracket which opens last, closes first.
You need to return true if it is balanced, false otherwise.
Note: This problem was asked in initial rounds in Facebook
Sample Input 1 :
{ a + [ b+ (c + d)] + (e + f) }
Sample Output 1 :
true
Sample Input 2 :
{ a + [ b - c } ]
Sample Output 2 :
false*/

#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    string str;
    cin>>str;
    stack<char> s;
    for(int i=0;i<str.length();i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['|| str[i] == ')'|| str[i] == '}'|| str[i] == ']'){

            if(s.empty()){
                s.push(str[i]);
            }else{
                if(s.top() == '(' && str[i] == ')'){
                    s.pop();
                }else if(s.top() == '{' && str[i] == '}'){
                    s.pop();
                }else if(s.top() == '[' && str[i] == ']'){
                    s.pop();
                }else{
                    s.push(str[i]);
                }
            }
        }
    }
    if(s.empty()){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}