
#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
using namespace std;
// using namespace std;

// void moveFunc(int **matrica,int n){
//     int i,j;
//     for( i=0;i<n;i++){
//         for( j=0;j<n;j++){
//            if(i>j){
//             int temp = matrica[i][j];
//             matrica[i][j] = matrica[n-1][j];
//             matrica[n-1][j] = temp;

//            }

//     }}
// }
// int main(){

//     // cout << "Enter radius" <<endl;

//     // double radius;
//     // cin >> radius;

//     // const double pi = 3.14;
//     // double area = pi*pow(radius,2);

//     // cout << area <<endl;

//     // auto price = 99.99;

//     // auto isVaild = false;

//     //  cout <<isVaild;
//     // int number {};

//     // cout <<"Returns a zero bcs of {} "<<number <<endl;

//     // int guess [10] ={1,2,3,4};

//     // cout << guess[0];

//     //// petlja

//     // for(int i =0;i<8;i++){
//     //     cout << "*" <<endl;
//     // }

// //     int n;
// // int k;
// //     cout << "Unesite dimenziju"<<endl;
// //     cin >> n;
// //         cout << "Unesite dimenziju k"<<endl;
// //         cin >> k;

// //     int matrica[200][200];
// // int i,j;
// //     for( i =0;i<n;i++){
// //         for( j=0;j<n;j++){
// //             cin >> matrica[i][j];
// //         }

// //     }

// // for(i=0;i<k;i++){
// //     moveFunc(matrica,n);

// // }
// //      for( i =0;i<n;i++){
// //         for(j=0;j<n;j++){
// //             cout << matrica[i][j]<<" ";
// //         }
// //         cout << endl;
// //     }

//     // std::string figura;
//     // char unetoPoljeChar;
//     // int unetoPoljeInt;
//     // char izabranoPoljeChar;
//     // int izabranoPoljeInt;

//     // int i;
//     // char polja[8] = {'a','b','c','d','e','f','g','h'};
//     // cout<<"Unesite figuru"<<endl;
//     // getline(cin,figura);
//     // cout<<"Unesite polje vase figure prvo slovo pa broj"<<endl;
//     // cin>>unetoPoljeChar>>unetoPoljeInt;
//     // cout<<"Unesite polje figure koju pokusavate izbaciti"<<endl;
//     //  cin>>izabranoPoljeChar>>izabranoPoljeInt;

//     // if(figura == "pawn"){

//     //  int saveChosenI;
//     //         int saveI;
//     //     for(i=0;i<8;i++){

//     //         int fieldHeCanPlay = unetoPoljeInt + 1;

//     //         if(unetoPoljeChar == polja[i] && fieldHeCanPlay == izabranoPoljeInt){
//     //             saveI = i;
//     //         }
//     //         if(izabranoPoljeChar == polja[i]){
//     //              saveChosenI = i;
//     //         }

//     //     }
//     //      if(saveI == saveChosenI -1 || saveI == saveChosenI +1){
//     //             cout<<"Pawn can take figure";
//     //         }else{
//     //             cout<<"Pawn can't take figure";

//     //         }
//     // }

//     // if(figura == "bishop"){
//     //     if(unetoPoljeChar == izabranoPoljeChar || unetoPoljeInt == izabranoPoljeInt){
//     //         cout<<"Bishop can take figure";

//     //     }else{
//     //                     cout<<"Bishop can't take figure";

//     //     }
//     // }

//     // if(figura == "knight"){
//     //     int saveI;
//     //     int saveChosenI;

//     //     for(i=0;i<8;i++){
//     //         if(unetoPoljeChar == polja[i]){
//     //             saveI=i;
//     //         }
//     //         if(izabranoPoljeChar == polja[i]){
//     //             saveChosenI =i;
//     //         }
//     //     }
//     //     for(i=unetoPoljeInt;i<8;i++){
//     //         for(int j=unetoPoljeInt;j<8;j++){
//     //             cout<<"i"<<i<<endl<<"j"<<j<<endl<<"izabranopolje"<<izabranoPoljeInt<<endl;
//     //             if((i==j && izabranoPoljeInt == i ) ){
//     //                  cout<<"Knight can take figue";

//     //             }
//     //         }
//     //     }
//     // }

//     // char rec[100];
//     // int polindrom;
//     // cin>>rec;
//     // int duzina= strlen(rec);

//     // for(int i =0;i<duzina;i++){
//     //     if(rec[i] == rec[duzina-1]){
//     //         duzina-=1;
//     //     }
//     // }
//     // if(duzina == strlen(rec)/2){
//     //     cout<<"rec je polindrom";
//     // }else{
//     //     cout<<"rec nije polindrom";
//     // }

//     // int i,n;

//     // cout<<"unesite broj elemenata";
//     // cin>>n;
//     //    int *nizA = new int [n];
//     // int *nizB = new int [n];
//     // cout<<"unesite elemente niza";

//     // for(i=0;i<n;i++){
//     //     cin>>nizA[i];
//     //     nizB[i] =i;
//     // }

//     // for(i=0;i<n;i++){
//     //     for(int j=0;j<i;j++){
//     //         if(nizA[i] > nizA[j]){
//     //             int pom = nizB[i];
//     //             nizB[i] = nizB[j];
//     //             nizB[j] = pom;
//     //         }

//     //     }
//     // }
//     //   for(i=0;i<n;i++){
//     //     cout<<nizA[i]<<endl;
//     // }

//     //  for(i=0;i<n;i++){
//     //     cout<<nizA[nizB[i]]<<endl;
//     // }

//     // delete[] nizA;
//     // delete[] nizB;

//     // int n,k;

//     // cout<<"Unesite dimenziju N"<<endl;
//     // cin>>n;
//     // int** matrica = new int*[n];

//     // for(int i=0;i<n;i++){
//     //     matrica[i] = new int[n];
//     // }
//     // cout<<"Unesite elemente matrice";
//     // for(int i =0;i<n;i++){
//     //     for(int j=0;j<n;j++){
//     //           cin>>matrica[i][j];

//     //     }

//     // }
//     // cout<<"Unesite k";
//     // cin>>k;
//     // for(int i =0;i<n;i++){
//     //     cout<<endl;
//     //     for(int j=0;j<n;j++){
//     //           cout<<matrica[i][j]<<" ";

//     //     }

//     // }
//     // for(int i=0;i<k;i++){
//     //     moveFunc(matrica,n);
//     // }

//     // for(int i=0;i<n;i++){
//     //     delete[] matrica[i];
//     // }
//     // delete[] matrica;

//       //LINKED LISTS
// //       #include <iostream>

// // /* run this program using the console pauser or add your own getch, system("pause") or input loop */

// // using namespace std;
// // class Node{
// // public:
// // 	int Data;
// // 	Node* Next;
// // };

// // void printList(Node*first){
// // 	Node * iterate = first;
// // 	while(iterate != NULL){
// // 		cout<<(iterate)->Data<<endl;
// // 		iterate = (iterate)->Next;
// // 	}
// // }
// // void addAtTheStart(Node ** head,int newValue){
// // 	Node * newNode = new Node();
// // 	newNode->Data = newValue;
// // 	newNode->Next = *head;
// // 	*head = newNode;

// // }
// // void addAtTheEnd(Node** head,int newValue){
// // 	cout<<"head"<<*head;
// // 	Node* newNode = new Node();
// // 	newNode->Data = newValue;
// // 	newNode->Next=NULL;

// // 	if(*head == NULL){
// // 		*head = newNode;
// // 	}
// // 	Node*I = *head;
// // 	while(I->Next!=NULL){
// // 		I = I->Next;

// // 	}
// // 	I->Next = newNode;
// // }

// // // Deleting specific item from list
// // void deleteByValue(Node ** head,int deleteValue){
// // //	To delete specific element by value ,we need our head(first element) and value wich should be deleted in this case last(20) , we need to check
// // //	if element even exists first(*head == NULL) ,then when we check we go in while loop wich is going through list until it finds value wich should
// // //	be deleted , we need two pointer :current and prev, current will help us to go through loop and prev will alywas be one step behind current
// // //	,when we find value wich should be deleted in our array we check value of prev , because we need previous value so we can set its value to next of
// // //	value wich should be deleted ,if value of prev is null we know that use want to delete first element so we can use our *head and set its value to
// // //	*head->Next , and we should break our loop there , if prev is not null , that means that our value to be delete is second or more element so we
// // //	need to go through loop until we find current and prev value , when we find we should set our prev->Next to be current->Next so we skip value wich
// // //	should be deleted in this case it is current ,then we break and delete current
// // 	Node *current = *head;
// // 	Node *prev = NULL;
// // 	if(*head == NULL){
// // 		cout<<"List is empty";

// // 	}
// // 	while(current != NULL){

// // 		if(current->Data == deleteValue){
// // 			if(prev == NULL){
// // 				*head = (*head)->Next;
// // 				break;
// // 			}else{
// // 				prev->Next = current->Next;
// // 				break;
// // 			}
// // 			delete current;
// // 		}
// // 		prev = current;
// // 		current = current->Next;

// // }

// // }

// // void insertBefore(Node**head,Node*insertBef,int newValue){
// // 	Node* newNode = new Node();
// // 	newNode->Data = newValue;
// // 	newNode->Next = insertBef;
// // 	Node*current = *head;
// // //	We need to see when we will get last element , we use current instead of *head because current will point only on one elemtn ,in this
// // //	case element we are looking for is third , so current will take place of that element,we made prev to be null so when we find current we
// // //	need another poinet to point on current before he goes to next , then we have element before third and we have next element in third
// // 	Node*prev=NULL;

// // 	if(*head == NULL){
// // 		cout<<"Lista je prazna";
// // 	}

// // 	while(current->Data != insertBef->Data){
// // 		prev = current;
// // 		current = current->Next;

// // 	}
// // 	prev->Next = newNode;
// // }

// // void insertAfter(Node*insertAft,int newValue){
// // //	User sends us place after where his new value should go , we create new node for that value and if it is after last element we just set our
// // //	last elemtnt->next to be that vlaue , if it is not then we save our next value  to temp , and on its place we put newNode then newNode->Next
// // //	shoud be that value
// // 	Node*newNode=new Node();
// // 	newNode->Data = newValue;

// // 	if(insertAft->Next == NULL){
// // 		insertAft->Next = newNode;
// // 	}else{
// // 		Node *temp = insertAft->Next;
// // 		insertAft->Next = newNode;
// // 		newNode->Next = temp;
// // 	}

// // }
// // void deleteLastEl(Node *head){
// // 	Node *temp = head;
// // 	while(temp->Next->Next != NULL){
// // 		temp = temp->Next;
// // 	}

// // 	temp->Next = NULL;
// // 	delete temp;

// // }
// // int main(int argc, char** argv) {

// // 	Node* first=new Node();
// // 	Node* second = new Node();
// // 	Node* third = new Node();

// // 	first->Data = 1;
// // 	first->Next = second;
// // 	second->Data = 2;
// // 	second->Next = third;
// // 	third->Data = 3;
// // 	third->Next = NULL;
// // 	cout<<" first head"<<first;

// // 	addAtTheEnd(&first,20);
// // 	addAtTheStart(&first,8);
// // 	deleteByValue(&first,20);
// // 	insertBefore(&first,third,133);
// // 	insertAfter(second,999);
// // 	deleteLastEl(first);
// // 	cout<<"head"<<first;

// // 	printList(first);

// // 	return 0;
// // }

// // Why this code works
// //#include <iostream>
// //
// ///* run this program using the console pauser or add your own getch, system("pause") or input loop */
// //
// //using namespace std;
// //class Node{
// //public:
// //	int Data;
// //	Node* Next;
// //};
// //
// //void printList(Node*first){
// //	Node * iterate = first;
// //	cout<<"Printing"<<endl;
// //	while(iterate != NULL){
// //		cout<<(iterate)->Data<<endl;
// //		iterate = (iterate)->Next;
// //	}
// //}
// //void addAtTheStart(Node * head,int newValue){
// //	Node * newNode = new Node();
// //	newNode->Data = newValue;
// //	newNode->Next = head;
// //	head = newNode;
// //
// //
// //}
// //void addAtTheEnd(Node* head,int newValue){
// //	cout<<"head"<<head;
// //	Node* newNode = new Node();
// //	newNode->Data = newValue;
// //	newNode->Next=NULL;
// //
// //	if(head == NULL){
// //		head = newNode;
// //	}
// //	Node*I = head;
// //	while(I->Next!=NULL){
// //		I = I->Next;
// //
// //	}
// //	I->Next = newNode;
// //}
// //
// //
// //// Deleting specific item from list
// //void deleteByValue(Node * head,int deleteValue){
// ////	To delete specific element by value ,we need our head(first element) and value wich should be deleted in this case last(20) , we need to check
// ////	if element even exists first(*head == NULL) ,then when we check we go in while loop wich is going through list until it finds value wich should
// ////	be deleted , we need two pointer :current and prev, current will help us to go through loop and prev will alywas be one step behind current
// ////	,when we find value wich should be deleted in our array we check value of prev , because we need previous value so we can set its value to next of
// ////	value wich should be deleted ,if value of prev is null we know that use want to delete first element so we can use our *head and set its value to
// ////	*head->Next , and we should break our loop there , if prev is not null , that means that our value to be delete is second or more element so we
// ////	need to go through loop until we find current and prev value , when we find we should set our prev->Next to be current->Next so we skip value wich
// ////	should be deleted in this case it is current ,then we break and delete current
// //	Node *current = head;
// //	Node *prev = NULL;
// //	if(head == NULL){
// //		cout<<"List is empty";
// //
// //	}
// //	while(current != NULL){
// //
// //		if(current->Data == deleteValue){
// //			if(prev == NULL){
// //				head = (head)->Next;
// //				break;
// //			}else{
// //				prev->Next = current->Next;
// //				break;
// //			}
// //			delete current;
// //		}
// //		prev = current;
// //		current = current->Next;
// //
// //}
// //
// //}
// //
// //void insertBefore(Node*head,Node*insertBef,int newValue){
// //	Node* newNode = new Node();
// //	newNode->Data = newValue;
// //	newNode->Next = insertBef;
// //	Node*current = head;
// ////	We need to see when we will get last element , we use current instead of *head because current will point only on one elemtn ,in this
// ////	case element we are looking for is third , so current will take place of that element,we made prev to be null so when we find current we
// ////	need another poinet to point on current before he goes to next , then we have element before third and we have next element in third
// //	Node*prev=NULL;
// //
// //	if(head == NULL){
// //		cout<<"Lista je prazna";
// //	}
// //
// //	while(current->Data != insertBef->Data){
// //		prev = current;
// //		current = current->Next;
// //
// //	}
// //	prev->Next = newNode;
// //}
// //int main(int argc, char** argv) {
// //
// //	Node* first=new Node();
// //	Node* second = new Node();
// //	Node* third = new Node();
// //
// //	first->Data = 1;
// //	first->Next = second;
// //	second->Data = 2;
// //	second->Next = third;
// //	third->Data = 3;
// //	third->Next = NULL;
// //		cout<<" first head"<<first;
// //
// //	addAtTheEnd(first,20);
// //	addAtTheStart(first,8);
// //	deleteByValue(first,20);
// //	insertBefore(first,third,133);
// //	cout<<"head"<<first;
// //
// //	printList(first);
// //
// //	return 0;
// //}

// // OOP

// // #include <iostream>
// // // /* run this program using the console pauser or add your own getch, system("pause") or input loop */

// // using namespace std;
// // //class Student{
// // //	private:
// // //		char* name;
// // //		int age;
// // //	public:
// // //		Student(char*aName,int aAge){
// // //			name = new char[strlen(aName) + 1];
// // //			strcpy(name,aName);
// // //			age = aAge;
// // //
// // //
// // //		}
// // //		~Student(){
// // //			delete[]name;
// // //		}
// // //		char* getName(){
// // //			return name;
// // //		}
// // //		int getAge(){
// // //			return age;
// // //		}
// // //		void setName(char*aName){
// // //			delete[] name;
// // //			name = new char[strlen(aName)+1];
// // //			strcpy(name,aName);
// // //		}
// // //		void setAge(int aAge){
// // //			age = aAge;
// // //
// // //		}
// // //};

// // class Artikal{
// // private:
// // 	string naziv;
// // 	int cena;
// // 	double popust=0;
// // public:
// // 	Artikal(string aNaziv,int aCena,double aPopust):naziv(aNaziv),cena(aCena),popust(aPopust){	}

// // 	Artikal(const Artikal& other):naziv(other.naziv),cena(other.cena),popust(other.popust){
// // 		cout<<"is copied";	}

// // 	string getNaziv(){
// // 		return naziv;
// // 	}
// // 	int cenaSaPopustom(){
// // 		return cena = cena - (cena * (popust/100));

// // 	}
// // 	void setNaziv(string noviNaziv){
// // 		naziv = noviNaziv;

// // 	}

// // };

// // ostream& operator <<(ostream& COUT,Artikal& artikal){
// // 	 COUT<<artikal.getNaziv()<<'('<<artikal.cenaSaPopustom()<<')'<<endl;
// // 	 return COUT;
// // }

// // int main(int argc, char** argv) {
// // 	Artikal a1("Jaje",20,7);
// // 	Artikal acpy = a1;
// // 	cout<<a1<<endl;

// // 		return 0;

// // }

//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;

// class Nalepnica{
// 	string naziv;
// 	int id;
// 	static int idCounter;
// 	public:

// 		Nalepnica(string Naziv):naziv(Naziv){
// 		id = ++idCounter;

// 		}

// 		Nalepnica(const Nalepnica&other):naziv(other.naziv){

// 			id=(++idCounter);

// 		}

// 		string getNaziv(){
// 			return naziv;
// 		}
// 		int getId(){
// 			return id;
// 		}
// 		void setNaziv(string noviNaziv){
// 			naziv = noviNaziv;
// 		}
// 		void setID(int ID){
// 			id = ID;
// 		}

// };
// int Nalepnica::idCounter = 100;

// class Flasa{
// 	Nalepnica n;
// 	int cenaBezKaucije;
// 	float zapremina;
// 	string vrstaPica;

// 	public:
// //
// 		Flasa(Nalepnica&N,int CenaBezKaucije,double Zapremina =0.33,string VrstaPica="BEZALKOHOLNO"):n(N),cenaBezKaucije(CenaBezKaucije),zapremina(Zapremina),vrstaPica(VrstaPica){

// 		}
// 		Nalepnica getNalepnicu(){
// 			return n;
// 		}
// 		int getCenuBezKaucije(){
// 			return cenaBezKaucije;
// 		}
// 		void setCenuBezKaucije(int novaCena){
// 			cenaBezKaucije = novaCena;

// 		}

// 		float getZapreminu(){
// 			return zapremina;
// 		}
// 		string getVrstuPica(){
// 			return vrstaPica;
// 		}
// 		string Tip;

// 		int getFlasaSaKauciom(string tip){
// 			Tip=tip;
// 			if("staklena"==tip && zapremina < 0.5){
// 				return  cenaBezKaucije * (5 / 100);

// 			}else if("plasticna"==tip && zapremina >= 0.5){
// 				return cenaBezKaucije * (10 / 100);

// 			}
// 			if("plasticna"==tip){
// 				return cenaBezKaucije;
// 			}

// 		}

// 		void Provera(Flasa&f1,Flasa&f2){

// 			if(f1.getNalepnicu().getNaziv()==f2.getNalepnicu().getNaziv() && f1.getFlasaSaKauciom(Tip) == f2.getFlasaSaKauciom(Tip)){
// 				cout<<"flase su iste";
// 			}else{
// 				cout<<"Nisu iste"<<endl<<f1.getNalepnicu().getNaziv()<<" "<<f2.getNalepnicu().getNaziv();
// 			}

// 		}

// };
// ostream&operator<<(ostream&COUT,Nalepnica&n){

// 	COUT<<"Naziv:"<<n.getNaziv()<<" ID "<<n.getId()<<endl;
// 	return COUT;
// }

// int main(){

// 	cout<<"Unesite naziv nalepnice"<<endl;
// 	string nazivNalepnice;
// 	cin>>nazivNalepnice;

// 	Nalepnica n1(nazivNalepnice);
// 	Nalepnica n4("Viski");

// 	cout<<n1<<endl<<n4;

// 	Flasa f1(n1,30,0.6);
// 	Flasa f2(n4,30,0.2,"ALKOHOLNO");

// 	f1.Provera(f1,f2);

// 	return 0;
// }

// class Node{
// 	public:
// 	string Data;
// 	Node*Next;

// };

// void addAfterSpecificElement(Node ** first,string insertName,string afterName){
// 	Node*newNode = new Node();

// 	newNode->Data =insertName;
// 	cout<<"Function calld"<<endl;

// 	Node *temp = *first;
// 	if(*first == NULL){
// 		*first = newNode;
// 	}

// 	while(temp->Data != afterName){
// 		cout<<(*first)->Data << "In func"<<endl;
// 		temp = temp->Next;
// 	}
// 	Node*help = temp->Next;
// 	temp->Next = newNode;
// 	newNode->Next = help;
// }

// int main(){
// 	Node*first= new Node();
// 	first->Data = "Hamza";
// 	Node*second=new Node();
// 	Node *third = new Node();
// 	second->Data="Haris";
// 	first->Next = second;
// 	third->Data = "Semra";
// 	second->Next = third;
// 	cout<<"check";

// 	addAfterSpecificElement(&first,"-Aga","Haris");

// 	while(first != NULL){
// 		cout<<first->Data<<endl;
// 		first = first->Next;
// 	}
// }
// void sortedList(node* first) {
//     node* temp = first;
//     node* loop = first;
//     int sorted = 0;

//     while (!sorted) {
//         sorted = 1;
//         loop = first;

//         while (loop->Next != NULL) {
//             if (loop->Data > loop->Next->Data) {
//                 int tempData = loop->Data;
//                 loop->Data = loop->Next->Data;
//                 loop->Next->Data = tempData;
//                 sorted = 0;
//             }
//             loop = loop->Next;
//         }
//     }

//     // Print the sorted list
//     temp = first;
//     while (temp != NULL) {
//         printf("%d ", temp->Data);
//         temp = temp->Next;
//     }
// }

// //////////////////////

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct NODE{
// 	int Data;
// 	struct NODE* Next;
// }node;

// node* presekListi(node*firstList ,node*secondList){

// 	if(firstList == NULL || secondList == NULL){
// 		return NULL;
// 	}
// 	node*newList = NULL;
// 	node*travel = NULL;
// 	node*tempFirst = firstList;

// 	while(tempFirst!=NULL){
// 			node*tempSecond =secondList;
// 		while(tempSecond != NULL){
// 			if(tempFirst->Data == tempSecond->Data){
// 				if(newList == NULL){
// 					newList = (node*)malloc(sizeof(node));
// 					travel =(node*)malloc(sizeof(node));
// 					node *newListTail = (node*)malloc(sizeof(node));
// 					newList->Data = tempFirst->Data;
// 					newList->Next = NULL;
// 					newListTail = newList;
// 					travel = newList;

// 				}
// 				else{
// 					node*newElement = (node*)malloc(sizeof(node));
// 					newElement->Data = tempFirst->Data;
// 					newList->Next = newElement;
// 					newList = newList->Next;

// 				}

// 			}
// 			tempSecond = tempSecond->Next;

// 		}
// 		tempFirst = tempFirst->Next;

// 	}
// 	return travel;

// }
// int main(){

// 	node*first=(node*)malloc(sizeof(node));
// 	node*second=(node*)malloc(sizeof(node));
// 	node*third=(node*)malloc(sizeof(node));
// 	node*forth=(node*)malloc(sizeof(node));

// 	node*firstLi=(node*)malloc(sizeof(node));
// 	node*secondLi=(node*)malloc(sizeof(node));
// 	node*thirdLi=(node*)malloc(sizeof(node));
// 	node*forthLi=(node*)malloc(sizeof(node));

// 	first->Data = 1;
// 	first->Next = second;

// 	second->Data =2;
// 	second->Next = third;

// 	third->Data=7;
// 	third->Next = forth;

// 	forth->Data=4;
// 	forth->Next = NULL;

// 	firstLi->Data = 1;
// 	firstLi->Next = secondLi;

// 	secondLi->Data =7;
// 	secondLi->Next = thirdLi;

// 	thirdLi->Data=2;
// 	thirdLi->Next = forthLi;

// 	forthLi->Data=6;
// 	forthLi->Next = NULL;
// 	node* presecnaLista = presekListi(first,firstLi);

// 	printf("%d",presecnaLista->Next->Data);

// 	return 0;

// }

// ////////////////////////////////////////////////////////////////
// #include<stdio.h>
// #include<stdlib.h>

// typedef struct node{
// 	int Data;
// 	struct node*Next;
// }Node;

// //Treba da napravimo i prolazimo kroz sve te elemente koje napravimo
// Node* createNodes(int value){
// 	int i;
// 	Node*iterate=NULL;
// 	Node*first = NULL;
// 	for(i=1;i<=value;i++){
// 		Node*newNode = (Node*)malloc(sizeof(Node));
// 		newNode->Data= i;
// 		newNode->Next = NULL;

// 		if(iterate == NULL){
// 			iterate=newNode;
// 			first=newNode;

// 		}else{
// 			iterate->Next= newNode;
// 			iterate = iterate->Next;
// 		}

// 	}
// 	return first;

// }

// ///////////// addBefore() function without **head as argument

// void addBefore(Node*current,int newValue){
// 	Node*newNode=(Node*)malloc(sizeof(Node));
// 	newNode->Data=newValue;
// 	newNode->Next=NULL;
// 	if(current==NULL){
// 		current =newNode;
// 	}else{
// 		Node*temp = current->Next;
// 		newNode->Data=current->Data;
// 		current->Data = newValue;
// 		current->Next=newNode;
// 		newNode->Next=temp;
// 	}

// }

/////////////////////////////// createNodes() function to create nodes to specific value
// Node* createNodes(int value){
// 	int i;
// 	Node*iterate=NULL;
// 	Node*first = NULL;
// 	for(i=1;i<=value;i++){
// 		Node*newNode = (Node*)malloc(sizeof(Node));
// 		newNode->Data= i;
// 		newNode->Next = NULL;

// 		if(iterate == NULL){
// 			iterate=newNode;
// 			first=newNode;

// 		}else{
// 			iterate->Next= newNode;
// 			iterate = iterate->Next;
// 		}

// 	}
// 	return first;
// s

// }

/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////

// ISPIS IZ OOP FEB
// #include <iostream>
// /* run this program using the console pauser or add your own getch, system("pause") or input loop */

// using namespace std;

// class Artikal {
// public:
//     string ime;
//     int cena;
//     float popust;
//     Artikal():ime("Default"),cena(0),popust(0.0){
// 	}
//     Artikal(string Ime, int Cena, float Popust = 0) {
//         ime = Ime;
//         cena = Cena;
//         popust = Popust;
//     }

//     void cenaSaPopustom(double dodatniPopust =0)  {
//     	if(popust == 0){
//     		cena -=cena*(dodatniPopust/100);

// 		}else{
// 			cena -= cena * (popust / 100);

// 		}
//     }
//     int getCenu(){
//     	return cena;
// 	}

// };

// class Stavka {
// public:
//     Artikal artikal;
//     int kolicina;
//     int redniBroj;
//     static int counter;
// 	Stavka() : kolicina(0), redniBroj(++counter) {}

//     Stavka(Artikal& art, int Kolicina = 0):artikal(art) {
//         kolicina = Kolicina;
//         redniBroj = ++counter;
//     }

//     Stavka(Stavka* other):artikal(other->artikal){
//         kolicina = other->kolicina;
//         redniBroj = ++counter;
//     }

//     int ukupanIznos() {

//         return artikal.getCenu()* kolicina;
//     }

//     void ispis() {
//         cout << artikal.ime;
//     }
// };
// class Racun{
// 	Stavka*stavke;
// 	int dodatniPopust;
// 	int brojStavki;
// 	public:
// 		Racun(){
// 			stavke = new Stavka[0];
// 			dodatniPopust = 0;
// 			brojStavki=0;
// 		}
// 		Racun(int DodatniPopust){
// 			stavke = new Stavka[0];
// 			dodatniPopust = DodatniPopust;
// 			brojStavki=0;
// 		}

// 		void operator+=(const Stavka& novaStavka) {
// 		    Stavka *temp = new Stavka[brojStavki + 1];
// 		    for(int i = 0; i < brojStavki; i++){
// 		        temp[i] = stavke[i];
// 		    }
// 		    temp[brojStavki] = novaStavka;
// 		    temp[brojStavki].artikal.cenaSaPopustom(dodatniPopust);
// 		    brojStavki++;
// 		    delete[] stavke;
// 		    stavke = temp;

// }
// //	Funckija za ispis
//     void ispis(){
//     	for(int i=0;i<brojStavki;i++){
//     		cout<<stavke[i].artikal.ime<<"["<<stavke[i].artikal.getCenu()<<"]"<<endl;
// 		}
// 	}
//     int sumaRacuna(){
//     	int suma=0;
//     	for(int i =0;i<brojStavki;i++){

//     		suma+=stavke[i].ukupanIznos();
// 		}
// 		return suma;
// 	}

// };

// int Stavka::counter = 0;

// ostream& operator<<(ostream& COUT, Artikal& artikal) {
//     COUT << artikal.ime << "(" << artikal.getCenu() << ")" << endl;
//     return COUT;
// }

// ostream& operator<<(ostream& COUT, Stavka& stavka) {
//     COUT << stavka.redniBroj << "(" << stavka.artikal.ime << ")" << stavka.ukupanIznos() << "|" << stavka.kolicina << endl;
//     return COUT;
// }
// ostream& operator<<(ostream&COUT,Racun&racun){
// 	racun.ispis();
// 	COUT<<"Racun: "<<racun.sumaRacuna()<<endl;

// 	return COUT;
// }

// int main(int argc, char** argv) {
//     Artikal pivo("pivo", 100, 20);
//     Artikal voda("voda",100,0);
//     Artikal cips("cips",80,0);
//     Artikal cola("cola",130,32);
//     Stavka stavka1(pivo, 3);

//     Racun racun1(32);

//     Stavka stavka2(cola,1);

//     racun1+= stavka1;
//     racun1+=stavka2;
//     Stavka stavka3(voda,2);
//     Stavka stavka4(cips,1);

//     racun1+=stavka3;
//     racun1+=stavka4;
//     cout<<racun1;

//     return 0;
// }

/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct NODE{
//     int data;
//     struct NODE* next;
//     struct NODE *prev;
// } Node;

// Node* head = NULL;

// void createNode(int value){
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     newNode->data = value;
//     newNode->prev = NULL;
//     newNode->next = NULL;
//     if(head == NULL){
//         head = newNode;
//     }else{
//         head->next = newNode;
//         newNode->prev = head;
//         head = newNode;
//     }
// }

// void reverseNode() {
//     Node* temp = head;
//     printf("head is %d \n",head->prev->data);
//     while (temp != NULL) {
//         Node* help = temp->prev;
//         temp->prev = temp->next;
//         temp->next = help;
//         temp = help;
//     }
// 	printf("head is %d \n",head->next->data);

//     while (head->next !=nullptr){
//         head = head->next;

//     }

// }

// int main(int argc, char *argv[]) {
//     createNode(1);
//     createNode(3);
//     createNode(4);
//     createNode(6);
//     createNode(10);

//     reverseNode();
//     Node* temp = head;
//     while(temp != NULL){
//         printf("%d \n",temp->data);
//         temp = temp->prev;
//     }
//     return 0;
// }

/////////////

// Write a function that takes a double linked list as input,
// and returns a new double linked list that contains only the even elements of the original list, in the same order.
//  For example, if the input list is 1 <-> 2 <-> 3 <-> 4 <-> 5,
// the output list should be 2 <-> 4. If there are no even elements in the input list, the function should return an empty list.

// #include <iostream>

// typedef struct NODE
// {
//     int Data;
//     struct NODE *Prev;
//     struct NODE *Next;

// }Node;

// Node*head = NULL;

// void createNode(int x){
//     Node*newNode = (Node*)malloc(sizeof(Node));
//     newNode->Data = x;
//     newNode->Next = NULL;
//     newNode->Prev  = NULL;
//     if(head==NULL){
//         head = newNode;
//     }else{
//         head->Next = newNode;
//         newNode->Prev = head;
//         head = newNode;
//     }
// }

// Node*parnaLista(){
//     Node*newList = NULL;
//     Node*temp = head;
//     while (temp!=NULL)
//     {
//         if(temp->Data % 2==0){
//             Node*newNode = (Node*)malloc(sizeof(Node));
//             newNode->Data = temp->Data;
//             newNode->Next=NULL;
//             newNode->Prev = NULL;
//             if(newList==NULL){
//                 newList=newNode;
//             }else{
//                 newList->Next=newNode;
//                 newNode->Prev = newList;
//                 newList = newNode;
//             }

//         }
//         temp = temp->Prev;
//     }
//     return newList;

// }
// int main(){
//     printf("Unesite elemente dok ne pritisnete 0 kao kraj");
//     int x;
//     do{
//         scanf("%d",&x);
//         if(x!=0){
//             createNode(x);
//         }

//     }while(x!=0);

//     Node*newList = parnaLista();
//     printf("newlist el = %d \n",newList->Data );
//     Node*temp = head;
//     while(temp!=NULL){
//         printf("el = %d \n",temp->Data);
//         temp = temp->Prev;

//     }

// }

// #include <iostream>

// using namespace std;
// class Let{
// 	public:
// 	virtual void ispis() = 0;
// 	virtual char* getPolazna()=0;
// 	virtual char*getDolazna()=0;
// 	virtual void reserveSit()=0;

// };
// class sistemLetova{
// 	private:
// 	int brojLetova=0;
// 	Let**Letovi;

// 	public:
// 	sistemLetova(){
// 		Letovi = NULL;
// 	};

// 	void dodajLet(Let *let){
// 		Let** temp = new Let*[brojLetova + 1];
// 		for(int i = 0; i < brojLetova; i++){
// 			temp[i] = Letovi[i];
// 		}
// 		temp[brojLetova] = let;
// 		brojLetova++;
// 		delete [] Letovi;
// 		Letovi = temp;
// 	}
// 	void deleteLet(Let*let){
// 		for(int i =0;i<brojLetova;i++){
// 			if(let == Letovi[i]){
// 				delete Letovi[i];
// 				for(int j=i;j<brojLetova-1;j++){
// 					Letovi[j] = Letovi[j+1];
// 				}

// 				brojLetova--;
// 				Let ** temp=new Let*[brojLetova+1];
// 				for(int j=0;j<brojLetova;j++){
// 					temp[j] = Letovi[j];
// 				}
// 				delete []Letovi;
// 				Letovi = temp;

// 			}else{
// 				cout<<endl<<"let nije pronadjen"<<endl;
// 			}

// 		}

// 	}

// 	void reservePlace(string polazna,string dolazna){
// 		for(int i=0;i<brojLetova;i++){
// 			cout<<Letovi[i]->getDolazna();
// 			if(Letovi[i]->getDolazna() == dolazna && Letovi[i]->getPolazna() == polazna){
// 				Letovi[i]->reserveSit();
// 				printf("\n Uspesno ste rezervisali mesto ! \n");
// 				break;

// 			}else{
// 				cout<<"Takvo mesto nemamo trenutno";
// 				break;
// 			}
// 		}

// 	}

// 	void ispisSvihLetova(){
// 		for(int i =0;i<brojLetova;i++){
// 			Letovi[i]->ispis();
// 		}
// 	}

// };

// class Redovni:public Let{
// 	private:
// 	char*polazna;
// 	char*dolazna;
// 	char*vreme;
// 	int brojMesta;
// 	int brojRezervisanih;
// 	public:
// 	Redovni(){}

// 	Redovni(const char*Polazna,const char*Dolazna,const char*Vreme,int BrojMesta,int BrojRezervisanih){
// 		polazna = new char[strlen(Polazna)+1];
// 		strcpy(polazna,Polazna);
// 		dolazna = new char[strlen(Dolazna)+1];
// 		strcpy(dolazna,Dolazna);

// 		vreme = new char[strlen(Vreme)+1];
// 		strcpy(vreme,Vreme);
// 		brojMesta = BrojMesta;
// 		brojRezervisanih = BrojRezervisanih;
// 	}
// 	char* getPolazna() override {
//     return polazna;
// }
// char* getDolazna() override {
//     return dolazna;
// }

// 	void reserveSit(){
// 		brojRezervisanih++;
// 	}

// 	void ispis() override {
// 		printf("Redovni avion polece iz %s u %s ( %s ) ,broj rezervisanih mesta je %d ,broj slobodnih mesta je %d \n",polazna,dolazna,vreme,brojRezervisanih,brojMesta-brojRezervisanih);
// 	}
// 	~Redovni(){
// 		delete [] polazna;
// 		delete [] dolazna;
// 		delete [] vreme;
// 	}

// };

// class Charter:public Let{
// 	private:
// 	char*polazna;
// 	char*dolazna;
// 	char*vreme;
// 	int brojMesta;
// 	int brojRezervisanih;
// 	public:

// 	Charter(const char*Polazna,const char*Dolazna,const char*Vreme,int BrojMesta,int BrojRezervisanih){
// 		polazna = new char[strlen(Polazna)+1];
// 		strcpy(polazna,Polazna);
// 		dolazna = new char[strlen(Dolazna)+1];
// 		strcpy(dolazna,Dolazna);

// 		vreme = new char[strlen(Vreme)+1];
// 		strcpy(vreme,Vreme);
// 		brojMesta = BrojMesta;
// 		brojRezervisanih = BrojRezervisanih;
// 	};
// 	void reserveSit(){
// 		brojRezervisanih++;
// 	}

// 	char* getPolazna() override{
// 		return polazna;
// 	};

// 	char* getDolazna() override{
// 		return dolazna;
// 	};
// 	void ispis() override {
// 		printf("Vandredni avion polece iz %s u %s ( %s ) ,broj rezervisanih mesta je %d ,broj slobodnih mesta je %d \n",polazna,dolazna,vreme,brojRezervisanih,brojMesta-brojRezervisanih);
// 	}

// };

// int main(){
// 	Redovni let1("bec","turska","1/3/2023/15:30",100,100);

// 	Redovni let2("srbija","finska","2023/07/09",100,50);

// 	Redovni let3("bosna","turska","2023/07/09",100,80);

// 	Charter let10("bec","turska","1/3/2023",100,80);

// 	sistemLetova sistem1;
// 	sistem1.dodajLet(&let1);
// 	sistem1.dodajLet(&let2);
// 	sistem1.deleteLet(&let1);
// 	sistem1.dodajLet(&let10);

// 	sistem1.reservePlace("srbija","finska");
// 	sistem1.ispisSvihLetova();

// 	string polazna;
// 	string dolazna;
// 	// cout<<"Rezervisite vas unesite destinaciju";

// 	// int x;
// 	// cin>>x;

// 	// scanf("%s",&polazna);

// 	return 0;
// }

// Stecovi i redovi

// Kruzna lista

// typedef struct NODE
// {
// 	int data;
// 	struct NODE *next;
// } Node;

// Node *head = NULL, *rear = NULL;

// void create(int x)
// {
// 	Node *newNode = (Node *)malloc(sizeof(Node));
// 	newNode->data = x;
// 	newNode->next = NULL;
// 	if (rear == NULL)
// 	{
// 		head = rear = newNode;
// 		rear->next = head;
// 	}
// 	else
// 	{
// 		rear->next = newNode;
// 		rear = newNode;
// 	}
// 	rear->next = head;
// }
// void del()
// {
// 	if (rear == NULL)
// 	{
// 		printf("Nema elemenata");
// 		return;
// 	}
// 	else
// 	{
// 		if (head == rear)
// 		{
// 			delete head;
// 			head = rear = NULL;
// 		}
// 		else
// 		{

// 			Node *temp = head;
// 			head = head->next;
// 			rear->next = head;

// 			delete temp;
// 		}
// 	}
// }

// void insertAtEnd(int x)
// {
// 	Node *newNode = (Node *)malloc(sizeof(Node));
// 	newNode->data = x;
// 	newNode->next = NULL;
// 	if (rear == NULL)
// 	{
// 		rear = head = newNode;
// rear->next=head;

// 	}
// 	else
// 	{
// 		rear->next = newNode;
// 		rear = rear->next;
// 		rear->next = head;
// 	}
// }

// void insertAtStart(int x)
// {
// 	Node *newNode = (Node *)malloc(sizeof(Node));
// 	newNode->data = x;
// 	newNode->next = NULL;
// 	if (rear == NULL)
// 	{
// 		rear = head = newNode;
// 		rear->next = head;
// 	}
// 	else
// 	{
// 		newNode->next = head;
// 		head = newNode;
// 		rear->next = head;
// 	}
// }

// void delValue(int x)
// {
// 	if (rear == NULL)
// 	{
// 		printf("lista je prazna");
// 	}
// 	else
// 	{
// 		Node *temp = head;
// 		Node *tail = NULL;

// 		while (temp->data != x)
// 		{
// 			tail = temp;
// 			temp = temp->next;
// 		}
// 		if (temp == head)
// 		{
// 			head = head->next;
// 			rear->next = head;
// 		}
// 		else if (temp == rear)
// 		{
// 			rear = tail;
// 			rear->next = head;
// 		}
// 		else
// 		{
// 			tail->next = rear->next;
// 		}
// 	}
// }

// int main()
// {
// 	create(3);
// 	create(4);
// 	create(5);
// 	create(6);
// 	create(7);

// 	delValue(7);

// 	Node *temp = head;
// 	printf("{temp = %d} \n", head->data);
// 	printf("{rear= %d}", rear->data);

// 	while (temp != rear)
// 	{
// 		cout << "\n temp-data \n"
// 			 << temp->data << endl;
// 		temp = temp->next;
// 	}
// 	cout << "temp-data " << temp->data;
// }

// dbl linked
// typedef struct NODE
// {
// 	int data;
// 	struct NODE *next;
// 	struct NODE *prev;
// } Node;

// Node *head = NULL;
// Node *rear = NULL;

// void create(int x)
// {
// 	Node *newNode = (Node *)malloc(sizeof(Node));
// 	newNode->data = x;
// 	newNode->next = NULL;
// 	newNode->prev = NULL;
// 	if (rear == NULL)
// 	{
// 		head = rear = newNode;
// 		rear->next = head;
// 		head->prev = rear;
// 	}
// 	else
// 	{
// 		rear->next = newNode;
// 		newNode->prev = rear;
// 		newNode->next = head;
// 		rear = rear->next;
// 		head->prev = rear;
// 	}
// }
// void insertAtStart(int x)
// {
// 	Node *newNode = (Node *)malloc(sizeof(Node));
// 	newNode->data = x;
// 	newNode->next = NULL;
// 	newNode->prev = NULL;
// 	if (rear == NULL)
// 	{
// 		rear = head = newNode;
// 		rear->next = head;
// 		head->prev = rear;
// 	}
// 	else
// 	{
// 		newNode->next = head;
// 		head = newNode;
// 		head->prev = rear;
// 		rear->next = head;
// 	}
// }

// void insertAfter(int elem, int newElem)
// {
// 	Node *newNode = (Node *)malloc(sizeof(Node *));
// 	newNode->data = newElem;
// 	newNode->next = NULL;
// 	newNode->prev = NULL;
// 	if (rear == NULL)
// 	{
// 		rear = head = newNode;
// 		rear->next = head;
// 		head->prev = rear;
// 	}
// 	else
// 	{
// 		Node *temp = head;
// 		while (temp != rear)
// 		{
// 			if (temp->data == elem)
// 			{
// 				newNode->prev = temp;
// 				newNode->next = temp->next->next;
// 				temp->next = newNode;
// 			}
// 			temp = temp->next;
// 		}

// 		if (temp == rear)
// 		{
// 			cout << "tu smo" << temp->data << endl;
// 			rear->next = newNode;
// 			newNode->prev = rear;
// 			rear = rear->next;
// 			rear->next = head;
// 			head->prev = rear;
// 		}
// 	}
// }

// int main()
// {
// 	create(1);
// 	create(2);
// 	create(3);
// 	create(4);
// 	create(5);
// 	insertAtStart(0);
// 	insertAfter(5, 19);

// 	Node *temp = head;

// 	while (temp != rear)
// 	{
// 		printf("temp->data = %d \n", temp->data);
// 		temp = temp->next;
// 	}
// 	printf("temp->data = %d", temp->data);
// }

/// stekovi
// #define SIZE 10
// int s[SIZE], top[2] = {-1, SIZE};

// int isEmpty(int x)
// {
// 	switch (x)
// 	{
// 	case 1:
// 		if (top[0] == 0)
// 		{
// 			cout << "Priv stek je prazan";
// 			return 1;
// 		}
// 		else
// 		{
// 			return 0;
// 		}
// 		break;

// 	case 2:
// 		if (top[1] == SIZE)
// 		{
// 			cout << "drugi stek je prazan";
// 			return 1;
// 		}
// 		else
// 		{
// 			return 0;
// 		}
// 		break;
// 	}
// }

// int isFull()
// {
// 	if (top[0] == top[1] - 1)
// 	{
// 		cout << "Stack je pun";
// 		return 1;
// 	}
// 	else
// 	{
// 		return 0;
// 	}
// }
// void push(int x, int value)
// {

// 	switch (x)
// 	{
// 	case 1:
// 		if (!isFull())
// 		{
// 			top[0] += 1;
// 			s[top[0]] = value;
// 		}
// 		break;

// 	case 2:
// 		if (!isFull())
// 		{
// 			top[1] -= 1;
// 			s[top[1]] = value;
// 		}
// 		break;
// 	}
// }

// int pop(int x)
// {
// 	switch (x)
// 	{
// 	case 1:

// 		if (top[0] != -1)
// 		{
// 			top[0]--;
// 			return s[top[0] + 1];
// 		}
// 		else
// 		{
// 			cout << "stek je prazan";
// 		}
// 		break;

// 	case 2:
// 		if (top[1] != SIZE)
// 		{
// 			top[1]++;
// 			return s[top[1] - 1];
// 		}
// 		break;
// 	}
// }
// int main()
// {

// 	push(1, 2);
// 	push(1, 3);
// 	push(1, 5);
// 	push(1, 7);

// 	push(2, 1);
// 	push(2, 4);
// 	push(2, 6);
// 	push(2, 2);
// 	push(2, 60);

// 	cout << pop(1) << pop(2);
// }

/////// insertion sort
// int main()
// {
// 	//            j j+1
// 	//            j  t
// 	int arr[8] = {3, 4, 6, 2, 4, 2, 1, 6};

// 	for (int i = 1; i < 8; i++)
// 	{
// 		int temp = arr[i];
// 		int j = i - 1;
// 		while (temp < arr[j] && j >= 0)
// 		{
// 			arr[j + 1] = arr[j];
// 			j--;
// 		}
// 		arr[j + 1] = temp;
// 	}
// 	for (int i = 0; i < 8; i++)
// 	{
// 		cout << arr[i] << endl;
// 	}
// }

// Redovi
/// redovi preko nizova

// #define SIZE 5
// int CQ[SIZE], f = -1, r = -1;

// int CQfull()
// {
// 	if ((r + 1) % SIZE == f)
// 	{
// 		return 1;
// 	}
// 	else
// 	{
// 		return -1;
// 	}
// }

// int CQempty()
// {
// 	if (r == -1 && f == -1)
// 	{
// 		return 1;
// 	}
// 	else
// 	{
// 		return -1;
// 	}
// }
// void CQinsert(int x)
// {
// 	if (CQfull())
// 	{
// 		cout << "Red je pun";
// 	}
// 	else
// 	{
// 		if (CQempty())
// 		{
// 			f++;
// 		}
// 	}
// }
// int CQdelete()
// {
// 	if (CQempty())
// 	{
// 		cout << "Red je prazan";
// 		return -1;
// 	}
// 	else
// 	{
// 		f = (f + 1) % SIZE;
// 	}
// }
// int main()
// {
// 	CQinsert(1);
// 	CQinsert(2);
// 	CQinsert(3);
// 	CQinsert(4);
// 	cout << CQdelete();
// 	cout << CQdelete();
// 	cout << CQdelete();

// 	for (int i = f; i <= r; i++)
// 	{
// 		cout << endl
// 			 << CQ[i] << endl;
// 	}
// }

// #define SIZE 3

// int stack[SIZE], top = -1;

// void push(int x)
// {
// 	if (top != SIZE)
// 	{
// 		top++;
// 		stack[top] = x;
// 	}
// }

// int *pop()
// {
// 	if (top - 2 >= -1)
// 	{
// 		int elem1 = stack[top--];
// 		int elem2 = stack[top--];

// 		int *arr = new int[2];
// 		arr[0] = elem1;
// 		arr[1] = elem2;
// 		return arr;
// 	}
// 	else
// 	{
// 		printf("Ne moguce je izrbisati dva elementa");
// 		return nullptr;
// 	}
// }
// int main()
// {

// 	push(1);
// 	push(2);
// 	pop();

// 	for (int i = 0; i <= top; i++)
// 	{
// 		printf("i=%d\n", stack[i]);
// 	}
// }

// #define SIZE 13

// int red[SIZE], first1 = -1, rear1 = -1, first2 = SIZE, rear2 = SIZE;

// void dodajElement(int x, int broj)
// {

// 	switch (x)
// 	{
// 	case 1:
// 		if (rear1 + 1 == rear2)
// 		{
// 			printf("Overflow \n");
// 			break;
// 		}
// 		else
// 		{
// 			first1 = 0;
// 			rear1++;
// 			red[rear1] = broj;
// 		}
// 		break;
// 	case 2:
// 		if (rear1 + 1 == rear2)
// 		{
// 			printf("Overflow \n");
// 			break;
// 		}
// 		else
// 		{
// 			first2 = SIZE - 1;
// 			rear2--;
// 			red[rear2] = broj;
// 			printf("rear2=%d\n", red[rear2]);
// 		}
// 		break;
// 	}
// }

// int main()
// {
// 	int i;
// 	dodajElement(1, 4);
// 	dodajElement(1, 6);
// 	dodajElement(1, 8);

// 	dodajElement(1, 997);

// 	dodajElement(1, 998);

// 	dodajElement(2, 9);
// 	dodajElement(2, 10);
// 	dodajElement(2, 11);
// 	dodajElement(2, 11);

// 	dodajElement(2, 11);

// 	dodajElement(2, 11);

// 	dodajElement(2, 11);

// 	dodajElement(2, 12);

// 	for (i = first1; i <= rear1; i++)
// 	{
// 		printf("%d\n", red[i]);
// 	}

// 	printf("Drugi red \n");

// 	for (i = first2; i >= rear2; i--)
// 	{
// 		printf("%d\n", red[i]);
// 	}

// 	return 0;
// }

// Double linked list with double ended queue

// typedef struct NODE{
//	int data;
//	struct NODE*next;
//	struct NODE*prev;
// }Node;
//
// Node*first=NULL,*rear=NULL;
//
// Node*createNode(int x){
//	Node*newNode = (Node*)malloc(sizeof(Node));
//	newNode->data = x;
//	newNode->next = NULL;
//	newNode->prev = NULL;
//	return newNode;
// }
// void insertRear(int x){
//	Node*newNode = createNode(x);
//
//	if(rear==NULL){
//		first=rear=newNode;
//	}else{
//		rear->next = newNode;
//		newNode->prev = rear;
//		rear = newNode;
//	}
// }
// int deleteFirst(){
//	if(first==NULL){
//		printf("queue is empty \n");
//	}else{
//		int elem = first->data;
//		first = first->next;
//		return elem;
//
//	}
// }
//
// void insertFirst(int x){
//	Node*newNode = createNode(x);
//	if(first == NULL){
//		first=rear=newNode;
//	}else{
//		newNode->next = first;
//		first->prev = newNode;
//		first = newNode;
//
//	}
// }
//
// int deleteRear(){
//	if(rear==NULL){
//		printf("Queue is empty\n");
//		return -1;
//	}else{
//		int elem = rear->data;
//		rear=rear->prev;
//		return elem;
//	}
// }
//
//
// int main(){
//	insertRear(1);
//	insertRear(2);
//	insertRear(3);
//	insertRear(4);
//	insertRear(5);
//	deleteFirst();
//
//
//	Node*temp = first;
//	printf("From first\n");
//	while(temp!=rear){
//		printf("temp = %d \n",temp->data);
//		temp=temp->next;
//	}
//	printf("temp = %d\n",temp->data);
//
//
//
//	printf("From rear\n");
//
//	insertFirst(9);
//
//	deleteRear();
//
//	Node*temp2 = rear;
//	while(temp2!=first){
//		printf("temp2=%d\n",temp2->data);
//		temp2=temp2->prev;
//	}
//	printf("temp2=%d\n",temp2->data);
//
//	return 0;
// }

// Klasa Ponuđeni odgovor se sastoji od teksta odgovora(string), koji se zadaje pri stvaranju (podrazumevano ""), informacije da li je tačan i
// procentualnog udela poena koji taj odgovor nosi (u opsegu od -100 do 100). Svi podaci su
//  privatni. Svi podaci se mogu dohvatiti, a informacija o tačnosti i procentualni udeo se
//  mogu postavljati(prilikom postavljanja proveriti da li su uneti ispravni procenti). Odgovor može da se
//  ispiše na glavnom izlazu (out<<odgovor) u obliku tekst: udeo%.

// ⦁	Klasa Sastojak sadrži zadato ime i cenu po kilogramu.Pomoću metoda može da se dohvati vrsta sastojka i da se izračuna cena za
// zadatu količinu sastojka u gramima(količina dolazi kao argument metode). Upisuje se u izlazni tok (cout<<s)  u obliku ime-cena/kg.
// Vrste slanog, slatkog i neutralnog sastojka su SLAN, SLADiNEUT, respektivno. (Odraditi pomoću enumeracije)

// using namespace std;
// enum Vrsta
// {
// 	SLAN,
// 	SLAD,
// 	NEUT
// };

// class Sastojak
// {
// 	string ime;
// 	int cenaKg;
// 	Vrsta vrsta;

// public:
// 	int cena;

// 	Sastojak() {}
// 	Sastojak(string Ime, int CenaKg, Vrsta Vrs = SLAD)
// 	{
// 		ime = Ime;
// 		cenaKg = CenaKg;
// 		vrsta = Vrs;
// 		cena = 0;
// 	}

// 	Vrsta getVrstu()
// 	{
// 		return vrsta;
// 	}
// 	float getCenaGm(int kolicina)
// 	{
// 		int procenaCene = cenaKg * (kolicina / 1000.0);
// 		cena = procenaCene;
// 		return procenaCene;
// 	}
// 	string getIme()
// 	{
// 		return ime;
// 	}
// 	int getCenaKG()
// 	{
// 		return cenaKg;
// 	}

// 	friend ostream &operator<<(ostream &COUT, Sastojak &sastojak)
// 	{
// 		COUT << sastojak.getCenaKG() << "/" << sastojak.getIme() << endl;

// 		return COUT;
// 	}
// };

// class Jelo
// {
// 	string ime;
// 	Sastojak *sastojci;
// 	int brojSastojaka;
// 	int kolicinaGrama;
// 	int cenaJela;
// 	int *grami;

// public:
// 	Jelo(string Ime, int kolicinaGrama)
// 	{
// 		ime = Ime;
// 		brojSastojaka = 0;
// 		cenaJela = 0;
// 		kolicinaGrama = 0;
// 		sastojci = nullptr;
// 		grami = nullptr;
// 		// initialize to nullptr
// 	}

// 	void dodajSastojak(Sastojak s, int kolicina)
// 	{
// 		kolicinaGrama -= kolicina;
// 		if (kolicinaGrama >= 0)
// 		{

// 			int *noviGrami = new int[brojSastojaka + 1];

// 			cenaJela += s.getCenaGm(kolicina);
// 			Sastojak *noviSastojci = new Sastojak[brojSastojaka + 1]; // allocate new array
// 			for (int i = 0; i < brojSastojaka; i++)
// 			{
// 				noviGrami[i] = grami[i];
// 				noviSastojci[i] = sastojci[i]; // copy existing elements
// 			}

// 			noviGrami[brojSastojaka] = kolicina;
// 			noviSastojci[brojSastojaka] = s;
// 			delete[] grami;	   // add new ingredient
// 			delete[] sastojci; // delete old array
// 			sastojci = noviSastojci;
// 			grami = noviGrami; // update pointer
// 			brojSastojaka++;
// 		}
// 		else
// 		{
// 			cout << "Uneli ste previse";
// 		}
// 	}

// 	friend ostream &operator<<(ostream &COUT, Jelo j)
// 	{
// 		COUT << j.ime << ":" << j.cenaJela << endl;
// 		for (int i = 0; i < j.brojSastojaka; i++)
// 		{
// 			cout << j.sastojci[i].getIme() << ":" << j.grami[i] << endl;
// 		}
// 		return COUT;
// 	}
// };

// int main()
// {
// 	Sastojak s1("Secer", 120, SLAD);
// 	Sastojak s2("Brasno", 200, SLAD);
// 	Sastojak s3("Jaja", 80, SLAN);
// 	Jelo j1("Torta", 1000);

// 	j1.dodajSastojak(s1, 300);
// 	j1.dodajSastojak(s2, 200);
// 	j1.dodajSastojak(s3, 100);

// 	cout << j1;

// 	return 0;
// }

// KOLOKVIJUM

// Kreirati klasu Vreme koja ima atribute sati, minuti i sekunde i metode:
//   konstruktor bez argumenata, konstruktor sa 3 argumenta (sati, minuti i sekunde),
//   konstruktor sa 2 argumenta (sati i minuti), Info sa argumentom tipa bool koji određuje da li će vreme
//   biti ispisano u punom format (hh:mm:ss) ili u skraćenom formatu (hh:mm), Add koja kao rezultat vraća novi objekat
//   tipa vreme koji predstavlja sumu vremena posleđenog kao parametar i instance this, Add koja kao rezultat vraća novi
//    objekat tipa vreme koji predstavlja sumu parametra izraženog u minutama i vremena instance this, CompareTo koja vraća
//     vrednost tipa int u zavisnosti od toga da li je vreme instance this pre, jednako ili posle vremena proslijeđenog kao
//      parameter (-1 - vreme instance this nastupa pre vremena v2, 0 - vreme instance this je jednako vremenu v2, 1 - vreme
//  	instance this nastupa nakon vremena v2). (10 poena)

// #include <iostream>
// #include <cstdlib>
// #include <cstring>
// using namespace std;
// class Vreme
// {
// 	int hours;
// 	int minutes;
// 	int seconds;

// public:
// 	int ukupnoVreme;
// 	Vreme()
// 	{
// 		hours = 0;
// 		minutes = 0;
// 		seconds = 0;
// 		ukupnoVreme = 0;
// 	}
// 	Vreme(int Hours, int Minutes)
// 	{

// 		hours = Hours;
// 		minutes = Minutes;
// 		seconds = 0;
// 		ukupnoVreme = hours * 3600 + minutes * 60;
// 	}
// 	Vreme(int Hours, int Minutes, int Seconds)
// 	{
// 		hours = Hours;
// 		minutes = Minutes;
// 		seconds = Seconds;
// 		ukupnoVreme = ukupnoVreme = hours * 3600 + minutes * 60 + seconds;
// 	}
// 	void info(bool check)
// 	{
// 		if (check)
// 		{
// 			cout << hours << ":" << minutes << ":" << seconds;
// 		}
// 		else
// 		{
// 			cout << hours << ":" << minutes;
// 		}
// 	}
// 	Vreme add(Vreme v2)
// 	{
// 		int vremeUkupno = ukupnoVreme + v2.ukupnoVreme;

// 		int h = (vremeUkupno / 3600);
// 		vremeUkupno -= h * 3600;
// 		int m = (vremeUkupno / 60);
// 		vremeUkupno -= m * 60;
// 		int s = vremeUkupno;
// 		Vreme newV(h % 24, m % 60, s % 60);
// 		return newV;
// 	}
// 	Vreme addByMin(int mins)
// 	{

// 		cout << mins << endl;
// 		int m = mins + minutes;
// 		int h = hours + m / 60;
// 		int s = seconds;

// 		cout << "time by min " << h % 24 << ":" << m % 60 << ":" << s % 60 << endl;
// 		Vreme newV(h % 24, m % 60, s % 60);
// 		return newV;
// 	}
// 	int compareTo(Vreme v)
// 	{
// 		if (ukupnoVreme == v.ukupnoVreme)
// 		{
// 			return 0;
// 		}
// 		else if (ukupnoVreme > v.ukupnoVreme)
// 		{
// 			return 1;
// 		}
// 		else
// 		{
// 			return -1;
// 		}
// 	}
// 	void ispis()
// 	{
// 		cout << hours << ":" << minutes << ":" << seconds << endl;
// 	}
// };
// class Datum
// {
// 	int dan;
// 	int mesec;
// 	int godina;

// public:
// 	Datum()
// 	{
// 		dan = 0;
// 		mesec = 0;
// 		godina = 0;
// 	}
// 	Datum(int Dan, int Mesec, int Godina)
// 	{
// 		dan = Dan;
// 		mesec = Mesec;
// 		godina = Godina;
// 	}

// 	void ispis()
// 	{
// 		cout << dan << "/" << mesec << "/" << godina << endl;
// 	}

// 	~Datum()
// 	{
// 	}
// };

// enum TIP
// {
// 	ADMIN,
// 	GOST
// };

// class Korisnik
// {
// 	char punoIme[30];
// 	char ime[20];
// 	string lozinka;
// 	TIP tip;

// public:
// 	Korisnik(char *PI = "", char *I = "", string L = "", TIP tip = GOST)
// 	{
// 		strcpy(punoIme, PI);
// 		strncpy(ime, I, 19);
// 		lozinka = L;
// 		this->tip = tip;
// 		lozinka = L;
// 	}
// 	void ispis()
// 	{
// 		cout << "IME " << ime << "Puno ime " << punoIme << endl;
// 	}
// 	void promeniLozinku(string oldP, string newP)
// 	{
// 		if (oldP == lozinka)
// 		{
// 			lozinka = newP;
// 		}
// 		else
// 		{
// 			cout << "Error" << endl;
// 		}
// 	}
// 	char *getAutor()
// 	{
// 		return ime;
// 	}
// 	TIP getTip()
// 	{
// 		return tip;
// 	}
// };

// class Komentar
// {
// 	string tekst;
// 	Datum datum;
// 	Vreme vreme;
// 	double popularnost;
// 	Korisnik korisnik;

// public:
// 	Komentar(string T = "", Datum D = Datum(), Vreme V = Vreme(), double P = 0, Korisnik K = Korisnik())
// 	{
// 		tekst = T;
// 		datum = D;
// 		vreme = V;
// 		popularnost = P;
// 		korisnik = K;
// 	}

// 	void ispis()
// 	{
// 		cout << tekst << endl;
// 	}

// 	void povecajPopluarnost()
// 	{
// 		popularnost += 1;
// 	}
// };

// class Clanak
// {
// 	char naslov[50];
// 	string sadrzaj;
// 	Datum datum;
// 	Vreme vreme;
// 	int brojPregleda;
// 	string tagovi[100];
// 	int brojTagova;
// 	Korisnik autor;
// 	Komentar *komentari;
// 	int brojKomentara;

// public:
// 	Clanak(Korisnik korisnik = Korisnik(), char *N = "", string S = "", Datum D = Datum(1, 1, 2022), Vreme V = Vreme(0, 0, 0), int BP = 0)
// 	{
// 		strcpy(naslov, N);
// 		sadrzaj = S;
// 		datum = D;
// 		vreme = V;
// 		brojPregleda = BP;
// 		brojKomentara = 0;
// 		brojTagova = 0;
// 		komentari = new Komentar[brojKomentara];
// 		autor = korisnik;
// 	}
// 	void dodajTag(string t)
// 	{
// 		tagovi[brojTagova] = t;
// 		brojTagova++;
// 	}

// 	void dodajKomentar(Komentar k)
// 	{
// 		if (autor.getTip() == GOST)
// 		{
// 			Komentar *newList = new Komentar[brojKomentara + 1];

// 			for (int i = 0; i < brojKomentara; i++)
// 			{
// 				cout << "koment added";

// 				newList[i] = komentari[i];
// 			}
// 			newList[brojKomentara] = k;
// 			delete[] komentari;
// 			komentari = newList;
// 			brojKomentara++;
// 		}
// 		else
// 		{
// 			cout << "Moderator ne moze ostaviti komenatar" << endl;
// 		}
// 	}

// 	void promeniSadrzaj(string ime, string Sadrzaj, Datum d)
// 	{
// 		cout << ime << "=" << autor.getAutor() << endl;
// 		if (ime == autor.getAutor())
// 		{
// 			datum = d;
// 			sadrzaj = Sadrzaj;
// 		}
// 		else
// 		{
// 			cout << "Ne mozete menjati sadrzaj" << endl;
// 		}
// 	}
// 	friend ostream &operator<<(ostream &COUT, Clanak &cla)
// 	{
// 		COUT << "Naslov:" << endl
// 			 << cla.naslov << endl
// 			 << "Sadrzaj:" << endl
// 			 << cla.sadrzaj << endl
// 			 << "KOMENTARI:" << endl;

// 		for (int i = 0; i < cla.brojKomentara; i++)
// 		{
// 			cla.komentari[i].ispis();
// 		}
// 		COUT << "Objavljeno:";
// 		cla.datum.ispis();
// 		cla.vreme.ispis();
// 		return COUT;
// 	}
// };
// using namespace std;
// int main()
// {
// 	system("cls");
// 	Vreme v1(4, 56, 20);
// 	Vreme v2(23, 4, 20);
// 	Vreme v3 = v1.add(v2);
// 	Vreme v4 = v1.addByMin(25);
// 	cout << "Poredjenje vremena " << v1.compareTo(v2) << endl;

// 	Datum d1(1, 8, 2023);
// 	Datum d2(2, 4, 2020);
// 	Korisnik kor1("Hamza Gorcevic", "hamza", "hamza123", GOST);
// 	Komentar kom1("Ovo je divno", d1, v1, 976, kor1);

// 	Komentar kom2("Ne svidja mi se", d1, v2);
// 	Clanak c1(kor1, "Twiter", "Elon musk", d1, v1, 20);

// 	c1.dodajKomentar(kom1);
// 	c1.dodajKomentar(kom2);

// 	c1.promeniSadrzaj("hamza", "Andrew Tate", d2);

// 	cout << c1;
// 	return 0;
// }

// KOLOKVIJUM 2

// (30 поена) Одговорити концизно (по једна или две реченице) и прецизно на следећа питaња:
// а) Које наредбе су неисправне (преписати програм и подвући их):
// int main() {int i=1; int *p1=new int(10); int &r1=i; int &r2=p1;
//  int *p2=p1; int *p3=r1; int *p4=&r1; int &r3=r2; int &rn[10]; }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int i = 1;
//     int *p1 = new int(10);
//     int &r1 = i;
//     r1 = 3;
//     cout << i << endl;
//     cout << "Trebala bi bita 1 ==" << &r1 << endl;

// int &r2 = p1;
// int *p2 = p1;
// int *p3 = r1;
// int *p4 = &r1;
// int &r3 = r2;
// int &rn[10];
// }

// б) Да ли је дозвољено из методе класе А позване за објекат А а1 приступити: (1) приватном члану
// објекта А а2; (2) јавном члану објекта B b1; (3) приватном члану објекта А а1; (4) приватном
// члану објекта B b2?

// в) Које особине стандардних оператора се подразумевају при њиховом преклапању?

//  (5 поена) Тест се састоји од два шпила који се задају приликом стварања. Могуће је узети карту
// (test--) из првог шпила, док се у случају да је први шпил празан, карта узима из другог
// шпила. Тест је завршен када оба шпила постану празна. Може се проверити да ли је тест
// завршен.
// (10 поена) Написати на језику C++ програм који створи један шпил, дода неколико карата у њега и
// затим га испише. Потом се направи нови шпил као копија претходног и у њега дода још једна карта, а
// из постојећег шпила се избаци једна карта са краја шпила. Оба шпила је потребно исписати. Након
// тога се направи тест помоћу претходна два шпила и редом узимају карте уз исписивање на
// стандардном излазу све док се не дође до краја теста. Није потребно ништа учитавати с главног улаза.

// 2) (укупно 70 поена) Написати на језику C++ следеће класе (класе опремити оним конструкторима,
// деструктором и операторима доделе који су потребни за безбедно и ефикасно коришћење класа):
//  (15 поена) Карта се задаје знаком (PIK, TREF, KARO, HERC) и бројем (К1=1, К2, К3, К4, К5,
// К6, К7, К8, К9, К10=10, ZANDAR=12, DAMA=13, KRALJ=14). Може да се одреди вредност
// карте према следећем критеријуму: жандар, дама, краљ, 1 и 10 = 1 поен, 2 треф = 1 поен, 10
// каро = 2 поена, док све остале карте вреде 0 поена. Могуће је упоредити број на две карте
// (karta1>karta2), као и вредност коју носе две карте (karta1>>karta2). Карту је могуће
// уписати у излазни ток (it<<karta) у облику karta(број, знак).

//  (40 поена) Шпил се састоји од произвољног броја карата. Ствара се празан после чега се карте
// додају једна по једна на крај шпила (spil+=karta). Могуће је узети карту са краја шпила
// (spil--), при чему било каква грешка приликом узимања карте доводи до прекида програма.
// Може да се одреди укупан број карата у шпилу, укупна вредност свих карата у шпилу (spil())
// и да се дохвати карта са највећим бројем.
// Два шпила је могуће упоредити на основу укупне
// вредности свих карата у њима (spil1>spil2) или на основу карте са највећим бројем
// (spil1>>spil2) – први шпил је већи од другог ако је највећа карта у првом шпилу већа од
// највеће карте у другом шпилу. Шпил се у излазни ток исписује (it<<spil) тако што се у првој
// линији испише spil(број_карата), а затим се у засебним линијама исписују појединачне
// карте из шпила.
// #include <iostream>

// using namespace std;
// enum ZNAK
// {
//     PIK,
//     TREF,
//     KARO,
//     HERC
// };
// enum BROJ
// {
//     K1 = 1,
//     K2,
//     K3,
//     K4,
//     K5,
//     K6,
//     K7,
//     K8,
//     K9,
//     K10,
//     ZANDAR,
//     DAMA,
//     KRALJ
// };

// class Karta
// {
//     ZNAK znak;
//     BROJ broj;

// public:
//     Karta()
//     {
//         znak = PIK;
//         broj = K1;
//     }
//     Karta(ZNAK z, BROJ b)
//     {
//         znak = z;
//         broj = b;
//     }
//     int getBroj()
//     {
//         return broj;
//     }
//     int vrednost()
//     {
//         if (broj == KRALJ || broj == K10 || broj == DAMA || broj == ZANDAR || broj == K1)
//         {
//             return 1;
//         }
//         else if (broj == K10 && znak == KARO || (broj == K2 && znak == TREF))
//         {
//             return 2;
//         }
//         else
//         {
//             return 0;
//         }
//     }
//     string getZnak()
//     {
//         switch (znak)
//         {
//         case PIK:
//             return "pik";
//             break;
//         case HERC:
//             return "herc";
//             break;
//         case KARO:
//             return "karo";
//             break;
//         case TREF:
//             return "tref";
//             break;
//         default:
//             return "Netacna karta";
//             break;
//         }
//     }

//     bool operator>(const Karta &k)
//     {
//         return broj > k.broj;
//     }
//     bool operator>>(Karta &k)
//     {
//         return vrednost() > k.vrednost();
//     }

//     friend ostream &operator<<(ostream &COUT, Karta &k)
//     {
//         COUT << "Karta:"
//              << "(" << k.getZnak() << "," << k.broj << ")" << endl;

//         return COUT;
//     }
// };

// class Spil
// {
//     int brKarata;
//     Karta *karte;

// public:
//     Spil()
//     {
//         brKarata = 0;
//         karte = new Karta[brKarata + 1];
//     }
//     void operator+=(Karta k)
//     {
//         karte[brKarata] = k;

//         brKarata++;
//     }

//     void operator--(int)
//     {
//         brKarata--;
//     }

//     Karta getNajvecu()
//     {
//         int max = karte[0].getBroj();
//         for (int i = 0; i < brKarata; i++)
//         {
//             if (max > karte[i].getBroj())
//             {
//                 max = karte[i].getBroj();
//                 return karte[i];
//             }
//         }
//     }
//     int operator()()
//     {
//         return brKarata;
//     }

//     bool operator>(Spil &s1)
//     {
//         return brKarata > s1.brKarata;
//     }
//     bool operator>>(Spil &s1)
//     {
//         return getNajvecu().vrednost() > s1.getNajvecu().vrednost();
//     }

//     friend ostream &operator<<(ostream &COUT, Spil s)
//     {
//         COUT << "Spil"
//              << "(" << s.brKarata << ")" << endl;

//         for (int i = 0; i < s.brKarata; i++)
//         {
//             cout << s.karte[i];
//         }
//         return COUT;
//     }
// };
// int main()
// {
//     BROJ b1 = K2;
//     Karta prva(HERC, K1);
//     Karta druga(PIK, K10);
//     Karta treca(TREF, K5);
//     Karta cetvrta(KARO, K7);

//     Karta prva1(HERC, K2);
//     Karta druga1(PIK, K1);
//     Karta treca1(TREF, K5);
//     Karta cetvrta1(KARO, K8);
//     Spil s;
//     Spil s1;

//     s1 += prva1;
//     s1 += druga1;
//     s1 += treca1;
//     s1 += cetvrta1;

//     cout << s1;

//     // bool check = prva > druga;
//     // cout << check;
//     // cout << s;

//     s += prva;
//     s += druga;
//     s += treca;
//     s += cetvrta;
//     s--;
//     cout
//         << s;

//     bool check = s1 > s;
//     bool dcheck = s1 >> s;
//     cout << "Da li je veca s1 od s    " << check << endl
//          << "da li je najveca veca s1 od s  " << dcheck << endl;
//     // cout << "Broj karti:" << s() << endl;

//     // cout << "Najveca karta u spilu :" << endl
//     //      << s.getNajvecu() << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Tacka
// {
//     double x;
//     double y;

// public:
//     Tacka(double X, double Y)
//     {
//         x = X;
//         y = Y;
//     }

//     int rastojanje(Tacka t = Tacka(0, 0))
//     {
//         return sqrt(pow(x - t.x, 2) + pow(y - t.y, 2));
//     }
//     friend ostream &operator<<(ostream &COUT, Tacka &t)
//     {
//         COUT << "(" << t.x << "," << t.y << ")";
//         return COUT;
//     }
// };

// class Trougao
// {
//     Tacka *temena[3];
//     string ime;

// public:
//     Trougao()
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             temena[i];
//         }
//         ime = "";
//     }
//     Trougao(Tacka *tem[3], string i)
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             temena[i] = tem[i];
//         }
//         ime = i;
//     }
//     Trougao(Trougao &t)
//     {
//         ime = t.ime + "_COPIED";

//         for (int i = 0; i < 3; i++)
//         {
//             temena[i] = t.temena[i];
//         }
//     }
//     Tacka *dohvatiTeme(int x)
//     {
//         if (x < 0 || x > 2)
//         {
//             return nullptr;
//         }
//         else
//         {
//             return temena[x];
//         }
//     }
//     friend ostream &operator<<(ostream &COUT, Trougao trg)
//     {
//         int srRast = 0;
//         COUT << trg.ime << "(";
//         for (int i = 0; i < 3; i++)
//         {
//             srRast += trg.temena[i]->rastojanje();
//             cout << ",";
//             cout << *trg.temena[i];
//         }
//         cout << ":" << srRast << ")" << endl;
//     }
// };

// class Mreza
// {
//     typedef struct ELEM
//     {
//         Trougao trg;
//         struct ELEM *next;
//     } Elem;

//     Elem *prvi;
//     Elem *last;
//     string ime;

// public:
//     Mreza(string i)
//     {
//         prvi = NULL;
//         last = NULL;
//         ime = i;
//     }

//     void dodajTrougao(Trougao t)
//     {
//         Elem *newElem = new Elem;
//         newElem->trg = t;
//         if (prvi == NULL)
//         {
//             prvi = last = newElem;
//             cout << "Prvi dodan";
//         }
//         else
//         {
//             cout << "elem dodan";
//             last->next = newElem;
//         }
//     }
//     void ispis()
//     {
//         cout << "ISPIS" << endl;
//         Elem *temp = prvi;
//         while (temp != nullptr)
//         {
//             cout << temp->trg;
//             temp = temp->next;
//         }
//     }
// };
// int main()
// {
//     Tacka t1(3, 4);
//     Tacka t2(3, 2);
//     Tacka t3(6, 5);

//     Tacka *niz[] = {&t1, &t2, &t3};

//     Trougao trg(niz, "Hamza");
//     cout << trg;
//     Trougao trg2(trg);
//     Mreza m("hamo");
//     m.dodajTrougao(trg);

//     m.ispis();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// enum ZANR
// {
//     POP,
//     REP,
//     ROK
// };
// class Izvodjac
// {
//     string ime;
//     ZANR zanr;

// public:
//     Izvodjac(string I = "", ZANR z = ROK)
//     {
//         ime = I;
//         zanr = z;
//     }
//     string getZanr()
//     {
//         switch (zanr)
//         {
//         case 0:
//             return "POP";
//             break;
//         case 1:
//             return "REP";
//             break;
//         case 2:
//             return "ROK";
//             break;
//         default:
//             return "invalid";
//             break;
//         }
//     }

//     friend ostream &operator<<(ostream &COUT, Izvodjac &iz)
//     {
//         cout << iz.ime << "(" << iz.getZanr() << ")" << endl;
//     }
// };

// class Pesma
// {
//     string naziv;
//     int brMin;
//     int brSek;
//     int max;
//     Izvodjac *izvodjaci;
//     int counter;

// public:
//     Pesma(string N, int brM, int brS, int m)
//     {
//         naziv = N;
//         brMin = brM;
//         brSek = brS;
//         max = m;
//         counter = 0;
//         izvodjaci = new Izvodjac[max];
//     }

//     void operator+=(Izvodjac iz)
//     {
//         if (counter < max)
//         {
//             izvodjaci[counter] = iz;
//             counter++;
//         }
//         else
//         {
//             throw "Prekoracenje";
//         }
//     }
// };
// int main()
// {
//     Izvodjac iz1("AHmo", REP);
//     cout << iz1;

//     return 0;
// }

// Binarna stabla

// #include <stdlib.h>
// #include <iostream>
// using namespace std;

// typedef struct NODE
// {
//     int data;
//     struct NODE *left;
//     struct NODE *right;
// } Node;

// Node *createNode(int x)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = x;
//     newNode->left = nullptr;
//     newNode->right = nullptr;
//     return newNode;
// }

// void printInOrder(Node *tree)
// {

//     if (tree)
//     {
//         printInOrder(tree->left);
//         cout << tree->data << endl;
//         printInOrder(tree->right);
//     }
// }
// void printPreOrder(Node *tree)
// {
//     if (tree)
//     {
//         cout << tree->data << endl;
//         printPreOrder(tree->left);
//         printPreOrder(tree->right);
//     }
// }

// void printPostOrder(Node *tree)
// {
//     if (tree)
//     {
//         printPreOrder(tree->left);
//         printPreOrder(tree->right);
//         cout << tree->data << endl;
//     }
// }

// void deltree(Node *tree)
// {
//     if (tree)
//     {
//         deltree(tree->left);
//         deltree(tree->right);
//         free(tree);
//     }
// }

// void printLeafs(Node *tree)
// {

//     if (tree)
//     {
//         printLeafs(tree->left);
//         printLeafs(tree->right);
//         if (tree->right == NULL && tree->left == NULL)
//         {
//             cout << tree->data << endl;
//         }
//     }
// }

// int suma(Node *tree)
// {
//     if (tree)
//     {
//         return tree->data + suma(tree->left) + suma(tree->right);
//     }
// }

// int brojElementata(Node *tree)
// {
//     if (tree)
//     {
//         return 1 + brojElementata(tree->left) + brojElementata(tree->right);
//     }
// }

// void search(int x, Node *tree)
// {
//     if (tree)
//     {
//         if (tree->data == x)
//         {
//             cout << "Postoji" << endl;
//         }
//         else
//         {
//             search(x, tree->left);
//             search(x, tree->right);
//         }
//     }
// }

// bool searchBool(int x, Node *tree)
// {
//     if (tree)
//     {
//         if (tree->data == x)
//         {
//             return true;
//         }
//         else
//         {
//             return searchBool(x, tree->left) || searchBool(x, tree->right);
//         }
//     }
// }

// int maxDubina(Node *tree)
// {
//     if (tree == nullptr)
//     {
//         return 0;
//     }
//     int dubinaLijevogPodstabla = maxDubina(tree->left);
//     int dubinaDesnogPodstabla = maxDubina(tree->right);
//     return 1 + max(dubinaLijevogPodstabla, dubinaDesnogPodstabla);
// }

// int brojElemenataNaNivou(Node *tree, int n)
// {
//     if (tree == nullptr)

//     {
//         return 0;
//     }
//     if (n == 0)
//     {
//         return 1;
//     }
//     return brojElemenataNaNivou(tree->left, n - 1) + brojElemenataNaNivou(tree->right, n - 1);
// }

// void ispisElemenataNaNtomNivou(Node *tree, int n)
// {

//     if (tree)
//     {
//         if (n == 0)

//         {
//             cout << tree->data << endl;
//         }
//         else
//         {

//             ispisElemenataNaNtomNivou(tree->left, n - 1);
//             ispisElemenataNaNtomNivou(tree->right, n - 1);
//         }
//     }
// }

// int zbirNaNtomNivout(Node *tree, int n)
// {
//     if (tree)
//     {
//         if (n == 0)
//         {
//             return tree->data;
//         }
//         else
//         {
//             return zbirNaNtomNivout(tree->left, n - 1) + zbirNaNtomNivout(tree->right, n - 1);
//         }
//     }
//     else
//         return 0;
// }
// int zbirListova(Node *tree)
// {
//     if (tree)
//     {

//         if (tree->left == NULL && tree->right == NULL)
//         {
//             return tree->data;
//         }
//         else
//         {
//             return zbirListova(tree->left) + zbirListova(tree->right);
//         }
//     }
//     else
//         return 0;
// }
// int maxElement(Node *tree)
// {
//     int max = tree->data;
//     if (tree->left)
//     {
//         if (max < maxElement(tree->left))
//         {
//             max = maxElement(tree->left);
//         }
//     }
//     if (tree->right)
//     {
//         if (max < maxElement(tree->right))
//         {
//             max = maxElement(tree->right);
//         }
//     }
//     return max;
// }
// int main()
// {
//     Node *s = createNode(1);
//     Node *f = createNode(2);
//     Node *k = createNode(3);
//     Node *m = createNode(4);
//     Node *l = createNode(5);
//     Node *n = createNode(6);
//     Node *o = createNode(3);
//     Node *h = createNode(43);
//     s->left = f;
//     s->right = k;
//     f->left = h;
//     k->left = m;
//     k->right = l;
//     m->left = n;
//     m->right = o;

//     cout << "Printed in order" << endl;
//     printInOrder(s);
//     cout << "Printed in pre order" << endl;
//     printPreOrder(s);

//     cout << "Printed in postorder" << endl;
//     printPostOrder(s);

//     cout << "Printing leafs" << endl;
//     printLeafs(s);

//     cout << "SUMA: " << suma(s) << endl;

//     cout << "Br elementa: " << brojElementata(s) << endl;

//     search(3, s);
//     cout << "MAX dubina je :" << maxDubina(s) << endl;

//     cout << "Broj el na nivou: " << brojElemenataNaNivou(s, 2) << endl;

//     cout << "Ispis elemenata na n-tom nivou" << endl;
//     ispisElemenataNaNtomNivou(s, 2);

//     cout << "Zbir na ntom nivou elemenata je:" << zbirNaNtomNivout(s, 2) << endl;

//     cout << "Zbir listova je:" << zbirListova(s) << endl;

//     cout << "MAx element je :" << maxElement(s);
//     deltree(s);
//     return 0;
// }

// Napiši program koji iz datoteke čita niz brojeva i stvara binarno stablo pretraživanja.
//  Zatim, program treba da izvrši inorder obilazak stabla i pronađe dva čvora stabla čiji je zbir jednak zadatom broju.
//  Nakon toga, program treba da ispiše vrijednosti tih čvorova.

// Napomena: Ovo je samo primjer zadatka i može biti složen za rješavanje u zavisnosti od nivoa znanja programiranja u jeziku C.

// #include <iostream>
// using namespace std;

// typedef struct NODE
// {
//     int data;
//     struct NODE *left;
//     struct NODE *right;
// } Node;
// Node *first = NULL;

// Node *createNode(int x)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = x;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;
// }

// Node *madeUpTree(int *niz, int n, int i, Node *tree = NULL)
// {
//     if (i < n)
//     {
//         Node *temp = createNode(niz[i]);

//         tree = temp;
//         tree->left = madeUpTree(niz, n, 2 * i + 1, tree->left);
//         tree->right = madeUpTree(niz, n, 2 * i + 2, tree->right);
//     }
//     return tree;
// }

// Node *madeUpTreeAllOnLeft(int *niz, int i, int n, Node *tree)
// {
//     if (i < n)
//     {
//         Node *temp = createNode(niz[i]);
//         tree = temp;
//         tree->left = madeUpTreeAllOnLeft(niz, i + 1, n, tree->left);
//     }
//     return tree;
// }

// void printInOrder(Node *tree)
// {
//     if (tree)
//     {
//         printInOrder(tree->left);
//         cout << tree->data << endl;
//         printInOrder(tree->right);
//     }
// }
// void printLeafs(Node *tree)
// {
//     if (tree)
//     {
//         if (tree->left == NULL && tree->right == NULL)
//         {
//             cout << "Leaf" << tree->data << endl;
//         }
//         else
//         {
//             printLeafs(tree->left);
//             printLeafs(tree->right);
//         }
//     }
// }

// // another way of implementing

// int main()
// {
//     int n = 6;
//     int niz[6] = {2, 3, 6, 44, 3, 2};
//     Node *s = NULL;
//     Node *tree = madeUpTree(niz, n, 0, s);

//     Node *s1 = NULL;
//     Node *newTree = madeUpTreeAllOnLeft(niz, 0, n, s1);

//     printLeafs(newTree);
//     printInOrder(newTree);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// typedef struct NODE
// {
//     int data;
//     struct NODE *next;
//     struct NODE *prev;
// } Node;
// Node *first = NULL, *last = NULL;

// Node *createElement(int x)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = x;
//     newNode->next = NULL;
//     newNode->prev = NULL;
//     return newNode;
// }

// void insertNode(int x)
// {
//     Node *newNode = createElement(x);

//     if (first == NULL)
//     {
//         last = first = newNode;
//     }
//     else
//     {
//         last->next = newNode;
//         newNode->prev = last;
//         last = newNode;
//     }
// }
// void deleteElement(int x)
// {
//     Node *temp = first;
//     if (first->data == x)
//     {
//         first = first->next;
//         first->prev = NULL;
//     }
//     else if (last->data == x)
//     {
//         last = last->prev;
//         last->next = NULL;
//     }
//     else
//     {
//         while (temp != NULL)
//         {
//             if (temp->data == x)
//             {
//                 temp->prev->next = temp->next;
//             }
//             temp = temp->next;
//         }
//     }
// }
// void ispis()
// {
//     Node *temp = first;
//     while (temp != NULL)
//     {
//         cout << temp->data << endl;
//         temp = temp->next;
//     }
// }
// int main()
// {
//     insertNode(1);
//     insertNode(2);
//     insertNode(3);
//     insertNode(4);
//     deleteElement(4);
//     deleteElement(2);
//     ispis();
//     cout << "nes";
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int deck[12];
// int first = -1, rear = 12;

// int isEmpty()
// {
//     if (first == -1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int isFull()
// {
//     if (first == rear - 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// void addElement(int x)
// {
//     if (x % 2 == 0)
//     {
//         if (isFull())
//         {
//             printf("stek je pun\n");
//         }
//         else
//         {
//             first++;
//             deck[first] = x;
//         }
//     }
//     else
//     {
//         if (isFull())
//         {
//             printf("stek je pun\n");
//         }
//         else
//         {
//             rear--;
//             deck[rear] = x;
//         }
//     }
// }

// void ispis()
// {
//     for (int i = 0; i < 12; i++)
//     {
//         printf("%d\n", deck[i]);
//     }
// }
// int main()
// {
//     printf("unesite broj elementa \n");
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     printf("unesite elemente\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//         addElement(arr[i]);
//     }
//     ispis();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// //  3/7/2019

// // 1.zadatak
// // Pomeranje ulevo i pomeranje udesno
// typedef struct NODE
// {
//     int data;
//     struct NODE *next;
// } Node;
// Node *first = NULL, *last = NULL;

// void insertElement(int x)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = x;
//     newNode->next = NULL;
//     if (first == NULL)
//     {
//         last = first = newNode;
//     }
//     else
//     {
//         last->next = newNode;
//         last = newNode;
//         last->next = first;
//     }
// }

// void shiftRight(int m, int i)
// {
//     if (m > i)
//     {
//         last = first;
//         first = first->next;
//         shiftRight(m, i + 1);
//     }
// }

// void shiftLeft(int m, int i)
// {
//     if (m > i)
//     {
//         Node *temp = first;
//         first = last;
//         printf("last :%d \n", last->data);

//         while (temp->next != last)
//         {
//             temp = temp->next;
//         }
//         last = temp;
//         shiftLeft(m, i + 1);
//     }
// }

// int main()
// {
//     insertElement(1);
//     insertElement(2);
//     insertElement(3);
//     insertElement(4);
//     shiftRight(2, 0);
//     // shiftLeft(3, 0);

//     Node *temp = first;

//     for (int i = 0; i < 4; i++)
//     {
//         printf("i = %d\n", temp->data);
//         temp = temp->next;
//     }

//     printf("Normalan print");
//     Node *temp2 = first;
//     while (temp2 != last)
//     {
//         printf("%d\n", temp2->data);
//         temp2 = temp2->next;
//     }

//     return 0;
// }

// Zadata za pravljenje nove kruzne list od vec postojoce
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node
// {
//     int data;
//     struct node *next;
// } Node;
// Node *firstList = NULL, *rearList = NULL;
// Node *first2 = NULL;
// Node *rear2 = NULL;
// Node *createElement(int x)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = x;
//     newNode->next = NULL;
// }
// void insertElement(int x)
// {
//     Node *newElement = createElement(x);
//     if (firstList == NULL)
//     {
//         firstList = rearList = newElement;
//         rearList->next = firstList;
//     }
//     else
//     {
//         rearList->next = newElement;
//         rearList = newElement;
//         rearList->next = firstList;
//     }
// }

// void listFnc()
// {
//     Node *temp = firstList;
//     do
//     {

//         printf("i=%d\n", temp->data);
//         if (first2 == NULL)
//         {
//             Node *current = createElement(temp->data);
//             first2 = rear2 = current;
//         }
//         else
//         {
//             Node *help = first2;
//             int check = 1;
//             do
//             {
//                 printf("temp%d == help%d\n", temp->data, help->data);
//                 if (temp->data == help->data)
//                 {
//                     check = 0;
//                     help = rear2;
//                     break;
//                 }
//                 help = help->next;
//             } while (help != rear2->next);

//             if (check)
//             {
//                 Node *current = createElement(temp->data);
//                 rear2->next = current;
//                 rear2 = rear2->next;
//                 rear2->next = first2;
//             }
//         }

//         temp = temp->next;
//     } while (temp != rearList->next);
// }

// int main()
// {
//     insertElement(1);
//     insertElement(2);
//     insertElement(3);
//     insertElement(4);
//     insertElement(4);
//     insertElement(2);
//     insertElement(1);
//     insertElement(3);
//     insertElement(1);
//     insertElement(5);

//     listFnc();
//     printf("rear2=%d,first2=%d \n", rear2->data, first2->data);
//     do
//     {
//         printf("%d\n", first2->data);
//         first2 = first2->next;
//     } while (first2 != rear2->next);
//     return 0;
// }

// zadatak , prebacivanje sa neparnih mesta dvostruke u jednostruku listu

// #include <iostream>
// using namespace std;

// typedef struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// } DblNode;
// DblNode *DblFirst = NULL;

// typedef struct NODE
// {
//     int data;
//     struct NODE *next;
// } Node;
// Node *first = NULL, *last = NULL;

// void insertDblNode(int x)
// {
//     DblNode *newNode = (DblNode *)malloc(sizeof(DblNode));
//     newNode->data = x;
//     newNode->next = NULL;
//     newNode->prev = NULL;
//     if (DblFirst == NULL)
//     {
//         DblFirst = newNode;
//     }
//     else
//     {
//         DblFirst->next = newNode;
//         newNode->prev = DblFirst;
//         DblFirst = DblFirst->next;
//     }
// }

// void insertNode(int x)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = x;
//     newNode->next = NULL;
//     if (first == NULL)
//     {
//         last = first = newNode;
//     }
//     else
//     {
//         last->next = newNode;
//         last = last->next;
//     }
// }

// void sortNode()
// {
//     Node *temp = first;
//     int max = 0;
//     while (temp != NULL)
//     {
//         Node *j = first;
//         while (j != NULL)
//         {
//             if (temp->data > j->data)
//             {
//                 int help = temp->data;
//                 temp->data = j->data;
//                 j->data = help;
//             }
//             j = j->next;
//         }
//         temp = temp->next;
//     }
// }
// void change()
// {
//     DblNode *temp = DblFirst;
//     int counter = 0;

//     while (temp != NULL)
//     {
//         if (counter % 2 == 0)
//         {
//             printf("%d last ,", last->data);
//             Node *newNode = (Node *)malloc(sizeof(Node));
//             newNode->data = temp->data;
//             newNode->next = NULL;
//             last->next = newNode;
//             last = last->next;
//         }
//         temp = temp->prev;
//         counter++;
//     }
// }

// void print()
// {
//     Node *temp = first;
//     while (temp != NULL)
//     {
//         printf("%d\n", temp->data);
//         temp = temp->next;
//     }
// }

// int main()
// {
//     insertDblNode(10);
//     insertDblNode(20);
//     insertDblNode(30);
//     insertDblNode(40);
//     insertNode(1);
//     insertNode(2);
//     insertNode(3);

//     change();

//     printf("Node\n");
//     sortNode();
//     print();
//     return 0;
// }

// Zadatak sa kvadriranjem kruzne lista

// #include <iostream>
// #include <math.h>
// using namespace std;

// typedef struct NODE
// {
//     int data;
//     struct NODE *next;
// } Node;
// Node *first = NULL;
// Node *last = NULL;
// Node *temp2 = NULL;
// void insert(int x)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = x;
//     newNode->next = NULL;

//     if (first == NULL)
//     {
//         last = first = newNode;
//     }
//     else
//     {
//         last->next = newNode;
//         last = last->next;
//         last->next = first;
//     }
// }

// Node *povv(int x)
// {
//     Node *temp = first;
//     Node *newList = NULL;
//     do
//     {
//         Node *newNode = (Node *)malloc(sizeof(Node));
//         newNode->next = NULL;
//         newNode->data = pow(temp->data, x);

//         if (newList == NULL)
//         {
//             temp2 = newList = newNode;
//         }
//         else
//         {
//             temp2->next = newNode;
//             temp2 = temp2->next;
//             temp2->next = newList;
//         }
//         temp = temp->next;

//     } while (temp != last->next);
//     return newList;
// }
// int main()
// {
//     insert(1);
//     insert(2);
//     insert(3);
//     insert(4);

//     Node *temp = first;
//     while (temp != last)
//     {
//         printf("%d\n", temp->data);
//         temp = temp->next;
//     }
//     printf("%d\n", temp->data);

//     Node *first1 = povv(3);

//     while (first1 != temp2)
//     {
//         printf("%d\n", first1->data);
//         first1 = first1->next;
//     }
//     printf("%d", temp2->data);
//     return 0;
// }

// Zadatak sa redom

// #include <iostream>
// using namespace std;
// #define SIZE 4

// int red[SIZE], first = -1, top = -1;

// void queue(int x)
// {
//     printf("%d,%d \n", top, first);
//     if ((top + 1) % SIZE == first)
//     {
//         printf("Red je pun \n");
//     }
//     else
//     {

//         if (first == -1)
//         {

//             first = top = 0;
//         }
//         else
//         {
//             top = (top + 1) % SIZE;
//         }
//         red[top] = x;
//     }
// }

// int dequeue()
// {
//     printf("%d,%d \n", top, first);

//     if (first == -1)
//     {
//         printf("prazan\n");
//     }
//     else
//     {
//         int elem = red[first];

//         if (first == top)
//         {
//             first = top = -1;
//         }
//         else
//         {
//             first = (first + 1) % SIZE;
//         }

//         return elem;
//     }
// }
// void ispis()
// {
//     printf("Red sadrzi: ");
//     if (first == -1)
//     {
//         printf("PRAZAN\n");
//     }
//     else
//     {
//         int i = first;
//         while (true)
//         {
//             printf("%d", red[i]);
//             if (i == top)
//             {
//                 break;
//             }
//             i = (i + 1) % SIZE;
//             printf(", ");
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     queue(1);
//     queue(2);
//     queue(3);
//     queue(4);
//     queue(12);
//     dequeue();
//     dequeue();
//     queue(5);
//     ispis();

//     return 0;
// }

// zadatak sa stablom ,search i dubina

// #include <iostream>
// #include <math.h>
// using namespace std;

// typedef struct NODE
// {
//     int data;
//     struct NODE *left, *right;
// } Node;
// void insert(Node **tree, int x)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = x;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     if (*tree == NULL)
//     {
//         *tree = newNode;
//     }
//     else
//     {
//         if ((*tree)->data > x)
//         {
//             insert(&(*tree)->left, x);
//         }
//         else
//         {
//             insert(&(*tree)->right, x);
//         }
//     }
// }

// void printPreorder(Node *tree)
// {
//     if (tree)
//     {

//         printPreorder((tree)->left);
//         printPreorder((tree)->right);
//         printf("%d\n", (tree)->data);
//     }
// }

// int search(Node *tree, int x, int dubina)
// {
//     if (tree)
//     {

//         if (tree->data == x)
//         {

//             printf("dubina = %d\n", dubina);
//             return 1;
//         }
//         else
//         {
//             return search(tree->left, x, dubina + 1) || search(tree->right, x, dubina + 1);
//         }
//     }
// }
// int main(

// )
// {
//     Node *tree = NULL;
//     insert(&tree, 5);
//     insert(&tree, 6);
//     insert(&tree, 7);
//     insert(&tree, 2);
//     insert(&tree, 2);
//     insert(&tree, 3);
//     insert(&tree, 4);

//     printf("search = %d\n", search(tree, 4, 1));
//     printPreorder(tree);

//     return 0;
// }

// sorting linked list

// #include <iostream>
// #include <math.h>
// using namespace std;

// typedef struct NODE
// {
//     int data;
//     struct NODE *next;

// } Node;
// Node *first = NULL, *last = NULL;

// void insertNode(int x)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = x;
//     newNode->next = NULL;
//     if (first == NULL)
//     {

//         last = first = newNode;
//     }
//     else
//     {
//         last->next = newNode;
//         last = last->next;
//     }
// }

// void sort()
// {

//     Node *temp = first;
//     while (temp != NULL)
//     {
//         Node *temp2 = first;
//         while (temp2 != NULL)
//         {
//             if (temp->data < temp2->data)
//             {
//                 int bigger = temp->data;
//                 temp->data = temp2->data;
//                 temp2->data = bigger;
//             }
//             temp2 = temp2->next;
//         }
//         temp = temp->next;
//     }
// }
// int main()
// {
//     insertNode(1);
//     insertNode(4);
//     insertNode(2);
//     insertNode(3);

//     Node *temp = first;
//     sort();
//     while (temp != NULL)
//     {
//         printf("%d\n", temp->data);
//         temp = temp->next;
//     }

//     return 0;
// }

// zadatak za sortiranje dodavanje insertovano i pretrazivanje soritaranog
// #include <stdlib.h>
// #include <stdio.h>
// #include <math.h>
// using namespace std;

// typedef struct NODE
// {
//     int data;
//     struct NODE *next;
// } Node;
// Node *first = NULL;
// Node *last = NULL;

// Node *createNode(int x)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->next = NULL;
//     newNode->data = x;
//     return newNode;
// }

// void insertNode(int x)
// {
//     Node *newNode = createNode(x);
//     if (first == NULL)
//     {
//         first = last = newNode;
//     }
//     else
//     {
//         last->next = newNode;
//         last = last->next;
//     }
// }

// void ispis()
// {
//     Node *temp = first;

//     while (temp != NULL)
//     {
//         printf("%d\n", temp->data);
//         temp = temp->next;
//     }
// }

// void sortNode()
// {
//     Node *i = first;
//     while (i != NULL)
//     {
//         Node *j = first;
//         while (j != NULL)
//         {
//             if (i->data < j->data)
//             {
//                 int bigger = i->data;
//                 i->data = j->data;
//                 j->data = bigger;
//             }
//             j = j->next;
//         }
//         i = i->next;
//     }
// }

// Node *search(int x)
// {
//     if (first == NULL)
//     {
//         printf("List is empty \n");
//     }
//     else
//     {
//         Node *temp = first;

//         while (temp != NULL && temp->data <= x)
//         {
//             if (temp->data == x)
//             {
//                 return temp;
//             }
//             temp = temp->next;
//         }
//     }
//     return NULL;
// }

// void sortedInsert(int x)
// {
//     printf("first %d\n", first->data);
//     Node *newNode = createNode(x);
//     if (first == NULL || first->data >= x)
//     {
//         printf("changed");
//         newNode->next = first;
//         first = last = newNode;
//     }
//     else
//     {
//         Node *current = first;
//         while (current->next != NULL && current->next->data < x)
//         {
//             current = current->next;
//         }

//         newNode->next = current->next;
//         current->next = newNode;
//     }
// }
// int main()
// {
//     insertNode(1);
//     insertNode(4);
//     insertNode(2);
//     insertNode(7);
//     insertNode(3);

//     sortNode();

//     sortedInsert(2);
//     sortedInsert(5);
//     sortedInsert(8);
//     sortedInsert(9);

//     Node *newNode = search(5);
//     printf("unerd\n");
//     if (newNode != NULL)
//     {
//         printf("Sd");
//         printf("founded %d\n", newNode->data);
//     }
//     ispis();
//     return 0;
// }

// zadatak sa stekom i redom , dodavanje prostih brojeva iz red u stek

// #include <stdlib.h>
// #include <stdio.h>
// #include <math.h>

// #define SIZE 10

// int stack[SIZE], top = -1;

// void push(int x)
// {
//     if (top == SIZE - 1)
//     {
//         printf("Steck je pun\n");
//     }
//     else
//     {
//         top++;
//         stack[top] = x;
//     }
// }

// int pop()
// {
//     if (top == -1)
//     {
//         printf("stek je prazan\n");
//     }
//     else
//     {
//         int elem = stack[top];
//         top--;
//         return elem;
//     }
// }

// typedef struct Node
// {
//     int data;
//     struct Node *next;
//     struct Node *prev;
// } Node;

// Node *first = NULL, *last = NULL;

// void insert(int x)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = x;
//     newNode->next = NULL;
//     newNode->prev = NULL;
//     if (first == NULL)
//     {
//         last = first = newNode;
//     }
//     last->next = newNode;
//     newNode->prev = last;
//     last = newNode;
// }

// void ispisReda()
// {
//     Node *temp = first;

//     printf("first = %d,first.prev =%d \n", first->data, first->prev->data);
//     while (temp != NULL)
//     {
//         printf("%d\n", temp->data);
//         temp = temp->next;
//     }
// }
// int deleteEl()
// {
//     if (first == NULL)
//     {
//         printf("red je prazan\n");
//     }
//     else
//     {
//         Node *temp = first;
//         first = first->next;
//         free(temp);
//     }
// }

// void fillStack()
// {
//     Node *temp = first;
//     while (temp != NULL)
//     {
//         if (temp->data > 1)
//         {
//             int check = 1;
//             for (int i = 2; i <= temp->data / 2; i++)
//             {
//                 if (temp->data % i == 0)
//                 {
//                     check = 0;
//                     break;
//                 }
//                 else
//                 {
//                     check = 1;
//                     printf("addded in \n");
//                 }
//             }
//             if (check)
//             {
//                 push(temp->data);
//             }
//         }

//         temp = temp->next;
//     }
// }

// void ispisSteka()
// {

//     printf("ISPIS STEKA\n");
//     for (int i = 0; i <= top; i++)
//     {
//         printf("%d\n", stack[i]);
//     }
// }
// int main()
// {
//     insert(1);
//     insert(2);
//     insert(3);
//     insert(4);
//     insert(5);
//     insert(6);
//     insert(7);
//     insert(8);
//     ispisReda();

//     fillStack();
//     ispisSteka();

//     return 0;
// }

//  red123 zadatak sa stekom i redom (red implementiran preko arraya), dodavanje prostih brojeva iz red u stek
// #include <stdlib.h>
// #include <stdio.h>
// #include <math.h>

// #define size 10

// int queue[size], front = -1, rear = -1;

// void addElement(int x)
// {
//     if (rear == size - 1 || (rear + 1) % size == front)
//     {
//         printf("Red je pun\n");
//     }
//     else
//     {
//         if (front == -1)
//         {
//             front = rear = 0;
//         }
//         else
//         {
//             rear = (rear + 1) % 12;
//         }
//         queue[rear] = x;
//     }
// }

// int deleteElement()
// {
//     if (front == -1)
//     {
//         printf("RED je prazan\n");
//     }
//     else
//     {
//         int elem = queue[front];
//         front = (front + 1) % 12;
//         return elem;
//     }
// }

// void ispisRed()
// {
//     if (front < rear)
//     {
//         for (int i = front; i < rear; i++)
//         {
//             printf("%d\n", queue[i]);
//         }
//     }
//     else
//     {
//         for (int i = front; i < size; i++)
//         {
//             printf("%d\n", queue[i]);
//         }
//         for (int i = 0; i < rear; i++)
//         {
//             printf("%d\n", queue[i]);
//         }
//     }
// }

// // ponovimo proces sa stekom
// int main()
// {
//     addElement(1);
//     addElement(6);
//     addElement(3);
//     addElement(9);
//     addElement(2);
//     ispisRed();

//     return 0;

// }

// zadatak za pronalazanje elemenata manjih od x (LESS_CNT)

// #include <stdlib.h>
// #include <stdio.h>
// #include <math.h>

// typedef struct Node
// {
//     int data;
//     struct Node *next;
// } Node;
// Node *first = NULL, *last = NULL;

// void insert(int x)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = x;
//     newNode->next = NULL;
//     if (first == NULL)
//     {
//         first = last = newNode;
//     }
//     else
//     {
//         last->next = newNode;
//         last = newNode;
//     }
// }

// int LESS_CNT(int x)
// {
//     Node *temp = first;
//     int counter = 0;
//     while (temp != NULL)
//     {
//         if (temp->data <= x)
//         {
//             counter++;
//         }
//         temp = temp->next;
//     }
//     return counter;
// }
// int main()
// {

//     for (int i = 1; i < 25; i += 4)
//     {
//         insert(i);
//     }

//     Node *temp = first;

//     while (temp != NULL)
//     {
//         printf("%d\n", temp->data);
//         temp = temp->next;
//     }

//     printf("LES %d\n", LESS_CNT(10));
//     return 0;
// }

// Uraditit zadatak , imlementirati red preko dva steka , ulancana reprezentacija
// #include <stdlib.h>
// #include <stdio.h>
// #include <math.h>

// typedef struct Node
// {
//     int data;
//     struct Node *next;
// } Node;

// typedef struct Stack
// {
//     Node *top;
// } Stack;

// typedef struct
// {
//     Stack s1;
//     Stack s2;
// } Queue;
// Queue q;

// void push(Stack *s, int x)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = x;
//     newNode->next = s->top;
//     s->top = newNode;
// }

// int pop(Stack *s)
// {
//     if (s->top == NULL)
//     {
//         printf("Stek je prazan \n");
//     }
//     else
//     {
//         s->top = s->top->next;
//     }
// }

// void enqueue(int x)
// {
//     push(&q.s1, x);
// }

// int dequeue()
// {

//     if (q.s2.top == NULL)
//     {
//         Node *temp = q.s1.top;
//         while (q.s1.top != NULL)
//         {
//             push(&q.s2, q.s1.top->data);
//             pop(&q.s1);
//         }
//     }
//     int elem = q.s2.top->data;
//     pop(&q.s2);
//     return elem;
// }
// int main()
// {
//     enqueue(1);
//     enqueue(4);
//     enqueue(8);
//     enqueue(9);
//     dequeue();
//     enqueue(2);
//     dequeue();
//     printf("Ispis\n");
//     printf("Second stack\n");

//     Stack stack2 = q.s2;
//     while (stack2.top != NULL)
//     {
//         printf("%d\n", stack2.top->data);
//         stack2.top = stack2.top->next;
//     }
//     printf("first stack\n");

//     Stack stack1 = q.s1;
//     while (stack1.top != NULL)
//     {
//         printf("%d\n", stack1.top->data);
//         stack1.top = stack1.top->next;
//     }

//     return 0;
// }

//
//
//
//
//
// kruzna jednostruca lista , broj pojava

// #include <stdlib.h>
// #include <stdio.h>
// #include <math.h>

// typedef struct Node
// {
//     int data;
//     struct Node *next;
// } Node;
// Node *first = NULL, *last = NULL;

// void insert(int x)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = x;
//     newNode->next = NULL;

//     if (first == NULL)
//     {
//         first = last = newNode;
//     }
//     else
//     {
//         last->next = newNode;
//         last = last->next;
//         last->next = first;
//     }
// }

// int deleteEl()
// {
//     if (first == NULL)
//     {
//         printf("List is empt\n");
//     }
//     else
//     {
//         Node *help = first;
//         while (help->next != last)
//         {
//             help = help->next;
//         }
//         help->next = last->next;
//         last = help;
//         last->next = first;
//     }
// }
// int brojPojava(int el)
// {
//     Node *temp = first;
//     int counter = 0;
//     do
//     {
//         if (temp->data == el)
//         {
//             counter += 1;
//         }
//         temp = temp->next;
//     } while (temp != last->next);
//     return counter;
// }
// void ispis()
// {

//     Node *temp = first;
//     do
//     {
//         printf("%d\n", temp->data);
//         temp = temp->next;
//     } while (temp != last->next);
// }
// int main()
// {
//     insert(2);
//     insert(7);
//     insert(9);
//     insert(100);
//     insert(7);

//     insert(7);

//     insert(7);

//     insert(7);

//     deleteEl();
//     ispis();
//     printf("%d", brojPojava(7));

//     return 0;
// }

// implementirati stek preko niza sa dodatnom funkcijom koja sortira novoubaceni element

// #include <stdlib.h>
// #include <stdio.h>

// #define SIZE 10

// int stack[SIZE], top = -1;

// void sort()
// {
//     for (int i = 0; i <= top; i++)
//     {
//         for (int j = 0; j < top; j++)
//         {
//             if (stack[i] > stack[j])
//             {
//                 int help = stack[i];
//                 stack[i] = stack[j];
//                 stack[j] = help;
//             }
//         }
//     }
// }
// void push(int el)
// {
//     if (top == SIZE - 1)
//     {
//         printf("Stek je pun\n");
//     }
//     else
//     {
//         top++;
//         stack[top] = el;
//         sort();
//     }
// }

// int pop()
// {
//     if (top == -1)
//     {
//         printf("stek je prazan\n");
//     }
//     else
//     {
//         int elem = stack[top];
//         top--;
//         return elem;
//     }
// }
// void ispis()
// {
//     for (int i = 0; i <= top; i++)
//     {
//         printf("%d\n", stack[i]);
//     }
// }
// int main()
// {
//     push(2);
//     push(8);
//     push(2);
//     push(10);
//     push(1);
//     pop();
//     pop();
//     ispis();

//     return 0;
// }

///
///
//
//

// #include <stdlib.h>
// #include <stdio.h>

// typedef struct Node
// {
//     int data;
//     struct Node *next;
// } Node;

// Node *createNode(int x)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = x;
//     newNode->next = NULL;
//     return newNode;
// }
// void insert(Node **last, int x)
// {
//     Node *newNode = createNode(x);

//     if (*last == NULL)
//     {
//         *last = newNode;
//     }
//     else
//     {
//         newNode->next = *last;
//         *last = newNode;
//     }
// }

// Node *prviParan(Node *first)
// {
//     while (first->next != NULL)
//     {
//         first = first->next;
//     }
//     if (first->data % 2 == 0)
//     {
//         return first;
//     }
//     else
//     {
//         return NULL;
//     }
// }

// Node *listaParnih(Node *temp)
// {
//     Node *newList = NULL;
//     while (temp != NULL)
//     {
//         if (temp->data % 2 == 0)
//         {
//             Node *newNode = (Node *)malloc(sizeof(Node));
//             newNode->data = temp->data;
//             newNode->next = newList;
//             newList = newNode;
//         }
//         temp = temp->next;
//     }
//     return newList;
// }
// int main()
// {
//     Node *first = NULL;

//     insert(&first, 1);
//     insert(&first, 2);
//     insert(&first, 3);
//     insert(&first, 4);
//     insert(&first, 5);

//     Node *temp = first;

//     while (temp != NULL)
//     {
//         printf("%d\n", temp->data);
//         temp = temp->next;
//     }

//     // printf("prvi paran %d", prviParan(first)->data);

//     Node *novaLista = listaParnih(first);
//     printf("nova lista \n");
//     while (novaLista != NULL)
//     {
//         printf("%d\n", novaLista->data);
//         novaLista = novaLista->next;
//     }
//     return 0;
// }

///
//
//
//
//
// #include <stdlib.h>
// #include <stdio.h>

// #define SIZE 20
// int stack[SIZE], top = -1;

// void push(int x, int y)
// {
//     if (top <= SIZE - 2)
//     {
//         stack[++top] = x;
//         stack[++top] = y;
//     }
//     else
//     {
//         printf("Stek je pun\n");
//     }
// }

// int *pop()
// {
//     if (top >= 1)
//     {
//         int elem1 = stack[top];
//         top--;
//         int elem2 = stack[top];
//         top--;
//         int arr[2] = {elem1, elem2};
//         return arr;
//     }
//     else
//     {
//         printf("Stek is empty \n");
//     }
// }
// int main()
// {
//     push(2, 3);
//     push(4, 5);
//     push(2, 3);
//     push(4, 5);
//     push(2, 3);
//     push(4, 5);
//     push(2, 3);
//     push(4, 5);
//     push(2, 3);
//     push(4, 5);

//     pop();
//     pop();
//     pop();
//     pop();
//     pop();
//     pop();
//     pop();

//     printf("ISPIS\n");

//     for (int i = 0; i <= top; i++)
//     {
//         printf("%d\n", stack[i]);
//     }

//     return 0;
// }

// binary zadatak 1 , ulancana reprezentacija search element i prikazati dubinu
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node
// {
//     int data;
//     struct Node *left, *right;
// } Node;

// int i = 0;

// Node *createNode(int x)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = x;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;
// }

// void insert(Node **tree, int x)
// {
//     Node *newNode = createNode(x);
//     if (*tree == NULL)
//     {
//         *tree = newNode;
//     }
//     else
//     {
//         if (i % 2 == 0)
//         {
//             insert(&((*tree)->left), x);
//         }
//         else
//         {
//             insert(&((*tree)->right), x);
//         }
//         i++;
//     }
// }

// int search(Node *tree, int x, int nivo = 1)
// {
//     if (tree)
//     {
//         if (tree->data == x)
//         {
//             printf("nivo %d\n", nivo);

//             return 1;
//         }
//         search(tree->left, x, nivo + 1);
//         search(tree->right, x, nivo + 1);
//     }
// }

// void printPreorder(Node *tree)
// {
//     if (tree)
//     {
//         printf("%d\n", tree->data);
//         printPreorder(tree->left);
//         printPreorder(tree->right);
//     }
// }

// int main()
// {

//     Node *tree = NULL;
//     insert(&tree, 1);

//     insert(&tree, 12);

//     insert(&tree, 2);

//     insert(&tree, 13);

//     printPreorder(tree);

//     search(tree, 13);

//     return 0;
// }

// Polimofirzam (viseoblicnost)

// class Linearna
// {
// protected:
//     float b, c;

// public:
//     Linearna(float B, float C)
//     {
//         b = B;
//         c = C;
//     }
//     virtual void Resenja()
//     {
//         if (b != 0)
//         {

//             float x = -c / b;
//             cout << "RESenje lin jednacine je " << x << endl;
//         }
//         else
//         {
//             cout << "jednacina nema resenja" << endl;
//         }
//     }

//     virtual void ispis()
//     {
//         cout << "Line jednacina ima oblik " << endl
//              << b << "x"
//              << "+" << c << "=" << 0 << endl;
//     }
// };

// // ax(na 2) + bc + c=0;
// class Kvadratana : Linearna
// {
// protected:
//     float a;

// public:
//     Kvadratana(float A, float B, float C) : Linearna(B, B)
//     {
//         a = A;
//     }
//     void Resenja()
//     {
//         float D = b * b - (sqrt(4 * a * c));
//         if (D < 0)
//         {
//             cout << "Kvadratna nema realnih resenja" << endl;
//         }
//         else if (D == 0)
//         {
//             float x = -b / 2 * a;
//             cout << "Jdnacina ima jedno resenje to je " << x << endl;
//         }
//         else
//         {
//             float x1 = ((-b) + sqrt(D)) / (2 * a);
//             float x2 = ((-b) - sqrt(D)) / (2 * a);
//             cout << "Jednacina ima dva realna resenja to su" << x1 << " " << x2 << endl;
//         }
//     }

//     void ispis()
//     {
//         cout << "Kvadratna jednacina je oblika" << endl;
//         cout << a << "x2 +" << b << "x +" << c << " = 0" << endl;
//     }
// };
// int main()

// {
//     Linearna l1(2, 5);
//     Kvadratana k1(3, 10, 4);
//     l1.ispis();
//     l1.Resenja();
//     k1.ispis();
//     k1.Resenja();

//     return 0;
// }

// moj  nacin
// moglo lakse sa funckzom za swith
// class Izraz1
// {
// protected:
//     char op1;
//     int a;
//     int b;

// public:
//     Izraz1()
//     {
//         a = 2;
//         b = 5;
//         op1 = '+';
//     }
//     Izraz1(int A, char Op1, int B)
//     {
//         op1 = Op1;
//         a = A;
//         b = B;
//     }

//     virtual double Izracunaj()
//     {

//         switch (op1)
//         {
//         case '+':
//             return a + b;
//             break;
//         case '*':
//             return a * b;
//             break;
//         case '/':
//             return a / b;
//             break;
//         case '-':
//             return a - b;
//             break;
//         default:
//             break;
//         }
//     }
//     virtual void ispis()
//     {
//         cout << a << op1 << b << endl;
//     }
// };

// class Izraz2 : Izraz1
// {
// protected:
//     char op2;
//     int c;

// public:
//     Izraz2()
//     {
//         op2 = '*';
//         c = 3;
//     }
//     Izraz2(int A, char Op1, int B, char Op2, int C) : Izraz1(Op1, A, B)
//     {
//         c = C;
//         op2 = Op2;
//     }

//     double Izracunaj()
//     {
//         if (op1 == '*' || op1 == '/')
//         {
//             cout << "Prvi slucaj" << endl;
//             double sum;
//             switch (op1)
//             {
//             case '+':
//                 sum = a + b;
//                 break;
//             case '*':
//                 sum = a * b;
//                 break;
//             case '/':
//                 sum = a / b;
//                 break;
//             case '-':
//                 sum = a - b;
//                 break;
//             default:
//                 break;
//             }
//             switch (op2)
//             {
//             case '+':
//                 return sum + c;
//                 break;
//             case '*':
//                 return sum * c;
//                 break;
//             case '/':
//                 return sum / c;
//                 break;
//             case '-':
//                 return sum - c;
//                 break;
//             default:
//                 break;
//             }
//         }
//         else
//         {
//             cout << op1 << op2 << endl;

//             double sum;

//             switch (op2)
//             {
//             case '+':
//                 sum = b + c;
//                 break;
//             case '*':
//                 sum = b * c;
//                 break;
//             case '/':
//                 sum = b / c;
//                 break;
//             case '-':
//                 sum = b - c;
//                 break;
//             default:
//                 break;
//             }
//             switch (op2)
//             {
//             case '+':
//                 return a + sum;
//                 break;
//             case '*':
//                 return sum * a;
//                 break;
//             case '/':
//                 return a / sum;
//                 break;
//             case '-':
//                 return a - sum;
//                 break;
//             default:
//                 break;
//             }
//         }
//     }
// };

// int main()
// // moramo da overidema ispis da bi u array pod Izraz1 mogli sve elemente da ispisemo kad stavimo .ispis , svaka ce raditi sta treba to je svrha
// {
//     Izraz1 **izrazi;
//     Izraz1 *i1 = new Izraz1(2, '*', 4);
//     Izraz1 *i2 = new Izraz1(8, '-', 4);

//     Izraz1 *i3 = new Izraz1(2, '+', 4);
//     Izraz2 *i4 = new Izraz2(2, '*', 3, '-', 1);

//     izrazi = new Izraz1 *[5];

//     izrazi[0] = i1;
//     izrazi[1] = i2;
//     izrazi[2] = i3;
//     izrazi[3] = i4;

//     return 0;
// }

// class Izraz1
// {
// protected:
//     char op1;
//     int a, b;
//     double vrednostIzraza(int a, char op1, int b)
//     {
//         switch (op1)
//         {

//         case '+':
//             return a + b;
//             break;
//         case '*':
//             return a * b;
//             break;
//         case '/':
//             return a / b;
//             break;
//         case '-':
//             return a - b;
//             break;
//         default:
//             break;
//         }
//     }

// public:
//     Izraz1()
//     {
//         op1 = '+';
//         a = 2;
//         b = 5;
//     }
//     Izraz1(int A, char Op1, int B)
//     {
//         a = A;
//         op1 = Op1;
//         b = B;
//     }
// };

// class Izraz2
// {

// }

// int
// main()
// {
//     return 0;
// }

// class Krug
// {
// private:
//     int r;

// public:
//     Krug(int R)
//     {
//         r = R;
//     }
//     virtual int Povrsina()
//     {

//         return r * r * 3.14;
//     }
// };
// class KruzniIsecak : Krug
// {
// private:
//     int ugao;

// public:
//     int pIsecka;
//     KruzniIsecak(int Ugao, int r) : Krug(r)
//     {
//         ugao = Ugao;
//     }
//     int Povrsina()
//     {
//         pIsecka = Krug ::Povrsina() * ugao / 360;
//         return pIsecka;
//     }
// };

// class KruzniPrsten : Krug
// {
// private:
//     int unutrasnjiKrug;

// public:
//     KruzniPrsten(int ru, int rs) : Krug(rs)
//     {
//         unutrasnjiKrug = ru;
//     }
//     int Povrsina()
//     {
//         int pUnutra = unutrasnjiKrug * unutrasnjiKrug * 3.14;

//         return Krug::Povrsina() - pUnutra;
//     }
// };

// int main()
// {

//     Krug k1(4);
//     KruzniIsecak ki1(360, 4);
//     KruzniPrsten kp(11, 5);

//     ki1.Povrsina();
//     kp.Povrsina();

//     return 0;
// }

// DRUGI KOLOKVIJUM

// #include <iostream>

// class Artikal
// {

// public:
//     string naziv;
//     float cena;
//     int celobrojniIznosPopusta;
//     Artikal()
//     {
//         naziv = "";
//         cena = 0;
//         celobrojniIznosPopusta = 0;
//     }
//     Artikal(string N, float C, int CIP = 0)
//     {
//         naziv = N;
//         cena = C;
//         celobrojniIznosPopusta = CIP;
//     }

//     friend ostream &operator<<(ostream &COUT, Artikal &a)
//     {

//         cout << a.naziv << "(" << a.cena << ")";
//         return COUT;
//     }
// };

// class Stavka
// {

// public:
//     Artikal art;
//     float kolicina;
//     static int redniBroj;
//     int id;

//     Stavka()
//     {
//         id = redniBroj;
//         art = Artikal();
//         kolicina = 0;
//         redniBroj++;
//         printf("Called without arguments (%d)\n", redniBroj);
//     }
//     Stavka(Artikal A, float K)
//     {
//         id = redniBroj;
//         printf("Called with arguments (%d)\n", redniBroj);
//         art = A;
//         kolicina = K;

//         redniBroj++;
//     }
//     Stavka(Stavka *stavka)
//     {
//         art = stavka->art;
//         kolicina = stavka->kolicina;
//     }

//     void ispis()
//     {
//         cout << art;
//     }

//     int getIznos()
//     {
//         return kolicina * (art.cena);
//     }

//     friend ostream &operator<<(ostream &COUT, Stavka &stv)
//     {
//         cout << stv.id << "(" << stv.art << ")"
//              << ":" << stv.kolicina << "|" << stv.getIznos() << endl;
//         return COUT;
//     }
// };

// int Stavka::redniBroj = 0;

// class Racun
// {
//     Stavka *niz;
//     int dodatniPopust;
//     int brojStavki;

// public:
//     Racun(int DP)
//     {
//         brojStavki = 0;
//         dodatniPopust = DP;
//         niz = new Stavka[brojStavki];
//     }

//     void operator+=(Stavka stv)
//     {
//         Stavka *temp = new Stavka[brojStavki + 1];

//         cout << "RB" << stv.redniBroj << endl;

//         for (int i = 0; i < brojStavki; i++)
//         {
//             temp[i] = niz[i];
//         }
//         temp[brojStavki] = stv;
//         delete[] niz;
//         niz = temp;
//         brojStavki++;
//     }

//     void setDodatniPopust(int DP)
//     {
//         dodatniPopust = DP;
//     }
//     int sumaRacuna()
//     {
//         int suma = 0;

//         cout << brojStavki << ":";

//         for (int i = 0; i < brojStavki; i++)
//         {
//             if (niz[i].art.celobrojniIznosPopusta)
//             {
//                 suma += niz[i].getIznos();
//             }
//             else
//             {

//                 suma += niz[i].getIznos() - (niz[i].getIznos() * (dodatniPopust / 100));
//             }
//         }

//         return suma;
//     }

//     friend ostream &operator<<(ostream &COUT, Racun &racun)
//     {
//         cout << "SUMA RACUNA" << racun.sumaRacuna() << endl;
//         for (int i = 0; i < racun.brojStavki; i++)
//         {
//             cout << racun.niz[i];
//         }
//     }
//     ~Racun()
//     {
//         delete[] niz;
//     }
// };
// int main()
// {

//     Artikal a1("jaja", 43, 20);
//     Artikal a2("jogurt", 43, 0);
//     Artikal a3("hleb", 83, 20);

//     Stavka stv1(a1, 5);
//     Stavka stv2(a2, 3);
//     Stavka stv3(a3, 2);

//     cout << "works fine" << stv3.redniBroj;
//     Racun r1(50);
//     r1 += stv1;
//     r1 += stv2;
//     r1 += stv3;

//     cout << r1;

//     return 0;
// }

// experienced that static int creates only one copy and that i should make my classes have their one var of that copy at the moment

/*
) Klasa Ponuđeni odgovor se sastoji od teksta odgovora(string), koji se zadaje pri stvaranju (podrazumevano ""),
 informacije da li je tačan i procentualnog udela poena koji taj odgovor nosi (u opsegu od -100 do 100). Svi podaci su privatni.
  Svi podaci se mogu dohvatiti, a informacija o tačnosti i procentualni udeo se mogu
 postavljati(prilikom postavljanja proveriti da li su uneti ispravni procenti). Odgovor može da se ispiše na glavnom izlazu (out<<odgovor) u obliku tekst: udeo%.*/

// #include <iostream>
// class PonudjeniOdgovor
// {
//     string odgovori;
//     bool right;
//     int procenatUdela;

// public:
//     PonudjeniOdgovor(string O = "", bool R = false, int PU = 0)
//     {
//         odgovori = O;
//         right = R;
//         procenatUdela = PU;
//     }

//     string getOdgovor()
//     {
//         return odgovori;
//     }
//     bool getRight()
//     {
//         return right;
//     }
//     int getPorcenatUdela()
//     {
//         return procenatUdela;
//     }
//     void setRight(bool R)
//     {
//         right = R;
//     }
//     void setProcenatUdela(int PU)
//     {
//         if (PU <= 100 && PU >= -100)
//         {
//             procenatUdela = PU;
//         }
//     }

//     friend ostream &operator<<(ostream &COUT, PonudjeniOdgovor &PO)
//     {
//         cout << PO.getOdgovor() << ":" << PO.procenatUdela << "%" << endl;
//     }
// };

// /*Klasa Pitanje sadrži zadate podatke koji su zaštićeni: tekst, broj poena koji nosi, broj ponuđenih odgovora (podrazumevano 5),
//  kao i ponuđene odgovore(dinamičko alocirani niz odgovora). Stvara se bez ponuđenih odgovora, nakon čega se oni dodaju pojedinačno (pitanje+=odgovor).
//  Prilikom dodavanja ponuđenog odgovora računaju se jednaki procentualni udeli svih tačnih odgovora dodatih u dato pitanje(u zbiru daju 100%), dok svaki
//   netačan odgovor nosi -100%. Pomoću polimorfne metode može da se odgovori na pitanje, tada se zadaje niz koji sadrži redne brojeve ponuđenih odgovora koje
//    ispitanik smatra tačnim i dužina tog niza(odgovori(int niz[],int br);). Tada se računa koliko je procentualno tačno odgovoreno na to pitanje.
//  Na glavnom izlazu se ispisuje (out<<pitanje)
// tako što se u prvom redu ispiše tekst: poeni(maksimalni koje pitanje nosi), a potom se u zasebnim redovima ispišu sadržani ponuđeni odgovori.*/

// class Pitanje
// {
// protected:
//     string tekst;
//     int brojPoena;
//     int brojPonudjenihOdgovora;
//     PonudjeniOdgovor *odgovori;

// public:
//     int *tacniOdgovor;
//     int brTacnih;
//     Pitanje()
//     {
//         tekst = "";
//         brojPoena = 0;
//         brojPonudjenihOdgovora = 5;
//         odgovori = new PonudjeniOdgovor[brojPonudjenihOdgovora + 1];
//     }
//     Pitanje(string T, int BP, int BPO)
//     {
//         tekst = T;
//         brojPoena = BP;
//         brojPonudjenihOdgovora = BPO;
//     }

//     int odgovoriMetoda(int niz[], int br)
//     {
//         int ukupno = 0;
//         for (int i = 0; i < br; i++)
//         {
//             for (int j = 0; j < brojPonudjenihOdgovora; j++)
//             {
//                 if (odgovori[j].getRight() && niz[i] == j)
//                 {
//                     ukupno += odgovori[j].getPorcenatUdela();
//                 }
//             }
//         }
//         return ukupno;
//     }
//     void operator+=(PonudjeniOdgovor &PO)
//     {
//         PonudjeniOdgovor *temp = new PonudjeniOdgovor[brojPonudjenihOdgovora];

//         for (int i = 0; i < brojPonudjenihOdgovora; i++)
//         {
//             if (PO.getRight())
//             {
//                 brTacnih++;
//                 tacniOdgovor = new int[brTacnih];
//                 tacniOdgovor[brTacnih - 1] = i;
//             }
//             temp[i] = odgovori[i];
//         }
//         temp[brojPonudjenihOdgovora] = PO;

//         delete[] odgovori;
//         odgovori = temp;
//     }
// };
// int main()
// {

//     PonudjeniOdgovor a("Pariz", false, 0);
//     PonudjeniOdgovor b("London", false, 0);

//     PonudjeniOdgovor c("Oslo", true, 80);

//     cout << c;
//     return 0;
// }

// #include <iostream>
// #include <cstdlib>
// #include <time.h>

// enum VRSTA
// {
//     SLANO,
//     SLATKO,
//     NEUT
// };

// class Sastojak
// {
//     string ime;
//     int cenaKG;
//     VRSTA sastojak;

// public:
//     Sastojak() : ime(""), cenaKG(0), sastojak(NEUT)
//     {
//     }
//     Sastojak(string I, int C, VRSTA sas)
//     {

//         ime = I;
//         cenaKG = C;
//         sastojak = sas;
//     }

//     string getSastojak()
//     {
//         switch (sastojak)
//         {
//         case SLANO:
//             return "slano";
//         case SLATKO:
//             return "slatko";
//         case NEUT:
//             return "neutralno";
//         default:
//             break;
//         }
//     }
//     double getCenu(int kolicina)
//     {
//         double gram = cenaKG / 1000;

//         return kolicina * gram;
//     }

//     friend ostream &operator<<(ostream &COUT, Sastojak &sas)
//     {
//         cout << sas.ime << "-" << sas.cenaKG << "/"
//              << "KG" << endl;
//         return COUT;
//     }
// };

// class Jelo
// {
//     string ime;
//     Sastojak *sastojci;
//     int brojSastojaka;
//     float kolicina;

// public:
//     Jelo(string I, float K, Sastojak *sas, int BS)
//     {
//         ime = I;
//         sastojci = sas;
//         kolicina = K;
//         brojSastojaka = BS;
//     }
//     int cenaJela()
//     {
//         int ukupno = 0;
//         for (int i = 0; i < brojSastojaka; i++)
//         {
//         }
//     }
// };
// int main()
// {
//     srand(time(0));

//     int random = rand();

//     cout << random;

//     return 0;
// }

// etf zadatak gandom

// #include <iostream>
// #include <cstdlib>
// #include <time.h>

// enum ISHOD
// {
//     JEDAN,
//     IKS,
//     DVA,
//     NEODREDJEN

// };

// class Par
// {
//     int id;
//     string opis;
//     ISHOD ishod;
//     float niz[3];

// public:
//     Par(string O = "", float jedan = 0, float iks = 0, float dva = 0)
//     {
//         opis = O;
//         niz[0] = jedan;
//         niz[1] = iks;
//         niz[2] = dva;
//         id = rand();
//         ishod = NEODREDJEN;
//     }
//     string IshodString(ISHOD is)
//     {
//         switch (is)
//         {
//         case NEODREDJEN:
//             return "Neodredjen";
//             break;
//         case JEDAN:
//             return "JEDAN";
//         case IKS:
//             return "IKS";
//         case DVA:
//             return "DVA";
//         default:
//             break;
//         }
//     }
//     float getKvota(ISHOD is)
//     {
//         cout << "ISHOD=" << is << endl;
//         if (is || is == 0)
//         {
//             return niz[is];
//         }
//         else
//         {
//             return -1;
//         }
//     }
//     void setStvarniIshod(ISHOD is)
//     {
//         ishod = is;
//     }
//     ISHOD getStvarniIshod()
//     {
//         return ishod;
//     }

//     friend ostream &operator<<(ostream &COUT, Par &p)
//     {
//         cout << p.id << " - " << p.opis << endl;

//         cout << "(" << p.niz[0] << "," << p.niz[1] << "," << p.niz[2] << ")" << endl;
//     }
// };

// class Tiket
// {
//     float uplata;
//     int brojParova;
//     Par *parovi;

// public:
//     Tiket(float U)
//     {
//         uplata = U;
//         brojParova = 0;
//         parovi = new Par[brojParova + 1];
//     }
//     float sumaProcenta = 0;
//     int tacniTiketi = 0;
//     void dodajPar(Par p, ISHOD is)
//     {
//         if (p.getStvarniIshod() == is)
//         {
//             tacniTiketi++;
//             cout << p.getKvota(is) << endl;
//             sumaProcenta += p.getKvota(is);
//         }

//         Par *temp = new Par[brojParova + 1];

//         for (int i = 0; i < brojParova; i++)
//         {
//             temp[i] = parovi[i];
//         }
//         temp[brojParova] = p;
//         brojParova++;
//         delete[] parovi;
//         parovi = temp;
//     }
//     float getVrednostUplate()
//     {
//         return uplata;
//     }

//     // vrednost isplate
//     float operator*()
//     {
//         cout << "SUMA PROCENTA = " << sumaProcenta << endl;
//         return tacniTiketi == brojParova ? sumaProcenta * uplata : 0;
//     }
//     Tiket operator~()
//     {
//         return tacniTiketi == brojParova ? true : false;
//     }
// };

// int main()
// {
//     srand(time(0));
//     Par p1("REAL VS PARIS", 3.0, 2.1, 1);
//     Par p2("ZORDAN VS MIKEL", 3, 5, 1.2);
//     Par p3("ZORDAN VS MIKEL", 1.4, 5, 1.2);

//     p1.setStvarniIshod(JEDAN);
//     p2.setStvarniIshod(IKS);
//     p3.setStvarniIshod(DVA);

//     cout << p1.getStvarniIshod() << endl;
//     cout << p1;

//     Tiket t1(430);
//     t1.dodajPar(p1, JEDAN);
//     t1.dodajPar(p2, IKS);
//     t1.dodajPar(p3, DVA);

//     float dobitak = *t1;
//     cout << endl
//          << dobitak;

//     return 0;
// }

// graphs Grpahs graph matrica

// graph adjacency arrays

// #include <stdio.h>
// #include <stdlib.h>

// #define V 5

// void addEdge(int arr[][V], int u, int v)
// {
//     arr[u][v] = 1;
// }

// int main()
// {
//     int graph[V][V] = {0};

//     addEdge(graph, 0, 1);
//     addEdge(graph, 0, 4);
//     addEdge(graph, 1, 2);
//     addEdge(graph, 1, 4);
//     addEdge(graph, 3, 2);
//     addEdge(graph, 3, 4);
//     // dodavanje cvora
//     graph[V + 1][V + 1];
//     // brisanje
//     graph[1][2] = 0;

//     // dodavanja
//     graph[3][3] = 1;

//     // provera da li veza izmedju cvorova postoji
//     if (graph[3][3])
//     {
//         printf("Postoji\n");
//     }
//     // ispis
//     for (int i = 0; i < V; i++)
//     {
//         for (int j = 0; j < V; j++)
//         {
//             printf("%d  ", graph[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <vector>
// #include <iostream>

// graphs graf vector
// #define SIZE 5

// using namespace std;

// void addEdge(vector<int> graph[SIZE], int u, int v)
// {
//     graph[u].emplace_back(v);
// }
// int main()
// {
//     vector<int> graph[SIZE];
//     addEdge(graph, 1, 0);
//     addEdge(graph, 1, 2);

//     addEdge(graph, 3, 4);

//     addEdge(graph, 3, 2);

//     for (int i = 0; i < SIZE; i++)
//     {
//         printf("%d", i);
//         for (int j = 0; j < graph[i].size(); j++)
//         {
//             printf("-->%d", graph[i][j]);
//         }
//         printf("\n");
//     }

//     // brisanje veze
//     return 0;
// }

// implementacija grafa u c

// #include <iostream>

// typedef struct Node
// {
//     int vertex;
//     struct Node *next;
// } Node;

// typedef struct Graph
// {
//     int numOfVertex;
//     Node **conections;
// } Graph;

// Node *createNode(int v)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->vertex = v;
//     newNode->next = NULL;
//     return newNode;
// }

// Graph *createGraph(int n)
// {
//     Graph *newGraph = (Graph *)malloc(sizeof(Graph));
//     newGraph->numOfVertex = n;
//     newGraph->conections = (Node **)malloc(n * sizeof(Node *));
//     for (int i = 0; i < n; i++)
//     {
//         newGraph->conections[i] = NULL;
//     }
//     return newGraph;
// }

// void addEdge(Graph *graph, int src, int des)
// {
//     // usmereni
//     Node *newNode = createNode(des);
//     newNode->next = graph->conections[src];
//     graph->conections[src] = newNode;

//     // za neusmereni dodamo jos
//     newNode = createNode(src);
//     newNode->next = graph->conections[des];
//     graph->conections[des] = newNode;
// }
// void ispis(Graph *graph)
// {
//     int n = graph->numOfVertex;

//     for (int i = 0; i < n; i++)
//     {
//         printf("vertex conected to %d ", i);
//         Node *temp = graph->conections[i];
//         while (temp)
//         {
//             printf("%d ", temp->vertex);
//             temp = temp->next;
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     Graph *graph = createGraph(4);
//     addEdge(graph, 1, 2);
//     addEdge(graph, 1, 3);
//     addEdge(graph, 0, 3);
//     ispis(graph);
//     return 0;
// }

// #include <iostream>

// template <class T>

// T srednjaVrednost(T *niz, int n)
// {
//     T suma = 0;
//     for (int i = 0; i < n; i++)
//     {
//         suma += niz[i];
//     }
//     return suma / n;
// }
// int main()
// {

//     int niz[5];
//     int i = 0;
//     cout << "Unesite elemente" << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> niz[i];
//     }
//     cout << srednjaVrednost(niz, i);
//     return 0;
// }

// #include <iostream>

// using namespace std;
// template <class T=int, int k = 10>

// class Vektor
// {
//     int n;
//     T *niz;

// public:
//     Vektor()
//     {
//         n = k;
//         niz = new T[n];
//     }

//     T &operator[](int i)
//     {
//         return niz[i];
//     }
// };

// class A
// {
// public:
//     int p;
//     A()
//     {
//         p = 5;
//     }
// };
// int main()
// {
//     Vektor<int, 5> obj1;
//     Vektor<float, 3> obj2;

//     Vektor<A, 5> obj3;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Radnik
// {
// public:
//     string ime;
//     string prezime;
//     int plata;

//     Radnik()
//     {
//         ime = "Engin";
//         prezime = "Bulic";
//         plata = 0;
//     }
//     Radnik(string ime, string prezime, int plata)
//     {
//         this->ime = ime;
//         this->prezime = prezime;
//         this->plata = plata;
//     }
//     virtual void ispis()
//     {
//         cout << "RADNIK:" << ime << " " << prezime << " plata:" << plata;
//     }
// };

// class Sef : public Radnik
// {
// public:
//     Sef()
//     {
//         ime = "Hamza";
//         prezime = "Gorcevic";
//         plata = 3000;
//     }
//     Sef(string i, string p, int pl)
//     {
//         ime = i;
//         prezime = p;
//         plata = pl;
//     }
//     void ispis()
//     {
//         cout << "SEF:" << ime << " " << prezime << " plata:" << plata;
//     }
// };
// template <class E, int k = 10>

// class Firma
// {

// public:
//     E **niz;
//     int broj;
//     Firma()
//     {
//         broj = k;
//         niz = new E *[broj];
//         for (int i = 0; i < broj; i++)
//         {
//             niz[i] = new Radnik();
//         }
//     }
//     void plate()
//     {
//         for (int i = 0; i < broj; i++)
//         {
//             niz[i]->ispis();
//             cout << endl;
//         }
//     }
// };

// int main()
// {
//     Sef *s;
//     Radnik *r = new Radnik("HAris", "Gorcevic", 4000);
//     s = new Sef();

//     Firma<Radnik, 10> f1;

//     for (int i = 0; i < 10; i++)
//     {
//         f1.niz[i] = r;
//     }
//     f1.niz[4] = r;
//     f1.niz[5] = new Sef("Hamza", "Gorcevic", 5000);

//     f1.plate();
// }

// https://rti.etf.bg.ac.rs/rti/ir2oo1/rokovi/OO1K2SI141205.pdf

// #include <iostream>
// #include <cstdlib>
// #include <time.h>
// #include <vector>
// using namespace std;

// enum STANJE
// {
//     ZIV,
//     MRTAV
// };

// class Supstanca
// {
//     string naziv;

// public:
//     Supstanca(string N)
//     {
//         naziv = N;
//     }
//     string getNaziv()
//     {
//         return naziv;
//     }

//     friend ostream &operator<<(ostream &COUT, Supstanca &sup)
//     {
//         cout << sup.naziv << endl;
//         return COUT;
//     }
// };
// class JednocelijskiOrganizam
// {

// protected:
//     STANJE stanje;

// public:
//     JednocelijskiOrganizam() : stanje(ZIV)
//     {
//     }
//     virtual JednocelijskiOrganizam *kloniraj()
//     {
//         cout << "Jednocelijski organizam je kloniram \n";
//         return new JednocelijskiOrganizam();
//     }
//     STANJE getStanje()
//     {
//         return stanje;
//     }

//     void reaguje(Supstanca &s)
//     {
//         cout << "orgnaizam je reagovo sa " << s.getNaziv() << endl;
//     }

//     JednocelijskiOrganizam(JednocelijskiOrganizam &) = delete;
//     JednocelijskiOrganizam &operator=(JednocelijskiOrganizam &) = delete;
// };
// inline double rnd()
// {
//     srand(time(0));

//     return rand() / (RAND_MAX + 0.1);
// }

// class Bakterija : JednocelijskiOrganizam
// {
// private:
//     string naziv;
//     string losaSupstanca;
//     float verovatnoca;
//     int uspesnaKloniranja;

// public:
//     Bakterija(string N, string LS, float V = 0.5) : JednocelijskiOrganizam()
//     {
//         naziv = N;
//         losaSupstanca = LS;
//         verovatnoca = V;
//         uspesnaKloniranja = 0;
//     }
//     Bakterija *kloniraj()
//     {
//         if (getStanje() == MRTAV || verovatnoca < rnd())
//         {
//             cout << "NU" << endl;
//             return nullptr;
//         }
//         else
//         {
//             cout << "U" << endl;
//             uspesnaKloniranja++;
//             return new Bakterija(naziv, losaSupstanca, verovatnoca);
//         }
//     }
//     void reaguj(Supstanca &s)
//     {
//         if (s.getNaziv() == losaSupstanca)
//         {
//             stanje = MRTAV;
//         }
//         else
//         {
//             stanje = ZIV;
//         }
//     }
//     friend ostream &operator<<(ostream &COUT, Bakterija &b)
//     {
//         COUT << b.naziv << "/" << b.uspesnaKloniranja << "(organizam)" << endl;
//         return COUT;
//     }
// };

// class Kolonija
// {
//     float id;
//     typedef struct Organizmi
//     {
//         Bakterija *data;
//         struct Organizmi *next;
//     } Organizmi;
//     Organizmi org;

//     int brojOrganizama;

// public:
//     Kolonija()
//     {
//         id = rnd();
//     }
//     Kolonija(Bakterija *organizam)
//     {
//         brojOrganizama = 1;
//         org.data = organizam;
//         org.next = NULL;
//     }
//     void razmnozi()
//     {
//         Organizmi *temp = &org;
//         Organizmi *newArray = NULL;
//         Organizmi *lastNode = NULL;

//         while (temp != NULL)
//         {
//             Bakterija *cloned = temp->data->kloniraj();
//             if (cloned != NULL)
//             {
//                 cout << "CLONED" << endl;

//                 Organizmi *newNode = new Organizmi;
//                 newNode->data = cloned;
//                 newNode->next = NULL;

//                 if (newArray == NULL)
//                 {
//                     newArray = newNode;
//                     lastNode = newNode;
//                 }
//                 else
//                 {
//                     lastNode->next = newNode;
//                     lastNode = newNode;
//                 }
//             }

//             temp = temp->next;
//         }

//         // Append the cloned organisms to the existing organisms
//         if (newArray != NULL)
//         {
//             lastNode->next = org.next;
//             org.next = newArray;
//         }
//     }

//     void ispis()
//     {
//         cout << "ISPIS" << endl;

//         Organizmi *temp = &org;

//         while (temp != NULL)
//         {
//             cout << *temp->data;
//             temp = temp->next;
//         }

//         cout << "ISPIS" << endl;
//     }
//     void reaguje(Supstanca &s)
//     {
//         Organizmi *temp = &org;

//         while (temp != NULL)
//         {
//             temp->data->reaguj(s);
//             temp = temp->next;
//         }
//     }
// };
// int main()
// {
//     Supstanca s("krv");
//     Bakterija b1("amonijak", "krv", 100);
//     b1.kloniraj();
//     b1.kloniraj();

//     Kolonija k(&b1);
//     k.razmnozi();
//     k.razmnozi();
//     k.razmnozi();
//     k.ispis();
// }

// #include <iostream>

// class Poistion
// {
//     int x, y;

// public:
//     Poistion(int x, int y)
//     {
//         this->x = x;
//         this->y = y;
//     }

//     void operator++()
//     {
//         x++;
//     }
//     void ispis()
//     {
//         cout << "X" << x << "Y" << y << endl;
//     }
// };
// int main()
// {
//     Poistion p1(10, 23);
//     p1.ispis();
//     ++p1;
//     p1.ispis();

//     return 0;
// }

// #include <time.h>

// class Datum
// {
//     int dan;
//     int mesec;
//     int godina;

// public:
//     Datum(int D = 10, int M = 7, int G = 2003)
//     {
//         dan = D;
//         mesec = M;
//         godina = G;
//     }

//     bool operator>(Datum &d)
//     {
//         int suma1 = (godina * 365) + (mesec * 30) + dan;
//         int suma2 = (d.godina * 365) + (d.mesec * 30) + d.dan;
//         if (suma1 > suma2)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     friend ostream &operator<<(ostream &COUT, Datum &d)
//     {
//         cout << d.dan << "/" << d.mesec << "/" << d.godina << endl;
//         return COUT;
//     }
//     ~Datum()
//     {
//     }
// };

// enum TIP
// {
//     STANDARD,
//     KOMFORT,
//     EKSKLUZIV
// };

// class PolisaOsiguranja
// {
// protected:
//     int id;
//     Datum pocetakVazenja;
//     Datum istekVazenja;
//     TIP tip;
//     bool active;

// public:
//     PolisaOsiguranja(Datum pocetak, Datum istek, TIP t = STANDARD)
//     {
//         id = rand();
//         pocetakVazenja = pocetak;
//         istekVazenja = istek;
//         tip = t;
//         active = true;
//     }
//     void produziPolisu(Datum d)
//     {
//         istekVazenja = d;
//         active = true;
//     }

//     bool daLiJeIstekao()
//     {
//         if (pocetakVazenja > istekVazenja)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     virtual int polisa() = 0;

//     friend ostream &operator<<(ostream &COUT, PolisaOsiguranja &PO)
//     {
//         cout << PO.id << "-" << PO.polisa();
//     }
// };

// class PolisaPutovanja : public PolisaOsiguranja
// {
// public:
//     PolisaPutovanja(Datum d1, Datum d2, TIP t) : PolisaOsiguranja(d1, d2, t)
//     {
//     }
//     int polisa()
//     {
//         int arr[] = {5000, 7000, 10000};
//         return arr[tip];
//     }
//     void ispis()
//     {
//         cout << "Putno_osiguranje " << polisa();
//     }
// };

// class Osiguranik
// {
//     int id;
//     string ime;
//     typedef struct Elem
//     {
//         PolisaPutovanja *data;
//         struct Elem *next;
//     } Elem;
//     Elem *first = nullptr;
//     Elem *last = nullptr;

// public:
//     Osiguranik(string i)
//     {
//         ime = i;
//         id = rand();
//     }
//     void operator+=(PolisaPutovanja *p)
//     {
//         Elem *newNode = new Elem;
//         newNode->data = p;
//         newNode->next = nullptr;
//         if (first == nullptr)
//         {
//             first = last = newNode;
//         }
//         else
//         {

//             last->next = newNode;
//             last = last->next;
//         }
//     }
//     void produziPolise()
//     {
//         Elem *temp = first;

//         while (temp != nullptr)
//         {
//             if (temp->data->daLiJeIstekao())
//             {
//                 temp->data->produziPolisu(Datum(6, 8, 2030));
//             }
//             temp = temp->next;
//         }
//     }

//     void ispis()
//     {
//         Elem *temp = first;

//         while (temp != nullptr)
//         {
//             temp->data->ispis();
//             cout << endl;
//             temp = temp->next;
//         }
//     }

//     friend ostream &operator<<(ostream &COUT, Osiguranik os)
//     {
//         cout << os.ime << "(" << os.id << ")" << endl;

//         Elem *temp = os.first;

//         while (temp != NULL)
//         {
//             cout << *temp->data;
//             cout << endl;
//             temp = temp->next;
//         }
//     }
// };

// int main()
// {
//     srand(time(0));
//     Datum d1(4, 5, 2015);
//     Datum d2(4, 2, 2018);

//     PolisaPutovanja po(d1, d2, KOMFORT);
//     PolisaPutovanja po1(Datum(1, 1, 2000), (2, 2, 2003), KOMFORT);
//     PolisaPutovanja po2(Datum(1, 1, 2030), (2, 2, 2403), EKSKLUZIV);
//     PolisaPutovanja po3(Datum(1, 1, 2030), (2, 2, 2403), EKSKLUZIV);

//     Osiguranik os("Hamza");
//     os += &po;
//     os += &po1;
//     os += &po2;
//     os += &po3;

//     cout << os;

//     return 0;
// }

// https://rti.etf.bg.ac.rs/rti/ir2oo1/rokovi/OO1K2SI161209.pdf
// #include <iostream>

// class Nalepnica
// {
//     int id;
//     string naziv;

// public:
//     static int counter;

//     Nalepnica(string N)
//     {
//         naziv = N;
//         counter++;
//         id = counter;
//     }
//     Nalepnica(Nalepnica &n)
//     {
//         naziv = n.naziv;
//         counter++;
//         id = counter;
//     }
//     string getNaziv()
//     {
//         return naziv;
//     }
//     int getId()
//     {
//         return id;
//     }

//     friend ostream &operator<<(ostream &COUT, Nalepnica &n)
//     {
//         cout << n.naziv << "(" << n.id << ")";
//         return COUT;
//     }
// };

// enum VRSTA
// {
//     BEZALKOHOLNO,
//     ALKOHOLNO
// };

// class Flasa
// {
// protected:
//     Nalepnica *nalepnica;
//     float cenaBezKaucije;
//     double zapremina;
//     VRSTA vrsta;

// public:
//     Flasa(Nalepnica *n, float CBK, double Z = 0.33, VRSTA vr = BEZALKOHOLNO)
//     {
//         nalepnica = n;
//         cenaBezKaucije = CBK;
//         zapremina = Z;
//         vrsta = vr;
//     }
//     Nalepnica *getNalepnicu()
//     {
//         return nalepnica;
//     }
//     float getCBK()
//     {
//         return cenaBezKaucije;
//     }
//     void setCBK(int c)
//     {
//         cenaBezKaucije = c;
//     }
//     double getZapremina()
//     {
//         return zapremina;
//     }
//     VRSTA getVrstu()
//     {
//         return vrsta;
//     }
//     int izracunajCenu();

//     bool operator==(Flasa &f)
//     {
//         if (f.nalepnica->getNaziv() == nalepnica->getNaziv() && f.vrsta == vrsta && f.izracunajCenu() == izracunajCenu())
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     virtual void pisi(ostream &COUT)
//     {
//         string arr[2] = {"bezalkoholno", "alkoholno"};

//         COUT << *nalepnica << "(" << cenaBezKaucije << ":din ," << zapremina << "," << arr[vrsta] << ")";
//     }

//     friend ostream &operator<<(ostream &COUT, Flasa &f)
//     {
//         f.pisi(COUT);
//         return COUT;
//     }
// };

// class Staklena : public Flasa
// {
// public:
//     Staklena(Nalepnica *n, float CBK, double Z = 0.33, VRSTA vr = BEZALKOHOLNO) : Flasa(n, CBK, Z, vr)
//     {
//     }
//     int izracunajCenu()
//     {
//         if (zapremina < 0.5)
//         {
//             cenaBezKaucije += (cenaBezKaucije * (5 / 100));
//         }
//         else
//         {
//             cenaBezKaucije += (cenaBezKaucije * (10 / 100));
//         }
//         return cenaBezKaucije;
//     }

//     void pisi(ostream &COUT) override
//     {
//         Flasa::pisi(COUT);
//         cout << "-staklena";
//     }
// };

// class Plasticna : public Flasa
// {
// public:
//     Plasticna(Nalepnica *n, float CBK, double Z = 0.33, VRSTA vr = BEZALKOHOLNO) : Flasa(n, CBK, Z, vr) {}

//     int izracunajCenu()
//     {
//         if (zapremina < 0.5)
//         {
//             cenaBezKaucije += (cenaBezKaucije * (2.5 / 100));
//         }
//         else
//         {
//             cenaBezKaucije += (cenaBezKaucije * (5 / 100));
//         }
//         return cenaBezKaucije;
//     }

//     void pisi(ostream &COUT)
//     {
//         Flasa::pisi(COUT);
//         cout << "-plasticna" << endl;
//     }
// };

// class Diskonti
// {
//     string naziv;
//     struct Flase
//     {
//         Flasa *flasa;
//         Flase *next;
//     };
//     Flase *first;
//     Flase *last;

// public:
//     Diskonti(string N)
//     {
//         naziv = N;
//         first = NULL;
//         last = NULL;
//     }

//     void operator+=(Flasa *f)
//     {
//         Flase *newNode = new Flase;
//         newNode->flasa = f;
//         newNode->next = NULL;
//         if (first == NULL)
//         {
//             first = last = newNode;
//         }
//         else
//         {
//             last->next = newNode;
//             last = last->next;
//         }
//     }
//     void ispis()
//     {
//         cout << "Podrum\n";
//         Flase *temp = first;
//         while (temp != NULL)
//         {
//             cout << *temp->flasa << endl;
//             temp = temp->next;
//         }
//     }
//     Flasa *operator[](int i)
//     {
//         Flase *temp = first;
//         while (temp != NULL && i > 0)
//         {
//             i--;
//             temp = temp->next;
//         }
//         if (temp != NULL)
//         {
//             return temp->flasa;
//         }
//         else
//         {
//             cout << "NULL returned";
//             return nullptr;
//         }
//     }
// };
// int Nalepnica::counter = 0;

// int main()
// {
//     Nalepnica n1("smoki");
//     Nalepnica n2("kivi");
//     Nalepnica n3(n2);

//     Staklena f1(&n2, 40, 100);

//     Plasticna p1(&n1, 105, 0.5, ALKOHOLNO);

//     Diskonti diskont("Podrum");

//     diskont += &f1;
//     diskont += &p1;

//     diskont.ispis();
//     cout << "PROBA\n";

//     Flasa *f3 = diskont[1];

//     cout << "PROBA\n";
//     cout << *f3;

//     return 0;
// }

// /
// /
// /
// /
// /
// class Baza
// {
// protected:
//     int x;
//     int y;

// public:
//     Baza(int X = 2, int Y = 7)
//     {
//         x = X;
//         y = Y;
//     }
//     virtual void ispis()
//     {
//         cout << "X=" << x << ","
//              << "Y=" << y << endl;
//     }

//     friend ostream &operator<<(ostream &COUT, Baza &b)
//     {
//         b.ispis();
//         return COUT;
//     }
// };

// class Kocka : public Baza
// {
//     int z;

// public:
//     Kocka(int Y = 2, int Z = 23, int X = 5) : Baza(X, Y)
//     {
//         z = Z;
//     }
//     void ispis()
//     {
//         cout << "Kocka" << endl;
//         cout << "Z=" << z << ",";
//         Baza::ispis();
//     }
// };

// class Krug : public Baza
// {
//     int p;

// public:
//     Krug(int p = 6, int x = 3, int y = 2) : Baza(x, y)
//     {
//         this->p = p;
//     }
//     void ispis()
//     {
//         cout << "KRUG" << endl;
//         cout << "P=" << p << ",";
//         Baza::ispis();
//     }
// };
// class Shape : public Krug
// {
//     int f;

// public:
//     Shape(int F = 1, int p = 5, int x = 13, int y = 9) : Krug(p, x, y)
//     {
//         f = F;
//     }
//     void ispis()
//     {
//         cout << "SHAPE" << endl;
//         cout << "F=" << f << ",";
//         Krug::ispis();
//     }
// };

// int main()
// {
//     Baza **arr;

//     arr[0] = new Kocka(4, 5);
//     arr[1] = new Baza(3, 4);
//     arr[2] = new Krug(1, 2, 3);
//     arr[3] = new Shape(2, 3, 4);

//     for (int i = 0; i < 4; i++)
//     {
//         cout << *arr[i];
//     }

//     return 0;
// }

// BFS bfs breath first
// #include <iostream>

// #define size 6

// void addEdge(int niz[size][size], int x, int y)
// {
//     niz[x][y] = 1;
// }

// void BFS(int niz[][size], int visited[], int start)
// {
//     int queue[size], front = -1, rear = -1;
// // dodajemo prvi elementa od kog zelimo da pocnemo

//     front++;
//     rear++;
//     queue[rear] = start;
//     visited[start] = 1; // oznaciecmo prvi element od kog smo poceli oznazenim

// // prolazimo kroz while petlju dok se stek ne isprazni
//     while (front <= rear)
//     {
// //odredjuejmo vrednost start , trenutno ce bit ista kao sto smo je i poslali , ali ce se nakon implementacije front povecati sto znaci da smo je izbrisali
//         start = queue[front++];
//         cout << "Q-" << start << endl;

// // prolazimo kroz sve elemnte koji se nalazi u redu start .tj njegove veze sa susedima
//         for (int i = 0; i < size; i++)
//         {
// // ako imamo vezu starta i nekog drugog cvora 'i', znacemo da ce biti jedan (niz[start][i]) , i ako nije posecena , tj ako na tom vertexu nemamo jedan kao visited
// // npr ako naidjemo na vertex 1 , i vidimo da u tom redu imamo 1 sa nasim startom , postavicemo visited pod indexom 1 da je visited , sto znaci da ga vise necemo obilazti;
//             if (niz[start][i] && visited[i] == 0)
//             {
// // kada pronadjemo takav element dodacemo ga u stek i oznaciti kao vidjen
//                 queue[++rear] = i;
//                 visited[i] = 1;
//             }
//         }
//     }
// }
// int main()
// {
//     int niz[size][size] = {0};
//     int visited[size] = {0};
//     addEdge(niz, 0, 1);
//     addEdge(niz, 1, 2);
//     addEdge(niz, 1, 3);
//     addEdge(niz, 1, 4);
//     addEdge(niz, 4, 0);
//     addEdge(niz, 4, 5);
//     addEdge(niz, 5, 3);

//     cout << "ISPIS \n";
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             printf("%d ", niz[i][j]);
//         }
//         cout << endl;
//     }

//     cout << "ISPISUJE\n";

//     BFS(niz, visited, 0);
//     return 0;
// }

// DPS depth first dps

// #include <iostream>

// #define size 6

// // DFS radi pomocu stacka , ubaci element zatim ga izbaci i doda njegove susede , zatim redom izbacuje pa dodaje susede
// void addEdge(int arr[][size], int x, int y)
// {
//     arr[x][y] = 1;
// }

// void DFS(int arr[][size], int visited[], int start)
// {
//     int stack[size];
//     int top = -1;

//     top++;
//     stack[top] = start;
//     visited[start] = 1;
//     // dok se ne isprazni stek
//     while (top != -1)
//     {
//         // postavljamo stek na 0
//         start = stack[top];
//         // odma je izbacujemo
//         top--;
//         printf("%d ", start);
//         // prolazimo kroz sve  kolone za red 0 , proveravamo da li ima povezanosti u uslovi if i da li su vec poseceni
//         for (int i = 0; i < size; i++)
//         {
//             if (arr[start][i] && visited[i] != 1)
//             {
//                 // kada dodjedmo dodajemo sve grane u stack i grana koja je poslednja ce prva izaci i njene susede cemo prvo dodati
//                 top++;
//                 stack[top] = i;
//                 visited[i] = 1;
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[size][size] = {0};
//     int visited[size] = {0};

//     addEdge(arr, 0, 1);
//     addEdge(arr, 1, 4);
//     addEdge(arr, 4, 0);
//     addEdge(arr, 1, 2);
//     addEdge(arr, 1, 3);
//     addEdge(arr, 4, 5);
//     addEdge(arr, 5, 3);
//     addEdge(arr, 2, 3);

//     DFS(arr, visited, 0);
//     return 0;
// }

//
//

// zadatak sa binarnim stablom

// #include <iostream>

// struct Tree
// {
//     int data;
//     Tree *left, *rigth;
// };

// Tree *createVertex(int x)
// {
//     Tree *newTree = (Tree *)malloc(sizeof(Tree));
//     newTree->data = x;
//     newTree->left = NULL;
//     newTree->rigth = NULL;
// };
// Tree *mainTree = NULL;

// Tree *makeTree(int *niz, int n, int i, Tree *t = NULL)
// {
//     if (i < n)
//     {
//         Tree *newTree = createVertex(niz[i]);
//         t = newTree;
//         t->left = makeTree(niz, n, 2 * i + 1, t->left);
//         t->rigth = makeTree(niz, n, 2 * i + 2, t->rigth);
//     }
//     return t;
// }

// int findLevel(int x, Tree *mt, int nivo = 1)
// {
//     if (mt)
//     {
//         if (x == mt->data)
//         {
//             return nivo;
//         }

//         return max(findLevel(x, mt->left, nivo + 1), findLevel(x, mt->rigth, nivo + 1));
//     }
//     return 0;
// }

// int search(int x)
// {
//     return findLevel(x, mainTree);
// }

// void printInOrder(Tree *t)
// {
//     if (t)
//     {
//         printInOrder(t->left);
//         printf("%d \n", t->data);
//         printInOrder(t->rigth);
//     }
// }

// int main()
// {
//     int niz[9] = {2, 3, 4, 1, 5, 1, 5, 4, 5};

//     Tree *s = NULL;
//     mainTree = makeTree(niz, 8, 0);

//     printInOrder(mainTree);
//     cout << "found " << search(2);

//     return 0;
// }

// #include <iostream>
// #define size 4

// using namespace std;
// void BFS(int arr[size][size], int visited[])
// {
//     int queue[size], front = -1, rear = -1, start;

//     queue[++front] = 0;
//     rear++;
//     visited[0] = 1;

//     while (front <= rear)
//     {
//         start = queue[front++];
//         cout << start << endl;

//         for (int i = 0; i < size; i++)
//         {
//             if (arr[start][i] && visited[i] == 0)
//             {
//                 queue[++rear] = i;
//                 visited[i] = 1;
//             }
//         }
//     }
// }

// void DFS(int arr[size][size], int visited[], int start = 0)
// {
//     int stack[size], top = -1;

//     stack[++top] = start;
//     visited[start] = 1;

//     while (top != -1)
//     {
//         start = stack[top];
//         cout << start << "s" << endl;
//         top--;

//         for (int i = 0; i < size; i++)
//         {
//             if (arr[start][i] && visited[i] == 0)
//             {
//                 stack[++top] = i;
//                 visited[i] = 1;
//             }
//         }
//     }
// }

// // mst prim , primov , prims algorithm
// // prim start

// void printMST(int parent[], int graph[size][size], int key[size])
// {
//     printf("Edge \t Weight\n");
//     for (int i = 1; i < size; i++)
//     {
//         // printf("%d-%d\t%d\n", parent[i], i, key[i]);
//         printf("%d-%d\t%d\n", parent[i], i, graph[i][parent[i]]);
//     }
// }

// int minKey(int key[], int selected[])
// {

//     int min = 998, minI;

//     for (int i = 0; i < size; i++)
//     {
//         if (!selected[i] && key[i] < min)
//         {
//             min = key[i];
//             minI = i;
//         }
//     }
//     return minI;
// }

// int primMST(int graph[size][size])
// {
//     int key[size], parents[size], selected[size];
//     for (int i = 0; i < size; i++)
//     {
//         key[i] = 998, selected[i] = 0;
//     }
//     key[0] = 0;
//     parents[0] = -1;

//     for (int i = 0; i < size; i++)
//     {
//         int u = minKey(key, selected);
//         selected[u] = 1;

//         for (int j = 0; j < size; j++)
//         {
//             // printf("\nU = %d !selected[%d] is %d", u, j, !selected[j]);
//             if (graph[u][j] && graph[u][j] < key[j] && !selected[j])
//             {
//                 parents[j] = u;
//                 key[j] = graph[u][j];
//             }
//         }
//     }

//     printMST(parents, graph, key);
// }

////prim end

// dijkstra dijk algoritam

//  start

// void dijkstra(int graph[size][size], int v)
// {
//     int count, u, w, visited[size], distance[size], parents[size];

//     for (int i = 0; i < size; i++)
//     {
//         visited[i] = 0;
//         parents[i] = 0;
//     }
//     distance[v] = 0;
// }
// end dijksta

// void warshall(int graph[size][size])
// {

//     for (int k = 0; k < size; k++)
//     {
//         for (int i = 0; i < size; i++)
//         {
//             if (graph[i][k] == 1)
//                 for (int j = 0; j < size; j++)
//                 {
//                     graph[i][j] = graph[i][j] || graph[k][j];
//                 }
//         }
//     }

//     cout << "ISPIS\n";
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             printf("%d ", graph[i][j]);
//         }
//         cout << endl;
//     }
// }

// void warshallWeight(int graph[size][size])
// {

//     for (int k = 0; k < size; k++)
//     {
//         for (int i = 0; i < size; i++)
//         {
//             for (int j = 0; j < size; j++)
//             {
//                 if ((graph[k][j] + graph[i][k]) < graph[i][j])
//                 {
//                     graph[i][j] = graph[k][j] + graph[i][k];
//                 }
//             }
//         }
//     }
//     cout << "ISPIS weight\n";
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             printf("%d ", graph[i][j]);
//         }
//         cout << endl;
//     }
// }

// #define size 4
// // BST BSP
// using namespace std;
// struct Node
// {
//     int data;
//     Node *left, *right;
// };

// Node *createNode(int data)
// {
//     Node *newTree = (Node *)malloc(sizeof(Node));
//     newTree->data = data;
//     newTree->left = NULL;
//     newTree->right = NULL;

//     return newTree;
// }

// Node *insertNode(Node **tree, int data)
// {
//     if (*tree == NULL)
//     {
//         *tree = createNode(data);
//         return *tree;
//     }
//     if ((*tree)->data > data)
//     {
//         (*tree)->left = insertNode(&((*tree)->left), data);
//     }
//     else if ((*tree)->data < data)
//     {

//         (*tree)->right = insertNode(&((*tree)->right), data);
//     }
//     return *tree;
// }

// Node *minValueNode(Node *tree)
// {
//     Node *temp = tree;
//     while (temp->left != NULL)
//     {
//         temp = temp->left;
//     }
//     return temp;
// }
// void inorder(Node *tree)
// {

//     if (tree)
//     {

//         inorder(tree->left);
//         cout << tree->data << " ";
//         inorder(tree->right);
//     }
// }

// Node *deleteNode(Node **tree, int data)
// {
//     if (*tree == NULL)
//     {
//         return *tree;
//     }
//     if ((*tree)->data > data)
//     {
//         (*tree)->left = deleteNode(&(*tree)->left, data);
//     }
//     else if ((*tree)->data < data)
//     {
//         (*tree)->right = deleteNode(&(*tree)->right, data);
//     }
//     else
//     {
//         // we found it

//         if ((*tree)->left == NULL)
//         {
//             Node *temp = (*tree)->right;
//             free(*tree);
//             return temp;
//         }
//         else if ((*tree)->right == NULL)
//         {
//             Node *temp = (*tree)->left;
//             free(*tree);
//             return temp;
//         }
//         Node *temp = minValueNode((*tree)->right);
//         cout << "MIN FOUNDED FOR THAT SPECIFIC" << temp->data << endl;
//         (*tree)->data = temp->data;
//         (*tree)->right = deleteNode(&(*tree)->right, temp->data);
//     }
//     return *tree;
// }

// int zbirT(Node *t)
// {
//     if (t == NULL)
//     {
//         return 0;
//     }
//     return t->data + zbirT(t->left) + zbirT(t->right);
// }

// int main()
// {

//     Node *tree = NULL;

//     insertNode(&tree, 2);
//     insertNode(&tree, 3);
//     insertNode(&tree, 1);
//     insertNode(&tree, 22);
//     insertNode(&tree, 24);
//     insertNode(&tree, 20);
//     insertNode(&tree, 29);
//     tree = deleteNode(&tree, 22);
//     inorder(tree);
//     cout << endl;

//     cout << "zbir:" << zbirT(tree);

// int visited[size] = {0};
// int arr[size][size] = {
//     {0, 3, 0, 1},
//     {3, 0, 5, 0},
//     {0, 5, 0, 2},
//     {1, 0, 2, 0},
// };

// int arr0[size][size] = {
//     {0, 1, 0, 1},
//     {0, 0, 1, 1},
//     {1, 0, 0, 0},
//     {0, 0, 0, 0}};

// BFS(arr, visited);
// DFS(arr, visited);
// primMST(arr);
// int distance[size];
// dijkstra(arr, 0);

// TestPrimMST(arr);
// warshall(arr0);
// warshallWeight(arr);
// graph *g = creategraph(6);
// insertVertex(g, 3, 1);
// insertVertex(g, 0, 1);
// insertVertex(g, 2, 1);
// insertVertex(g, 3, 4);
// ispisGrafa(g);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Tree
// {
//     int data;
//     Tree *left, *right;
// };

// Tree *createTree(int data)
// {
//     Tree *newTree = (Tree *)malloc(sizeof(Tree));
//     newTree->data = data;
//     newTree->left = NULL;
//     newTree->right = NULL;
//     return newTree;
// }
// Tree *insert(Tree **t, int data)
// {
//     if ((*t) == NULL)
//     {
//         *t = createTree(data);
//     }
//     if ((*t)->data < data)
//     {
//         (*t)->right = insert(&((*t)->right), data);
//     }
//     else if ((*t)->data > data)
//     {
//         (*t)->left = insert(&((*t)->left), data);
//     }
//     return *t;
// }
// Tree *minValue(Tree **t)
// {
//     Tree *temp = (*t);
//     while (temp->left != NULL)
//     {
//         temp = temp->left;
//     }
//     return temp;
// }
// Tree *deleteData(Tree *t, int data)
// {
//     if (t == NULL)
//     {
//         return nullptr;
//     }
//     if (t->data > data)
//     {
//         t->left = deleteData(t->left, data);
//     }
//     else if (t->data < data)
//     {
//         t->right = deleteData(t->right, data);
//     }
//     else
//     {
//         // nasli smo data

//         if (t->left == NULL)
//         {
//             Tree *temp = t->right;
//             free(t);
//             return temp;
//         }
//         else if (t->right == NULL)
//         {
//             Tree *temp = t->left;
//             free(t);
//             return temp;
//         }

//         Tree *min = minValue(&(t->right));
//         cout << "t->right" << t->right->data << "MIN= " << min->data << endl;
//         t->data = min->data;
//         t->right = deleteData(t->right, min->data);
//     }

//     return t;
// }

// void findElement(Tree *t, int el)
// {
//     if (t->data < el)
//     {
//         findElement(t->right, el);
//     }
//     else if (t->data > el)
//     {
//         findElement(t->left, el);
//     }
//     else if (t->data == el)
//     {
//         cout << "E = " << el;
//     }
//     else
//     {
//         cout << "nema ga";
//     }
// }
// void inorder(Tree *t)
// {
//     if (t)
//     {
//         inorder(t->left);
//         cout << t->data << " ";
//         inorder(t->right);
//     }
// }
// int main()
// {
//     Tree *t = NULL;

//     insert(&t, 2);
//     insert(&t, 5);
//     insert(&t, 3);
//     insert(&t, 1);
//     insert(&t, 22);
//     insert(&t, 23);
//     insert(&t, 20);
//     t = deleteData(t, 2);
//     inorder(t);
//     findElement(t, 90);

//     return 0;
// }

// link zadatka http://home.etf.rs/~kraus/nastava/oop1/ispiti/isp_2007_07_01.html
// #include <iostream>

// class Sredstvo
// {
// protected:
//     int maxBrzina;
//     int duzina;
//     int povrsina;
//     float tezina;
//     int id;

// public:
//     static int counter;
//     Sredstvo(int mB = 0, int d = 0, int p = 0, int t = 0)
//     {
//         maxBrzina = mB;
//         duzina = d;
//         povrsina = p;
//         tezina = t;
//         id = counter;
//         counter += 1;
//     }
//     virtual int getId() = 0;
//     int getTezinu()
//     {
//         return tezina;
//     }
//     virtual void ispisSadrzaja() = 0;

//     int getDuzinu()
//     {
//         return duzina;
//     }
//     int getPovrsinu()
//     {
//         return povrsina;
//     }
//     virtual string getVrstu() = 0;
//     friend ostream &operator<<(ostream &os, Sredstvo &s)
//     {
//         os << s.getVrstu() << s.id << "(" << s.maxBrzina << "," << s.duzina << "," << s.povrsina << "," << s.tezina << ")" << endl;
//         s.ispisSadrzaja();
//         return os;
//     }
// };

// int Sredstvo::counter = 0;

// class Automobil : public Sredstvo
// {
// protected:
//     int brSedista;

// public:
//     Automobil(int brSedista = 0, int mB = 0, int d = 0, int p = 0, int t = 0) : Sredstvo(mB, d, p, t)
//     {
//         this->brSedista = brSedista;
//     }
//     int getId()
//     {
//         return id;
//     }
//     string getVrstu()
//     {
//         return "A";
//     }
//     void ispisSadrzaja()
//     {
//         cout << "/";
//     }
// };

// class Transporter
// {
// protected:
//     int nosivost;

// public:
//     Transporter(int n) : nosivost(n) {}

//     virtual int getNosivost() = 0;
// };

// template <class T>
// class Stek
// {
//     T **elem;
//     int top;
//     int brElem;

// public:
//     Stek(int br = 0)
//     {
//         top = -1;
//         brElem = br;
//         elem = new T *[brElem];
//         for (int i = 0; i < br; i++)
//         {
//             elem[i] = nullptr;
//         }
//     }
//     int getBrElemenata()
//     {
//         return top;
//     }

//     void operator+=(T *el)
//     {
//         if (top < brElem)
//         {
//             elem[++top] = el;
//         }
//         else
//         {
//             T **temp = new T *[++top];

//             for (int i = 0; i < top; i++)
//             {
//                 temp[i] = elem[i];
//             }
//             temp[top] = el;
//             delete[] elem;
//             elem = temp;
//         }
//     }

//     friend ostream &operator<<(ostream &os, Stek &s)
//     {

//         for (int i = s.top; i >= 0; i--)
//         {
//             os << *(s.elem[i]) << endl;
//         }
//         return os;
//     }
//     T *operator--()
//     {
//         if (brElem >= 0)
//         {
//             return *elem[top];
//             top--;
//             brElem--;
//         }
//         return nullptr;
//     }

//     T *operator[](int br)
//     {
//         if (br < brElem || brElem == 0)
//         {
//             int temp = top;
//             while (temp != br)
//             {
//                 temp--;
//             }
//             return elem[temp];
//         }
//         else
//         {
//             cout << "GRESKA";
//             return nullptr;
//         }
//     }

//     T **getElements()
//     {
//         return elem;
//     }

//     ~Stek()
//     {
//         cout << "Called";
//         for (int i = 0; i < brElem; i++)
//         {
//             delete elem[i];
//         }
//         delete[] elem;
//     }
// };

// class Sleper : public Sredstvo, Transporter
// {
//     Stek<Automobil> *s;

// public:
//     Sleper(Stek<Automobil> *s, int mB = 0, int d = 0, int p = 0, int t = 0, int nosivost = 0) : Transporter(nosivost), Sredstvo(mB, d, p, t)
//     {
//         Automobil **elementi = s->getElements();

//         int suma = 0;
//         int duzina = 0;
//         for (int i = 0; i < s->getBrElemenata(); i++)
//         {
//             suma += elementi[i]->getTezinu();
//             duzina += elementi[i]->getDuzinu();
//         }
//         if (this->duzina > duzina && nosivost > suma)
//         {
//             this->s = s;
//             this->tezina += suma;
//         }
//         else
//         {
//             cout << "Pretesko ili predugacko\n";
//         }
//     }
//     void ispisSadrzaja()
//     {
//         cout << *s;
//     }
//     int getId()
//     {
//         return id;
//     }
//     int getNosivost()
//     {
//         return nosivost;
//     }
//     string getVrstu()
//     {
//         return "s";
//     }
// };

// class Trajekt : public Sredstvo, Transporter
// {
//     Stek<Sredstvo> *s;

// public:
//     Trajekt(Stek<Sredstvo> *s, int mB = 0, int d = 0, int p = 0, int t = 0, int nosivost = 0) : Transporter(nosivost), Sredstvo(mB, d, p, t)
//     {
//         int povrsina = 0;
//         Sredstvo **elements = s->getElements();
//         for (int i = 0; i < s->getBrElemenata(); i++)
//         {
//             povrsina += elements[i]->getPovrsinu();
//         }
//         if (this->povrsina > povrsina)
//         {
//             this->s = s;
//         }
//     }
//     void ispisSadrzaja()
//     {
//         cout << *s;
//     }
//     int getId()
//     {
//         return id;
//     }
//     int getNosivost()
//     {
//         return nosivost;
//     }
//     string getVrstu()
//     {
//         return "t";
//     }
// };
// int main()
// {
//     Automobil *a1 = new Automobil(4, 120, 2, 4, 130);
//     Automobil *a2 = new Automobil(4, 120, 1, 4, 260);

//     Stek<Automobil> s(4);
//     s += a1;
//     s += a2;

//     Sleper sleper(&s, 80, 10, 20, 4000, 8000);

//     Stek<Sredstvo> sr(3);
//     sr += a1;
//     sr += &sleper;
//     // sr += a3;
//     // cout << *sr[1];

//     Trajekt trajekt(&sr, 2, 80, 6, 50, 6000);

//     cout << trajekt;

//     return 0;
// }

// binarno stablo pretrazivanja pretraga BST
// 111

// tree sa tri cvora , tree with 3
// struct Tree
// {
//     int data;
//     Tree *left, *middle, *right;
// };

// void inorder(Tree *t)
// {
//     if (t)
//     {
//         cout << t->data << "--";
//         inorder(t->left);
//         inorder(t->middle);
//         inorder(t->right);
//     }
// }

// Tree *createVertex(int data)
// {
//     Tree *newTree = (Tree *)malloc(sizeof(Tree));
//     newTree->data = data;
//     newTree->left = NULL;
//     newTree->middle = NULL;
//     newTree->right = NULL;
//     return newTree;
// }

// int coundNodes(Tree *tree)
// {

//     if (tree == NULL)
//     {
//         return 0;
//     }
//     return 1 + coundNodes(tree->left) + coundNodes(tree->middle) + coundNodes(tree->right);
// }

// bool completeTree(Tree *t, int start, int NN)
// {

//     if (t == NULL)
//     {
//         return 1;
//     }
//     if (start >= NN)
//     {
//         return 0;
//     }

//     return completeTree(t->left, 3 * start + 1, NN) && completeTree(t->middle, 3 * start + 2, NN) && completeTree(t->right, 3 * start + 3, NN);
// }

// int getLevel(Tree *t)
// {
//     if (t == NULL)
//     {
//         return 0;
//     }
//     int maxLevog = getLevel(t->left);
//     int maxMiddle = getLevel(t->middle);
//     int maxRigth = getLevel(t->right);
//     int maxLM = max(maxLevog, maxMiddle);
//     return 1 + max(maxLM, maxRigth);
// }

// bool perfectTree(Tree *t)
// {

//     printf("%d,%d,%d\n", getLevel(t->left), getLevel(t->right), getLevel(t->middle));

//     int left = getLevel(t->left);
//     int right = getLevel(t->right);
//     int middle = getLevel(t->middle);
//     if (left == right && left == middle)
//     {
//         return true;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     Tree *head = createVertex(5);

//     head->left = createVertex(7);
//     head->middle = createVertex(19);
//     head->right = createVertex(8);

//     head->left->left = createVertex(17);
//     head->left->middle = createVertex(12);
//     head->left->right = createVertex(45);

//     //
//     head->right->left = createVertex(117);
//     head->right->middle = createVertex(122);
//     head->right->right = createVertex(451);
//     //
//     head->middle->left = createVertex(217);
//     head->middle->middle = createVertex(134);
//     head->middle->right = createVertex(452);

//     // head->middle->right->left = createVertex(88);

//     cout << "NN NUMBER " << coundNodes(head) << endl;

//     int isPerfect = perfectTree(head);
//     cout << "Perfect=" << isPerfect << endl;

//     cout << "LEVEl=" << getLevel(head);
//     // inorder(head);
//     cout
//         << "\nCOMPLETNO="
//         << completeTree(head, 0, coundNodes(head));

//     return 0;
// }

// heap je struktura podataka kojoj je element koji je roditelj veci ili manji od svoje deci , tako se lako pristupa min i max

// void maxHeapify(int arr[], int v, int n)
// {
//     int max = v, l = v * 2 + 1, r = v * 2 + 2;

//     if (l < n && arr[max] < arr[l])
//     {
//         max = l;
//     }

//     if (r < n && arr[max] < arr[r])
//     {
//         max = r;
//     }

//     if (v != max)
//     {
//         int t = arr[v];
//         arr[v] = arr[max];
//         arr[max] = t;
//         maxHeapify(arr, max, n);
//     }
// }

// void maxHeap(int arr[], int start, int n)
// {

//     for (int i = n / 2; i >= start; i--)
//     {
//         maxHeapify(arr, i, n);
//     }
// }

// void heapSort(int arr[], int n)
// {

//     int t;
//     for (int i = n - 1; i > 0; i--)
//     {
//         t = arr[0];
//         arr[0] = arr[i];
//         arr[i] = t;
//         maxHeapify(arr, 0, i);
//     }
// }
// void insert(int *&arr, int *n, int x)
// {
//     int *temp = new int[++*n];
//     for (int i = 0; i < *n - 1; i++)
//     {
//         temp[i] = arr[i];
//     }
//     temp[*n - 1] = x;
//     delete[] arr;
//     arr = temp;
//     maxHeap(arr, 0, *n);
// }

// void deleteMax(int *&arr, int *n)
// {

//     int x = arr[*n - 1];
//     arr[0] = x;
//     *n = *n - 1;

//     int *temp = new int[*n];
//     for (int i = 0; i < *n; i++)
//     {
//         temp[i] = arr[i];
//     }

//     delete[] arr;
//     arr = temp;

//     maxHeap(arr, 0, *n);
// }

// int main()
// {

//     int n = 5;
//     int *arr = new int[n]{1, 2, 5, 3, 2};

//     cout << "Ispis obicni \n";

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     maxHeap(arr, 0, n);
//     insert(arr, &n, 9);
//     deleteMax(arr, &n);

//     // heapSort(arr, n);
//     cout << "\nIspis after \n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// void minHeapify(int *arr, int k, int n)
// {
//     int min = k;
//     int l = k * 2 + 1, r = k * 2 + 2;

//     if (l < n && arr[l] < arr[min])
//     {
//         min = l;
//     }
//     if (r < n && arr[r] < arr[min])
//     {
//         min = r;
//     }

//     if (k != min)
//     {
//         int t = arr[k];
//         arr[k] = arr[min];
//         arr[min] = t;
//         minHeapify(arr, min, n);
//     }
// }
// void minHeap(int *arr, int n)
// {

//     for (int i = n / 2; i >= 0; i--)
//     {
//         minHeapify(arr, i, n);
//     }
// }

// void heapSort(int *arr, int n)
// {

//     for (int i = n - 1; i >= 0; i--)
//     {
//         int t = arr[i];
//         arr[i] = arr[0];
//         arr[0] = t;
//         minHeap(arr, i);
//     }
// }

// perfomanse O(n*log n)
//  int main()
//  {

//     int n = 5;
//     int arr[5] = {9, 2, 5, 4, 3};

//     minHeap(arr, n);

//     heapSort(arr, n);
//     cout << "ISPIS\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// insertion sort

// void insertionSort(int arr[], int n)
// {

//     int key;
//     for (int i = 1; i < n; i++)
//     {
//         key = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }

//         arr[j + 1] = key;
//     }
// }

// void shellSort(int arr[], int n, int gaps[], int gapsSize)
// {
//     for (int i = 0; i < gapsSize; i++)
//     {
//         int gap = gaps[i];

//         for (int j = gap; j < n; j++)
//         {
//             int k = arr[j];
//             int f = j - gap;

//             while (f >= 0 && k > arr[f])
//             {
//                 arr[f + gap] = arr[f];
//                 f -= gap;
//             }
//             arr[f + gap] = k;
//         }
//     }
// }

// // brzina je u najboljem slucaju O(n) u najgorem je O(n^2)
// int main()
// {
//     int arr[] = {3, 4, 5, 7, 10, 50, 20, 1, 2, 7};
//     int n = sizeof(arr) / sizeof(int);

//     int gaps[] = {5, 2, 1};
//     int gapsSize = sizeof(gaps) / sizeof(gaps[0]);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\nAfter\n";
//     shellSort(arr, n, gaps, gapsSize);
//     // insertionSort(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// selection srot
// perfomanse najbolja i najgora O(n^2)

// void selectionSort(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         int min = arr[i];
//         int pos = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] > min)
//             {
//                 min = arr[j];
//                 pos = j;
//             }
//         }
//         arr[pos] = arr[i];
//         arr[i] = min;
//     }
// }

// int main()
// {

//     int arr[] = {2, 5, 2, 1, 4, 7, 8, 1, 3, 5};

//     int leng = sizeof(arr) / sizeof(arr[0]);
//     selectionSort(arr, leng);
//     for (int i = 0; i < leng; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// // quick sort , // perfomanse O(n*logn)
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int partition(int arr[], int down, int up)
// {
//     int pivot = arr[up - 1];
//     int i = up - 1;
//     int j = down - 1;

//     while (i > j)
//     {
//         do
//         {
//             j++;
//         } while (arr[j] < pivot);

//         do
//         {
//             i--;
//         } while (arr[i] > pivot);

//         if (i > j)
//         {
//             swap(&arr[i], &arr[j]);
//         }
//     }

//     swap(&arr[up - 1], &arr[j]);
//     printf("Returned %d\n", j);
//     return j;
// }

// void quickSort(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         int pivotFinished = partition(arr, low, high);
//         quickSort(arr, low, pivotFinished);

//         quickSort(arr, pivotFinished + 1, high);
//     }
// }

// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     int arr[] = {2, 4, 8, 1, 5, 6, 10, 1};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     printArray(arr, size);

//     quickSort(arr, 0, size);

//     printf("Sorted array: ");
//     printArray(arr, size);

//     return 0;
// }

// hesiranje
// int hesiraj(int key)
// {
//     return key % 7;
// }
// int hesirajOpet(int key, int last)
// {
//     return ((last + 2) + (key % 3)) % 7;
// }
// int main()
// {
//     int arr[] = {18, 23, 4, 13, 8};
//     int hesh[7] = {0};

//     for (int i = 0; i < 5; i++)
//     {
//         int index = hesiraj(arr[i]);
//         if (hesh[index] == 0)
//         {
//             hesh[index] = arr[i];
//         }
//         else
//         {

//             index = hesirajOpet(arr[i], index);

//             hesh[index] = arr[i];
//         }
//     }

//     for (int i = 0; i < 7; i++)
//     {
//         cout << hesh[i] << " ";
//     }

//     return 0;
// }

// hesiranje sa ulancanom listom , odvojeno ulancavanje

// struct Node
// {
//     int data;
//     Node *next;
// };

// struct Table
// {
//     Node **lista;
// };

// Table *createTable(int size)
// {
//     Table *newTable = (Table *)malloc(sizeof(Table));
//     newTable->lista = (Node **)malloc(size * sizeof(Node));

//     for (int i = 0; i < size; i++)
//     {
//         newTable->lista[i] = nullptr;
//     }
//     return newTable;
// }
// int hesiraj(int key, int size)
// {
//     return key % size;
// }
// void insertElements(int arr[], Table *tabla, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int newI = hesiraj(arr[i], size);
//         if (tabla->lista[newI] == nullptr)
//         {
//             Node *newNode = (Node *)malloc(sizeof(Node));
//             newNode->data = arr[i];
//             newNode->next = nullptr;

//             tabla->lista[newI] = newNode;
//         }
//         else
//         {
//             Node *newNode = (Node *)malloc(sizeof(Node));
//             newNode->data = arr[i];
//             newNode->next = tabla->lista[i];
//             tabla->lista[i] = newNode;
//         }
//     }
// }
// void ispis(Table *tabla, int size)
// {
//     cout << "Called ispis\n";
//     for (int i = 0; i < size; i++)
//     {
//         Node *temp = tabla->lista[i];

//         while (temp != nullptr)
//         {

//             cout << temp->data << "-";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int arr[5] = {3, 44, 21, 18, 184};

//     Table *tabla = createTable(5);
//     insertElements(arr, tabla, 5);

//     ispis(tabla, 5);
//     return 0;
// }

// hesiranje objedinjeno
// #define TABLE_SIZE 10

// typedef struct
// {
//     int key;
//     int next;
// } Node;

// int hashiraj(int key)
// {
//     return key % TABLE_SIZE;
// }

// int searchInsertCH(Node T[], int K)
// {
//     int i = hashiraj(K);

//     while (T[i].key != K && T[i].next != -1)
//     {
//         i = T[i].next;
//     }

//     if (T[i].key == K)
//     {
//         return i;
//     }

//     int j;
//     if (T[i].key == -1)
//     {
//         j = i;
//     }
//     else
//     {
//         int free = TABLE_SIZE - 1;
//         while (T[free].key != -1)
//         {
//             free--;
//             if (free < 0)
//             {
//                 printf("ERROR: Table is full\n");
//                 return -1;
//             }
//         }
//         j = free;
//         T[i].next = free;
//     }

//     T[j].key = K;
//     T[j].next = -1;
//     return j;
// }

// int main()
// {
//     Node table[TABLE_SIZE];

//     // Initialize the table
//     for (int i = 0; i < TABLE_SIZE; i++)
//     {
//         table[i].key = -1;
//         table[i].next = -1;
//     }

//     // Test the searchInsertCH function
//     int key1 = 42;
//     int key2 = 17;

//     int index1 = searchInsertCH(table, key1);
//     printf("Index of key1 (%d): %d\n", key1, index1);

//     int index2 = searchInsertCH(table, key2);
//     searchInsertCH(table, 44);
//     searchInsertCH(table, 65);
//     searchInsertCH(table, 8);
//     searchInsertCH(table, 9);
//     searchInsertCH(table, 109);
//     printf("Index of key2 (%d): %d\n", key2, index2);

//     // Print the table
//     printf("\nTable:\n");
//     for (int i = 0; i < TABLE_SIZE; i++)
//     {
//         printf("[%d] - Key: %d, Next: %d\n", i, table[i].key, table[i].next);
//     }

//     return 0;
// }

// merge sort

// PIRMOV ALGORITAM primov moj nacin primmst
// #define size 9
// void BFS(int arr[][size])
// {

//     int queue[size], front = -1, rear;
//     int visited[size] = {0};
//     rear = -1;
//     rear++;
//     front++;
//     queue[front] = 0;
//     visited[0] = 1;
//     while (front <= rear)
//     {
//         int start = queue[front++];
//         cout << start << " ";

//         for (int i = 0; i < size; i++)
//         {
//             if (!visited[i] && arr[start][i])
//             {
//                 rear++;
//                 queue[rear] = i;

//                 visited[i] = 1;
//             }
//         }
//     }
// }

// void DFS(int arr[][size])
// {
//     int stack[size], top = -1;
//     int visited[size] = {0};

//     top++;
//     stack[top] = 0;
//     visited[top] = 0;
//     while (top != -1)
//     {

//         int start = stack[top--];
//         cout << start << " ";
//         for (int i = 0; i < size; i++)
//         {
//             if (!visited[i] && arr[start][i])
//             {
//                 visited[i] = 1;
//                 stack[++top] = i;
//             }
//         }
//     }
// }

// int minEdge(int keys[], int visited[])
// {
//     int min = 500;
//     int index;
//     for (int i = 0; i < size; i++)
//     {
//         if (!visited[i] && keys[i] < min)
//         {
//             min = keys[i];
//             index = i;
//         }
//     }
//     cout << "returned=" << index << "Min=" << min << endl;
//     return index;
// }

// void primMST(int arr[][size])
// {
//     int parents[size];
//     int edges[size];

//     for (int i = 0; i < size; i++)
//     {
//         int index;
//         int min = 500;

//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i][j] && arr[i][j] < min)
//             {
//                 min = arr[i][j];
//                 index = j;
//             }
//         }
//         edges[i] = min;
//         parents[i] = index;
//     }

//     cout << "ISPIS\n";
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d-%d costs %d\n", i, parents[i], edges[i]);
//     }
// }
// int main()
// {

//     int arr[size][size] = {{0, 3, 0, 6, 1, 0, 0, 0, 0},
//                            {1, 0, 12, 0, 11, 0, 0, 0, 0},
//                            {0, 21, 0, 0, 0, 1, 0, 0, 0},
//                            {1, 0, 0, 0, 0, 0, 1, 0, 0},
//                            {1, 10, 0, 0, 0, 0, 1, 0, 0},
//                            {0, 0, 21, 0, 0, 0, 0, 0, 0},
//                            {0, 0, 0, 13, 1, 0, 0, 1, 0},
//                            {0, 0, 0, 0, 0, 0, 31, 0, 1},
//                            {0, 0, 0, 0, 0, 0, 0, 2, 0}};

//     // BFS(arr);
//     // DFS(arr);
//     primMST(arr);
//     return 0;
// }

// void insert(int table[], int size, int x)
// {
//     int index = x % size;

//     if (table[index] == 0)
//     {
//         table[index] = x;
//     }
//     else
//     {
//         int i = 1;
//         while (table[index] == 0 && i != size)
//         {

//             index = (x + i) % size;
//             i++;
//         }
//         table[index] = x;
//     }
// }

// int main()
// {
//     int indeksi[8] = {23, 17, 16, 8, 3, 5, 11, 31};
//     int table[8];

//     for (int i = 0; i < 8; i++)
//     {
//         insert(table, 8, indeksi[i]);
//     }

//     for (int j = 0; j < 8; j++)
//     {
//         printf("%d na indeksu %d\n", indeksi[j], j);
//     }
//     return 0;
// }

// objedinjeno ulancavanje

// typedef struct Member
// {
//     int key;
//     int next;
// } Member;

// typedef struct Tabela
// {
//     int length;
//     Member *members;
// } Tabela;

// int SEARCH_INSERT_CH(Tabela *T, int K)
// {
//     int i = K % T->length;

//     while (T->members[i].key != K && T->members[i].next != -1)
//     {
//         i = T->members[i].next;
//     }

//     if (T->members[i].key == K)
//     {
//         return i;
//     }

//     int j;
//     if (T->members[i].key == 0)
//     {
//         j = i;
//     }
//     else
//     {
//         int freeIndex = T->length - 1;
//         while (T->members[freeIndex].key != 0)
//         {
//             freeIndex--;
//             if (freeIndex < 0)
//             {
//                 printf("ERROR: Tabela puna.\n");
//                 exit(1);
//             }
//         }
//         j = freeIndex;
//         T->members[i].next = freeIndex;
//     }

//     T->members[j].key = K;
//     return j;
// }

// int main()
// {
//     Tabela T;
//     int length = 9;
//     T.length = length;
//     T.members = (Member *)malloc(length * sizeof(Member));
//     for (int i = 0; i < length; i++)
//     {
//         T.members[i].key = 0;
//         T.members[i].next = -1;
//     }

//     SEARCH_INSERT_CH(&T, 17);
//     SEARCH_INSERT_CH(&T, 5);
//     SEARCH_INSERT_CH(&T, 12);
//     SEARCH_INSERT_CH(&T, 33);
//     SEARCH_INSERT_CH(&T, 24);
//     SEARCH_INSERT_CH(&T, 2);
//     SEARCH_INSERT_CH(&T, 45);
//     SEARCH_INSERT_CH(&T, 11);
//     SEARCH_INSERT_CH(&T, 56);

//     for (int i = 0; i < length; i++)
//     {
//         printf("%d| %d -> %d\n", i, T.members[i].key, T.members[i].next);
//     }

//     free(T.members);

//     return 0;
// }
// #define size 11

// typedef struct Queue
// {
//     int arr[size];
//     int front = -1, rear = -1;
// } Queue;

// void enqueue(Queue *q, int e)
// {
//     if ((q->rear + 1) % size == q->front)
//     {
//         cout << "Red je pun\n";
//     }
//     else
//     {
//         if (q->front == -1)
//         {
//             q->front = 0;
//             q->rear = 0;
//             q->arr[q->front] = e;
//         }
//         else
//         {
//             q->rear = (q->rear + 1) % size;
//             q->arr[q->rear] = e;
//         }
//     }
// }

// int main()
// {
//     Queue q1;
//     Queue q2;

//     int i = 2018;
//     while (q1.rear < size - 1)
//     {
//         if (i % 2018 == 0)
//         {
//             enqueue(&q1, i);
//         }
//         i += 2018;
//     }

//     cout << "ISPIS\n";
//     for (int i = q1.front; i <= q1.rear; i++)
//     {
//         if (q1.arr[i] % 6 == 0)
//         {
//             enqueue(&q2, q1.arr[i]);
//         }
//     }
//     for (int i = q2.front; i <= q2.rear; i++)
//     {
//         cout << q2.arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
// };

// // Kreiranje novog čvora
// Node *createNode(int data)
// {
//     Node *newNode = new Node();
//     if (!newNode)
//     {
//         cout << "Greška pri alokaciji memorije!" << endl;
//         return NULL;
//     }
//     newNode->data = data;
//     newNode->left = newNode->right = NULL;
//     return newNode;
// }

// int isComplete(Node *t, int pos, int n)
// {
//     if (t == nullptr)
//     {
//         return true;
//     }
//     if (n < pos)
//     {
//         return false;
//     }
//     return isComplete(t->left, pos * 2 + 1, n) && isComplete(t->right, pos * 2 + 2, n);
// }
// // Funkcija za izračunavanje zbira elemenata u levom podstablu
// int sumLeftSubtree(Node *root)
// {
//     int sum = 0;
//     if (root && root->left)
//     {
//         sum += root->left->data + sumLeftSubtree(root->left) + sumLeftSubtree(root->right);
//     }

//     return sum;
// }

// // kruskal and prim
// #define size 4
// void kruskalMST(int arr[][size])
// {
//     int visited[size];
//     int parents[size];
//     int edges[size];

//     for (int i = 0; i < size; i++)
//     {
//         int min = 100;
//         int index;
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i][j] && arr[i][j] < min)
//             {
//                 min = arr[i][j];
//                 index = j;
//             }
//         }
//         parents[i] = index;
//         edges[i] = min;
//     }
// }

// int main()
// {

//     int arr[size][size] = {
//         {0, 3, 0, 1},
//         {3, 0, 5, 0},
//         {0, 5, 0, 2},
//         {1, 0, 2, 0},
//     };
//     string ime = "hamza";
//     // Kreiranje stabla
//     Node *root = createNode(5);
//     root->left = createNode(3);
//     root->right = createNode(8);
//     root->left->left = createNode(2);
//     root->left->right = createNode(4);
//     root->right->left = createNode(7);
//     root->right->right = createNode(9);
//     root->right->right->right = createNode(19);
//     //
//     // Izračunavanje zbira elemenata u levom podstablu

//     int sum = sumLeftSubtree(root);
//     cout << "Zbir elemenata u levom podstablu: " << sum << endl;

//     cout << "Is complete :" << isComplete(root, 0, 7);

//     return 0;
// }

// // Napisati program u programskom jeziku
// C za rad sa hash tabelom implementiranom preko lančane liste dužine 11.
//  U glavnom programu demonstirati upisivanje brojeva 12, 1, 7, 8, 4, 18, 9, 3.

// #define size 11
// typedef struct Node
// {
//     int data;
//     struct Node *next;

// } Node;

// Node *createNode(int data)
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// void initilze(Node *has[size])
// {
//     for (int i = 0; i < size; i++)
//     {
//         has[i] = NULL;
//     }
// }
// void insert(Node *hash[size], int data)
// {
//     int indeks = data % size;

//     if (hash[indeks] == NULL)
//     {
//         hash[indeks] = createNode(data);
//     }
//     else
//     {
//         Node *temp = hash[indeks];
//         while (temp->next != NULL)
//         {

//             temp = temp->next;
//         }
//         temp->next = createNode(data);
//     }
// }
// void display(Node *hash[size])
// {
//     cout << "ISPIs\n";
//     for (int i = 0; i < size; i++)
//     {
//         cout << "ineds " << i << " ";
//         Node *temp = hash[i];
//         while (temp != NULL)
//         {
//             cout << temp->data << "-";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     Node *hashTabla[size];
//     initilze(hashTabla);
//     insert(hashTabla, 12);
//     insert(hashTabla, 1);
//     insert(hashTabla, 7);
//     insert(hashTabla, 8);
//     insert(hashTabla, 4);
//     insert(hashTabla, 18);
//     insert(hashTabla, 9);
//     insert(hashTabla, 3);
//     insert(hashTabla, 11);

//     display(hashTabla);
// }

// void Node_to_root(int arr[], int k, int size)
// {

//     int pos = k;
//     while (pos != 0)
//     {
//         pos = (pos - 1) / 2;
//         if (pos >= 0)
//         {
//             cout << arr[pos] << endl;
//         }
//     }
// }

// void childNode(int arr[], int k, int n)
// {

//     cout << arr[k * 2 + 1] << " " << arr[k * 2 + 2];
// }
// struct Tree
// {
//     int data;
//     Tree *left, *right;
// };

// Tree *createT(int data)
// {
//     Tree *t = (Tree *)malloc(sizeof(Tree));
//     t->data = data;
//     t->left = NULL;
//     t->right = NULL;
//     return t;
// }

// int zbir(Tree *t, int n)
// {
//     if (t == NULL)
//     {
//         return 0;
//     }

//     if (n == 0)
//     {
//         return t->data;
//     }

//     return zbir(t->left, n - 1) + zbir(t->right, n - 1);
// }
// int main()
// {
//     Tree *t;
//     t = createT(5);
//     t->left = createT(32);
//     t->right = createT(31);
//     t->left->left = createT(12);
//     t->left->right=createT(42);

//     int n = (2 * 2 * 2 - 1);

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // Node_to_root(arr, 4, 7);
//     // childNode(arr, 2, 7);

//     return 0;
// }

// struct Tabla
// {
//     int prostor;
//     int *keys;
//     int *next;
// };
// void init(Tabla *t, int n)
// {

//     t->prostor = n;

//     t->keys = (int *)malloc(n * sizeof(int));
//     t->next = (int *)malloc(n * sizeof(int));

//     for (int i = 0; i < n; i++)
//     {
//         cout << "here";

//         t->keys[i] = -1;
//         t->next[i] = -1;
//     }
// }
// void searchInsert(Tabla *t, int data)
// {
//     int indeks = data % t->prostor;
//     if (t->keys[indeks] == -1)
//     {
//         t->keys[indeks] = data;
//     }
//     else
//     {
//         int j = t->prostor - 1;
//         while (t->keys[j] != -1)
//         {

//             j--;
//         }

//         if (t->next[indeks] == -1)
//         {
//             t->next[indeks] = j;
//         }
//         else
//         {

//             int i = t->prostor - 1;
//             while (t->next[i] != -1)
//             {
//                 i--;
//             }
//             t->next[i] = j;
//         }
//         t->keys[j] = data;
//     }
// }

// void display(Tabla *t)
// {
//     cout << "ISPIS\n";
//     for (int i = 0; i < t->prostor; i++)
//     {
//         cout << t->keys[i] << ":" << t->next[i] << endl;
//     }
// }

// int main()
// {
//     Tabla *t;

//     init(t, 7);

//     searchInsert(t, 5);
//     searchInsert(t, 3);
//     searchInsert(t, 21);
//     searchInsert(t, 7);
//     searchInsert(t, 23);
//     searchInsert(t, 65);

//     display(t);

//     return 0;
// }

// FLOYD-Warshall
// #define size 7

// void floydWarshall(int w[][size])
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             for (int k = 0; k < size; k++)
//             {
//                 if (w[i][j] > w[j][k] + w[j][i])
//                 {
//                     w[i][j] = w[j][k] + w[j][i];
//                 }
//             }
//         }
//     }
// }

// void insertionSort(int arr[])
// {
//     for (int i = 1; i < size; i++)
//     {
//         int k = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > k)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = k;
//     }

//     cout << "ISPIS\n";
//     for (int j = 0; j < size; j++)
//     {
//         cout << arr[j] << " ";
//     }
// }

// void shellSort(int arr[], int h[])
// {
//     for (int i = 0; i < 3; i++)
//     {
//         int dist = h[i];
//         for (int d = dist; d < size; d++)
//         {
//             int k = arr[d];
//             int j = d - dist;
//             while (j >= 0 && arr[j] > k)
//             {
//                 arr[j + dist] = arr[j];
//                 j -= dist;
//             }
//             arr[j + dist] = k;
//         }
//     }
//     cout << "ISPIS\n";
//     for (int j = 0; j < size; j++)
//     {
//         cout << arr[j] << " ";
//     }
// }

// void selectionSort(int arr[])
// {
//     for (int i = 0; i < size; i++)
//     {

//         int min = arr[i];
//         int pos = i;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[j] < min)
//             {
//                 min = arr[j];
//                 pos = j;
//             }
//         }
//         arr[pos] = arr[i];
//         arr[i] = min;
//     }

//     cout << "ISPIS\n";
//     for (int j = 0; j < size; j++)
//     {
//         cout << arr[j] << " ";
//     }
// }
// int main()
// {
// int arr[size] = {8, 3, 4, 6, 5, 2, 7};

// int h[3] = {4, 2, 1};
// insertionSort(arr);

// shellSort(arr, h);
// selectionSort(arr);
// int w[size][size]{
//     {0, 99, -2, 9},
//     {4, 0, 3, 99},
//     {99, 99, 0, 2},
//     {99, -1, 99, 99}};

// cout << "ISPIS\n";

// floydWarshall(w);
// for (int i = 0; i < size; i++)
// {
//     for (int j = 0; j < size; j++)
//     {
//         cout << w[i][j] << " ";
//     }
//     cout << endl;
// }

//     return 0;
// }

// Dijakstra Algoritam , optimizovati i zavrsiti

// #define size 9

// typedef struct cvor
// {
//     int data;
//     cvor *next;
// };

// typedef struct puteviDoCvora
// {
//     int cene[size];
//     cvor *niz[size];
// };

// puteviDoCvora *Dijakstra(int arr[][size], int start)
// {
//     puteviDoCvora *ways = (puteviDoCvora *)malloc(sizeof(puteviDoCvora));

//     int visited[size] = {0};
//     int stack[size];
//     stack[0] = start;
//     int counter = 1;
//     visited[start] = 1;

//     for (int f = 0; f < size; f++)
//     {
//         ways->niz[f] = nullptr;
//         ways->cene[f] = 99;
//     }
//     while (counter < size)
//     {
//         for (int l = 0; l < size; l++)
//         {
//             if (!visited[l] && arr[start][l] && arr[start][l] + (ways->cene[start] % 99) < (ways->cene[l]) && l != start)
//             {

//                 cvor *noviCvor = (cvor *)malloc(sizeof(cvor));
//                 noviCvor->data = start;
//                 noviCvor->next = ways->niz[l];
//                 ways->niz[l] = noviCvor;

//                 ways->cene[l] = arr[start][l] + ways->cene[start];
//                 ways->cene[l] %= 99;
//             }
//         }
//         int minVal = 99;
//         int minI;

//         for (int j = 0; j < size; j++)
//         {

//             if (!visited[j] && ways->cene[j] && ways->cene[j] < minVal)
//             {

//                 minVal = ways->cene[j];
//                 minI = j;
//             }
//         }

//         visited[minI] = 1;
//         start = minI;
//         stack[counter] = minI;
//         counter++;
//     }

//     // cout << "Stack\n";
//     // for (int j = 0; j < size; j++)
//     // {
//     //     cout << stack[j] << " ";
//     // }
//     // cout << "\n Cene\n";
//     // for (int j = 0; j < size; j++)
//     // {
//     //     cout << ways->cene[j] << " ";
//     // }

//     return ways;
// }

// void printWays(puteviDoCvora *ways, int x = 0)
// {
//     if (ways->niz[x])
//     {
//         cout << ways->niz[x]->data << "-";
//         printWays(ways, ways->niz[x]->data);
//     }
// }

// int main()
// {
//     int arr[size][size] = {{0, 0, 5, 4, 0, 0, 0, 0, 0},
//                            {2, 0, 0, 0, 3, 0, 0, 0, 0},
//                            {0, 0, 0, 0, 0, 5, 4, 0, 0},
//                            {0, 0, 2, 0, 0, 0, 5, 0, 0},
//                            {0, 0, 0, 0, 0, 5, 0, 0, 5},
//                            {0, 6, 0, 0, 0, 0, 0, 2, 3},
//                            {0, 0, 0, 0, 0, 0, 0, 0, 4},
//                            {0, 0, 0, 0, 5, 0, 0, 0, 0},
//                            {0, 0, 0, 0, 0, 0, 0, 4, 0}

//     };
//     puteviDoCvora *ways = Dijakstra(arr, 5);
//     cout << "PUTEVI DO CVORA\n";
//     for (int i = 0; i < size; i++)
//     {
//         cout << endl;
//         cout << i << "=";
//         printWays(ways, i);
//         cout << "$" << ways->cene[i];
//     }
//     return 0;
// }

// Next smaller number with the same digits

// #include <iostream>
// #include <math.h>

// using namespace std;
// long long nextSmallertNum(unsigned long long n)
// {
//     int arr[10];
//     int count = 0;
//     while (n >= 1)
//     {

//         arr[count] = n % 10;
//         n = n / 10;
//         count++;
//     }

//     int index = 0;
//     int times = 0;

//     for (int i = 0; i < count - 1; i++)
//     {
//         if (arr[i] < arr[i + 1])
//         {

//             if (arr[i + 1] > arr[i - 1] && arr[i - 1])
//             {
//                 times++;
//                 int temp = arr[i - 1];
//                 arr[i - 1] = arr[i + 1];
//                 arr[i + 1] = temp;
//                 index = i;
//             }
//             else
//             {
//                 times++;
//                 index = i;
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }

//             break;
//         }
//     }
//     for (int j = 0; j < index + 1; j++)
//     {
//         for (int k = 0; k < index + 1; k++)
//         {
//             if (arr[j] < arr[k])
//             {
//                 times++;
//                 int temp = arr[j];
//                 arr[j] = arr[k];
//                 arr[k] = temp;
//             }
//         }
//     }
//     cout << "times=" << times << endl;

//     if (arr[count - 1] && times)
//     {
//         int num = 0;
//         for (int i = count - 1; i >= 0; i--)
//         {

//             num = num * 10 + arr[i];
//         }
//         return num;
//     }
//     else
//     {
//         return -1;
//     }
// }

// int main()
// {
//     cout << nextSmallertNum(2013);

//     return 0;
// }
