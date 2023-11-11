#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp;
    temp=b;
    b=a;
    a=temp;
};

int main() {
    int n;
    cout<<"Enter a order of matrix:";
    cin>>n;
    int b[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"b["<<i<<"]["<<j<<"]:";
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(b[i][j]==0 && b[i][j+1]!=0){
                swap(b[i][j],b[i][j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"b["<<i<<"]["<<j<<"]:"<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=b[i][i];
    }
    cout<<"primary diagonal sum is '"<<sum<<"'"<<endl;
    return 0;
}