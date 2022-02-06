#include <iostream>
#include <string>

using namespace std;

//type data
int main (){
	string nama;
    string npm;
    string universitas;
    string fakultas;
    string jurusan;
   
    //perintah memasukan input
	cout<<"Masukan Data Berikut : "<<endl<<endl;
	
    cout<<"Nama         : ";
	getline (cin, nama);

    cout<<"NPM          : ";
	getline (cin, npm);  

    cout<<"Universitas  : ";
	getline (cin, universitas);  

    cout<<"Fakultas     : ";
	getline (cin, fakultas);  

    cout<<"Jurusan      : ";
	getline (cin, jurusan);  
    
    //perintah menampilkan output
	cout<<endl;
	cout<<"DATA MAHASISWA"<<endl; 
	cout<<"------------------------------"<<endl;
	
	cout<<"Nama            : "<<nama<<endl;
    cout<<"NPM             : "<<npm<<endl;
    cout<<"Universitas     : "<<universitas<<endl;
    cout<<"Fakultas        : "<<fakultas<<endl;
    cout<<"Jurusan         : "<<jurusan<<endl;

}

//NAMA : Muhamad Nurikbal NPM : G1A021015