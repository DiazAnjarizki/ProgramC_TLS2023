#include <iostream>
using namespace std;

int main() {
    cout << "Selamat datang di Program Cek Kesehatan!" << endl;
    cout << "Silakan jawab pertanyaan-pertanyaan berikut untuk menilai kesehatan Anda." << endl;

    int skor = 0;

    cout << "1. Apakah Anda sering berolahraga? (1 = Ya, 0 = Tidak): ";
    int jawaban1;
    cin >> jawaban1;
    skor += jawaban1;

    cout << "2. Apakah Anda mengonsumsi makanan sehat? (1 = Ya, 0 = Tidak): ";
    int jawaban2;
    cin >> jawaban2;
    skor += jawaban2;

    cout << "3. Berapa jam tidur Anda setiap malam? ";
    int jamTidur;
    cin >> jamTidur;
    if (jamTidur >= 7) {
        skor += 1;
    }

    cout << "4. Apakah Anda merokok? (1 = Ya, 0 = Tidak): ";
    int jawaban4;
    cin >> jawaban4;
    if (jawaban4 == 0) {
        skor += 1;
    }

    cout << "5. Apakah Anda sering stres? (1 = Ya, 0 = Tidak): ";
    int jawaban5;
    cin >> jawaban5;
    if (jawaban5 == 0) {
        skor += 1;
    }

    cout << "========================================" << endl;
    cout << "Hasil penilaian kesehatan Anda:" << endl;
    cout << "Skor kesehatan Anda adalah: " << skor << " dari 5" << endl;
    
    if (skor >= 4) {
        cout << "Anda terlihat sehat!" << endl;
    } else {
        cout << "Anda mungkin perlu memperbaiki gaya hidup Anda untuk lebih sehat dan menjaga kesehatan." << endl;
    }

    return 0;
}
