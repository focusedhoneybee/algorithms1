#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,6,31,21,34,22};
    int len = (sizeof(a)/sizeof(*a));
    int i;
    for(int j=1; j<len; j++){
        int key = a[j];
        i = j-1;
        while( i>-1 && a[i] < key){
            a[i+1] = a[i];
            i = i-1;
        }
        a[i+1] = key;
    }
    for(i=0; i<len; i++)
        cout << a[i] << " ";
    return 0;
}