#include <bits/stdc++.h>
using namespace std;

void chuanhoa(string &s){
	stringstream ss(s);
	string tmp;
	s = "";
	while(ss >> tmp) s += tmp + " ";
	s.pop_back();
}

string Ma(string st, int id){
	string tmp = to_string(id);
	while(tmp.size() < 3) tmp = "0" + tmp;
	return st + tmp;
}

class KhachHang;
class MatHang;

map<string, KhachHang> KH;
map<string, MatHang> MH;

int idkh = 1;
class KhachHang{
public:
	string ma, ten, sex, date, diachi;
	friend istream &operator >> (istream &cin, KhachHang &a){
		getline(cin >> ws, a.ten);
		chuanhoa(a.ten);
		cin >> a.sex >> a.date; 
		cin.ignore();
		getline(cin >> ws, a.diachi);
		chuanhoa(a.diachi);
		a.ma = Ma("KH", idkh++);
		KH[a.ma] = a;
		return cin;
	}
	void in(){
		cout << ten << ' ' << diachi << ' ';
	}
};

int idmh = 1;
class MatHang{
public:
	string ma, ten, donvi;
	int gmua, gban;
	friend istream &operator >> (istream &cin, MatHang &a){
		cin.ignore();
		getline(cin >> ws, a.ten);
		chuanhoa(a.ten);
		getline(cin >> ws, a.donvi);
		chuanhoa(a.donvi);
		cin >> a.gmua >> a.gban;
		a.ma = Ma("MH", idmh++);
		MH[a.ma] = a;
		return cin;
	}
	void in(){
		cout << ten << ' ' << donvi << ' ' << gmua << ' ' << gban << ' ';
	}
};

int idhd = 1;
class HoaDon{
public:
	string mahd, makh, mamh;
	int sl;
	friend istream &operator >> (istream &cin, HoaDon &a){
		cin >> a.makh >> a.mamh >> a.sl;
		a.mahd = Ma("HD", idhd++);
		return cin;
	}
	void in(){
		cout << mahd << ' ';
		KH[makh].in();
		MH[mamh].in();
		cout << sl << ' ' << 1ll*sl*MH[mamh].gban << '\n';
	}
};

int main(){
    int n;
	ifstream kh("KH.in");
	kh >> n;
	kh.ignore();
	KhachHang a[n];
	for(auto &x : a) kh >> x;
	ifstream mh("MH.in");
	mh >> n;
	MatHang b[n];
	for(auto &x : b) mh >> x;
	ifstream hd("HD.in");
	hd >> n;
	HoaDon c[n];
	for(auto &x : c){
		hd >> x;
		x.in();
	}
}