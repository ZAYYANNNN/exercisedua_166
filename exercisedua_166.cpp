#include<iostream>
#include<string>
using namespace std;

class Penerbit {
public:
	string gamaPress();
	string intanPariwara();
};

class buku {
public:
	void fisika();
	void algoritma();
	void basisData();
	void dasarPemrograman();
	void matematika();
	void multimedia();

};

class joko : public Penerbit, public buku {
	string gamaPress();
	void fisika();
	void algoritma();


};

class lia : public Penerbit, public buku {
public:
	string gamaPress();
	void basisData();

};

class giga : public Penerbit, public buku {
public:
	string gamaPress();
	string intanPariwara();
	void matematika();
	void multimedia();
};

class asroni : public Penerbit, public buku {
public:
	string intanPariwara();
	void dasarPemrograman();

};

int main() {
	string pengarang(string joko, string lia, string giga, string asroni);
	string penerbit(string gamaPress, string intanParawira);
	void fisika();
	void algoritma();
	void basisdata();
	void dasarpemrograman();
	void matematika();
	void multimedia();


	cout << "Daftar pengarang pada penerbit gamaPress\n" << endl;
	cin >> p

}