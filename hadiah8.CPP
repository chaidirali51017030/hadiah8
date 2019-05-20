#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main (){
char huruf,lagi, nm[20];
float nilai,nmid,nfinal,na,ttl_mid,ttl_final,ttl_tgs,jml=0;
int i=1;
atas:
cout<<"Menghitung Nilai Akhir Mahasiswa\n ";
cout<<"------------------------------------\n";
cout<<"Masukkan Nama Mahasiswa = "; cin>>nm;

do
{cout<<"Masukkan Nilai Tugas" << i << " = " ; cin>>nilai;
jml = jml+nilai;
i++;}
while (i<=5);

cout<<" Masukkan Nilai Mid Mahasiswa= ";cin>>nmid;
cout<<" Masukkan Nilai Final Mahasiswa= ";cin>> nfinal;

ttl_tgs = 0.3 * (jml/5);
ttl_mid = 0.3 * nmid;
ttl_final = 0.4 * nfinal;
na = ttl_tgs + ttl_mid + ttl_final;

if ((na >= 80) && (na <= 100))
huruf = 'A';

else if ((na >=70) && (na <=79))
huruf = 'B';

else if ((na >=60) && (na <=69))
huruf = 'C';

else if ((na >=50) && (na <=59))
huruf = 'D';

else if (na < 50)
huruf = 'E';

cout<<endl;
cout<<endl;
cout<<" Menghitung Nilai Akhir Mahasiswa    \n";
cout<<"-------------------------------------\n";
cout<<" Nama Mahasiswa			= "<<nm<<endl;
cout<<" Total Nilai Tugas		= "<<ttl_tgs<<endl;
cout<<" Total Nilai Mid			= "<<ttl_mid<<endl;
cout<<" Nilai Akhir Mahasiswa	= "<<na<<endl;
cout<<" Nilai Huruf Mahasiswa	= "<<hhuruf<<endl;
cout<<" Ingin Menginput Lagi> [Y/T";
lagi = getch ();
clrscr();
if (lagi== 'Y' || lagi =='y') goto atas;

getch ();
}