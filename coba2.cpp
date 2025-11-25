#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

float rataRata(float nilai1, float nilai2, float nilai3) {
	return (nilai1 + nilai2 + nilai3) / 3;
}

string statuslulus(float rata) {
	if (rata >= 85) {
		return "A";
	} else if (rata >= 70 && rata <= 84) {
		return "B";
	} else if (rata >= 60 && rata <= 69) {
		return "C";
	} else if (rata >= 50 && rata <= 59) {
		return "D";
	} else {
		return "E";
	}
	
string lulus(float rata) {
	if (rata >= 60) {
		return "lulus";
	} else {
		return "tidak lulus";
	}

}

int main() {
	vector<string> hasil_akhir;
	
	const int jumlah_mhs = 3;
	for (int i = 0; i < jumlah_mhs; ++i) {
		cout << "\n===== INPUT MAHASISWA KE-" << i + 1 << " =====" << endl;

		float nilai1, nilai2, nilai3; 
		string nama;
		
		if (i > 0) {
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

		cout << "Masukkan Nama MHS : ";
		getline(cin, nama);
		
		cout << "Masukkan Nilai TUGAS : ";
		cin >> nilai1;
		cout << "Masukkan Nilai UTS : ";
		cin >> nilai2;
		cout << "Masukkan Nilai UAS : ";
		cin >> nilai3; 
		
		float rata = rataRata(nilai1, nilai2, nilai3); 
		string status = statuslulus(rata);
		
		string ringkasan = "Nama: " + nama + 
						   ", Rata-rata: " + to_string(rata) + 
						   ", Grade: " + status;
						   
		hasil_akhir.push_back(ringkasan);
	}

	cout << "\n=============================================" << endl;
	cout << "========= RINGKASAN HASIL 3 MAHASISWA =========" << endl;
	cout << "=============================================" << endl;
	
	for (size_t i = 0; i < hasil_akhir.size(); ++i) {
		cout << i + 1 << ". " << hasil_akhir[i] << endl
		cout << "Status kelulusan: " << lulus << endl;
	}

	return 0;
}
