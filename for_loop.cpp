#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main() {
    int n = 0;
    int m=0,i=0;
    string dizi[] = { "one","two","three","four","five","six","seven","eight","nine" };
    
    scanf("%d", &n);
    scanf("%d", &m);
    for(i=n; i<=m; i++){
        if (i < 10) {
            cout << dizi[i-1]<<endl;
        
    }
        else {
            if (i % 2 == 0) {
                cout<<"even"<<endl;
       
            }
            else {
                cout<<"odd"<<endl;
            
            }
        
    }
    }

    return 0;
}
