#include <windows.h>
#include <algorithm>
#include <iostream>

#include "./data/daftarAnggotaEvenOfDay.cpp"
#include "./data/daftarAlbumEvenOfDay.cpp"
#include "./data/daftarPemainSolo.cpp"
#include "./data/daftarAnggota.cpp"
#include "./data/daftarAlbum.cpp"
#include "./data/daftarMenu.cpp"

#include "./service/PemainSolo.h"
#include "./service/Anggota.h"
#include "./service/Album.h"
#include "./service/Menu.h"
#include "./service/setColor.h"

using namespace std;

int main() {
	int pilihNomorMenu;
	char ulang;

	do {
    setcolor(14);
    cout << "================ DAY 6 ================\n" << endl;

    setcolor (11);
    for (int i = 0; i < daftarMenu.size(); i++) {
      cout << i + 1 << ". " << daftarMenu[i].judul << "\n";
    }
	
	  setcolor(13);
	  cout << "\nPilih menu : ";
	  cin >> pilihNomorMenu;

	  system ("CLS");

		if (pilihNomorMenu > 0 && pilihNomorMenu <= daftarMenu.size()) {
			dataMenu(pilihNomorMenu, daftarMenu[pilihNomorMenu - 1]);
		} else {
			cout << "Tidak ada pilihan menu!";
		}
		
		setcolor(12);
		cout << "\n\nKembali ke menu awal (y/t) ? ";
		cin >> ulang;

		system ("CLS");
	} while (ulang == 'y');
}