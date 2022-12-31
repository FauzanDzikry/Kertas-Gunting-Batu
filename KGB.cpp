#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <windows.h>

using namespace std;

void rules();
void list();

int main(){
    
    string bot, player, hadiah;
	int pilihan, pilihanbot, angka1, angka2, soal, jawab, tebak, gatcha;
    int tiket = 0;
	char gas;
    char nama[20];
	
    srand(time(0));
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    cout<<"\n";
    SetConsoleTextAttribute(h,9);
    cout<<"\t\t\t\t================================================"<<endl;
	cout<<"\t\t\t\t||";
    SetConsoleTextAttribute(h,14);
    cout<<" Selamat Datang di Game Kertas Gunting Batu ";
    SetConsoleTextAttribute(h,9);
    cout<<"||"<<endl;
	cout<<"\t\t\t\t================================================"<<endl;
    SetConsoleTextAttribute(h,7);
	cout<<endl;

	cout<<"\n\n\tMasukkan Nama Anda = ";
	cin.getline(nama, 20);
	system ("cls");
    
	rules();
	cout<<"  Hallo "<<nama<<"... Apakah anda ingin memulai permainan (y/n) ? ";
	cin>>gas;
	cout<<endl;
	system ("cls");

    if(gas=='y'||gas=='Y'){

        checkpoint1 :
        cout<<"\n";
        SetConsoleTextAttribute(h,9);
        cout<<"\t\t\t\t========================="<<endl;
        cout<<"\t\t\t\t||";
        SetConsoleTextAttribute(h,14);
        cout<<"  Selamat Bermain :) ";
        SetConsoleTextAttribute(h,9);
        cout<<"||"<<endl;
        cout<<"\t\t\t\t========================="<<endl;
        SetConsoleTextAttribute(h,7);

        cout<<"\n\t Tiket Keberuntunganmu : "<<tiket<<endl;

        checkpoint2 :
        cout << "\n\t===== PILIHAN =====\n";
                cout << "\t (1). Kertas\n";
                cout << "\t (2). Gunting\n";
                cout << "\t (3). Batu\n";
        cout << "\t===================\n";    
                cout << "\n\tMasukan Pilihan Anda : "; 	
                cin>>pilihan;
        
        //bot
        pilihanbot = rand()%3 + 1;
        if (pilihanbot == 1) {
            bot = "Kertas";
        }
        else if (pilihanbot == 2) {
            bot = "Gunting";
        }
        else {
            bot = "Batu";
        }
        
        //Penginput
        if (pilihan == 1){
            player = "Kertas";
        }
        else if (pilihan == 2){
            player = "Gunting";
        }
        else if (pilihan == 3){
            player = "Batu";
        }
        else {
            cout <<"\n\n\t\t PILIHAN YANG ANDA PILIH TIDAK TERSEDIA :(\n";
            getch();
            system ("cls");
            goto checkpoint1;
        }

        cout << "\n\t=========================\n";
        cout << "\tPilihan Kamu\t: " << player << "\n";
        cout << "\tPilihan Bot\t: " << bot << "\n";
        cout << "\t=========================\n\n";

        //Ketika DRAW
        if(pilihan == pilihanbot){
            SetConsoleTextAttribute(h,11);
            cout<<"\t      --- DRAW ---\n";
            SetConsoleTextAttribute(h,7);
            getch();
            goto checkpoint2;
        }
        //Ketika tidak DRAW
        else{

            //KERTAS
            if(pilihan == 1){ 
                if(pilihanbot == 3){
                        SetConsoleTextAttribute(h,10);
                        cout<< "\t   --- KAMU MENANG ---\n\n";
                        SetConsoleTextAttribute(h,7);
                        cout<<"\tSelamat...Kamu Mendapatkan 1 Tiket Keberuntungan!\n\n\n";
                        tiket = tiket + 1; 
                        cout<< "\tTiket Keberuntunganmu : "<<tiket<<endl<<endl;
                        checkpoint12:
                        cout<<"\n\tIngin menukar tiket keberuntungan (y/n) ? ";
                        cin>>gas;

                            if (gas == 'y' || gas == 'Y'){
                                system("cls");
                                list();
                                checkpoint3:
                                cout<<"\t Tiket Keberuntunganmu : "<<tiket<<endl<<endl;
                                SetConsoleTextAttribute(h,14);
                                cout<<"\n\t\t\t\t- Tekan ENTER untuk memulai gatcha -\n\n";
                                SetConsoleTextAttribute(h,7);
                                getch();
                                    //loading
                                    SetConsoleTextAttribute(h,14);
                                        int bar1 = 177, bar2 = 219;

                                        cout << "\n\n\n\t\t\t\t";

                                        for(int i = 0; i < 36; i++)
                                            cout << (char)bar1;
                                            cout <<"\r";
                                            cout <<"\t\t\t\t";

                                            for(int i = 0; i < 36; i++)
                                            {
                                            cout << (char)bar2;
                                            Sleep(100);
                                            }
                                    SetConsoleTextAttribute(h,7);

                                gatcha = rand()%10 + 1;
                                    if(gatcha == 1){
                                        hadiah = "Kuota 20gb";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else if(gatcha == 2){
                                        hadiah = "ZONK";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,12);
                                        cout<<"\t\t\t\t\t Oops...Kamu "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else if (gatcha == 3){
                                        hadiah = "Pulsa 100k";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                     else if(gatcha == 4){
                                        hadiah = "ZONK";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,12);
                                        cout<<"\t\t\t\t\t Oops...Kamu "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else if (gatcha == 5){
                                        hadiah = "Uang 100k";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                     else if(gatcha == 6){
                                        hadiah = "ZONK";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,12);
                                        cout<<"\t\t\t\t\t Oops...Kamu "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else if (gatcha == 7){
                                        hadiah = "Saldo DANA 100k";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else if(gatcha == 8){
                                        hadiah = "ZONK";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,12);
                                        cout<<"\t\t\t\t\t Oops...Kamu "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                     else if (gatcha == 9){
                                        hadiah = "Saldo GOPAY";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else {
                                        hadiah = "Emas 1gr";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                        //jika tiket habis
                                        if(tiket<=0){
                                            checkpoint6 :
                                            cout<<"\n\n\t Yahhh... Tiket kamu habis, apakah anda ingin bermain lagi (y/n) ? ";
                                            cin>>gas;
                                            cout<<endl;
                                                if(gas=='y'||gas=='Y'){
                                                    system ("cls");
                                                    goto checkpoint1;
                                                }
                                                else if(gas=='n'||gas=='N'){
                                                    system ("cls");
                                                    SetConsoleTextAttribute(h,6);
                                                    cout<<"\n\t\t\t\t\t- See you next time "<<nama<<" :) -\n\n";
                                                    SetConsoleTextAttribute(h,7);
                                                }
                                                else{
                                                    SetConsoleTextAttribute(h,6);
                                                    cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                                    SetConsoleTextAttribute(h,7);
                                                    goto checkpoint6;
                                                }
                                        }

                                        //jika tiket masih ada
                                        else {
                                            checkpoint8:
                                            cout<<"\n\n\t Kamu masih memiliki tiket, mau gatcha lagi (y/n) ? ";
                                            cin>>gas;
                                            cout<<endl<<endl;
                                                //JIKA INGIN GATCHA LAGI
                                                if (gas == 'y' || gas=='Y'){
                                                    goto checkpoint3;
                                                } 

                                                //JIKA TIDAK GATCHA
                                                else if (gas == 'n' || gas == 'N'){
                                                    checkpoint7 :
                                                    cout<<"\tIngin bermain lagi (y/n) ? ";
                                                    cin>>gas;
                                                    cout<<endl;
                                                            if(gas=='y'||gas=='Y'){
                                                                system ("cls");
                                                                goto checkpoint1;
                                                            }
                                                            else if(gas=='n'||gas=='N'){
                                                                system ("cls");
                                                                SetConsoleTextAttribute(h,6);
                                                                cout<<"\n\t\t\t\t\t- See you next time "<<nama<<" :) -\n\n";
                                                                SetConsoleTextAttribute(h,7);
                                                            }
                                                            else{
                                                                SetConsoleTextAttribute(h,6);
                                                                cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                                                SetConsoleTextAttribute(h,7);
                                                                goto checkpoint7;
                                                            }
                                                }
                                                else{
                                                    SetConsoleTextAttribute(h,6);
                                                    cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                                    SetConsoleTextAttribute(h,7);
                                                    goto checkpoint8;
                                                }
                                        }
                            }
                            //jika tidak menukar tiket
                            else if (gas == 'n' || gas == 'N'){
                                checkpoint9:
                                cout<<"\n\tIngin bermain lagi (y/n) ? ";
                                cin>>gas;
                                cout<<endl;
                                    if(gas=='y'||gas=='Y'){
                                        system ("cls");
                                        goto checkpoint1;
                                    }
                                    else if(gas=='n'||gas=='N'){
                                        system ("cls");
                                        SetConsoleTextAttribute(h,6);
                                        cout<<"\n\t\t\t\t\t- See you next time "<<nama<<" :) -\n\n";
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else{
                                        SetConsoleTextAttribute(h,6);
                                        cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                        SetConsoleTextAttribute(h,7);
                                        goto checkpoint9;
                                    }   
                            }
                            else{
                                SetConsoleTextAttribute(h,6);
                                        cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                        SetConsoleTextAttribute(h,7);
                                        goto checkpoint12;
                            }
                }
                //KETIKA KALAH
                else{ 
                    SetConsoleTextAttribute(h,12);
                    cout << "\t   --- KAMU KALAH ---\n\n" ;
                    SetConsoleTextAttribute(h,7);
                    cout<<"\tJawab Soal Berikut ini :\n";

                    angka1 = rand()%10 +1;
                    angka2 = rand()%10 +1;

                    SetConsoleTextAttribute(h,14);
                    cout<<"\t\t"<<angka1<<" x "<<angka2<<" = ";
                    soal = angka1 * angka2;
                    cin>>jawab;
                    cout<<"\n";
                    SetConsoleTextAttribute(h,7);

                     //ketika jawaban soal benar
                        if(jawab == soal){
                            SetConsoleTextAttribute(h,10);
            	            cout<<"\t   - Jawabanmu benar -\n\n";
                            SetConsoleTextAttribute(h,7);
                            checkpoint10 :
                            cout<<"\tIngin bermain lagi (y/n) ? ";
	                        cin>>gas;
	                        cout<<endl;
                                if(gas=='y'||gas=='Y'){
                                    system ("cls");
                                    goto checkpoint1;
                                }
                                else if(gas=='n'||gas=='N'){
                                    system ("cls");
                                    SetConsoleTextAttribute(h,6);
                                    cout<<"\n\t\t\t\t\t- See you next time "<<nama<<" :) -\n\n";
                                    SetConsoleTextAttribute(h,7);
                                }
                                else{
                                    SetConsoleTextAttribute(h,6);
                                    cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                    SetConsoleTextAttribute(h,7);
                                    goto checkpoint10;
                                }
			            } 
                        //KETIKA JAWABAN SOAL SALAH
                        else{
                            //perulangan ketika jawab soal salah
                            while (jawab != soal)
                            {   
                                SetConsoleTextAttribute(h,12);
                                cout<<"\t   - Jawabanmu salah -\n";
                                SetConsoleTextAttribute(h,7);

                                SetConsoleTextAttribute(h,14);

                                angka1 = rand()%10 +1;
                                angka2 = rand()%10 +1;
                                
                                cout<<"\n\t\t"<<angka1<<" x "<<angka2<<" = ";
                                soal = angka1 * angka2;
                                cin>>jawab;
                                cout<<"\n";
                                SetConsoleTextAttribute(h,7);
                            }
                            //ketika jawab soal benar
                            SetConsoleTextAttribute(h,10);
                            cout<<"\t   - Jawabanmu benar -\n\n";
                            SetConsoleTextAttribute(h,7);
                            checkpoint11 :
                            cout<<"\tIngin bermain lagi (y/n) ? ";
	                        cin>>gas;
	                        cout<<endl;
	                        if(gas=='y'||gas=='Y'){
                                system ("cls");
                                goto checkpoint1;
                            }
                            else if(gas=='n'||gas=='N'){
                                system ("cls");
                                SetConsoleTextAttribute(h,6);
                                cout<<"\n\t\t\t\t\t- See you next time "<<nama<<" :) -\n\n";
                                SetConsoleTextAttribute(h,7);
                            }
                            else{
                                SetConsoleTextAttribute(h,6);
                                cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                SetConsoleTextAttribute(h,7);
                                goto checkpoint11;
                            }                             
			            }
                }
            }
            //GUNTING
            else if(pilihan == 2 && pilihanbot == 1){
                    SetConsoleTextAttribute(h,10);
					cout<< "\t   --- KAMU MENANG ---\n\n";
                    SetConsoleTextAttribute(h,7);
                    cout<<"\tSelamat...Kamu Mendapatkan 1 Tiket Keberuntungan!\n\n\n";
                    tiket = tiket + 1; 
                    cout<< "\tTiket Keberuntunganmu : "<<tiket<<endl<<endl;
                    checkpoint13 :
                    cout<<"\n\tIngin menukar tiket keberuntungan (y/n) ? ";
                    cin>>gas;
                        if (gas == 'y' || gas == 'Y'){
                        	system("cls");
                            list();
                            checkpoint4:
                                cout<<"\t Tiket Keberuntunganmu : "<<tiket<<endl<<endl;
                                SetConsoleTextAttribute(h,14);
                                cout<<"\n\t\t\t\t- Tekan ENTER untuk memulai gatcha -\n\n";
                                SetConsoleTextAttribute(h,7);
                                getch();
                                    //loading
                                    SetConsoleTextAttribute(h,14);
                                        //SetConsoleCP(437);
                                        //SetConsoleOutputCP(437);
                                        int bar1 = 177, bar2 = 219;

                                        cout << "\n\n\n\t\t\t\t";

                                        for(int i = 0; i < 36; i++)
                                            cout << (char)bar1;
                                            cout <<"\r";
                                            cout <<"\t\t\t\t";

                                            for(int i = 0; i < 36; i++)
                                            {
                                            cout << (char)bar2;
                                            Sleep(100);
                                            }
                                    SetConsoleTextAttribute(h,7);
                                gatcha = rand()%10 + 1;
                                 if(gatcha == 1){
                                        hadiah = "Kuota 20gb";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else if(gatcha == 2){
                                        hadiah = "ZONK";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,12);
                                        cout<<"\t\t\t\t\t Oops...Kamu "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else if (gatcha == 3){
                                        hadiah = "Pulsa 100k";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                     else if(gatcha == 4){
                                        hadiah = "ZONK";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,12);
                                        cout<<"\t\t\t\t\t Oops...Kamu "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else if (gatcha == 5){
                                        hadiah = "Uang 100k";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                     else if(gatcha == 6){
                                        hadiah = "ZONK";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,12);
                                        cout<<"\t\t\t\t\t Oops...Kamu "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else if (gatcha == 7){
                                        hadiah = "Saldo DANA 100k";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else if(gatcha == 8){
                                        hadiah = "ZONK";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,12);
                                        cout<<"\t\t\t\t\t Oops...Kamu "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                     else if (gatcha == 9){
                                        hadiah = "Saldo GOPAY";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else {
                                        hadiah = "Emas 1gr";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    
                                    //jika tiket habis
                                        if(tiket<=0){\
                                            checkpoint15:
                                            cout<<"\n\n\t Yahhh... Tiket kamu habis, apakah anda ingin bermain lagi (y/n) ? ";
                                            cin>>gas;
                                            cout<<endl;
                                                if(gas=='y'||gas=='Y'){
                                                    system ("cls");
                                                    goto checkpoint1;
                                                }
                                                else if(gas=='n'||gas=='N'){
                                                    system ("cls");
                                                    SetConsoleTextAttribute(h,6);
                                                    cout<<"\n\t\t\t\t\t- See you next time "<<nama<<" :) -\n\n";
                                                    SetConsoleTextAttribute(h,7);
                                                }
                                                else{
                                                    SetConsoleTextAttribute(h,6);
                                                    cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                                    SetConsoleTextAttribute(h,7);
                                                    goto checkpoint15;
                                                }
                                        }
                                        
                                        //jika tiket masih ada
                                        else {
                                            checkpoint16:
                                            cout<<"\n\n\t Kamu masih memiliki tiket, mau gatcha lagi (y/n) ? ";
                                            cin>>gas;
                                            cout<<endl<<endl;
                                                //JIKA INGIN GATCHA LAGI
                                                if (gas == 'y' || gas=='Y'){
                                                    goto checkpoint4;
                                                } 

                                                //JIKA TIDAK GATCHA
                                                else if (gas == 'n' || gas == 'N'){
                                                    checkpoint17:
                                                    cout<<"\tIngin bermain lagi (y/n) ? ";
                                                    cin>>gas;
                                                    cout<<endl;
                                                            //PILIHAN JIKA INGIN MAIN LAGI
                                                            if(gas=='y'||gas=='Y'){
                                                                system ("cls");
                                                                goto checkpoint1;
                                                            }
                                                            else if(gas=='n'||gas=='N'){
                                                                system ("cls");
                                                                SetConsoleTextAttribute(h,6);
                                                                cout<<"\n\t\t\t\t\t- See you next time "<<nama<<" :) -\n\n";
                                                                SetConsoleTextAttribute(h,7);
                                                            }
                                                            else{
                                                                SetConsoleTextAttribute(h,6);
                                                                cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                                                SetConsoleTextAttribute(h,7);
                                                                goto checkpoint17;
                                                            }
                                                } 
                                                else{
                                                    SetConsoleTextAttribute(h,6);
                                                    cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                                    SetConsoleTextAttribute(h,7);
                                                    goto checkpoint16;
                                                }
                                        }
                            }
                            //jika tidak menukar tiket
                            else if (gas == 'n' || gas == 'N'){
                                checkpoint14:
                                cout<<"\n\tIngin bermain lagi (y/n) ? ";
                                cin>>gas;
                                cout<<endl;
                                    if(gas=='y'||gas=='Y'){
                                        system ("cls");
                                        goto checkpoint1;
                                    }
                                    else if(gas=='n'||gas=='N'){
                                        system ("cls");
                                        SetConsoleTextAttribute(h,6);
                                        cout<<"\n\t\t\t\t\t- See you next time "<<nama<<" :) -\n\n";
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else{
                                        SetConsoleTextAttribute(h,6);
                                        cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                        SetConsoleTextAttribute(h,7);
                                        goto checkpoint14;
                                    }        
                            }        
                            else{
                                SetConsoleTextAttribute(h,6);
                                cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                SetConsoleTextAttribute(h,7);
                                goto checkpoint13;
                            }                     
            }
            //Gunting ketika KALAH
            else if(pilihan == 2 && pilihanbot == 3){
                    SetConsoleTextAttribute(h,12);
                    cout << "\t   --- KAMU KALAH ---\n\n" ;
                    SetConsoleTextAttribute(h,7);
                    cout<<"\tJawab Soal Berikut ini :\n";

                    angka1 = rand()%10 +1;
                    angka2 = rand()%10 +1;
                    
                    SetConsoleTextAttribute(h,14);
                    cout<<"\t\t"<<angka1<<" x "<<angka2<<" = ";
                    soal = angka1 * angka2;
                    cin>>jawab;
                    cout<<"\n";
                    SetConsoleTextAttribute(h,7);
                    
                     //ketika jawaban soal benar
                        if(jawab == soal){
                            SetConsoleTextAttribute(h,7);
            	            cout<<"\t   - Jawabanmu benar -\n\n";
                            SetConsoleTextAttribute(h,7);
                            checkpoint18:
                            cout<<"\tIngin bermain lagi (y/n) ? ";
	                        cin>>gas;
	                        cout<<endl;
                                if(gas=='y'||gas=='Y'){
                                    system ("cls");
                                    goto checkpoint1;
                                }
                                else if(gas=='n'||gas=='N'){
                                    system ("cls");
                                    SetConsoleTextAttribute(h,6);
                                    cout<<"\n\t\t\t\t\t- See you next time "<<nama<<" :) -\n\n";
                                    SetConsoleTextAttribute(h,7);
                                }
                                else{
                                    SetConsoleTextAttribute(h,6);
                                    cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                    SetConsoleTextAttribute(h,7);
                                    goto checkpoint18;
                                }
			            } 
			            //KETIKA JAWABAN SOAL SALAH
                        else{
                            //perulangan ketika jawab soal salah
                            while (jawab != soal)
                            {
                                SetConsoleTextAttribute(h,12);
                                cout<<"\t   - Jawabanmu salah -\n";
                                SetConsoleTextAttribute(h,7);

                                angka1 = rand()%10 +1;
                                angka2 = rand()%10 +1;

                                SetConsoleTextAttribute(h,14);
                                cout<<"\n\t\t"<<angka1<<" x "<<angka2<<" = ";
                                soal = angka1 * angka2;
                                cin>>jawab;
                                cout<<"\n";
                                SetConsoleTextAttribute(h,7);
                            }

                            //ketika jawab soal benar
                            SetConsoleTextAttribute(h,10);
                            cout<<"\t   - Jawabanmu benar -\n\n";
                            SetConsoleTextAttribute(h,7);
                            checkpoint19:
                            cout<<"Ingin bermain lagi (y/n) ? ";
	                        cin>>gas;
	                        cout<<endl;
	
	                        if(gas=='y'||gas=='Y'){
                                system ("cls");
                                goto checkpoint1;
                            }
                            else if(gas=='n'||gas=='N'){
                                system ("cls");
                                SetConsoleTextAttribute(h,6);
                                cout<<"\n\t\t\t\t\t- See you next time "<<nama<<" :) -\n\n";
                                SetConsoleTextAttribute(h,7);
                            }
                            else{
                                SetConsoleTextAttribute(h,6);
                                cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                SetConsoleTextAttribute(h,7);
                                goto checkpoint19;
                            }                             
			            } 
                }
            //BATU
            else if(pilihan ==3 && pilihanbot ==2) {
                    SetConsoleTextAttribute(h,10);
            		cout<< "\t   --- KAMU MENANG ---\n\n";
                    SetConsoleTextAttribute(h,7);
                    cout<<"\tSelamat...Kamu Mendapatkan 1 Tiket Keberuntungan!\n\n\n";
                    tiket = tiket + 1; 
                    cout<< "\tTiket Keberuntunganmu : "<<tiket<<endl<<endl;
                    checkpoint20:
                    cout<<"\n\tIngin menukar tiket keberuntungan (y/n) ? ";
                    cin>>gas;
                   		 if (gas == 'y' || gas == 'Y'){
                            system("cls");
                            list();
                            checkpoint5:
                            cout<<"\t Tiket Keberuntunganmu : "<<tiket<<endl<<endl;
                            SetConsoleTextAttribute(h,14);
                            cout<<"\n\t\t\t\t- Tekan ENTER untuk memulai gatcha -\n\n";
                            SetConsoleTextAttribute(h,7);
                            getch();
                                    //loading
                                    SetConsoleTextAttribute(h,14);
                                        //SetConsoleCP(437);
                                        //SetConsoleOutputCP(437);
                                        int bar1 = 177, bar2 = 219;

                                        cout << "\n\n\n\t\t\t\t";

                                        for(int i = 0; i < 36; i++)
                                            cout << (char)bar1;
                                            cout <<"\r";
                                            cout <<"\t\t\t\t";

                                            for(int i = 0; i < 36; i++)
                                            {
                                            cout << (char)bar2;
                                            Sleep(100);
                                            }
                                    SetConsoleTextAttribute(h,7);
                            gatcha = rand()%10 + 1;
                            	if(gatcha == 1){
                                        hadiah = "Kuota 20gb";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else if(gatcha == 2){
                                        hadiah = "ZONK";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,12);
                                        cout<<"\t\t\t\t\t Oops...Kamu "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else if (gatcha == 3){
                                        hadiah = "Pulsa 100k";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                     else if(gatcha == 4){
                                        hadiah = "ZONK";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,12);
                                        cout<<"\t\t\t\t\t Oops...Kamu "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else if (gatcha == 5){
                                        hadiah = "Uang 100k";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                     else if(gatcha == 6){
                                        hadiah = "ZONK";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,12);
                                        cout<<"\t\t\t\t\t Oops...Kamu "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else if (gatcha == 7){
                                        hadiah = "Saldo DANA 100k";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else if(gatcha == 8){
                                        hadiah = "ZONK";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,12);
                                        cout<<"\t\t\t\t\t Oops...Kamu "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                     else if (gatcha == 9){
                                        hadiah = "Saldo GOPAY";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else {
                                        hadiah = "Emas 1gr";
                                        tiket = tiket - 1;
                                        cout<<"\n\n\n";
                                        cout<<"\t-----------------------------"<<endl;
                                        cout<<"\t Kamu mendapatkan angka : "<<gatcha<<endl;
                                        cout<<"\t-----------------------------"<<endl<<endl;
                                        SetConsoleTextAttribute(h,10);
                                        cout<<"\t\t\t\t Selamat...Kamu Mendapatkan "<<hadiah<<endl;
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    
                                        //jika tiket habis
                                        if(tiket<=0){
                                            checkpoint22:
                                            cout<<"\n\n\tYahhh... Tiket kamu habis, apakah anda ingin bermain lagi (y/n) ? ";
                                            cin>>gas;
                                            cout<<endl;
                                                if(gas=='y'||gas=='Y'){
                                                    system ("cls");
                                                    goto checkpoint1;
                                                }
                                                else if(gas=='n'||gas=='N'){
                                                    system ("cls");
                                                    SetConsoleTextAttribute(h,6);
                                                    cout<<"\n\t\t\t\t\t- See you next time "<<nama<<" :) -\n\n";
                                                    SetConsoleTextAttribute(h,7);
                                                }
                                                else{
                                                    SetConsoleTextAttribute(h,6);
                                                    cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                                    SetConsoleTextAttribute(h,7);
                                                    goto checkpoint22;
                                                }
                                        }
                                        //jika tiket masih ada
                                        else {
                                            checkpoint23:
                                            cout<<"\n\n\t Kamu masih memiliki tiket, mau gatcha lagi (y/n) ? ";
                                            cin>>gas;
                                            cout<<endl<<endl;
                                                //JIKA INGIN GATCHA LAGI
                                                if (gas == 'y' || gas=='Y'){
                                                    goto checkpoint5;
                                                } 

                                                //JIKA TIDAK GATCHA
                                                else if (gas == 'n' || gas == 'N'){
                                                    checkpoint24 :
                                                    cout<<"\nIngin bermain lagi (y/n) ? ";
                                                    cin>>gas;
                                                    cout<<endl;
                                                            if(gas=='y'||gas=='Y'){
                                                                system ("cls");
                                                                goto checkpoint1;
                                                            }
                                                            else if(gas=='n'||gas=='N'){
                                                                system ("cls");
                                                                SetConsoleTextAttribute(h,6);
                                                                cout<<"\n\t\t\t\t\t- See you next time "<<nama<<" :) -\n\n";
                                                                SetConsoleTextAttribute(h,7);
                                                            }
                                                            else{
                                                                SetConsoleTextAttribute(h,6);
                                                                cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                                                SetConsoleTextAttribute(h,7);
                                                                goto checkpoint24;
                                                            }
                                                }
                                                else{
                                                    SetConsoleTextAttribute(h,6);
                                                    cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                                    SetConsoleTextAttribute(h,7);
                                                    goto checkpoint23;
                                                }
                                        }
            	            }
            	            //jika tidak menukar tiket
                            else if (gas == 'n' || gas == 'N'){
                                checkpoint21 :
                                cout<<"\n\tIngin bermain lagi (y/n) ? ";
                                cin>>gas;
                                cout<<endl;
                                    if(gas=='y'||gas=='Y'){
                                        system ("cls");
                                        goto checkpoint1;
                                    }
                                    else if(gas=='n'||gas=='N'){
                                        system ("cls");
                                        SetConsoleTextAttribute(h,6);
                                        cout<<"\n\t\t\t\t\t- See you next time "<<nama<<" :) -\n\n";
                                        SetConsoleTextAttribute(h,7);
                                    }
                                    else{
                                        SetConsoleTextAttribute(h,6);
                                        cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                        SetConsoleTextAttribute(h,7);
                                        goto checkpoint21;
                                    }    
                            }
                            else{
                                SetConsoleTextAttribute(h,6);
                                cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                SetConsoleTextAttribute(h,7);
                                goto checkpoint20;
                            }
			}
            //Batu ketika KALAH
			else if(pilihan == 3 && pilihanbot == 1){
				    SetConsoleTextAttribute(h,12);
                    cout << "\t   --- KAMU KALAH ---\n\n" ;
                    SetConsoleTextAttribute(h,7);
                    cout<<"\tJawab Soal Berikut ini :\n";

                    angka1 = rand()%10 +1;
                    angka2 = rand()%10 +1;

                    SetConsoleTextAttribute(h,14);
                    cout<<"\t\t"<<angka1<<" x "<<angka2<<" = ";
                    soal = angka1 * angka2;
                    cin>>jawab;
                    cout<<"\n";
                    SetConsoleTextAttribute(h,7);

                     //ketika jawaban soal benar
                        if(jawab == soal){
            	            SetConsoleTextAttribute(h,10);
            	            cout<<"\t   - Jawabanmu benar -\n\n";
                            SetConsoleTextAttribute(h,7);
                            checkpoint25:
                            cout<<"\tIngin bermain lagi (y/n) ? ";
	                        cin>>gas;
	                        cout<<endl;
	
                                if(gas=='y'||gas=='Y'){
                                    system ("cls");
                                    goto checkpoint1;
                                }
                                else if(gas=='n'||gas=='N'){
                                    system ("cls");
                                    SetConsoleTextAttribute(h,6);
                                    cout<<"\n\t\t\t\t\t- See you next time "<<nama<<" :) -\n\n";
                                    SetConsoleTextAttribute(h,7);
                                }
                                else{
                                    SetConsoleTextAttribute(h,6);
                                    cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                    SetConsoleTextAttribute(h,7);
                                    goto checkpoint25;
                                }
			            }   
                        //KETIKA JAWABAN SOAL SALAH
                        else{
                            while (jawab != soal)
                            {
                                SetConsoleTextAttribute(h,12);
                                cout<<"\t   - Jawabanmu salah -\n";
                                SetConsoleTextAttribute(h,7);

                                SetConsoleTextAttribute(h,14);

                                angka1 = rand()%10 +1;
                                angka2 = rand()%10 +1;

                                cout<<"\n\t\t"<<angka1<<" x "<<angka2<<" = ";
                                soal = angka1 * angka2;
                                cin>>jawab;
                                cout<<"\n";
                                SetConsoleTextAttribute(h,7);     
                            }

                            //ketika jawab soal benar
                            SetConsoleTextAttribute(h,10);
                            cout<<"\t   - Jawabanmu benar -\n\n";
                            SetConsoleTextAttribute(h,7);
                            checkpoint26:
                            cout<<"\tIngin bermain lagi (y/n) ? ";
	                        cin>>gas;
	                        cout<<endl;
	
	                        if(gas=='y'||gas=='Y'){
                                system ("cls");
                                goto checkpoint1;
                            }
                            else if(gas=='n'||gas=='N'){
                                system ("cls");
                                SetConsoleTextAttribute(h,6);
		                        cout<<"\n\t\t\t\t\t- See you next time "<<nama<<" :) -\n\n";
                                SetConsoleTextAttribute(h,7);
                            }
                            else{
                                SetConsoleTextAttribute(h,6);
                                cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
                                SetConsoleTextAttribute(h,7);
                                goto checkpoint26;
                            }                             
			            }
                }
        }
    }
    else if(gas=='n'||gas=='N'){
        SetConsoleTextAttribute(h,6);
		cout<<"\n\t\t\t\t\t- See you next time "<<nama<<" :) -\n\n";
        SetConsoleTextAttribute(h,7);
	}
    else{
        SetConsoleTextAttribute(h,6);
        cout<<"\n\t\t\t\t\t- Maaf... pilihan tidak tersedia :( -\n\n";
        SetConsoleTextAttribute(h,7);
    }
}

void rules(){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    cout<<"\n";
    SetConsoleTextAttribute(h,8);
    cout<<"\t\t===== ATURAN STANDAR KERTAS GUNTING BATU =====\n";
    SetConsoleTextAttribute(h,7);
    cout<<"\t\t1. Batu Mengalahkan Gunting\n";
    cout<<"\t\t2. Gunting Mengalahkan Kertas\n";
    cout<<"\t\t3. Kertas Mengalahkan Batu\n\n";

    SetConsoleTextAttribute(h,8);
    cout<<"\t\t===== PERATURAN GAME KERTAS GUNTING BATU =====\n";
    SetConsoleTextAttribute(h,7);
    cout<<"\t\t1. Jika memenangkan permainan akan mendapatkan Tiket Keberuntungan\n";
    cout<<"\t\t2. Tiket Keberuntungan dapat dipakai untuk mendapatkan hadiah menarik\n";
    cout<<"\t\t3. Jika kalah dalam permainan akan mendapatkan Hukuman\n";
    cout<<"\t\t4. Hukuman berupa Soal Perkalian Matematika\n";
    cout<<"\t\t5. Jika soal Hukuman dijawab salah, akan terus diberi soal hingga anda memberikan jawaban yang benar \n";
    cout<<"\t\t6. Jika Draw permainan akan di ulang hingga mendapat pemenang\n\n\n";
}

void list(){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    cout<<"\n\n";
    SetConsoleTextAttribute(h,9);
    cout<<"\t\t\t\t============ LIST HADIAH ============\n";
    SetConsoleTextAttribute(h,7);
    cout<<"\t\t\t\t (1) Kuota 20gb";
    cout<<"\t(6) ZONK\n";
    cout<<"\t\t\t\t (2) ZONK";
    cout<<"\t(7) Saldo DANA 100k\n";
    cout<<"\t\t\t\t (3) Pulsa 100k";
    cout<<"\t(8) ZONK\n";
    cout<<"\t\t\t\t (4) ZONK";
    cout<<"\t(9) Saldo GOPAY 100k\n";
    cout<<"\t\t\t\t (5) Uang 100k";
    cout<<"\t(10) Emas 1gr\n\n\n";
}