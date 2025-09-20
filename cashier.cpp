/*********************************************************************
* CS1B – G2: Serendipity
*  Partner A: Sean Hanabusa (ID) — role: Cashier.cpp
*  Partner B: Kayden Tarvaran (ID) — role: invmenu.cpp, main.cpp, reports.cpp
*  Date: 2025‑09‑18
*  Purpose: Menu navigation and validation practice: loop Main/Inventory/Reports, call function stubs, and print a two-decimal cashier test receipt
*  Build:   g++ -std=c++20 mainmenu.cpp cashier.cpp invmenu.cpp reports.cpp -o serendipity
***********************************************************************/

#include <iostream>
#include <iomanip>
#include <cctype>
#include <vector>
#include <thread> //needed for pauseSeconds(x);
#include <chrono>
using namespace std;
struct bookType {
  string date;
  int quantity;
  string isbn;
  string title;
  double price;
};
void displayCashier();
int main()
{
  cout << "\033[H\033[2J" << endl
}
void displayCashier()
{
  cout << "\033[H\033[2J" << endl
  cout << left;
  cout << setw(80) << string('-', 80) << endl;
  cout << setw(79) << '-' << '-' << endl;
  cout << '-' << setw(24) << "Serendipity Book Sellers" << setw(54) << string(' ', 54) << '-' << endl;
  cout << setw(79) << '-' << '-' << endl;
  cout << '-' << "Date: " << setw(8) << currentDate << setw(64) << string(' ', 64) << '-' << endl;
  cout << '-' << "QTY  ISBN          TITLE" << setw(54) << string(' ', 54) << '-' << endl;
  cout << setw(80) << string('-', 80) << endl;
  cout << '-' << setw(3) << book.quantity << "  " << setw(13) << book.isbn << setw(37) << book.title << " $" << right << setw(7) << book.price;
  cout << "    $" << setw(7) << singleTotal << " -" << endl;
  cout << left;
  cout << setw(79) << '-' << '-' << endl;
  cout << setw(79) << '-' << '-' << endl;
  cout << 
}
