#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> tasks;


int main()
{
	tasks.push_back("Task 0");
	int i = 1;
	cout << "When you finish enter '#'\n";

	while (true)
	{
		cout << "Enter task " << i << "\t";
		string task; 
		getline(cin ,task);
		tasks.push_back(task);
		i++;
		if (task == "#")
			break;

	}

	int CurSize = tasks.size();

	//randomizing tasks till they get empty
	while(true)
	{
		//viewing tasks
		cout << endl;
		int i = 1;
		cout << "Your Current tasks are like this\n";
		for (auto l : tasks)
		{
			if (l == "#") break;
			if (l == "Task 0") continue;

			cout << "Task " << i << "\t" << l << endl;
			i++;
		}
		cout << endl;


		int tasksNum = CurSize - 2;
		int randIndex = (rand() % tasksNum);
		randIndex++;

		cout << "Your random task is Task " << randIndex << " : ";
		cout << tasks[randIndex];
		tasks.erase(tasks.begin() + randIndex);
		CurSize--;
		
		if (tasks.size() == 2)
		{
			cout << "\nThis is the last Task, Congratulations!!\n";
			return 0;
		}

		cout << "\nMore or enough?(m,e)\t";
		char action;
		cin >> action;

		if (action != 'm' && action != 'M')
		{
			cout << "\nHave a nice day <3\n";
			return 0;
		}
		
	} 

	return 0;
}
