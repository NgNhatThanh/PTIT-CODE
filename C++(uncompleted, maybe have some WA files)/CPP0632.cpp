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
};

int idhd = 1;
class HoaDon{
public:
	string mahd, makh, mamh;
	int sl;
    long long loi;
	friend istream &operator >> (istream &cin, HoaDon &a){
		cin >> a.makh >> a.mamh >> a.sl;
		a.mahd = Ma("HD", idhd++);
		a.loi = 1ll*a.sl*MH[a.mamh].gban - 1ll*a.sl*MH[a.mamh].gmua;    
		return cin;
	}
	friend ostream &operator << (ostream &cout, HoaDon a){
        cout << a.mahd << ' ';
        KH[a.makh].in();
        cout << MH[a.mamh].ten << ' ' << a.sl << ' ' << 1ll*a.sl*MH[a.mamh].gban << ' ' << a.loi << '\n';
        return cout;
    }
};

int cmp(HoaDon a, HoaDon b){
	return a.loi >= b.loi;
}

void sapxep(HoaDon a[], int n){
	sort(a, a+n, cmp);
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}