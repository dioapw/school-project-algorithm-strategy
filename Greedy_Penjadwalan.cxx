#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef string s;
typedef long long unsigned int uint64;
#define loopVec1(it, l) for (int it=l.size(); it!=0; it--)
#define loopVec2(it, l) for (auto it = l.begin(); it != l.end(); ++it)
#define loopFile(f,l) while (getline(f, l))
#define masukkanInput(i,n) if (!(i >> n)) { break; }
#define urutkan(l) sort(l.begin(),l.end())
#define masukkan push_back
#define buang pop_back
#define buka is_open
#define tutup close

void greedy(vi waktu){
    urutkan(waktu); uint64 jumlah = 0;
    loopVec1(iterasi1, waktu){
       loopVec2(iterasi2, waktu){
            jumlah += *iterasi2;
       }
       waktu.buang();
    }
    cout << jumlah;
}

int main()
{ 
	vi totalWaktu; ifstream file("input.txt");
    if(file.buka()) {
		s line;
		loopFile(file, line)
		{
			istringstream iss(line); int angka;
			masukkanInput(iss,angka);
			totalWaktu.masukkan(angka);
		}
		file.tutup();
	}
    greedy(totalWaktu);
    return 0;
}
