#include <iostream>
# include<string>
# include<vector>

using namespace std;

	void showmenu() {
		cout << "TO DO LIST\n";
		cout << "MENU\n";
		cout << "1. Add Task\n";
		cout << "2. Display List of Task\n";
		cout << "3. Mark Task as Completed\n";
		cout << "4. Quit App\n";
		
	}
	int main()
	{
		vector<string>tasks;
		vector<bool>taskStatus;

		while (true) {
			showmenu();

			int choice;
			cout << "Enter your Choice";
			cin >> choice;

			switch (choice) {
			case 1: {
				cout << "Enter a new Task";

				string task;
				cin.ignore();
				getline(cin, task);
				tasks.push_back(task);
				taskStatus.push_back(false);
				break;
			}

			case 2: {
				cout << "To do List";
				for (int i = 0; i < tasks.size();i++) {
					cout << (i + 1) << ". ";
					if (taskStatus[i]) {
						cout << "[Done] ";
					}
					cout << tasks[i] << endl;
					break;

				}
			case 3: {
				cout << "Enter the task number to mark as done: ";
				int taskNum;
				cin >> taskNum;

				if (taskNum >= 1 && taskNum <= tasks.size()) {
					taskStatus[taskNum - 1] = true;
					cout << "Task marked as done!" << endl;
				}
				else {
					cout << "Invalid task number." << endl;
				}break;
			}


			case 4:
			{cout << "Good Bye";
			break;}
			default:
				cout << "Invalid Choice.Please try again";
			}


			}
		}

			return 0;
		}
	