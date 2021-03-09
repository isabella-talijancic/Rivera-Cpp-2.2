// This program calculates profits and sales prices for a furniture company. 

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "- - - Profit Calculator - - -\n\n";
	
	string itemName = "TV Stand";
	double retailPrice = 345.00;
	double wholesalePrice = 210.00;
	double salePercent = .25;
	double salePrice = retailPrice - (retailPrice * salePercent);
	double profit = retailPrice - wholesalePrice;
	double saleProfit = salePrice - wholesalePrice;
	
		
   // Write your arithmetic statements below

   // Output Display 
	cout << "\nItem Name: " << itemName ;
	cout << "\n\nWholesale Price: $" << wholesalePrice;
	cout << "\n\nRetail Price   : $" << retailPrice;
	cout << "\n* * Profit     : $" <<profit;	
	cout << "\n\nSale Price     : $" <<salePrice;
	cout << "\n* * Sale Profit: $" << saleProfit << endl;
   
	return 0;
}
