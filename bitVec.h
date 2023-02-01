#ifndef bitVec_h
#define bitVec_h
class bitVec {
private:
	unsigned int* vec = nullptr;
public:
	bitVec(int);
	~bitVec();
	void set(int);
	void reset(int);
};
#endif
