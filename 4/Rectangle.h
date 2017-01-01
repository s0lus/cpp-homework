
class Rectangle
{
public:
	Rectangle(int A, int B);
	Rectangle();
	~Rectangle() {}
	void setSideAB(int sideA, int sideB);
	int getArea();
	int getPerimeter();
	int getDiagonal();

private:
	int a, b;
};
