
#include <iostream>
#include <cmath>

using namespace std;
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

    cout << "Unesite dimenziju"<<endl;
    cin >> n;
    int matrica[200][200];
int i,j,k;
    for( i =0;i<n;i++){
        for( j=0;j<n;j++){
            cin >> matrica[i][j];
        }

    }
     for( i=0;i<n;i++){
        for( j=0;j<n;j++){
           if(i>j){

              for(int k=0;k<n-i;k+=3){

                if(k>j){
                cout <<i<<"nes"<< endl;
                int temp = matrica[k][j];
                                cout <<temp<<"temp"<< endl;

                matrica[k][j] = matrica[k+1][j];
                                cout <<matrica[k][j]<<"[k][j]"<< endl;

                matrica[k+1][j] = temp;
                }
                 

              }

           }else{
           }
        }
        cout << endl;

    }

     for(i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << matrica[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
} 