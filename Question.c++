// Ques 1: Write a function int stringLength(const std::string &str) that returns the length of a given string.
//Test your function with various strings in the main() function.
// Sample Input:- str1 = "Hello, World!"
// Output:- 13

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str.length();
    return 0;
}





// Ques 2: Implement a function int countCharacter(const std::string &str, char ch) that counts 
//the number of occurrences of a specific character in a given string. Test the function with 
//different strings and characters.
// Sample Input:- String ="Hello, World!"
// character=’l’
// Output:- 3

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='l'){
            count++;
        }
    }
    cout<<count;
    return 0;
}



// Ques 3: Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2)
// that concatenates two strings and returns the result. Test the function with various input strings.
// Sample Input : - str1 = "Hello, "
// str2 = "World!"
// Sample Output :- "Hello, World!"

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string str1;
    getline(cin,str1);
    cout<<str+str1;
    return 0;
}

