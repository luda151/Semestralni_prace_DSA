// Semestralni_prace_DSA.cpp : Tento soubor obsahuje funkci main. ProvÃ¥dÃnÃ­ programu se tam zahajuje a ukonÃ¨uje.
//

#include <iostream>
#include "Menu.h"
using namespace std;


int main()
{
    locale cze(R"(Czech)");
    locale::global(cze);

    cout << "bulice01_sp\n";
    Menu menuObj;     
    menuObj.menu();
}

// SpuÂštÃnÃ­ programu: Ctrl+F5 nebo nabÃ­dka Ladit > Spustit bez ladÃnÃ­
// LadÃnÃ­ programu: F5 nebo nabÃ­dka Ladit > Spustit ladÃnÃ­

// Tipy pro zahÃ¥jenÃ­ prÃ¥ce:
//   1. K pÃ¸idÃ¥nÃ­ nebo sprÃ¥vÃ souborÃš pouÂžijte okno PrÃšzkumnÃ­k Ã¸eÂšenÃ­.
//   2. Pro pÃ¸ipojenÃ­ ke sprÃ¥vÃ zdrojovÃŠho kÃ³du pouÂžijte okno Team Explorer.
//   3. K zobrazenÃ­ vÃ½stupu sestavenÃ­ a dalÂšÃ­ch zprÃ¥v pouÂžijte okno VÃ½stup.
//   4. K zobrazenÃ­ chyb pouÂžijte okno Seznam chyb.
//   5. Pokud chcete vytvoÃ¸it novÃŠ soubory kÃ³du, pÃ¸ejdÃte na Projekt > PÃ¸idat novou poloÂžku. Pokud chcete pÃ¸idat do projektu existujÃ­cÃ­ soubory kÃ³du, pÃ¸ejdÃte na Projekt > PÃ¸idat existujÃ­cÃ­ poloÂžku.
//   6. Pokud budete chtÃ­t v budoucnu znovu otevÃ¸Ã­t tento projekt, pÃ¸ejdÃte na Soubor > OtevÃ¸Ã­t > Projekt a vyberte pÃ¸Ã­sluÂšnÃ½ soubor .sln.
