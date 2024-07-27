#include <iostream>
using namespace std;

void printShiftedTriangle(int n,int m, char symbol){
    for(int i=1;i<=n;i++){
        //leading space
        for(int j=0;j<m+(n-i);++j){
            cout<<" ";
        }
        //printing character
        for(int j=0;j<2*i-1;j++){
            cout<<symbol;
        }
        cout<<endl;
    }
}
 void printPineTree(int n,char symbol){
    for(int i=1;i<=n;++i){
        printShiftedTriangle(i+1,n-i,symbol);
    }
 }
int main(){
    int numtriangles;
    char symbol;
    cout<<"Enter the number of triangles:";
    cin>>numtriangles;
    cout<<"Enter the symbol:";
    cin>>symbol;
    printPineTree(numtriangles,symbol);
    return 0;
}
