// C++ Program to optimize the usage
// of C++ Vectors to reduce the cost
// of copying elements with the
// reserve() method

#include <iostream>
#include <vector>
using namespace std;

// Class
struct GFG {

	float x, y;

	// Parameterized Constructor
	GFG(float x, float y) 
	: x(x), y(y) 
	{
		
	}

	// Copy Constructor
	GFG(const GFG& GFG)
		: x(GFG.x), y(GFG.y)
	{
		cout << "Copied" << endl;
	}
};

ostream &operator<<(ostream &stream, const GFG &gfg)
{
	stream << gfg.x << ", " << gfg.y;
	return stream;
}

// Driver Code
int main()
{
	// Create object of vector in
    // the main() method
    vector<GFG> v1;

    // Add elements to the vector
    // object
    v1.push_back(GFG(1, 2));
    cout << endl;

    v1.push_back(GFG(4, 5));
    cout << endl;

    v1.push_back(GFG(7, 8));
    cout << endl;

    /* 
    
    for (GFG v : v1)
        cout << v << endl;

    This is actually going to be copying each vertex
    into the scope of this for loop,
    we dont want to do that, we want to avoid copy
    wherever possible.
    By adding an ampersand you make it a reference 
    it's not going to copy the data
    */

    for (GFG &v : v1)
        cout << v << endl;
	
	// Create object of vector in
	// the main() method
	vector<GFG> vertices;

	// Reserve three elements using
	// reserve() instead of resizing the vector for each entry
	vertices.reserve(3);

	// Add elements to the vector
	// object
	vertices.emplace_back(1, 1);
	vertices.emplace_back(1, 2);
	vertices.emplace_back(2, 1);
	
	for (GFG &v : vertices)
		cout << v << endl;

	return 0;
}
