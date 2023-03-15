
#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

void moveFunc(int **matrica,int n){
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
   
    // char rec[100];
    // int polindrom;
    // cin>>rec;
    // int duzina= strlen(rec);
    
    // for(int i =0;i<duzina;i++){
    //     if(rec[i] == rec[duzina-1]){
    //         duzina-=1;
    //     }
    // }
    // if(duzina == strlen(rec)/2){
    //     cout<<"rec je polindrom";
    // }else{
    //     cout<<"rec nije polindrom";
    // }
    


   
    // int i,n;
 

    // cout<<"unesite broj elemenata";
    // cin>>n;
    //    int *nizA = new int [n];
    // int *nizB = new int [n];
    // cout<<"unesite elemente niza";

    // for(i=0;i<n;i++){
    //     cin>>nizA[i];
    //     nizB[i] =i;
    // }

    // for(i=0;i<n;i++){
    //     for(int j=0;j<i;j++){       
    //         if(nizA[i] > nizA[j]){
    //             int pom = nizB[i];
    //             nizB[i] = nizB[j];
    //             nizB[j] = pom;
    //         }

    //     }
    // }
    //   for(i=0;i<n;i++){
    //     cout<<nizA[i]<<endl;
    // }

    //  for(i=0;i<n;i++){
    //     cout<<nizA[nizB[i]]<<endl;
    // }

    // delete[] nizA;
    // delete[] nizB;
    
    // int n,k;


    // cout<<"Unesite dimenziju N"<<endl;
    // cin>>n;
    // int** matrica = new int*[n];

    // for(int i=0;i<n;i++){
    //     matrica[i] = new int[n];
    // }
    // cout<<"Unesite elemente matrice";
    // for(int i =0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //           cin>>matrica[i][j];

    //     }
       
    // }
    // cout<<"Unesite k";
    // cin>>k;
    // for(int i =0;i<n;i++){
    //     cout<<endl;
    //     for(int j=0;j<n;j++){
    //           cout<<matrica[i][j]<<" ";

    //     }
       
    // }
    // for(int i=0;i<k;i++){
    //     moveFunc(matrica,n);
    // }


    // for(int i=0;i<n;i++){
    //     delete[] matrica[i];
    // }
    // delete[] matrica;
      
      //LINKED LISTS
//       #include <iostream>

// /* run this program using the console pauser or add your own getch, system("pause") or input loop */

// using namespace std;
// class Node{
// public:
// 	int Data;
// 	Node* Next;
// };

// void printList(Node*first){	
// 	Node * iterate = first;
// 	while(iterate != NULL){
// 		cout<<(iterate)->Data<<endl;
// 		iterate = (iterate)->Next;
// 	}
// }
// void addAtTheStart(Node ** head,int newValue){
// 	Node * newNode = new Node();
// 	newNode->Data = newValue;
// 	newNode->Next = *head;
// 	*head = newNode;
	
	
// }
// void addAtTheEnd(Node** head,int newValue){
// 	cout<<"head"<<*head;
// 	Node* newNode = new Node();
// 	newNode->Data = newValue;
// 	newNode->Next=NULL;
	
// 	if(*head == NULL){
// 		*head = newNode;
// 	}
// 	Node*I = *head;
// 	while(I->Next!=NULL){
// 		I = I->Next;
		
// 	}
// 	I->Next = newNode;
// }


// // Deleting specific item from list
// void deleteByValue(Node ** head,int deleteValue){
// //	To delete specific element by value ,we need our head(first element) and value wich should be deleted in this case last(20) , we need to check
// //	if element even exists first(*head == NULL) ,then when we check we go in while loop wich is going through list until it finds value wich should
// //	be deleted , we need two pointer :current and prev, current will help us to go through loop and prev will alywas be one step behind current
// //	,when we find value wich should be deleted in our array we check value of prev , because we need previous value so we can set its value to next of 
// //	value wich should be deleted ,if value of prev is null we know that use want to delete first element so we can use our *head and set its value to 
// //	*head->Next , and we should break our loop there , if prev is not null , that means that our value to be delete is second or more element so we 
// //	need to go through loop until we find current and prev value , when we find we should set our prev->Next to be current->Next so we skip value wich 
// //	should be deleted in this case it is current ,then we break and delete current
// 	Node *current = *head;
// 	Node *prev = NULL;
// 	if(*head == NULL){
// 		cout<<"List is empty";
		
// 	}
// 	while(current != NULL){
	
// 		if(current->Data == deleteValue){
// 			if(prev == NULL){
// 				*head = (*head)->Next;
// 				break;
// 			}else{
// 				prev->Next = current->Next;
// 				break;
// 			}
// 			delete current;
// 		}
// 		prev = current;
// 		current = current->Next;
				
// }

// }

// void insertBefore(Node**head,Node*insertBef,int newValue){
// 	Node* newNode = new Node();
// 	newNode->Data = newValue;
// 	newNode->Next = insertBef;
// 	Node*current = *head;
// //	We need to see when we will get last element , we use current instead of *head because current will point only on one elemtn ,in this 
// //	case element we are looking for is third , so current will take place of that element,we made prev to be null so when we find current we 
// //	need another poinet to point on current before he goes to next , then we have element before third and we have next element in third 
// 	Node*prev=NULL;
	
// 	if(*head == NULL){
// 		cout<<"Lista je prazna";
// 	}
	
// 	while(current->Data != insertBef->Data){
// 		prev = current;
// 		current = current->Next;
		
// 	}
// 	prev->Next = newNode;
// }


// void insertAfter(Node*insertAft,int newValue){
// //	User sends us place after where his new value should go , we create new node for that value and if it is after last element we just set our 
// //	last elemtnt->next to be that vlaue , if it is not then we save our next value  to temp , and on its place we put newNode then newNode->Next
// //	shoud be that value
// 	Node*newNode=new Node();
// 	newNode->Data = newValue;
	
// 	if(insertAft->Next == NULL){
// 		insertAft->Next = newNode;	
// 	}else{
// 		Node *temp = insertAft->Next;
// 		insertAft->Next = newNode;
// 		newNode->Next = temp;
// 	}
	
	
// }
// void deleteLastEl(Node *head){
// 	Node *temp = head;
// 	while(temp->Next->Next != NULL){
// 		temp = temp->Next;
// 	}
	
// 	temp->Next = NULL;
// 	delete temp;
	
// }
// int main(int argc, char** argv) {
	
// 	Node* first=new Node(); 
// 	Node* second = new Node();
// 	Node* third = new Node();
	
// 	first->Data = 1;
// 	first->Next = second;
// 	second->Data = 2;
// 	second->Next = third;
// 	third->Data = 3;
// 	third->Next = NULL;
// 	cout<<" first head"<<first;

// 	addAtTheEnd(&first,20);
// 	addAtTheStart(&first,8);
// 	deleteByValue(&first,20);
// 	insertBefore(&first,third,133);
// 	insertAfter(second,999);
// 	deleteLastEl(first);
// 	cout<<"head"<<first;

// 	printList(first);
	
// 	return 0;
// }







// Why this code works
//#include <iostream>
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//using namespace std;
//class Node{
//public:
//	int Data;
//	Node* Next;
//};
//
//void printList(Node*first){	
//	Node * iterate = first;
//	cout<<"Printing"<<endl;
//	while(iterate != NULL){
//		cout<<(iterate)->Data<<endl;
//		iterate = (iterate)->Next;
//	}
//}
//void addAtTheStart(Node * head,int newValue){
//	Node * newNode = new Node();
//	newNode->Data = newValue;
//	newNode->Next = head;
//	head = newNode;
//	
//	
//}
//void addAtTheEnd(Node* head,int newValue){
//	cout<<"head"<<head;
//	Node* newNode = new Node();
//	newNode->Data = newValue;
//	newNode->Next=NULL;
//	
//	if(head == NULL){
//		head = newNode;
//	}
//	Node*I = head;
//	while(I->Next!=NULL){
//		I = I->Next;
//		
//	}
//	I->Next = newNode;
//}
//
//
//// Deleting specific item from list
//void deleteByValue(Node * head,int deleteValue){
////	To delete specific element by value ,we need our head(first element) and value wich should be deleted in this case last(20) , we need to check
////	if element even exists first(*head == NULL) ,then when we check we go in while loop wich is going through list until it finds value wich should
////	be deleted , we need two pointer :current and prev, current will help us to go through loop and prev will alywas be one step behind current
////	,when we find value wich should be deleted in our array we check value of prev , because we need previous value so we can set its value to next of 
////	value wich should be deleted ,if value of prev is null we know that use want to delete first element so we can use our *head and set its value to 
////	*head->Next , and we should break our loop there , if prev is not null , that means that our value to be delete is second or more element so we 
////	need to go through loop until we find current and prev value , when we find we should set our prev->Next to be current->Next so we skip value wich 
////	should be deleted in this case it is current ,then we break and delete current
//	Node *current = head;
//	Node *prev = NULL;
//	if(head == NULL){
//		cout<<"List is empty";
//		
//	}
//	while(current != NULL){
//	
//		if(current->Data == deleteValue){
//			if(prev == NULL){
//				head = (head)->Next;
//				break;
//			}else{
//				prev->Next = current->Next;
//				break;
//			}
//			delete current;
//		}
//		prev = current;
//		current = current->Next;
//				
//}
//
//}
//
//void insertBefore(Node*head,Node*insertBef,int newValue){
//	Node* newNode = new Node();
//	newNode->Data = newValue;
//	newNode->Next = insertBef;
//	Node*current = head;
////	We need to see when we will get last element , we use current instead of *head because current will point only on one elemtn ,in this 
////	case element we are looking for is third , so current will take place of that element,we made prev to be null so when we find current we 
////	need another poinet to point on current before he goes to next , then we have element before third and we have next element in third 
//	Node*prev=NULL;
//	
//	if(head == NULL){
//		cout<<"Lista je prazna";
//	}
//	
//	while(current->Data != insertBef->Data){
//		prev = current;
//		current = current->Next;
//		
//	}
//	prev->Next = newNode;
//}
//int main(int argc, char** argv) {
//	
//	Node* first=new Node(); 
//	Node* second = new Node();
//	Node* third = new Node();
//	
//	first->Data = 1;
//	first->Next = second;
//	second->Data = 2;
//	second->Next = third;
//	third->Data = 3;
//	third->Next = NULL;
//		cout<<" first head"<<first;
//
//	addAtTheEnd(first,20);
//	addAtTheStart(first,8);
//	deleteByValue(first,20);
//	insertBefore(first,third,133);
//	cout<<"head"<<first;
//
//	printList(first);
//	
//	return 0;
//}


    return 0;
}


