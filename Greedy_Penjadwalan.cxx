#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using chrono::high_resolution_clock;
using chrono::duration_cast;
using chrono::milliseconds;

typedef vector<int> vi;
typedef string s;
typedef long long int int64;
#define loopVec1(it, l) for (int it=l.size(); it!=0; it--)
#define loopVec2(it, l) for (auto it = l.begin(); it != l.end(); ++it)
#define loopFile(f,l) while (getline(f, l))
#define masukkanInput(i,n) if (!(i >> n)) { break; }
#define urutkan(l) sort(l.begin(),l.end())
#define masukkan push_back
#define buang pop_back
#define buka is_open
#define tutup close

void greedy(vi totalWaktu){
    urutkan(totalWaktu); int64 jumlah = 0;
    loopVec1(iterasi1, totalWaktu){
       loopVec2(iterasi2, totalWaktu){
            jumlah += *iterasi2;
       }
       totalWaktu.buang();
    }
    cout << "Total waktu minimum: " << jumlah;
}

int main()
{ 
    auto mulai = high_resolution_clock::now();
	
    vi totalWaktu; ifstream file("input.txt");
    if(file.buka()) {
		s baris;
		loopFile(file, baris)
		{
			istringstream iss(baris); int angka;
			masukkanInput(iss,angka);
			totalWaktu.masukkan(angka);
		}
		file.tutup();
	}
    greedy(totalWaktu);
    
    auto berakhir = high_resolution_clock::now();
    
    auto waktu = duration_cast<milliseconds>(berakhir - mulai);
    cout << "\nWaktu ekesekusi: " << waktu.count() << "ms\n";
    
    return 0;
}
