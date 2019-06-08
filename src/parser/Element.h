#pragma once
#include "Requirement.h"

// Klasa reprezentujaca jeden element zadanej krotki
class Element
{
public:
	enum Type { INT, FLOAT, STRING };
	Element::Type type;
	bool specified;
	Requirement *req;
	Element(Element::Type t);
	Element(Element::Type t, Requirement::Type t2, int v);
	Element(Element::Type t, Requirement::Type t2, float v);
	Element(Element::Type t, Requirement::Type t2, std::string v);
	~Element();
};

