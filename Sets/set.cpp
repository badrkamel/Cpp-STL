#include <iostream>
#include <set>

struct Person {
	int age;
	std::string name;

	bool operator < (const Person& p) const {return age<p.age;}
	bool operator > (const Person& p) const {return age>p.age;}
};

int main() {
	std::set<Person, std::greater<>> Set = {{20, "person1"}, {25, "person2"}};

	for (auto& i : Set)
		std::cout << i.age << " " << i.name << "\n";

	return 0;
}
