#ifndef ANGGOTA_H
#define ANGGOTA_H

void dataAnggota(Anggota anggota) {
  setcolor(9);
  cout << "==== " << anggota.namaAsli << " ====\n\n";

  setcolor(11);
  cout << "Nama panggung\t\t: " << anggota.namaPanggung << "\n";
  cout << "Tempat, tanggal lahir\t: " << anggota.tempatTanggalLahir << "\n";
  cout << "Tinggi badan\t\t: " << anggota.tinggiBadan << "\n";
  cout << "Golongan darah\t\t: " << anggota.golonganDarah << "\n";
  cout << "Peran band\t\t: " <<anggota.peranBand << "\n";
  cout << "Alat musik\t\t: " << anggota.alatMusik << "\n";
  cout << "Status keanggotaan\t: " << anggota.statusKeanggotaan << "\n";
}

#endif