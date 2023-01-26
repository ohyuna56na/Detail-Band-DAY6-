#ifndef MENU_H
#define MENU_H

void dataMenu(int nomorMenu, Menu menu) {
  int pilihNomorAnggota, pilihNomorAlbum, pilihNomorPemainSolo;

  string judul = (nomorMenu == 4 ? "DAY6 (EVEN OF DAY)" : nomorMenu == 5 ? "SOLOIST" : menu.judul);
  transform(judul.begin(), judul.end(), judul.begin(), ::toupper);

  setcolor(14);
  cout << "======== " << judul << " ========\n\n";

  switch(nomorMenu) {
    case 1:
      setcolor(10);
      cout<< menu.isi;
      break;
    case 2:
      setcolor(11);
      for (int i = 0; i < daftarAnggota.size(); i++) {
        cout << i + 1 << ". " << daftarAnggota[i].namaPanggung << "\n";
      }

      setcolor(13);
      cout << "\nPilih anggota (1 - " << daftarAnggota.size() << ") : ";
      cin >> pilihNomorAnggota;

      system ("CLS");
      
      if (pilihNomorAnggota > 0 && pilihNomorAnggota <= daftarAnggota.size()) {
			  dataAnggota(daftarAnggota[pilihNomorAnggota - 1]);
		  } else {
			  cout << "Tidak ada pilihan anggota!";
		  }

      break;
    case 3:
      setcolor(11);
      for (int i = 0; i < daftarAlbum.size(); i++) {
        cout << i + 1 << ". " << daftarAlbum[i].judul << "\n";
      }

      cout << "\nPilih album (1 - " << daftarAlbum.size() << ") : ";
      cin >> pilihNomorAlbum;

      system ("CLS");

      if (pilihNomorAlbum > 0 && pilihNomorAlbum <= daftarAlbum.size()) {
			  dataAlbum(daftarAlbum[pilihNomorAlbum - 1]);
		  } else {
			  cout << "Tidak ada pilihan album!";
		  }
      
      break;
    case 4:
      setcolor(10);
      cout<< menu.isi;

      setcolor(9);
      cout << "\t***** " << menu.subJudul[0] << " *****\n\n";

      setcolor(11);
      for (int i = 0; i < daftarAnggotaEvenOfDay.size(); i++) {
        cout << i + 1 << ". " << daftarAnggotaEvenOfDay[i].nama << " : " << daftarAnggotaEvenOfDay[i].keahlian << "\n";
      }

      setcolor(9);
      cout << "\n\t***** " << menu.subJudul[1] << " *****\n\n";

      setcolor(11);
      for (int i = 0; i < daftarAlbumEvenOfDay.size(); ++i) {
        cout << i + 1 << ".\t" << daftarAlbumEvenOfDay[i].judul << "\n";
        cout << "\tWaktu publikasi\t:\t" << daftarAlbumEvenOfDay[i].waktuPublikasi << "\n";
        cout << "\tDaftar lagu\t: ";
        for (int j = 0; j < daftarAlbumEvenOfDay[i].daftarLagu.size(); j++) {
          cout << (j == 0 ? "\t" : "\t\t\t\t") << j + 1 << ". " << daftarAlbumEvenOfDay[i].daftarLagu[j] << "\n";
        }
      }
      break;
    case 5:
      for (int i = 0; i < daftarPemainSolo.size(); ++i) {
        cout << i + 1 << ". " << daftarPemainSolo[i].nama << "\n";
      }

      setcolor(13);
      cout << "\nPilih pemain solo (1 - " << daftarPemainSolo.size() << ") : ";
      cin >> pilihNomorPemainSolo;

      system ("CLS");

      if (pilihNomorPemainSolo > 0 && pilihNomorPemainSolo <= daftarPemainSolo.size()) {
			  dataPemainSolo(daftarPemainSolo[pilihNomorPemainSolo - 1]);
		  } else {
			  cout << "Tidak ada pilihan pemain solo!";
		  }

      break;
    default:
      cout << "Tidak ada pilihan menu!";
      break;
  }
}

#endif