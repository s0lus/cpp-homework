#ifndef RECTANGLE_H
#define	RECTANGLE_H

class Rectangle
{
public:
    Rectangle(int A, int B);
    Rectangle();
    ~Rectangle() {}
    
    void setSideAB(int sideA, int sideB);
    int GetArea();
    int GetPerimiter();
    int GetDiagonal(); 
    
private:
    int a, b;
};

#endif	/* RECTANGLE_H */