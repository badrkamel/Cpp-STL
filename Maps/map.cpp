#include <iostream>
#include <map>

using namespace std;


int main() {

	map<int, char, less<>> umap = {{1,'a'}, {2, 'b'}};

	cout << umap[1] << endl;
	cout << umap[2] << endl;

	umap[1] = 'c';

	for (auto& u : umap)
		cout << u.first << " -> " << u.second << "\n";


	auto found = umap.find(4);
	if (found != umap.end())
	cout << "found\n";

	return 0;
}
