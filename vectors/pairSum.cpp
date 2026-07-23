#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int>arr,int target){
    int st = 0 , end = arr.size() -1;
    int currSum =0;
    vector<int> ans;
    while(st<end){ // pair should be unique values
        currSum = arr[st] + arr[end];
        if(currSum == target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }else if(currSum > target){
            end --;
        }else{
            st ++;
        }

    }

    return ans;
    
}

int main(){
    vector<int> vec1 = {1, 2, 3, 4, 5};

    int target = 9;
    vector<int> ans = pairSum(vec1,target);
    cout<<"The pair sum idx is: "<<"("<<ans[0]<<','<<ans[1]<<')' ;
}