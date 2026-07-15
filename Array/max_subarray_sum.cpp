// max subarray sum using brute force approach
#include <iostream>
#include <climits>
using namespace std;

int calculate_sum(int arr[],int n){
    int max_sum= INT_MIN; // initialize max_sum to the smallest integer value
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int sum=0;
            for(int i=start;i<=end;i++){
                sum+=arr[i]; // calculate the sum of subarray from start to end index
                max_sum=max(max_sum,sum); // update max_sum if current sum is greater
            }
        
        }
    }
    return max_sum; // return the maximum subarray sum found
}

int calculate_sum_optimized(int arr[],int n){
    int max_sum= INT_MIN; // initialize max_sum to the smallest integer value
    for(int start=0;start<n;start++){ // if start = 2 then istead of calculating sum from 2 to 4 again we can use the previous sum from 2 to 3 and add arr[4] to it
        int sum=0;
        for(int end=start;end<n;end++){
            sum+=arr[end]; // 
            max_sum=max(max_sum,sum); // update max_sum if current sum is greater
        
        }
    }
    return max_sum; // return the maximum subarray sum found
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Maximum subarray sum is "<<calculate_sum_optimized(arr,n)<<endl; // print the maximum subarray sum
}