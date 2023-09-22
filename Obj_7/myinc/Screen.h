#ifndef SCREEN_H
#define SCREEN_H

#include <string>

struct Screen
{
    public:
        typedef std::string::size_type pos;
        Screen() = default;
        Screen(pos i, pos j, char c) : height(i), witch(j), contents(i * j, c){};
        char get() const
        {
            return contents[cursor];
        }
        char get(pos r, pos c) const;
        Screen &move(pos r, pos c);
        Screen &set(char c)
        {
            contents[cursor] = c;
            return *this;
        }

    private:
        mutable int numtwice;
        pos height;
        pos witch;
        pos cursor;
        std::string contents;
};

inline
Screen &Screen::move(pos r, pos c)
{
    pos row = r * witch;
    cursor = row + c;
    return *this;
}
char Screen::get(pos r, pos c) const
{
    ++numtwice;
    pos row = r * witch;
    return contents[row + c];
}



#endif

