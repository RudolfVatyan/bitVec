#include <iostream>


class bitVec {
private:
	int count;
	unsigned int* vec = nullptr;
public:
	bitVec(int size) { count = (size / 32) + 1; vec = new unsigned int[count] {0}; }
	~bitVec() { delete[] vec; }
	void set(int index) {
		vec[index / 32] |= (1 << (index % 32));
		//std::cout << vec[index / 32];
	}
	void reset(int index) {
		if (((vec[index / 32] >> (index % 32)) & 1) == 1) {
			vec[index / 32] ^= (1 << (index % 32));
		}
		std::cout << vec[index / 32];
	}
};

int main() {
	bitVec vec(100);
	vec.set(32);
	//vec.set(35);
	vec.set(37);
	vec.reset(35);
}