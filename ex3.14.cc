#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter the sequence of integers: ";
    vector<int> numseq;
    int num;
    while (cin >> num)
    {
        numseq.push_back(num);
    }
    cout << numseq.size() << endl;
    for (auto elem : numseq)
    {
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
