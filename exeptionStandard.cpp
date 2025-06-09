#include <iostream>
#include <exception>
//untuk obyek exception yang akan kita gunakan
#include <array>
//untuk obyek array yang akan kita gunakan 
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda 1
    try
    {
        array<int, 3> data = {10, 20, 30};
        // pesan array integer 3 elemen
        cout << data.at(4) << endl;
        // memanggil array elemen ke 5
    }
    catch (exception &e)
    {
        //penangkapan menggunakan obyek exeption 
        cout << e.what() << endl;
        /*akan dieksekusi karena array data hanya memiliki 3 elemen*/
    }
    cout << "Baris Program Yang Terakhir" << endl;
    /*penanda 2: bahwa program berjalan tanpa henti meskipun terjadi kesalahan*/
    return 0;
}