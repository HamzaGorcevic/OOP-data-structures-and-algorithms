
#include <iostream>
#include <cmath>
#include <string.h>

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

//     int n;
// int k;
//     cout << "Unesite dimenziju"<<endl;
//     cin >> n;
//         cout << "Unesite dimenziju k"<<endl;
//         cin >> k;

//     int matrica[200][200];
// int i,j;
//     for( i =0;i<n;i++){
//         for( j=0;j<n;j++){
//             cin >> matrica[i][j];
//         }

//     }

     

// for(i=0;i<k;i++){
//     moveFunc(matrica,n);

// }
//      for( i =0;i<n;i++){
//         for(j=0;j<n;j++){
//             cout << matrica[i][j]<<" ";
//         }
//         cout << endl;
//     }

    // std::string figura;
    // char unetoPoljeChar;
    // int unetoPoljeInt;
    // char izabranoPoljeChar;
    // int izabranoPoljeInt;

    // int i;
    // char polja[8] = {'a','b','c','d','e','f','g','h'};
    // cout<<"Unesite figuru"<<endl;
    // getline(cin,figura);
    // cout<<"Unesite polje vase figure prvo slovo pa broj"<<endl;
    // cin>>unetoPoljeChar>>unetoPoljeInt;
    // cout<<"Unesite polje figure koju pokusavate izbaciti"<<endl;
    //  cin>>izabranoPoljeChar>>izabranoPoljeInt;
     
    // if(figura == "pawn"){
        
    //  int saveChosenI;
    //         int saveI;
    //     for(i=0;i<8;i++){
           
    //         int fieldHeCanPlay = unetoPoljeInt + 1;
            
    //         if(unetoPoljeChar == polja[i] && fieldHeCanPlay == izabranoPoljeInt){
    //             saveI = i;
    //         }
    //         if(izabranoPoljeChar == polja[i]){
    //              saveChosenI = i;
    //         }
           
    //     }
    //      if(saveI == saveChosenI -1 || saveI == saveChosenI +1){
    //             cout<<"Pawn can take figure";
    //         }else{
    //             cout<<"Pawn can't take figure";


    //         }
    // }


    // if(figura == "bishop"){
    //     if(unetoPoljeChar == izabranoPoljeChar || unetoPoljeInt == izabranoPoljeInt){
    //         cout<<"Bishop can take figure";

    //     }else{
    //                     cout<<"Bishop can't take figure";


    //     }
    // }

    // if(figura == "knight"){
    //     int saveI;
    //     int saveChosenI;

    //     for(i=0;i<8;i++){
    //         if(unetoPoljeChar == polja[i]){
    //             saveI=i;
    //         }
    //         if(izabranoPoljeChar == polja[i]){
    //             saveChosenI =i;
    //         }
    //     }
    //     for(i=unetoPoljeInt;i<8;i++){
    //         for(int j=unetoPoljeInt;j<8;j++){
    //             cout<<"i"<<i<<endl<<"j"<<j<<endl<<"izabranopolje"<<izabranoPoljeInt<<endl;
    //             if((i==j && izabranoPoljeInt == i ) ){
    //                  cout<<"Knight can take figue";

    //             }
    //         }
    //     }
    // }
   
    char rec[100];
    int polindrom;
    cin>>rec;
    int duzina= strlen(rec);
    if(duzina == 1){
        cout<<"Unesite drugu rec";
    }
    for(int i =0;i<duzina;i++){
        if(rec[i] == rec[duzina-1]){
            duzina-=1;
        }
    }
    if(duzina == strlen(rec)/2){
        cout<<"rec je polindrom";
    }else{
        cout<<"rec nije polindrom";
    }
    

    return 0;
}


