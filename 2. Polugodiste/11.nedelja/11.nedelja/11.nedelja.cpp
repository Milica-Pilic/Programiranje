#include <iostream>
#include "list.hpp"
#include "dinstring.hpp"

using namespace std;

class Component
{
public:
	double GetX(void) { return x; }
	double GetY(void) { return y; }
	virtual void printComponent();
	virtual DinString GetTypeName(void) = 0;

protected:
	double x;
	double y;
};

void Component::printComponent()
{
	cout << x << " " << y;
}

class CheckBox : Component
{
public:
	CheckBox()
	{
		x = 0;
		y = 0;
		pressed = false;
	}
	CheckBox(double inputx, double inputy, bool inputpressed)
	{
		x = inputx;
		y = inputy;
		pressed = inputpressed;
	}
	virtual DinString GetTypeName(void) { return "CheckBox"; }
	virtual void printComponent();
private:
	bool pressed;
};

void CheckBox::printComponent()
{
	cout << x << " " << y << " " << pressed ? "pressed" : "not pressed";
}

class Label : Component
{
public:
	Label()
	{
		x = 0;
		y = 0;
		text = "";
	}
	virtual DinString GetTypeName(void) { return "Label"; }
	virtual void printComponent();
private:
	DinString text;
};

void Label::PrintComponent()
{
	cout << x + " " << y << " " << text;
}

class Panel : Component
{
public:
	Panel()
	{
		x = 0;
		y = 0;
		capacity = 10;
	}
	Panel(Panel& original)
	{
		x = original.x;
		y = original.y;
		capacity = original.capacity;
		components = original.components;
	}
	virtual void printComponent();
	virtual DinString GetTypeName(void) { return "Panel"; }
	bool addComponent(Component& newcomponent);
	bool removeComponent(Component& componenttoremove);
private:
	int capacity;
	List<Component*>components;
};

void Panel::printComponent()
{
	cout << x << " " << y << " " << capacity;
}

bool Panel::addComponent(Component& newcomponent)
{
	int i = 0;
	while (1)
	{
		if (components.add(i, newcomponent))
			return true;
		i++;
	}

	return false;
}

bool Panel::removeComponent(Component& componenttoremove)
{
	int i = 0;
	while (1)
	{
		Component temp = components.read(i, Component);
		if (temp == componenttoremove)
		{
			components.remove(i);
		}
		i++;
	}
	return false;
}

int main()
{
	cout << "Hello World";

	return 0;
}