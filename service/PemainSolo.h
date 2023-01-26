#ifndef PEMAIN_SOLO_H
#define PEMAIN_SOLO_H

#include "./setColor.h"

void dataPemainSolo(PemainSolo pemain) {
  setcolor(9);
  cout << "\t*****" << pemain.nama <<"*****\n\n";

  setcolor(11);
  for (int i = 0; i < pemain.daftarAlbum.size(); ++i) {
    cout << i + 1 << ". " << pemain.daftarAlbum[i].judul << "\n";
    cout << "Waktu publikasi : " << pemain.daftarAlbum[i].waktuPublikasi << "\n";

    cout << "Daftar lagu : ";
    for (int j = 0; j < pemain.daftarAlbum[i].daftarLagu.size(); j++) {
      cout << j + 1 << ". " << pemain.daftarAlbum[i].daftarLagu[j] << "\n";
    }
  }
}

#endif