#include<iostream>
using namespace std;
int main(){
    int arr[100],n;
    cout<<"enter no. of elements:";
    cin>>n;
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}