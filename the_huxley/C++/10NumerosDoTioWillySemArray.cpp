#include <iostream>
using namespace std;

int main()
{
    int compare, input, counter;
    while (true)
    {
        cin>>compare;
        if(compare == -1){
            break;
        }
        counter = 0;
        for (int i = 0; i < 10; i++)
        {
            cin>>input;
            if(input == compare){
                counter++;
            }
            else if(input == -1){
                cout << compare << " appeared "<< counter<< " times\n";
                break;
            }
        }
        if (input==-1)
        {
            break;
        }
        
        cout << compare << " appeared "<< counter<< " times\n";
    }

    return 0;
}