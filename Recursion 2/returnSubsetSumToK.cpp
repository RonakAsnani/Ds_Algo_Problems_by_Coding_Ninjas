/*Problem Statement: Return subsets sum to K
Problem Level: HARD
Problem Description:
Given an array A of size n and an integer K, return all subsets of A which sum to K.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important.
Input format :
Line 1 : Integer n, Size of input array
Line 2 : Array elements separated by space
Line 3 : K

Constraints :
1 <= n <= 20

Sample Input :
9 
5 12 3 17 1 18 15 3 17 
6

Sample Output :
3 3
5 1*/


#include<iostream>
using namespace std;

int sumSubset(int* a,int n,int** output,int k){
    
}

int main(){
    int n;
    cin>>n;
    int* a= new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int** output = new int*[100];
    for(int i=0;i<10;i++){
        output[i] = new int[100];
    }
    int count = sumSubset(a,n,output,k);
    

    
    
    return 0;
}