#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    cout << "Enter the string : \b ";
    string myStr;
    getline ( cin, myStr);

    cout << toupper( myStr));
    /*string data = myStr;;
// convert string to upper case
    std::for_each(data.begin(), data.end(), [](char & c)
                   {
                      c = ::toupper(c);
                   }
            );*/
    return 0;
}
