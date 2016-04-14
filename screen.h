#ifndef SCREEN_H
#define SCREEN_H
#include <string>

template<unsigned H, unsigned W>
class Screen
{
public:
    typedef std::string::size_type pos;
    Screen() =default;
    Screen(char c): contents(H*W,c) {}
    char get() const {return contents[cursor];}
    Screen& move(pos r, pos c);
    Screen& operator<<(const char& c);
    Screen& operator>>(char& c);

    friend std::ostream& operator <<(std::ostream& os, 
                                    const Screen<H,W>& c)
    {
        unsigned int i,j;
        for (i=0; i<c.height;i++)
        {
            os << c.contents.substr(0,w) << std::endl;
        }
        return os;
    }

    friend std::instream& operator >>(std::istream& is, Screem& c)
    {
        char a;
        is >> a;
        std::string temp(H*W,a);
        c.contents = temp;
        return is;
    }
private:
    pos cursor=0;
    pos height =H, width =W;
    std::string contents;
}

template<unsigned H, unsigned W>
inline Screen<H,W>& Screen<H,W>::move(pos r, pos c)
{
    pos row = r*width;
    cursor = row +c;
    return *this;
}

template<unsigned H, unsigned W>
inline Screen<H,W>& Screen<H,W>::operator <<(const char& c)
{
    contents[cursor] =c;
    return *this;
}

template<unsigned H,unsigned W>
inline Screen<H,W>& Screen<H,W>::operator >>(char& c)
{
    c = contents[cursor];
    return *this;
}

#endif
