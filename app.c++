
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

#include <iostream>
using namespace std;

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

int main()
{
	int knjiga = 1000;

	int stranica = 256;

	for (int i = 0; i < 1000; i++)
	{
		if (i == stranica)
		{
			break;
		}
		else if (i < (stranica - i))
		{
			i = stranica;
		}
	}
}