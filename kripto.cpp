#include<iostream>

using namespace std;

string sandi;
int pilih;

void caesar(){

}
void vigenere(){

}

int main(){

    char loop;

	while(loop=='y'||loop=='Y'){
	system("cls");
	

	cout<<"\t\t\t"<<"+---------------------------------------------+"<<endl;
	cout<<"\t\t\t"<<" ||    ~~~~~Project Akhir Algo Lanjut~~~~~  ||"<<endl;
	cout<<"\t\t\t"<<"+---------------------------------------------+"<<endl;
    cout<<"\t\t\t ||    Muhammad Farhan   / 123200016        ||"<<endl;
	cout<<"\t\t\t ||    Abdillah Mustamin / 123200017        ||"<<endl;
    cout<<"\t\t\t ||    Indrawani         / 123200018        ||"<<endl;
	cout<<"\t\t\t"<<"+---------------------------------------------+"<<endl;
	cout<<endl<<endl<<endl;
	
	cout<<"\t\t\t"<<"==============================================="<<endl;
	cout<<"\t\t\t"<<"             ~~~~~~~MENU UTAMA~~~~~~~          "<<endl;
	cout<<"\t\t\t"<<"==============================================="<<endl;
	cout<<"\t\t\t"<<"\t1. Cesar Chiper "<<endl;
	cout<<"\t\t\t"<<"\t2. Vigenere Chiper "<<endl;
	cout<<"\t\t\t"<<"\t3.  "<<endl;
	cout<<"\t\t\t"<<"\t4. Gabungan "<<endl;
	cout<<"\t\t\t"<<"==============================================="<<endl<<endl;
	cout<<"\t\t"<<"Masukan Pilihan : ";cin>>pilih;
	
	if(pilih==1){
        caesar();
	}else if(pilih==2){
		vigenere();
	}else if(pilih==3){
		
	}
    else if(pilih==4){

    }
	else{
		cout<<endl<<"\t\t ~Pilin Menu 1-4~ "<<endl<<endl;
	}
	cout<<"\t\tKembali Kemenu Utama(y/t) : ";cin>>loop;
	}
}
    
     


