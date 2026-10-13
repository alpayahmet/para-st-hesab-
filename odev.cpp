#include <iostream>
#include <cmath>

int main() {
    
    double urunTutari, odenenPara;

    
    printf("Urun tutarini giriniz (TL): ");
    scanf("%lf", &urunTutari);

    printf("Odenen parayi giriniz (TL): ");
    scanf("%lf", &odenenPara);

    
    double paraUstuTL = odenenPara - urunTutari;
    int paraUstuKurus = round(paraUstuTL * 100);

    printf("\n--- Kasa Raporu ---\n");
    printf("Net Para Ustu: %.2lf TL (%d Kurus)\n", paraUstuTL, paraUstuKurus);
    printf("-------------------\nVerilecek Kupurler:\n");

    int adet, toplamKupurSayisi = 0;

    
    adet = paraUstuKurus / 20000;
    paraUstuKurus %= 20000;
    toplamKupurSayisi += adet;
    adet && printf("- %d adet 200 TL Banknot\n", adet);

    
    adet = paraUstuKurus / 10000;
    paraUstuKurus %= 10000;
    toplamKupurSayisi += adet;
    adet && printf("- %d adet 100 TL Banknot\n", adet);

    
    adet = paraUstuKurus / 5000;
    paraUstuKurus %= 5000;
    toplamKupurSayisi += adet;
    adet && printf("- %d adet 50 TL Banknot\n", adet);

    
    adet = paraUstuKurus / 2000;
    paraUstuKurus %= 2000;
    toplamKupurSayisi += adet;
    adet && printf("- %d adet 20 TL Banknot\n", adet);

    
    adet = paraUstuKurus / 1000;
    paraUstuKurus %= 1000;
    toplamKupurSayisi += adet;
    adet && printf("- %d adet 10 TL Banknot\n", adet);

    
    adet = paraUstuKurus / 500;
    paraUstuKurus %= 500;
    toplamKupurSayisi += adet;
    adet && printf("- %d adet 5 TL Banknot\n", adet);

    
    adet = paraUstuKurus / 100;
    paraUstuKurus %= 100;
    toplamKupurSayisi += adet;
    adet && printf("- %d adet 1 TL Madeni Para\n", adet);

    
    adet = paraUstuKurus / 50;
    paraUstuKurus %= 50;
    toplamKupurSayisi += adet;
    adet && printf("- %d adet 50 Kurus Madeni Para\n", adet);

    
    adet = paraUstuKurus / 25;
    paraUstuKurus %= 25;
    toplamKupurSayisi += adet;
    adet && printf("- %d adet 25 Kurus Madeni Para\n", adet);

    
    adet = paraUstuKurus / 10;
    paraUstuKurus %= 10;
    toplamKupurSayisi += adet;
    adet && printf("- %d adet 10 Kurus Madeni Para\n", adet);

    
    adet = paraUstuKurus / 5;
    paraUstuKurus %= 5;
    toplamKupurSayisi += adet;
    adet && printf("- %d adet 5 Kurus Madeni Para\n", adet);

    
    adet = paraUstuKurus / 1;
    paraUstuKurus %= 1;
    toplamKupurSayisi += adet;
    adet && printf("- %d adet 1 Kurus Madeni Para\n", adet);

    printf("-------------------\n");
    printf("Musteriye verilen toplam kupur sayisi: %d\n", toplamKupurSayisi);

    return 0;
}

