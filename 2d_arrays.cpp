#include<iostream>
using namespace std;

void print(int**arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(){
    int n,m;
    cin>>n>>m;

    int** arr = new int*[n];
    //making pointers into arrays
    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }

    //taking input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    cout<<endl;
    print(arr,n);

    //freeing the memory
    for(int i=0;i<n;i++){
        delete []arr[i]; //deleteling the rows other than the starting pointer.
    }

    delete []arr;

}
