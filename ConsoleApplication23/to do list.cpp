#include <iostream>
using namespace std;
int main()
{
	do {
		cout << "TO DO LIST\n";
		cout << "MENU\n";
		cout << "1. Add Task\n";
		cout << "2. Display List of Task\n";
		cout << "3. Mark Task as Completed\n";
		cout << "4. Remove Task\n";
		cout << "5. Quit App\n";

		int choice;
		cout << "Enter your Choice";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Enter Task Discription";
			break;
		case 2:
			cout << "Task List";
			break;
		case 3:
			cout << "Mark Task as Completed";
			break;
		case 4:
			cout << "Task Deleted";
			break;
		case 5:
			cout << "Quit App";
			break;
		default:
			cout << "Invalid Choice.Please try again";
		}

		while (choice != 5)



			return 0;
	}