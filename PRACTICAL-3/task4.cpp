//How to resolve above issue? [Hint: by using, getline(cin, line);]

#include <iostream>

using namespace std;
int main()
{
    char ch[100];
    cin.getline(ch,100);
    cout<<"The value stored inside ch is = "<<ch<<"\n";
    return 0;
}
