//Contributors: All

#include"ClothingItem.h"

ClothingItem::ClothingItem() : name(), price(0), numAvailable(0)
{}
ClothingItem::ClothingItem(const String& name, const double price, const size_t numAvailable) : name(name), price(price), numAvailable(numAvailable)
{}

void ClothingItem::setName(const String& name)
{
	this->name = name;
}

void ClothingItem::setPrice(const double price)
{
	this->price = price;
}
void ClothingItem::setNumAvailable(const size_t numAvailable)
{
	this->numAvailable = numAvailable;
}
void ClothingItem::setGender(const char& gender)
{
	if (gender == 'M' || gender == 'm')
	{
		this->gender = Gender::MAN;
		return;
	}

	if (gender == 'W' || gender == 'w')
	{
		this->gender = Gender::WOMAN;
		return;
	}

	if (gender == 'U' || gender == 'u')
	{
		this->gender = Gender::UNISEX;
		return;
	}
}
void ClothingItem::setSize(const String size)
{
	if (size == "XS" || size == "xs")
	{
		this->size = Size::XS;
		return;
	}

	if (size == "S" || size == "s")
	{
		this->size = Size::S;
		return;
	}

	if (size == "M" || size == "m")
	{
		this->size = Size::M;
		return;
	}

	if (size == "L" || size == "l")
	{
		this->size = Size::L;
		return;
	}

	if (size == "XL" || size == "xl")
	{
		this->size = Size::XL;
		return;
	}

	if (size == "XXL" || size == "xxl")
	{
		this->size = Size::XXL;
		return;
	}

	if (size == "O" || size == "o")
	{
		this->size = Size::UNKNOWN;
		return;
	}
}
ClothingItem::Type ClothingItem::getType() const
{
	return Type::UNKNOWN;
}
ClothingItem::Gender ClothingItem::getGender() const
{
	return gender;
}

ClothingItem::Size ClothingItem::getSize() const
{
	return size;
}

String ClothingItem::getName() const
{
	return name;
}

double ClothingItem::getPrice() const
{
	return price;
}
size_t ClothingItem::getNumAvailable() const
{
	return numAvailable;
}
const char* ClothingItem::typeToStr() const
{
	return "Unknown";
}
const char* ClothingItem::sizeToStr() const
{
	switch (size)
	{
	case ClothingItem::Size::XS:
		return "XS";
		break;
	case ClothingItem::Size::S:
		return "S";
		break;
	case ClothingItem::Size::M:
		return "M";
		break;
	case ClothingItem::Size::L:
		return "L";
		break;
	case ClothingItem::Size::XL:
		return "XL";
		break;
	case ClothingItem::Size::XXL:
		return "XXL";
		break;
	case ClothingItem::Size::UNKNOWN:
		return "Unknown";
		break;
	default:
		return "Unknown";
		break;
	}
}
const char* ClothingItem::genderToStr() const
{
	if(gender == Gender::MAN)
		return "Man";
	if (gender == Gender::WOMAN)
		return "Woman";
	if (gender == Gender::UNISEX)
		return "Unisex";
}
String ClothingItem::getData() const
{
	return ("\nName: " + name + "\nSize: " + sizeToStr() + "\nType: " + typeToStr() + "\nGender: " + genderToStr());
}
void ClothingItem::print() const
{
	String data;
	std::cout << getData();
	std::cout << "\nPrice: " << price << std::endl << "Number available: " << numAvailable << std::endl;
}
