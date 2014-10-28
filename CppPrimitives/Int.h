#ifndef INT_H
#define INT_H

namespace PrimitivesAsObjects
{
	class Int
	{
	public:
		Int();								// Default Constructor
		Int(int newValue);					// Parameter Constructor
		Int(const Int& rhs);				// Copy Constructor
		~Int();								// Destructor
		Int& operator=(const Int& rhs);		// Custom Assignment (Object)
		Int& operator=(const int rhs);		// Custom Assignment (Primitive)

		operator int() const;				// Cast to int

		int get() const;					// Get value

		Int& operator+=(const Int& rhs);	// Int += Int
		Int& operator+=(const int rhs);		// Int += int
		Int& operator-=(const Int& rhs);	// Int -= Int
		Int& operator-=(const int rhs);		// Int -= int
		Int& operator*=(const Int& rhs);	// Int *= Int
		Int& operator*=(const int rhs);		// Int *= int
		Int& operator/=(const Int& rhs);	// Int /= Int
		Int& operator/=(const int rhs);		// Int /= int
		Int& operator%=(const Int& rhs);	// Int %= Int
		Int& operator%=(const int rhs);		// Int %= int
		Int& operator&=(const Int& rhs);	// Int &= Int
		Int& operator&=(const int rhs);		// Int &= int
		Int& operator|=(const Int& rhs);	// Int |= Int
		Int& operator|=(const int rhs);		// Int |= int
		Int& operator^=(const Int& rhs);	// Int ^= Int
		Int& operator^=(const int rhs);		// Int ^= int
		Int& operator<<=(const Int& rhs);	// Int <<= Int
		Int& operator<<=(const int rhs);	// Int <<= int
		Int& operator>>=(const Int& rhs);	// Int >>= Int
		Int& operator>>=(const int rhs);	// Int >>= int

		friend int& operator+=(int& lhs, const Int& rhs);	// int += Int
		friend int& operator-=(int& lhs, const Int& rhs);	// int -= Int
		friend int& operator*=(int& lhs, const Int& rhs);	// int *= Int
		friend int& operator/=(int& lhs, const Int& rhs);	// int /= Int
		friend int& operator%=(int& lhs, const Int& rhs);	// int %= Int
		friend int& operator&=(int& lhs, const Int& rhs);	// int &= Int
		friend int& operator|=(int& lhs, const Int& rhs);	// int |= Int
		friend int& operator^=(int& lhs, const Int& rhs);	// int ^= Int
		friend int& operator<<=(int& lhs, const Int& rhs);	// int <<= Int
		friend int& operator>>=(int& lhs, const Int& rhs);	// int >>= Int

		Int& operator++();			// ++Int
		Int& operator--();			// --Int
		Int operator++(int dummy);	// Int++
		Int operator--(int dummy);	// Int--

		Int operator+() const;		// +Int
		Int operator-() const;		// -Int
		Int operator~() const;		// ~Int

		bool operator!() const;					// !Int
		bool operator&&(const Int& rhs) const;	// Int && Int
		bool operator||(const Int& rhs) const;	// Int || Int
		bool operator&&(const int rhs) const;	// Int && int
		bool operator||(const int rhs) const;	// Int || int

		friend bool operator&&(const int& lhs, const Int& rhs);	// int && Int
		friend bool operator||(const int& lhs, const Int& rhs);	// int || Int

		bool operator==(const Int& rhs) const;	// Int == Int
		bool operator==(const int rhs) const;	// Int == int
		bool operator!=(const Int& rhs) const;	// Int != Int
		bool operator!=(const int rhs) const;	// Int != int
		bool operator<(const Int& rhs) const;	// Int < Int
		bool operator<(const int rhs) const;	// Int < int
		bool operator>(const Int& rhs) const;	// Int > Int
		bool operator>(const int rhs) const;	// Int > int
		bool operator<=(const Int& rhs) const;	// Int <= Int
		bool operator<=(const int rhs) const;	// Int <= int
		bool operator>=(const Int& rhs) const;	// Int >= Int
		bool operator>=(const int rhs) const;	// Int >= int

		friend bool operator==(const int& lhs, const Int& rhs);	// int == Int
		friend bool operator!=(const int& lhs, const Int& rhs);	// int != Int
		friend bool operator<(const int& lhs, const Int& rhs);	// int < Int
		friend bool operator>(const int& lhs, const Int& rhs);	// int > Int
		friend bool operator<=(const int& lhs, const Int& rhs);	// int <= Int
		friend bool operator>=(const int& lhs, const Int& rhs);	// int >= Int

		Int* operator&();	// &Int

	private:

		// Data
		int value;
	};
}

#endif
