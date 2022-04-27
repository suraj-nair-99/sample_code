#include <iostream>
using namespace std;
int arr[100];
int cc;
int a;
int n;
int count1 = 1;
class modulo
{
public:
    void menu()
    {
        do
        {
            cout << "\n"
                 << "Enter the operation you want to perform"
                 << "\n"
                 << "1: Enter element "
                 << "\n"
                 << "2: Display "
                 << "\n"
                 << "3: EXIT "
                 << "\n";
            cin >> cc;

            switch (cc)
            {
            case 1:
                Enter_Element();
                break;
            case 2:
                Display();
                break;
            case 3:
                break;
            default:
                cout << "Invalid input"
                     << "\n";
                break;
            }
        } while (cc != 3);
    }

    void Enter_Element()
    {
        if (count1 <= n)
        {
            cout << "Enter the Elememt"
                 << "\n";
            cin >> a;
            int b = a % n;
            while (arr[b] != NULL)
            {
                if (b == n - 1)
                {
                    b = -1;
                }
                b = b + 1;
            }
            arr[b] = a;
            count1 = count1 + 1;
        }
        else
        {
            cout << "You have entered all elements"
                 << "\n";
        }
    }

    void Display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << "\t" << arr[i] << "\n";
        }
    }
};

int main()
{
    modulo m;
    cout << "Enter no of Elememts"
         << "\n";
    cin >> n;
    m.menu();
}