// Day - 24 Questions 
// Ques 1 . You are given a binary array. Your task is to find the maximum number of consecutive ones in array.
// Input :- arr :[1,1,0,1,1,1]
// Output: 3.
// Take all the required input from user.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int maxSum=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 1 ){
            count++;
        }else{
            maxSum=max(maxSum,count);
            count=0;
        }
    }
    cout<<max(maxSum,count);
    return 0;
}
