#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter integers: ";
    vector<int> numseq;
    int num;
    while (cin >> num)
    {
        numseq.push_back(num);
    }
    int size=numseq.size();
    for (int i=0; i<=(size-1)/2; i++)
    {
        cout << numseq[i]+numseq[size-i-1] << " ";
    }
    cout << endl;
    return 0;
}
