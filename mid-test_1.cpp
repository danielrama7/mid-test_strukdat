/*
Nama Program        : Soal 1
Nama                : Daniel Rama H.
NPM                 : 140810180045
Tanggal buat        : 23 April 2019
Deskripsi Program   : Turnamen sepak bola
*/
#include<iostream>
using namespace std;
struct Elemtlist{
	int noDaftar;
	char Tim[10];
	char asal[10];
	int gol;

	Elemtlist* next;
};
typedef Elemtlist* pointer;
typedef pointer List;


void createList(List& First){
	First=NULL;
}
void createElmt(pointer& pBaru){
	pBaru = new Elemtlist;
	cout<<"Nomor daftar  : ";
	cin>>pBaru->noDaftar;
	cout<<"Nama Tim : ";
	cin>>pBaru->Tim;
	cout<<"Asal daerah : ";
	cin>>pBaru->asal;
	cout<<endl;
	pBaru->next = NULL;
}
void insertLast(List& First, pointer pBaru){
    pointer last;
    if(First==NULL){
        First=pBaru;
    }
    else{last=First;
    while(last->next!=NULL){
            last=last->next;}
    last->next=pBaru;
}
}
void gol(pointer& pBaru){
pBaru = new Elemtlist;
	cout<<"Masukkan nomor daftar  : ";
	cin>>pBaru->noDaftar;
	cout<<"Masukkan Nama team : ";
	cin>>pBaru->Tim;
	cout<<"Masukkan asal daerah : ";
	cin>>pBaru->asal;
	cout<<"Masukkan jumlah gol : ";
	cin>>pBaru->gol;
	pBaru->next = NULL;
	}

void traversal(List First){

	pointer pBantu;
	pBantu=First;
	cout<<"no Daftar\tTim\tAsal daerah"<<endl;
	while(pBantu != NULL){
	cout<<pBantu->noDaftar<<"\t\t"<<pBantu->Tim<<"\t"<<pBantu->asal<<endl;;
	pBantu = pBantu->next;
	}
	}

void traversal2(List First){
pointer pBantu;
	pBantu=First;
	cout<<"no Daftar\tTim\tAsal daerah\tGol"<<endl;
	while(pBantu != NULL){
	cout<<pBantu->noDaftar<<"\t\t"<<pBantu->Tim<<"\t"<<pBantu->asal<<"\t"<<gol<<endl;;
	pBantu = pBantu->next;
	}
	}

main(){
    pointer pb;
	List q;
	int x;
	createList(q);
	cout<<"Masukan banyak pendaftar :"; cin>>x;
	for(int i=0;i<x;i++){
		createElmt(pb);
		insertLast(q,pb);
	}
	cout<<endl<<endl;
	traversal(q);
	cout<<endl;
    cout<<"Data beserta gol"<<endl<<endl;
	gol(q);
	traversal2(q);
}
