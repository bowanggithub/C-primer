#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter inputs: ";
    string word, sentence, sentence2;
    while (cin >> word)
    {
        sentence += word;
        sentence2 = sentence2 + word + " ";
    }
    cout << sentence << endl;
    cout << sentence2 << endl;

    return 0;
}
