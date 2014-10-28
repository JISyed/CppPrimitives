#include "Int.h"

namespace PrimitivesAsObjects
{
	// Fundamentals

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

	// Cast to native

	Int::operator int() const
	{
		return this->value;
	}

	// Getter

	int Int::get() const
	{
		return this->value;
	}

	// Arithmetic Assignment

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

	// Incremental

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

	// Unary

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

	// Logical

	bool Int::operator!() const
	{
		return !(this->value);
	}

	bool Int::operator&&(const Int& rhs) const
	{
		return this->value && rhs.value;
	}

	bool Int::operator||(const Int& rhs) const
	{
		return this->value || rhs.value;
	}

	bool Int::operator&&(const int rhs) const
	{
		return this->value && rhs;
	}

	bool Int::operator||(const int rhs) const
	{
		return this->value || rhs;
	}

	bool operator&&(const int& lhs, const Int& rhs) 
	{
		return lhs && rhs.value;
	}

	bool operator||(const int& lhs, const Int& rhs)
	{
		return lhs || rhs.value;
	}

	// Comparison

	bool Int::operator==(const Int& rhs) const
	{
		return this->value == rhs.value;
	}

	bool Int::operator==(const int rhs) const
	{
		return this->value == rhs;
	}

	bool Int::operator!=(const Int& rhs) const
	{
		return this->value != rhs.value;
	}

	bool Int::operator!=(const int rhs) const
	{
		return this->value != rhs;
	}

	bool Int::operator<(const Int& rhs) const
	{
		return this->value < rhs.value;
	}

	bool Int::operator<(const int rhs) const
	{
		return this->value < rhs;
	}

	bool Int::operator>(const Int& rhs) const
	{
		return this->value > rhs.value;
	}

	bool Int::operator>(const int rhs) const
	{
		return this->value > rhs;
	}

	bool Int::operator<=(const Int& rhs) const
	{
		return this->value <= rhs.value;
	}

	bool Int::operator<=(const int rhs) const
	{
		return this->value <= rhs;
	}

	bool Int::operator>=(const Int& rhs) const
	{
		return this->value >= rhs.value;
	}

	bool Int::operator>=(const int rhs) const
	{
		return this->value >= rhs;
	}

	bool operator==(const int& lhs, const Int& rhs)
	{
		return lhs == rhs.value;
	}

	bool operator!=(const int& lhs, const Int& rhs)
	{
		return lhs != rhs.value;
	}

	bool operator<(const int& lhs, const Int& rhs)
	{
		return lhs < rhs.value;
	}

	bool operator>(const int& lhs, const Int& rhs)
	{
		return lhs > rhs.value;
	}

	bool operator<=(const int& lhs, const Int& rhs)
	{
		return lhs <= rhs.value;
	}

	bool operator>=(const int& lhs, const Int& rhs)
	{
		return lhs >= rhs.value;
	}

	// Address

	Int* Int::operator&()
	{
		return this;
	}

	// Arithmetic

	Int Int::operator+(const Int& rhs) const
	{
		Int result(*this);
		result.value += rhs.value;
		return result;
	}

	Int Int::operator+(const int rhs) const
	{
		Int result(*this);
		result.value += rhs;
		return result;
	}

	Int Int::operator-(const Int& rhs) const
	{
		Int result(*this);
		result.value -= rhs.value;
		return result;
	}

	Int Int::operator-(const int rhs) const
	{
		Int result(*this);
		result.value -= rhs;
		return result;
	}

	Int Int::operator*(const Int& rhs) const
	{
		Int result(*this);
		result.value *= rhs.value;
		return result;
	}

	Int Int::operator*(const int rhs) const
	{
		Int result(*this);
		result.value *= rhs;
		return result;
	}

	Int Int::operator/(const Int& rhs) const
	{
		Int result(*this);
		result.value /= rhs.value;
		return result;
	}

	Int Int::operator/(const int rhs) const
	{
		Int result(*this);
		result.value /= rhs;
		return result;
	}

	Int Int::operator%(const Int& rhs) const
	{
		Int result(*this);
		result.value %= rhs.value;
		return result;
	}

	Int Int::operator%(const int rhs) const
	{
		Int result(*this);
		result.value %= rhs;
		return result;
	}

	Int Int::operator&(const Int& rhs) const
	{
		Int result(*this);
		result.value &= rhs.value;
		return result;
	}

	Int Int::operator&(const int rhs) const
	{
		Int result(*this);
		result.value &= rhs;
		return result;
	}

	Int Int::operator|(const Int& rhs) const
	{
		Int result(*this);
		result.value |= rhs.value;
		return result;
	}

	Int Int::operator|(const int rhs) const
	{
		Int result(*this);
		result.value |= rhs;
		return result;
	}

	Int Int::operator^(const Int& rhs) const
	{
		Int result(*this);
		result.value ^= rhs.value;
		return result;
	}

	Int Int::operator^(const int rhs) const
	{
		Int result(*this);
		result.value ^= rhs;
		return result;
	}

	Int Int::operator<<(const Int& rhs) const
	{
		Int result(*this);
		result.value <<= rhs.value;
		return result;
	}

	Int Int::operator<<(const int rhs) const
	{
		Int result(*this);
		result.value <<= rhs;
		return result;
	}

	Int Int::operator>>(const Int& rhs) const
	{
		Int result(*this);
		result.value >>= rhs.value;
		return result;
	}

	Int Int::operator>>(const int rhs) const
	{
		Int result(*this);
		result.value >>= rhs;
		return result;
	}


	Int operator+(const int& lhs, const Int& rhs)
	{
		Int result = lhs;
		result.value += rhs.value;
		return result;
	}

	Int operator-(const int& lhs, const Int& rhs)
	{
		Int result = lhs;
		result.value -= rhs.value;
		return result;
	}

	Int operator*(const int& lhs, const Int& rhs)
	{
		Int result = lhs;
		result.value *= rhs.value;
		return result;
	}

	Int operator/(const int& lhs, const Int& rhs)
	{
		Int result = lhs;
		result.value /= rhs.value;
		return result;
	}

	Int operator%(const int& lhs, const Int& rhs)
	{
		Int result = lhs;
		result.value %= rhs.value;
		return result;
	}

	Int operator&(const int& lhs, const Int& rhs)
	{
		Int result = lhs;
		result.value &= rhs.value;
		return result;
	}

	Int operator|(const int& lhs, const Int& rhs)
	{
		Int result = lhs;
		result.value |= rhs.value;
		return result;
	}

	Int operator^(const int& lhs, const Int& rhs)
	{
		Int result = lhs;
		result.value ^= rhs.value;
		return result;
	}

	Int operator<<(const int& lhs, const Int& rhs)
	{
		Int result = lhs;
		result.value <<= rhs.value;
		return result;
	}

	Int operator>>(const int& lhs, const Int& rhs)
	{
		Int result = lhs;
		result.value >>= rhs.value;
		return result;
	}

}