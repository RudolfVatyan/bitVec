#include "bitVec.h"

bitVec::bitVec(int size) { vec = new unsigned int[((size + 31) / 32)] {0}; }
bitVec::~bitVec() { delete[] vec; }
void bitVec::set(int index) {
	vec[index / 32] |= (1 << (index % 32));
}
void bitVec::reset(int index) {
	if (((vec[index / 32] >> (index % 32)) & 1) == 1) {
		vec[index / 32] ^= (1 << (index % 32));
	}
}
