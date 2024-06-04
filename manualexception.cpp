#include<iostream>
using namespace std;

int main(){
    try {
        cout << "Selamat Belajar Di Prodi TI UMY" << endl;
        throw 0.5; //melemparkan sebuah integer maka
        cout << "Pernyataan tidak dieksekusi" << endl;
    }
    catch(int a){
        //blok ini di eksekusi 
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch(...) {
        /*jika selain integer maka block ini dieksekusi*/
        cout << "default pengecualian dieksekusi" << endl;
    }
    return 0;
}