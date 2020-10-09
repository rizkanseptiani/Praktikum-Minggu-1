/* Praktikum Minggu 1 */
/* Membuat Program Billing Warnet */
/* Rizka Nurul Septiani Hakim 20051397026 */

#include<cstdlib>
#include<iostream>
using namespace std;
struct billing
{
char nama[30];
};
int main ()
{
billing bling;
int j1jam;
int j1menit;
int j1detik;
int w;
int j2jam;
int j2menit;
int j2detik;
int jmlW;
int jmldetik;
int jslsjam; 
int jslsmenit; 
int jslsdetik;

cout<<"---------------------------------------------"<<endl;
cout<<"|                 annizyd.NET                 |"<<endl;
cout<<"---------------------------------------------"<<endl;
cout<<"================SELAMAT DATANG==============="<<endl;
cout<<"Tarif Rp 5000,- per 1 jam"<<endl;
cout<<"Masukkan Nama Kamu : ";cin.getline(bling.nama,30);
cout<<"Masukkan Nomor Kompuer: ";cin.getline(bling.nama,30);
cout<<"============================================="<<endl;
cout<<"Jam Mulai : \n";
cout<<"Masukkan Jam   : ";cin>>j1jam;
cout<<"Masukkan Menit : ";cin>>j1menit;
cout<<"Masukkan Detik : ";cin>>j1detik;
cout<< endl;

cout<<"============================================="<<endl;
cout<<"Jam Selesai : \n";
cout<<"Masukkan Jam   : ";cin>>j2jam;
cout<<"Masukkan Menit : ";cin>>j2menit;
cout<<"Masukkan Detik : ";cin>>j2detik;

 jslsjam= (j2jam-j1jam);
 jslsmenit= (j2menit-j1menit);
 jslsdetik= (j2detik-j1detik);
 
 jmldetik= ((j2jam-j1jam)*3600)+((j2menit-j1menit)*60)+(j2detik-j1detik);
 jmlW=jmldetik*5000/3600;
cout<<"Lama Penggunaan : "<<jslsjam<<"jam,"<<jslsmenit<<"menit,"<<jslsdetik<<"detik"<<endl;
cout<<"Anda Harus Membayar Sebesar : Rp."<<jmlW<<",-"<<endl;

cout<<endl;
cout<<"---------------------------------------------"<<endl;
cout<<"================TEERIMA KASIH================"<<endl;
cout<<"=====KAMI TUNGGU KEDATANGAN ANDA KEMBALI====="<<endl;
cout<<"---------------------------------------------"<<endl;

system("PAUSE");
return 0;
}
