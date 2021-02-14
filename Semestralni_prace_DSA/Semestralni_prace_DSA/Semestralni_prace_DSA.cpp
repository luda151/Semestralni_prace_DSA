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



/*
Add() - Přidá nový prvek do listu.
Clear() - Vymaže všechny prvky.
Contains() - Vrátí true, pokud list obsahuje daný prvek.
CopyTo() - Metodu již známe z pole, umožňuje zkopírovat prvky z listu do pole.
//IndexOf() - Vrátí index prvního výskytu daného prvku v listu.
//Insert() - Vloží na daný index nový prvek(a další prvky posune).
Remove() - Vymaže daný prvek.Tato funkce je velmi užitečná v případě, že máme v Listu instance nějaké třídy(např.uživatele), nemusíme si držet jejich číselné indexy, jen zavoláme např.list.Remove(karel), kdy předáme konkrétní instanci, která se má ze seznamu odebrat..
//RemoveAt() - Vymaže prvek na daném indexu.
//AddRange() - Přidá do listu prvky z předaného pole. Podobně můžeme volat i metody InsertRange() a RemoveRange(). Je dobrý nápad metodu využívat, jelikož nám ušetří cyklus. Jedinou záludností je, že umí přidávat pouze z pole. Za chvíli si ukážeme co s tím.
//AsReadOnly() - Vrátí instanci listu, ze které lze prvky pouze číst. Vhodné pro zapouzdření prvků kolekce.
Count - Vlastnost nesoucí počet prvků v listu. Všimněte si, že se vlastnost nejmenuje Length (jako u pole), jelikož délka listu je o něco větší. Pravou délku listu získáme vlastností Capacity, i když nám tento údaj asi k ničemu není.
Find() - Vyhledá daný prvek pomocí predikátu (který je, jak již víme, delegátem). Je to velmi jednoduché a efektivní, jelikož můžeme použít zápis přes lambda funkce. Ukažme si, jak by se na Listu typu int vyhledalo číslo větší než 25:
FindAll() - Podobně jako Find() můžeme používat metodu FindAll(), která najde všechny odpovídající prvky a vrátí nový List, který tyto nalezené prvky obsahuje:
Exists() - Exists() funguje podobně jako Find(), pouze nevrací nalezený prvek ale true pokud byl nějaký nalezený, jinak false.
//LastIndexOf() - Obdoba metody IndexOf(), vrací index posledního výskytu daného prvku v listu.
RemoveAll() - Odstraní všechny prvky, které odpovídají danému predikátu.
Reverse() - Převrátí list tak, aby byl 1. prvek jako poslední a naopak poslední jako první.
Sort() - Setřídí list. Je důležité, aby jeho prvky obsahovaly rozhraní IComparable, jinak metoda vyvolá výjimku. Základní třídy a struktury z .NETu IComparable implementují, u svých tříd ho umíme dodat.
ToArray() - Velmi používaná metoda, která vytvoří pole prvků z listu a to vrátí. Jelikož pole je standardní výměnná struktura v .NETu, budeme metodu používat velmi často. Všimněte si, že např. metoda AddRange() bere v parametru pole, nikoli list. To aby byla univerzální. Pokud tedy chceme zkopírovat prvky jednoho listu do druhého, uděláme to takto:
*/