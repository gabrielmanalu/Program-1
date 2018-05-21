#include <stdio.h> //library standard input & output untuk program c
#include <string.h> //library string

/*	Program Kalkulator Cinta ini dibuat dengan penuh perasaan oleh kami. Enjoyy :)
	Kelompok 19 :
		[1] Sandikha Rahardi - 1606822983
		[2] Gabriel Anderson - 1606876613
*/

int main(){
	system("cls"); //blank screen
	printf("*       *  * * * *  *            * * * *  * * * * *  * *   * *  * * * *\n*       *  *        *          *          *       *  *  * *  *  *\n*   *   *  * * *    *          *          *       *  *   *   *  * * *\n*   *   *  *        *          *          *       *  *       *  *\n* * * * *  * * * *  * * * * *    * * * *  * * * * *  *       *  * * * *\n========================   LOVE CALCULATOR   ==========================\n\n"); //judul
	printf("  Program ini adalah program untuk mengukur kecocokan Kamu dengan Dia\n\n=======================================================================\n\n"); //tujuan
	printf("           [1] MULAI GAME     [2] PETUNJUK    [3] KELUAR\n\n"); //menu program
	printf(">> "); //input menu's area
	char menu;
	scanf("%s",&menu);
	
	if(menu=='1'){ //start game
		return game();
	}
	else if(menu=='2'){ //explanation
		system("cls");
		printf("========================   LOVE CALCULATOR   ============================\n\n");
		printf("Selamat datang di program terbaik kami !\n\nProgram 'Love Calculator' ini bertujuan untuk hiburan semata. Perhitungan\nhasil persentase cinta Anda kepada pasangan Anda ditentukan dari beberapa\nparameter seperti :\n1. Jenis Huruf Nama Anda dan Pasangan\n2. Umur Anda dan Pasangan Anda\n3. Rumus Perhitungan Percintaan\n4. dll...\n\nBerikut merupakan petunjuk cara bermain di program 'Love Calculator' :\n1. Masukan Nama Anda\n2. Masukan Nama Pasangan Anda\n3. Masukan Umur Anda\n4. Masukan Umur Pasangan Anda\n5. Nilai persentase, detail informasi, dan saran akan kami tampilkan\n   pada program\n\nCukup mudah bukan ? :)\nMari kita mulai permainan\n\nPress any key to start game!\n>>");
		getch();
		return game();
	}
	else if(menu=='3'){ //exit
		printf("\n=======================================================================\n\n            Terima kasih telah menjalankan program ini\n\n                       See you next time :)\n\n=======================================================================\n\nPress any key to exit game!\n>>");
		getch();
		return 0;
	}
	else{ //menu == not found ==>> stay in home page
		printf("\n=======================================================================\n\n                 Menu yang Kamu masukan tidak tersedia\n                           Silakan coba lagi\n\n=======================================================================\n\nPress any key!\n>>");
		getch();
		return main();
	}
}

// * source : https://www.programmingsimplified.com/c/program/c-program-change-case
void lower_string(char []); //make all characters in lowercase

int game(){
	system("cls"); //blank screen
	char choice;
	do{
		char yName[100], pName[100];
		int i, yAge, pAge, fVokal=0,fHurufawalb=0,fHurufawalc=0,fHurufawald=0, nilaiVokal=0, nilaiAwalb=0, nilaiAwalc=0, nilaiAwald=0;
		float hasilpersentase;
		
		printf("=======================================================================\n                           LOVE CALCULATOR\n=======================================================================\n\n");
		printf("Masukan Nama Kamu : ");
		getchar();
		gets(yName);
		lower_string(yName);
		printf("Masukan Nama Pasanganmu : ");
		gets(pName);
		lower_string(pName);
		printf("\nUmur Kamu : ");
		scanf("%d",&yAge);
		printf("Umur Pasanganmu : ");
		scanf("%d",&pAge);
		
		for(i = 0; yName[i] != '\0'; ++i){ //i = words in your name
			if(yName[i]=='a' || yName[i]=='i' || yName[i]=='u' || yName[i]=='e' || yName[i]=='o'){
				fVokal = fVokal + 1;
				nilaiVokal = fVokal * 3;
			}
			else if(yName[i]=='b' || yName[i]=='f' || yName[i]=='j' || yName[i]=='m' || yName[i]=='q' || yName[i]=='t' || yName[i]=='x'){
				fHurufawalb = fHurufawalb + 1;
				nilaiAwalb = fHurufawalb * 2;
			}
			else if(yName[i]=='c' || yName[i]=='g' || yName[i]=='k' || yName[i]=='n' || yName[i]=='r' || yName[i]=='v' || yName[i]=='y'){
				fHurufawalc = fHurufawalc + 1;
				nilaiAwalc = fHurufawalc * 1;
			}
			else if(yName[i]=='d' || yName[i]=='h' || yName[i]=='l' || yName[i]=='p' || yName[i]=='s' || yName[i]=='w' || yName[i]=='z' || yName[i]==' '){
				fHurufawald = fHurufawald + 1;
				nilaiAwald = fHurufawald * 4;
			}
			else{
				printf("\n\nTerdapat huruf yang tidak diketahui\nSilakan coba kembali :)\n\nPress any key!\n>>");
				getch();
				return game();
			}
		}
		
		for(i = 0; pName[i] != '\0'; ++i){ //i = words in your name
			if(pName[i]=='a' || pName[i]=='i' || pName[i]=='u' || pName[i]=='e' || pName[i]=='o'){
				fVokal = fVokal + 1;
				nilaiVokal = fVokal * 3;
			}
			else if(pName[i]=='b' || pName[i]=='f' || pName[i]=='j' || pName[i]=='m' || pName[i]=='q' || pName[i]=='t' || pName[i]=='x'){
				fHurufawalb = fHurufawalb + 1;
				nilaiAwalb = fHurufawalb * 1;
			}
			else if(pName[i]=='c' || pName[i]=='g' || pName[i]=='k' || pName[i]=='n' || pName[i]=='r' || pName[i]=='v' || pName[i]=='y'){
				fHurufawalc = fHurufawalc + 1;
				nilaiAwalc = fHurufawalc * 2;
			}
			else if(pName[i]=='d' || pName[i]=='h' || pName[i]=='l' || pName[i]=='p' || pName[i]=='s' || pName[i]=='w' || pName[i]=='z' || pName[i] == ' '){
				fHurufawald = fHurufawald + 1;
				nilaiAwald = fHurufawald * 4;
			}
			else{
				printf("\n\nTerdapat huruf yang tidak diketahui\nSilakan coba kembali :)\n\nPress any key!\n>>");
				getch();
				return game();
			}
		}
		
		hasilpersentase = (float)(nilaiVokal+nilaiAwalb+nilaiAwalc+nilaiAwald)*25/(strlen(yName)+strlen(pName)); //rumus kalkulator cinta
		
		if(hasilpersentase>100){ //max 100%
			hasilpersentase=100;
		}
		
		if(yAge >= 17 && pAge >= 17){ //adult
			printf("\n\n========================= HASIL PERCINTAAN ============================\n\n>> Persentase = %.2f %%", hasilpersentase); //the result after calculate
			if(hasilpersentase > 0 && hasilpersentase <= 25){ //so bad
				printf("\n\n>> Jenis Cinta : CINTA NOT FOUND !!\n\n>> Maaf kisah cinta Kamu terlalu rumit, segera lakukan pemeriksaan wajah\n   di Dokter Terdekat");
			}
			else if(hasilpersentase > 25 && hasilpersentase <= 50){ //just friend
				printf("\n\n>> Jenis Cinta : JUST FRIEND !!\n\n>> Cinta ini membunuhmu ! Segera berpindah ke lain hati :(");
			}
			else if(hasilpersentase > 50 && hasilpersentase <=75){ //maybe yes, maybe no
				printf("\n\n>> Jenis Cinta : BELUM DIRESTUI ORANG TUA !!\n\n>> Cobalah untuk lebih jujur dengan perasaanmu saat ini. Ungkapkanlah\n   kepada orang tuanya :)");
			}
			else{ //power of love
				printf("\n\n>> Jenis Cinta : CINTA SEJATI !!\n\n>> Dapat dipastikan Kamu dan Pasanganmu cocok dalam menjalani hubungan\n   ini. Jangan Khawatir teman, segera nyatakan cintamu :):)");
			}
			printf("\n\n>> Kamu dan Pasanganmu sudah cukup umur untuk menjalani cinta ini\n\n");
		}
		else if(yAge <= 17 && yAge >=1 && pAge <= 17 && pAge >=1){ //kids
			printf("\n\n========================= HASIL PERCINTAAN ============================\n\n>> Persentase = %.2f %%", hasilpersentase); //the result after calculate
			if(hasilpersentase > 0 && hasilpersentase <= 25){ //so bad
				printf("\n\n>> Jenis Cinta : CINTA NOT FOUND !!\n\n>> Maaf kisah cinta Kamu terlalu rumit, segera lakukan pemeriksaan wajah\n   di Dokter Terdekat");
			}
			else if(hasilpersentase > 25 && hasilpersentase <= 50){ //just friend
				printf("\n\n>> Jenis Cinta : JUST FRIEND !!\n\n>> Cinta ini membunuhmu ! Segera berpindah ke lain hati :(");
			}
			else if(hasilpersentase > 50 && hasilpersentase <=75){ //maybe yes, maybe no
				printf("\n\n>> Jenis Cinta : BELUM DIRESTUI ORANG TUA !!\n\n>> Cobalah untuk lebih jujur dengan perasaanmu saat ini. Ungkapkanlah\n   kepada orang tuanya :)");
			}
			else{ //power of love
				printf("\n\n>> Jenis Cinta : CINTA SEJATI !!\n\n>> Dapat dipastikan Kamu dan Pasanganmu cocok dalam menjalani hubungan\n   ini. Jangan Khawatir teman, segera nyatakan cintamu :):)");
			}
			printf("\n\n>> Kamu dan Pasanganmu belum cukup umur untuk menjalani cinta ini\n\n");
		}
		else{
			printf("\n\nTerdapat umur yang mustahil\nSilakan coba kembali :)\n\nPress any key!\n>>");
			getch();
			return game();
		}
		
		printf("=======================================================================\n\nIngin Mengulang Program ?\n[0] Keluar Program\n[1] Lanjut Permainan :)\n\n>> ");
        scanf("%s",&choice);
        
        if(choice == '0'){
        	return 0;
		}
		else if(choice == '1'){
        	return game();
		}
		else{
			printf("\n\nTerdapat pilihan yang tidak diketahui\nSilakan coba kembali :)\n\nPress any key!\n>>");
			getch();
			return game();
		}
	}while(choice!='0');
}

// *sumber : https://www.programmingsimplified.com/c/program/c-program-change-case
void lower_string(char s[]) {
   int c = 0;
   while (s[c] != '\0') {
      if (s[c] >= 'A' && s[c] <= 'Z') {
         s[c] = s[c] + 32;
      }
      c++;
   }
}
