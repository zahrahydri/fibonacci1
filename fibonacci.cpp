#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int *arr= new int(n);
    arr[0]=1;

    for(int i=0; i<=n; i++){
        if(i<=2){
            arr[i] = 1;
        }
        else{
            arr[i]= arr[i-2] + arr[i-1];  
        }
        cout<< arr[i]<<endl;
    }
    delete [] arr;
}