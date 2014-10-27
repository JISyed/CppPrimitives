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

		int get();							// Get value

	private:

		int value;
	};
}

#endif
