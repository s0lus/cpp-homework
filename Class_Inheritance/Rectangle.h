#ifndef RECTANGLE_H
#define	RECTANGLE_H

class Rectangle
{
public:
    Rectangle(int A, int B);
    Rectangle();
    ~Rectangle() {}
    
    void SetSideAB(int sideA, int sideB);
    int GetArea();
    int GetPerimiter();
    int GetDiagonal(); 
    
private:
    int a, b;
};

class Parllepiped: public Rectangle
{
public:
    Parllepiped(int A, int B, int C, int H);
    Parllepiped();
    ~Parllepiped() {}
    
    void SetSideABCH(int sideA, int sideB, int sideC, int height);
    int getVolume();
    int getDiagonalParllepiped();
    
private:
    int a, b, c, h;
};

#endif	/* RECTANGLE_H */