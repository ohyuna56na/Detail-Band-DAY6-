#ifndef ALBUM_H
#define ALBUM_H

#include "./setColor.h"

void dataAlbum(Album album) {
  setcolor(9);
  cout << "==== " << album.judul <<" ====\n\n";

  setcolor(11);
  cout << "Waktu publikasi\t:\t" << album.waktuPublikasi << "\n";
  cout << "Daftar Lagu\t: ";
  for (int i = 0; i < album.daftarLagu.size(); ++i) {
    cout << (i == 0 ? "\t" : "\t\t\t") << i + 1 << ". " << album.daftarLagu[i] << "\n";
  }
}

#endif