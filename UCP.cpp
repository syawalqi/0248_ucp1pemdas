 //1.  #include <iostream>
 //using namespace std;
 //int hello;
 //string kelas;
 //float  



//2.  if ((n > 0) && (n <= 20))
    //else
        // cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
    //}



//3. struct mahasiswa {
//	string nim;
//	string nama;
//	DetailAlamat alamat;
//	int umur;
//};



// 4. prosedur int totalharga(){
    //return (nAdidas * hAdidas) + (nPuma * hPuma) + (nNB * hNB) + (nNike * nNike);
//}
// fungsi void Display(){
//    cout << endl;
//    cout << "===================" << endl;
//    cout << endl;
//    cout << "Jumlah puma =" << nPuma << endl;
//    cout << "Jumlah Adidas =" << nAdidas << endl;
//    cout << "total harga = Rp." << totalharga() << endl;
//}



//5. #include <iostream>
//using namespace std;

//int main()
//{
//    int i;
//    string nama[5];

//   for (i = 0; i < 7; i++)
//    {
//       cout << i << ". " << "galih" << endl;
//    }

//    for( i=0; i < 5; i++){
//        cout << "masukan nama = ";
//        cin >> nama [i];
//   }

//      cout << endl;
//      cout << "==============" << endl;
//      cout << "kumpulan nama - nama" << endl;

//    for (i=0; i < 5; i++){
           
//     cout << "namanya adalah :" << nama[i] << endl;
//    }
//}



#include<iostream>
using namespace std;

struct Calonmaba {
    string Namamaba;
    float matematika;
    float Inggris;
    float rata2;
    string Stats;
};

void hitung(Calonmaba & glh) {// identifier
    cout << "============== Peserta ==============" << endl;
    cout << "Masukkan nama Calon maba: ";
    cin.ignore();
    getline(cin, glh.Namamaba);
    cout << "Masukkan nilai Matematika: ";
    cin >> glh.matematika;
    cout << "Masukkan nilai bahasa Inggris: ";
    cin >> glh.Inggris;
    glh.rata2 = (glh.matematika + glh.Inggris) / 2;

    if (glh.rata2 >= 70 && glh.matematika > 80) {
        glh.Stats = "Diterima";
    } else {
        glh.Stats = "Ditolak";
    }
    cout << "Nama :" << glh.Namamaba << endl;
    cout << "Stats: " << glh.Stats << endl;
}

int main() {
    int berapakali;
    int counter1 = 0, counter2 = 0;
    char pilihan;
    string Namamaba;
    string Stats;

    do {
        cout << "Mau berapa peserta jumlahnya =  ";
        cin >> berapakali;
        for (int loop = 0; loop < berapakali; loop++) {
            Calonmaba glh;
            hitung(glh);
            if (glh.Stats == "Lulus") {
                counter1++;
            } else {
                counter2++;
            }
        }
        cout << "====================================" << endl;
        cout << "Apakah anda ingin mengulangi (Y/N)? ";
        cin >> pilihan;

        // Membersihkan buffer input
        system("pause");
        system("cls");
    } while (pilihan == 'Y' || pilihan == 'y');

    return 0;
}
