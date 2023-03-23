#ifndef COLOR_H
#define COLOR_H

class Color {
    public:
        Color(unsigned char red, unsigned char green, unsigned char blue);
        Color(const Color &b);
        static const Color RED, GREEN, BLUE, BLACK, WHITE;
        unsigned char red() const;
        unsigned char green() const;
        unsigned char blue() const;
        bool equal_to(const Color& other) const;
        void invert();
    private:
        unsigned char red_;
        unsigned char green_;
        unsigned char blue_;
};

#endif