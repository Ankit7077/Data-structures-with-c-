#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream obj;
    obj.open("C:\\Users\\hp\\OneDrive\\Desktop\\hello.txt");

    if (!obj)
    {
        cout<<"No such file"<< endl;
    }
    else
    {
        obj<<"have a nice day";
        obj.close();
        string word;
        obj.open("C:\\Users\\hp\\OneDrive\\Desktop\\hello.txt");

        while (obj>> word)
        {
                cout << word << " ";
            }
        }
        obj.close();
    return 0;
}
