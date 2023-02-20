
#include <iostream>
#include <cmath>

using namespace std;

void moveFunc(int matrica[200][200],int n){
    int i,j;
    for( i=0;i<n;i++){
        for( j=0;j<n;j++){
           if(i>j){

            int temp = matrica[i][j];
            matrica[i][j] = matrica[n-1][j];
            matrica[n-1][j] = temp;
    
        
           }

    }}
}
int main(){

    // cout << "Enter radius" <<endl;

    // double radius;
    // cin >> radius;
    
    // const double pi = 3.14;
    // double area = pi*pow(radius,2);

    // cout << area <<endl;

    // auto price = 99.99;

    // auto isVaild = false;
       
    //  cout <<isVaild;
    // int number {};

    // cout <<"Returns a zero bcs of {} "<<number <<endl;

    // int guess [10] ={1,2,3,4};

    // cout << guess[0];


    //// petlja

    // for(int i =0;i<8;i++){
    //     cout << "*" <<endl;
    // }

    int n;
int k;
    cout << "Unesite dimenziju"<<endl;
    cin >> n;
        cout << "Unesite dimenziju k"<<endl;
        cin >> k;

    int matrica[200][200];
int i,j;
    for( i =0;i<n;i++){
        for( j=0;j<n;j++){
            cin >> matrica[i][j];
        }

    }

     

for(i=0;i<k;i++){
    moveFunc(matrica,n);

}
     for( i =0;i<n;i++){
        for(j=0;j<n;j++){
            cout << matrica[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}


// [
//     1 2 3 4
//     5 6 7 8
//     9 10 11 12
//     13 14 15 16




// ]