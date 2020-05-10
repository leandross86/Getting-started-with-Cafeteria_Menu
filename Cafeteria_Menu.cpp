#include <iostream>
#include <locale>
using namespace std;
int main()
/*
A cafeteria is providing its customers with a terminal through which they can place their order. 
For this to happen, the terminal must display the menu of available items as shown below:

*** Menu ***
100 - Hamburger - $ 5.50
101 - Hot Dog - $ 4.50
102 - Milkshake - $ 7.00
103 - Pizza brotinho - $ 8.00
104 - Cheeseburger - $ 8.50
Enter the code of your order:
Once the customer has entered the desired item code, the terminal should ask for the number of items he wants to order. 
At the end, the user must inform the customer's order and the amount to be paid.
Write the algorithm and its C ++ equivalent that can solve the cafeteria problem. Use the CASO and SWITCH structures.
As the problem is described, the diner customer can buy several items of the same type, for example, 2 hamburgers. 
However, it is not possible to order 2 hamburgers and 2 milkshakes at the same time. 
How about modifying the code to resolve this issue? Modify the schedule so that, after entering the code of an item, 
the solution asks the user if he wants to include any more items in the order. If yes (“S”), the algorithm / program 
must request the code for the new item. If not (“N”), the algorithm / program must display the amount payable. 
It is not necessary to display the customer's complete order.
*/

{
	setlocale(LC_ALL, "ptb");
	int code, qtd;
	float value = 0;
	char continued='S';
	cout << "*** Menu ***\n";
	cout << "100 - Hambúrguer - $5,50\n";
	cout << "101 - Hot-Dog - $4,50\n";
	cout << "102 - Milkshake - $7,00\n";
	cout << "103 - Pizza - $8,00\n";
	cout << "104 - Cheeseburguer - $8,50\n";
	cout << "Enter your order code: "; 
	cin >> code;
	cout << "Enter the desired quantity: "; 
	cin >> qtd;
	while (continued='S')
	{
		switch (code)
		{
			case 100:
				value+=qtd*5.50;
				break;
			case 101:
				value+=qtd*4.50;
				break;
			case 102:
				value+=qtd*7.00;
				break;
			case 103:
				value+=qtd*8.00;
				break;
			case 104:
				value+=qtd*8.50;
				break;
			default:
				cout << "Invalid request!";
		}
		cout << "Add another item? S / N"; 
		cin >> continued;
		if (continued == 'S')
		{
			cout << "*** Menu ***\n";
			cout << "100 - Hambúrguer - $5,50\n";
			cout << "101 - Hot-Dog - $4,50\n";
			cout << "102 - Milkshake - $7,00\n";
			cout << "103 - Pizza - $8,00\n";
			cout << "104 - Cheeseburguer - $8,50\n";
			cout << "Enter your order code: "; 
			cin >> code;
			cout << "Enter the desired quantity: "; 
			cin >> qtd;
		}
	}
	cout << "Total amount payable $ " <<value;
}
