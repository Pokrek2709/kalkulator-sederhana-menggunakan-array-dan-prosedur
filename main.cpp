//Muhammad Faiz Al Azmi
//20102037
//S1-IF-08-A

#include <iostream>

using namespace std;

double angka1[10];
double angka2[10];
double jumlah[10];

void penjumlahan(){
	cout << "Masukkan Angka Pertama: ";
        for (int a = 0;a < 1; a++) {
        cin >> angka1[a];
    }
    cout << "Masukkan Angka Kedua: ";
        for (int a = 0; a < 1; a++) {
        cin >> angka2[a];
    }
    cout << "Hasil dari Penjumlahan: ";
        for (int a = 0; a < 1; a++) {
        jumlah[a] = angka1[a] + angka2[a];
        cout << jumlah[a];
    }
}
void perkalian(){
	cout << "Masukkan Angka Pertama: ";
        for (int a = 0;a < 1; a++) {
        cin >> angka1[a];
    }
    cout << "Masukkan Angka Kedua: ";
        for (int a = 0; a < 1; a++) {
        cin >> angka2[a];
    }
    cout << "Hasil dari Perkalian: ";
        for (int a = 0; a < 1; a++) {
        jumlah[a] = angka1[a] * angka2[a];
        cout << jumlah[a];
        }
}
void pembagian() {
	cout << "Masukkan Angka Pertama: ";
        for (int a = 0;a < 1; a++) {
        cin >> angka1[a];
    }
    cout << "Masukkan Angka Kedua: ";
        for (int a = 0; a < 1; a++) {
        cin >> angka2[a];
    }
    cout << "Hasil dari Pembagian: ";
        for (int a = 0; a < 1; a++) {
        jumlah[a] = angka1[a] / angka2[a];
        cout << jumlah[a];
	}
}
void pengurangan(){
	cout << "Masukkan Angka Pertama: ";
        for (int a = 0;a < 1; a++) {
        cin >> angka1[a];
    }
    cout << "Masukkan Angka Kedua: ";
        for (int a = 0; a < 1; a++) {
        cin >> angka2[a];
    }
    cout << "Hasil dari Pengurangan: ";
        for (int a = 0; a < 1; a++) {
        jumlah[a] = angka1[a] - angka2[a];
        cout << jumlah[a];
	}
}
int main(){
	int pilih;
	char kembali;
	awal:

	cout << "|-------------------------|" << endl;
	cout << "|   KALKULATOR SEDERHANA  |" << endl;
	cout << "|-------------------------|" << endl;
	cout << "|1. Penjumlahan           |" << endl;
	cout << "|2. Perkalian             |" << endl;
	cout << "|3. Pembagian             |" << endl;
	cout << "|4. Pengurangan           |" << endl;
	cout << "|-------------------------|" << endl;
	cout << endl;
	cout << "Masukkan Pilihan: ";
	cin >> pilih;
	if (pilih == 1){
        penjumlahan();
        break;
    }else if(pilih == 2){
        perkalian();
        break;
    }else if(pilih == 3){
        pembagian();
        break;
    }else if(pilih == 4){
        pengurangan();
        break;
    }else{
        cout<<"Pilihan anda salah"<<endl;
    }
	return 0;
}
