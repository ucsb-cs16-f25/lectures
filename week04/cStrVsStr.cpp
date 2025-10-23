
#include <iostream>
#include <cstring> // for strlen, strcat, strcmp
#include <string>  // for std::string

/* The code compiled and runs fine even without #include <string> because 
<string> gets pulled in indirectly by <iostream> on many standard library 
implementations. But this is just an accidental side effect — it's not 
guaranteed by the C++ standard. In modern C++ projects 
(and especially in larger codebases), relying on indirect 
includes is considered a bug. */

using namespace std;

int main()
{
    // C-string
    char cstr[20] = "Hello";
    strcat(cstr, " World"); // need a function for concatenation
    cout << "C-string: " << cstr << " (length: " << strlen(cstr) << ")\n";

    // std::string
    string str = "Hello";
    str += " World"; // simple +
    cout << "std::string: " << str << " (length: " << str.size() << ")\n";

    return 0;
}
