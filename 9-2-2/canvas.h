#ifndef __CANVAS_H__
#define __CANVAS_H__

#include <iostream>
#include <vector>
#include <cstring>

class Canvas {
public:
	Canvas(const size_t row, const size_t col);
	~Canvas() {}
	// 캔버스 크기 재조절
	void Resize(const size_t row, const size_t col);
	// (x, y) 위치에 brush 문자 그림
	// 범위 밖이면 false 리턴
	bool DrawPixel(const int x, const int y, const char brush);
	// 캔버스 내용 화면에 출력
	void Print() const;
	// 그려진 내용을 모두 지운다.
	void Clear();
private:
	int canvas_width;
	int canvas_height;
	char** canvas;
};

class Shape {
public:
	Shape(int xpos_, int ypos_, char brush_);
	virtual void Draw(Canvas* canvas)const {};
	virtual void printInfo() const {};
protected:
	int xpos;
	int ypos;
	char brush;
};

class Rectangle :public Shape {
public:
	Rectangle(int xpos_, int ypos_, int height_, int width_, char brush_);
	virtual void Draw(Canvas* canvas) const;
	virtual void printInfo() const;
private:
	int height;
	int width;
};

class UpTriangle :public Shape {
public:
	UpTriangle(int xpos_, int ypos_, int d_, char brush_);
	virtual void Draw(Canvas* canvas) const;
	virtual void printInfo() const;
private:
	int d;
};

class DownTriangle :public Shape {
public:
	DownTriangle(int xpos_, int ypos_, int d_, char brush_);
	virtual void Draw(Canvas* canvas) const;
	virtual void printInfo() const;
private:
	int d;
};

class Diamond :public Shape {
public:
	Diamond(int xpos_, int ypos_, int d_, char brush_);
	virtual void Draw(Canvas* canvas) const;
	virtual void printInfo() const;
private:
	int d;
};

#endif
