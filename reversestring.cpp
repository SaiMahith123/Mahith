#include <iostream>
#include<conio.h>
using namespace std;

void getreverse(string &str, int i)
{

    if (i > (str.length() - 1 - i))

    {

        return;

    }

    swap(str[i], str[str.length() - i - 1]);

    i++;

    getreverse(str, i);
}

int main()
{

    string name = "sign up";
 

    getreverse(name, 0);

    cout << name << endl;

    return 0;
}
    
