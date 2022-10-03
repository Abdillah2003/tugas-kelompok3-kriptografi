#include<iostream>
#include<string.h>

using namespace std;

int pilih;

string caesar(string pesan){

	int sandi, i;
    string text, enskrip;
    text = pesan;
    
    cout<<"\t Masukan Kunci enskrip  : ";
    cin>>sandi;

    for(i=0; i<text.size(); i++){
        enskrip+=(text[i]-'A'+sandi) %26+'A';
    }
    return enskrip;

}

string vigenere(string pesan){
	string text , enskrip, key ;
	int a =0;
	text = pesan;
	cout << "\t Masukan kata kunci enkripsi : "; cin >> key; cin.ignore();
	
	
	for(int i = 0 ; i < text.size() ; i++){
		
		char x = (text[i] + key[a] ) % 26;
		
		x += 'A';
		
		enskrip.push_back(x);
		if(a == key.size() - 1){
			a = 0;
		 }else{
		 	a++;
		 }
	}
	return  enskrip;
	
}

int main(){
 	char loop = 'y';
 	string hasil,pesan;
 	
 	while(loop== 'y' || loop== 'Y'){

	
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
	cout<<"\t\t\t"<<"\t3. Rail Fense Chiper" <<endl;
	cout<<"\t\t\t"<<"\t4. Super Enskripsi "<<endl;
	cout<<"\t\t\t"<<"==============================================="<<endl<<endl;
	cout<<"\t\t"<<"Masukan Pilihan : ";cin>>pilih;
	cin.ignore();
	cout<<"\t Masukan Pesan yang akan di enskrip : ";getline(cin,pesan);
	
	if(pilih==1){
        hasil = caesar(pesan);
        cout<<"\t Hasi Enskrip Caesar adalah :  "<< hasil ;
	}else if(pilih==2){
		hasil = vigenere(pesan);
		cout << "\t Hasil Enskripsi Vigenere : " << hasil;
	}else if(pilih==3){
		
	}
    else if(pilih==4){

    }
	else{
		cout<<endl<<"\t\t ~Pilin Menu 1-4~ "<<endl<<endl;
	}
	cout<<"\n \t Kembali ke menu utama (yes/no) : " ; cin>>loop; 
	}
}
    
     


