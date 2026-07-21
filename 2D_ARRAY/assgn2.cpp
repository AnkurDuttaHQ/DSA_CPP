#include<iostream>
using namespace std;

void Sum(int (*mat)[3],int n,int m){
    int i =1;
    int sum=0;
    for(int j=0;j<m;j++){
        sum+=*(*(mat+i)+j); // *(mat+i) => 2nd row and add j value to iterate in the row the use  derefferencing opr to access all values
    }
    
    cout <<"The sum is:"<<sum<<endl;
}
int main (){
    int nums[3][3] = {{1,4,9},{11,4,3},{2,2,3}};
    Sum(nums,3,3);

}