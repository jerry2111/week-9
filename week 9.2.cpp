

#include <iostream>


using namespace std;

int main()
{
    char str[50];
    cin >> str;
    while (str[0] != NULL)
    {
        for (int a = 0;str[a]!=NULL; a++)
        {
            cout << str[a];
            if (str[a + 1] == NULL) { str[a] = NULL; }
        }
        cout << endl;
       
    }
}

