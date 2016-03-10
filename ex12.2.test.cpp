#include "ex12.2.cpp"

int main()
{
    const StrBlob csb{"hello","world","pezy"};
    StrBlob sb{"hello","world","mooophy"};
    cout << csb.front() << " " << csb.back() << endl;
    sb.back() = "pezy";
    cout << sb.front() << " " << sb.back() << endl;
    return 0;
}

