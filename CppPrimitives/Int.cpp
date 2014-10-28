#include "Int.h"

namespace PrimitivesAsObjects
{
	Int::Int() : value(0)
	{
	}

	Int::Int(int newValue) : value(newValue)
	{
	}

	Int::Int(const Int& rhs) : value(rhs.value)
	{
	}

	Int::~Int()
	{
	}

	Int& Int::operator=(const Int& rhs)
	{
		// Skip if addresses are the same
		if(this == &rhs)
		{
			return *this;
		}

		this->value = rhs.value;

		return *this;
	}

	Int& Int::operator=(const int rhs)
	{
		this->value = rhs;

		return *this;
	}

	Int::operator int() const
	{
		return this->value;
	}

	int Int::get() const
	{
		return this->value;
	}

	Int& Int::operator+=(const Int& rhs)
	{
		this->value += rhs.value;
		return *this;
	}

	Int& Int::operator+=(const int rhs)
	{
		this->value += rhs;
		return *this;
	}

	Int& Int::operator-=(const Int& rhs)
	{
		this->value -= rhs.value;
		return *this;
	}

	Int& Int::operator-=(const int rhs)
	{
		this->value -= rhs;
		return *this;
	}

	Int& Int::operator*=(const Int& rhs)
	{
		this->value *= rhs.value;
		return *this;
	}

	Int& Int::operator*=(const int rhs)
	{
		this->value *= rhs;
		return *this;
	}

	Int& Int::operator/=(const Int& rhs)
	{
		this->value /= rhs.value;
		return *this;
	}

	Int& Int::operator/=(const int rhs)
	{
		this->value /= rhs;
		return *this;
	}

	Int& Int::operator%=(const Int& rhs)
	{
		this->value %= rhs.value;
		return *this;
	}

	Int& Int::operator%=(const int rhs)
	{
		this->value %= rhs;
		return *this;
	}

	Int& Int::operator&=(const Int& rhs)
	{
		this->value &= rhs.value;
		return *this;
	}

	Int& Int::operator&=(const int rhs)
	{
		this->value &= rhs;
		return *this;
	}

	Int& Int::operator|=(const Int& rhs)
	{
		this->value |= rhs.value;
		return *this;
	}

	Int& Int::operator|=(const int rhs)
	{
		this->value |= rhs;
		return *this;
	}

	Int& Int::operator^=(const Int& rhs)
	{
		this->value ^= rhs.value;
		return *this;
	}

	Int& Int::operator^=(const int rhs)
	{
		this->value ^= rhs;
		return *this;
	}

	Int& Int::operator<<=(const Int& rhs)
	{
		this->value <<= rhs.value;
		return *this;
	}

	Int& Int::operator<<=(const int rhs)
	{
		this->value <<= rhs;
		return *this;
	}

	Int& Int::operator>>=(const Int& rhs)
	{
		this->value >>= rhs.value;
		return *this;
	}

	Int& Int::operator>>=(const int rhs)
	{
		this->value >>= rhs;
		return *this;
	}

	int& operator+=(int& lhs, const Int& rhs)
	{
		lhs += rhs.value;
		return lhs;
	}

	int& operator-=(int& lhs, const Int& rhs)
	{
		lhs -= rhs.value;
		return lhs;
	}

	int& operator*=(int& lhs, const Int& rhs)
	{
		lhs *= rhs.value;
		return lhs;
	}

	int& operator/=(int& lhs, const Int& rhs)
	{
		lhs /= rhs.value;
		return lhs;
	}

	int& operator%=(int& lhs, const Int& rhs)
	{
		lhs %= rhs.value;
		return lhs;
	}

	int& operator&=(int& lhs, const Int& rhs)
	{
		lhs &= rhs.value;
		return lhs;
	}

	int& operator|=(int& lhs, const Int& rhs)
	{
		lhs |= rhs.value;
		return lhs;
	}

	int& operator^=(int& lhs, const Int& rhs)
	{
		lhs ^= rhs.value;
		return lhs;
	}

	int& operator<<=(int& lhs, const Int& rhs)
	{
		lhs <<= rhs.value;
		return lhs;
	}

	int& operator>>=(int& lhs, const Int& rhs)
	{
		lhs >>= rhs.value;
		return lhs;
	}

	Int& Int::operator++()
	{
		++(this->value);
		return *this;
	}

	Int& Int::operator--()
	{
		--(this->value);
		return *this;
	}

	Int Int::operator++(int dummy)
	{
		dummy;
		Int clone(*this);
		this->value++;
		return clone;
	}

	Int Int::operator--(int dummy)
	{
		dummy;
		Int clone(*this);
		this->value--;
		return clone;
	}

	Int Int::operator+() const
	{
		Int clone(*this);
		clone.value = +(clone.value);
		return clone;
	}

	Int Int::operator-() const
	{
		Int clone(*this);
		clone.value = -(clone.value);
		return clone;
	}

	Int Int::operator~() const
	{
		Int clone(*this);
		clone.value = ~(clone.value);
		return clone;
	}

}