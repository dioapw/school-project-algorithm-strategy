#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using chrono::high_resolution_clock;
using chrono::duration_cast;
using chrono::milliseconds;

typedef vector<long long int> vi;
typedef string s;
typedef long long int int64;
#define loop_vec_sebelum_nilai_akhir(it, l) while(it != l.size()-1)
#define loopPermutasi(it, l) for (int64 it = n; it < l.size(); it++)
#define loopVec1(it, l) for (int64 it=l.size(); it!=0; it--)
#define loopVec2(it, l) for (auto it = l.begin(); it != l.end(); ++it)
#define loopFile(f,l) while (getline(f, l))
#define masukkanInput(i,n) if (!(i >> n)) { break; }
#define minimum(l) *min_element(l.begin(), l.end())
#define masukkan push_back
#define buang pop_back
#define buka is_open
#define tutup close
#define ukuran size
vi jumlah_vec;

void print(vi vec)
{
    int64 i = 0;
    loop_vec_sebelum_nilai_akhir(i, vec){
        cout << vec[i] << ", "; i++;
    }
	cout << vec[i];
}

int64 kalkulasi(vi totalWaktu)
{
    int64 jumlah = 0;
    loopVec1(iterasi1, totalWaktu){
       loopVec2(iterasi2, totalWaktu){
            jumlah += *iterasi2;
       }
       totalWaktu.buang();
    }
    return jumlah;
}

void permutasi(vi vec, int64 n) {
  if (n == vec.ukuran()) {
      //print(vec);
      jumlah_vec.masukkan(kalkulasi(vec)); 
      //cout<<"\n";  
  } else {
	loopPermutasi(i, vec) {
		swap(vec[i], vec[n]);
                permutasi(vec, n + 1);
                swap(vec[i], vec[n]);
        }
  }
}

void brute_force(vi totalWaktu)
{
    permutasi(totalWaktu, 0);
    //cout<<"\nTotal kemungkinan waktu: "; 
    //print(jumlah_vec);
    cout << "\nTotal waktu minimum: " << minimum(jumlah_vec);
}

int main()
{ 
    auto mulai = high_resolution_clock::now();
	
    vi totalWaktu; ifstream file("input2.txt");
    if(file.buka()) {
		s baris;
		loopFile(file,baris)
		{
			istringstream iss(baris); int angka;
			masukkanInput(iss,angka);
			totalWaktu.masukkan(angka);
		}
		file.tutup();
	}
      cout<<"Permutasi urutan waktu:\n"; 
      brute_force(totalWaktu);
	
      auto berakhir = high_resolution_clock::now();
    
      auto waktu = duration_cast<milliseconds>(berakhir - mulai);
      cout << "\nWaktu ekesekusi: " << waktu.count() << "ms\n";
    
      return 0;
}
