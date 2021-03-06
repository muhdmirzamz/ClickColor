#ifndef GUI_H
#define GUI_H

#include "SDL.h"
#include "SDL_ttf.h"

#include <string>

enum Color{
	RED,
	GREEN,
	BLUE,
	WHITE,
	BLACK
};

enum RenderType{
	SOLID,
	SHADED,
	BLENDED
};

using namespace std;

class Gui{

	TTF_Font* font;

	SDL_Surface* image;
	SDL_Color color;
	SDL_Color shadedColor;

	SDL_Rect box;

	string text;
	
	int fontsize;

	RenderType renderType;

public:
	Gui(string _text, int _fontsize, int x, int y);
	~Gui();

	void draw(SDL_Surface *screen);
	void update();

	void setText(string _text);
	void setColor(Color _color);
	void setShadedColor(Color _color);
	void setFontSize(int size);
	void setFont(string _fontpath);
	void setRenderType(int _renderType);

};

#endif
