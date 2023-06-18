#include <stdio.h>
int main() {

    /*
    deneme
    Oyuna başlamadan önce oyunun nasıl yapılacağı hakkında fikir alma amaçlı olarak internetten araştırma yaptım ama kodun tamamı kendimce yazıldı herhangi bir kopyala yapıştır durumu bulunmuyor. Benzerlik gösterirse diye dile getirdim. 
    */

char player1[32],player2[32],mark,gameBox[10]={'0','1','2','3','4','5','6','7','8','9'}; // kullanıcıları işaretleri ve sayısal değerleri burada gösterdik sayısal değerlerin int değilde char olma sebebi X ve O ile değiştirmede herhangi bir sorun yaşamamak
// Not: gameBox arrayi 0-9 arasında olma sebebi gameBox[0] yazınca 1 değilde gameBox[1] yazınca 1 vermesi için kısaca kolaylık olsun diye.
// Kullanıcı isimleri bildiğim kadarı ile max 32 karakter olabilir ondan dolayı player1 ve player2 max 32 karakter içerebilir.
int choise,check,i; // burada seçim ve seçimlerin doğruluğunu kontrol etmek için aldığımız 2 farklı değişken ve döngü için kullanacağımız değişken bulunuyor.

printf("\n\n\tXOX Oyunu\n\n"); // Oyun Tahtası burada gösteriliyor
printf("    Player 1(X)   -   Player 2(O)\n");
printf("\t        |       |   \n");
printf("\t    %c   |   %c   |   %c\n",gameBox[1],gameBox[2],gameBox[3]);
printf("\t________|_______|_____\n");
printf("\t        |       |   \n");
printf("\t    %c   |   %c   |   %c\n",gameBox[4],gameBox[5],gameBox[6]);
printf("\t________|_______|_____\n");
printf("\t        |       |   \n");
printf("\t    %c   |   %c   |   %c\n",gameBox[7],gameBox[8],gameBox[9]);
printf("\t________|_______|_____\n\n");

printf("Player 1: "); // kullanıcı isim girdileri buraya
scanf("%s", &player1);
printf("Player 2: ");
scanf("%s", &player2);

for(i = 1; i <= 10; i++) { // Burada max 10 işaretleme yapılabileceği için 10 defa döngüye sokuyoruz (NOT: 10 defa sokulma sebebi eğer kimse kazanamazsa oyunu kimsenin kazanamadığını göstermek için tekrar bi döngüye sokuyoruz)
printf("\n\n\tXOX Oyunu\n\n"); // Oyun Tahtası burada gösteriliyor ve her dönüşte yeni hali ekrana yansıtılıyor.
printf("         %s(X)   -   %s(O)\n",player1,player2); //İsim uzunluğundan dolayı kayabilir.
printf("\t        |       |   \n");
printf("\t    %c   |   %c   |   %c\n",gameBox[1],gameBox[2],gameBox[3]);
printf("\t________|_______|_____\n");
printf("\t        |       |   \n");
printf("\t    %c   |   %c   |   %c\n",gameBox[4],gameBox[5],gameBox[6]);
printf("\t________|_______|_____\n");
printf("\t        |       |   \n");
printf("\t    %c   |   %c   |   %c\n",gameBox[7],gameBox[8],gameBox[9]);
printf("\t________|_______|_____\n\n");
// Aşağıdaki if kısmı eğer XXX veya OOO gelirse kazananı belirtmek için kontrol ediyor. (i-1) yapılma sebebi döngüde i olunca 1. kazansa bile 2. kazandı olarak gösteriyordu.
if(gameBox[1] == gameBox[2] && gameBox[2] == gameBox[3]) {
    if((i-1)%2 !=0) {
        return printf("%s (Player 1) Adli Oyuncu Kazandi.", player1);
    } else {
        return printf("%s (Player 2) Adli Oyuncu Kazandi.", player2);
    }
} else if(gameBox[4] == gameBox[5] && gameBox[5] == gameBox[6]){
    if((i-1)%2 !=0) {
        return printf("%s (Player 1) Adli Oyuncu Kazandi.", player1);
    } else {
        return printf("%s (Player 2) Adli Oyuncu Kazandi.", player2);
    }
} else if(gameBox[7] == gameBox[8] && gameBox[8] == gameBox[9]) {
    if((i-1)%2 !=0) {
        return printf("%s (Player 1) Adli Oyuncu Kazandi.", player1);
    } else {
        return printf("%s (Player 2) Adli Oyuncu Kazandi.", player2);
    }
} else if(gameBox[1] == gameBox[4] && gameBox[4] == gameBox[7]) {
    if((i-1)%2 !=0) {
        return printf("%s (Player 1) Adli Oyuncu Kazandi.", player1);
    } else {
        return printf("%s (Player 2) Adli Oyuncu Kazandi.", player2);
    }
} else if(gameBox[2] == gameBox[5] && gameBox[5] == gameBox[8]) {
    if((i-1)%2 !=0) {
        return printf("%s (Player 1) Adli Oyuncu Kazandi.", player1);
    } else {
        return printf("%s (Player 2) Adli Oyuncu Kazandi.", player2);
    }
} else if(gameBox[3] == gameBox[6] && gameBox[6] == gameBox[9]) {
    if((i-1)%2 !=0) {
        return printf("%s (Player 1) Adli Oyuncu Kazandi.", player1);
    } else {
        return printf("%s (Player 2) Adli Oyuncu Kazandi.", player2);
    }
} else if(gameBox[1] == gameBox[5] && gameBox[5] == gameBox[9]) {
    if((i-1)%2 !=0) {
        return printf("%s (Player 1) Adli Oyuncu Kazandi.", player1);
    } else {
        return printf("%s (Player 2) Adli Oyuncu Kazandi.", player2);
    }
} else if(gameBox[7] == gameBox[5] && gameBox[5] == gameBox[3]) {
    if((i-1)%2 !=0) {
        return printf("%s (Player 1) Adli Oyuncu Kazandi.", player1);
    } else {
        return printf("%s (Player 2) Adli Oyuncu Kazandi.", player2);
    } // Aşağıdaki if kısmı eğer tahtada hiç bir sayısal değer kalmazsa ve kimse kazanamazsa diye gösteriliyor. 
} else if(gameBox[1] != '1' && gameBox[2] != '2' && gameBox[3] != '3' && gameBox[4] != '4' && gameBox[5] != '5' && gameBox[6] != '6' && gameBox[7] != '7' && gameBox[8] != '8' && gameBox[9] != '9') {
    i = 2; // bu kısım i değerini 2 den başlatıyor ki 2. oyuncu önce başlasın ve alt kısımda da değerler eski haline getiriliyor ve oyun bozulmadan devam ediyor.
    gameBox[1] = '1',gameBox[2] = '2',gameBox[3] = '3',gameBox[4] = '4',gameBox[5] = '5',gameBox[6] = '6',gameBox[7] = '7',gameBox[8] = '8',gameBox[9] = '9';
    printf("%s-%s Adli Oyuncularin Oyunu Berabere Bitmistir.\n", player1,player2);
    
}
// Burada sayısal değere göre hangi kullanıcının oyun sırası geldiğini gösteren ve seçim yaptıran if kısmı bulunuyor.
if(i%2 != 0) {
    printf("%s(Player 1), lutfen bir secim yapiniz: ",player1);
    scanf("%d", &choise);
} else {
    printf("%s(Player 2), lutfen bir secim yapiniz: ", player2);
    scanf("%d", &choise);
}
//Burada eğer girdiği SAYISAL değer 1-9 arasında değilse oyunu durduruyor. (Sadece SAYISAL değere cevap veriyor.)
if(choise != 1 && choise != 2 && choise != 3 && choise != 4 && choise != 5 && choise != 6 && choise != 7 && choise != 8 && choise != 9) return printf("Lutfen 1-9 arasi isaretleme yapalim!");
// Burada bulunan switch case yapısı yapılan seçime göre işaretleme yapıyor. 
switch(choise) {
    case 1:
        {
            if(gameBox[1] == '1') {
            if(i%2 != 0) {
                mark = 'X';
                gameBox[1] = mark;
            } else {
                mark = 'O';
                gameBox[1] = mark;
            }
            } else printf("Aynı Numaraya X veya O giremezsiniz!");
        }
    break;
    case 2:
        {
            if(gameBox[2] == '2') {
            if(i%2 != 0) {
                mark = 'X';
                gameBox[2] = mark;
            } else {
                mark = 'O';
                gameBox[2] = mark;
            }
            } else printf("Aynı Numaraya X veya O giremezsiniz!");
        }
    break;
    case 3:
        {
            if(gameBox[3] == '3') {
            if(i%2 != 0) {
                mark = 'X';
                gameBox[3] = mark;
            } else {
                mark = 'O';
                gameBox[3] = mark;
            }
            } else printf("Aynı Numaraya X veya O giremezsiniz!");
        }
    break;
    case 4:
        {
            if(gameBox[4] == '4') {
            if(i%2 != 0) {
                mark = 'X';
                gameBox[4] = mark;
            } else {
                mark = 'O';
                gameBox[4] = mark;
            }
            } else printf("Aynı Numaraya X veya O giremezsiniz!");
        }
    break;
    case 5:
        {
            if(gameBox[5] == '5') {
            if(i%2 != 0) {
                mark = 'X';
                gameBox[5] = mark;
            } else {
                mark = 'O';
                gameBox[5] = mark;
            }
            } else printf("Aynı Numaraya X veya O giremezsiniz!");
        }
    break;
    case 6:
        {
            if(gameBox[6] == '6') {
            if(i%2 != 0) {
                mark = 'X';
                gameBox[6] = mark;
            } else {
                mark = 'O';
                gameBox[6] = mark;
            }
            } else printf("Aynı Numaraya X veya O giremezsiniz!");
        }
    break;
    case 7:
        {
            if(gameBox[7] == '7') {
            if(i%2 != 0) {
                mark = 'X';
                gameBox[7] = mark;
            } else {
                mark = 'O';
                gameBox[7] = mark;
            }
            } else printf("Aynı Numaraya X veya O giremezsiniz!");
        }
    break;
    case 8:
        {
            if(gameBox[8] == '8') {
            if(i%2 != 0) {
                mark = 'X';
                gameBox[8] = mark;
            } else {
                mark = 'O';
                gameBox[8] = mark;
            }
            } else printf("Aynı Numaraya X veya O giremezsiniz!");
        }
    break;
    case 9:
        {
            if(gameBox[9] == '9') {
            if(i%2 != 0) {
                mark = 'X';
                gameBox[9] = mark;
            } else {
                mark = 'O';
                gameBox[9] = mark;
            }
            } else printf("Aynı Numaraya X veya O giremezsiniz!");
        }
    break;
}
}
}
