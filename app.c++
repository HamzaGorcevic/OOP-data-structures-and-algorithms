
// #include <iostream>
// #include <cmath>
// #include <string.h>

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
// // #include <string.h>
// // /* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
// #include <string>
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
// #include <string.h>
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
// #include <string>
// #include <string.h>

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

// #include <string.h>
// using namespace std;
// class Ponudjeni
// {
// 	string odgovor;
// 	bool tacan;
// 	float procenat;

// public:
// 	Ponudjeni()
// 	{
// 		odgovor = "";
// 	}
// 	Ponudjeni(string Odgovor, bool Tacan, float Procenat = -100)
// 	{
// 		odgovor = Odgovor;
// 		tacan = Tacan;
// 		procenat = Procenat;
// 	}
// 	string getOdgovor()
// 	{
// 		return odgovor;
// 	}
// 	bool getTacan()
// 	{
// 		return tacan;
// 	}
// 	float getProcenat()
// 	{
// 		return procenat;
// 	}
// 	void setProcenat(int pro)
// 	{
// 		if (pro < -100 || pro > 100)
// 		{
// 			printf("Uneli ste nevazeci procenat \n");
// 			procenat = 0;
// 		}
// 		else
// 		{
// 			procenat = pro;
// 		}
// 	}
// 	void setTacan(bool tac)
// 	{
// 		tacan = tac;
// 	}

// 	friend ostream &operator<<(ostream &COUT, Ponudjeni &pon)
// 	{
// 		COUT << pon.odgovor << ":" << pon.procenat << "%";
// 		return COUT;
// 	}
// };
// // };
// // // ) Klasa Pitanje sadrži zadate podatke koji su zaštićeni: tekst, broj poena koji nosi,
// // broj ponuđenih odgovora (podrazumevano 5), kao i ponuđene odgovore(dinamičko alocirani niz odgovora).
// //  Stvara se bez ponuđenih odgovora, nakon čega se oni dodaju pojedinačno (pitanje+=odgovor). Prilikom dodavanja
// //   ponuđenog odgovora računaju se jednaki procentualni udeli svih tačnih odgovora dodatih u dato pitanje(u zbiru daju 100%),
// //    dok svaki netačan odgovor nosi -100%. Pomoću polimorfne metode može da se odgovori na pitanje, tada se zadaje niz koji sadrži
// //     redne brojeve ponuđenih odgovora koje ispitanik smatra tačnim i dužina tog niza(odgovori(int niz[],int br);).
// // 	 Tada se računa koliko je procentualno tačno odgovoreno na to pitanje. Na glavnom izlazu se ispisuje (out<<pitanje)
// // 	 tako što se u prvom redu ispiše tekst: poeni(maksimalni koje pitanje nosi), a potom se u zasebnim redovima ispišu sadržani ponuđeni odgovori.

// class Pitanje
// {
// 	string tekst;
// 	int poeni;
// 	int brojPonudjenih;
// 	int counter;
// 	int ukupanProcenat;
// 	int osvojeniPoeni;
// 	Ponudjeni *ponudjeni;

// public:
// 	Pitanje() {}
// 	Pitanje(string Tekst, int poeni, int brojPonudjenih = 5)
// 	{
// 		tekst = Tekst;
// 		this->poeni = poeni;
// 		this->brojPonudjenih = brojPonudjenih;
// 		counter = 0;
// 		ponudjeni = new Ponudjeni[brojPonudjenih];
// 		ukupanProcenat = 0;
// 	}

// 	friend Pitanje &operator+=(Pitanje &pit, Ponudjeni &pon)
// 	{
// 		if (pit.counter < pit.brojPonudjenih)
// 		{
// 			pit.ponudjeni[pit.counter] = pon;
// 			pit.counter++;
// 		}
// 		else
// 		{
// 			cout << "Presli ste dozvoljeno" << endl;
// 		}
// 	}

// 	void ispis()
// 	{
// 		cout << tekst << " (" << poeni << ")" << endl;
// 		for (int i = 0; i < counter; i++)
// 		{
// 			cout << i << " " << ponudjeni[i].getOdgovor() << endl;
// 		}
// 	}
// 	friend ostream &operator<<(ostream &COUT, Pitanje &pit)
// 	{
// 		pit.ispis();
// 	}

// 	void odgovori(int *niz, int br)
// 	{
// 		for (int j = 0; j < br; j++)
// 		{
// 			cout << j << endl;
// 			if (ponudjeni[niz[j]].getTacan())
// 			{

// 				ukupanProcenat += ponudjeni[niz[j]].getProcenat();
// 				osvojeniPoeni = poeni / (100 / ukupanProcenat);
// 			}
// 			else
// 			{
// 				ukupanProcenat = -100;
// 				osvojeniPoeni = 0;
// 			}
// 		}
// 	}
// 	int getPoene()
// 	{
// 		return osvojeniPoeni;
// 	}

// 	~Pitanje()
// 	{
// 		delete[] ponudjeni;
// 	}
// };

// class Student : Pitanje
// {
// 	int indeks;
// 	string ime;
// 	double studentPoeni;

// public:
// 	Student(int indeks, string ime)
// 	{
// 		this->indeks = indeks;
// 		this->ime = ime;
// 		studentPoeni = 0;
// 	}
// 	void Osvoio()
// 	{
// 		studentPoeni += getPoene();
// 	}

// 	friend ostream &operator<<(ostream &COUT, Student &stu)
// 	{
// 		COUT << stu.ime << "," << stu.indeks << "," << stu.studentPoeni << endl;
// 		stu.ispis();
// 	}
// };

// main()
// {
// 	Ponudjeni pon1("HAmza", true, 50.0);
// 	Ponudjeni pon2("HAris", true, 50.0);
// 	Ponudjeni pon3("Semra", false);

// 	Pitanje pit("ko je babo", 10);
// 	pit += pon1;
// 	pit += pon2;
// 	pit += pon3;
// 	cout << pit;
// 	int *izabrani;
// 	int x;
// 	int i = 0;
// 	Student s1(23, "hamdija");

// 	while (x != -1)
// 	{
// 		cout << "Izaberite " << i << ". odgovor" << endl;
// 		cin >> x;
// 		izabrani[i] = x;
// 		i++;
// 	}

// 	s1.odgovori(izabrani, i - 1);

// 	cout << s1 << endl;

// 	return 0;
// }

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
// #include <string.h>

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
// #include <string.h>

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
// #include <string.h>
// #include <cmath>
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
// #include <string.h>
// #include <cmath>
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
// #include <string.h>
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
// #include <string.h>
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
// #include <string.h>
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
// #include <string.h>
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
// #include <string.h>
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
// #include <string.h>
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
// #include <string.h>
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
// #include <string.h>
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