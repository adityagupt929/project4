#include <iostream>
using namespace std;
void view_task(int count, string task[10])
{
    cout << "\n``````````````````````````````````````````````````\n";
    cout << "\n Tasks for today: \t status";
    cout << "\n``````````````````````````````````````````````````\n";
    for (int a = 0; a < count; a++)
    {
        cout << "\n task" << a << " :- " << task[a] << "\n";
    }
    cout << "\n------------------------------------------\n";
}
int main()
{
    string task[10];
    int choice = 1, count = 0, c;
    while (choice != 0)
    {
        cout << "-------------------------------------------------\n";
        cout << "\t!!!!! To do list!!!!!!";
        cout << "\n------------------------------------------------\n";
        cout << "\n 1- Add task";
        cout << "\n 2- view task";
        cout << "\n 3- delete task ";
        cout << "\n 4- mark a task as completed";
        cout << "\n 0- Terminate";
        cout << "\n -------------------------------------------------\n";
        cout << "\n enter your choice: ";
        cin >> choice;
        switch (choice)
        {

            case 1:
            {
                if (count > 9)
                {
                    cout << "$$$$$Enough for the day..Task list is FULL$$$$$";
                }
                else
                {
                    cout << "enter your task to do: ";
                    cin.ignore();
                    getline(cin, task[count]);
                    count++;
                }
                break;
            }
            case 2:
            {
                if (count == 0)
                {
                    cout << "\n::::::To do list is empty:::::\n";
                }
                else
                {
                    view_task(count, task);
                }
                break;
            }
            case 3:
            {
                int d;
                cout << "enter the task to be deleted: ";
                cin >> d;
                if (d < 0 || d > 9)
                {
                    cout << "Please enter the valid task no";
                }
                else
                {
                    for (int b = d; b < count; b++)
                    {
                        task[b] = task[b + 1];
                    }
                }
                count--;
                break;
            }
            case 4:
            {
                int a, p;
                cout << "enter the task no which is completed: ";
                cin >> a;
                task[a] = task[a] + "\t ****(((completed)))";
                view_task(count, task);
                break;
            }
            case 0:
            {
                cout << "------- TERMINATED--------";
            }
            break;
            default:
            cout<<"Plan Your Day Here";
            break;
        }
    }
    return 0;
}