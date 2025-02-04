
#ifndef CLASSVECTOR_VECTOR_H
#define CLASSVECTOR_VECTOR_H


namespace UTEC{
    class Vector {
    private:
        int numElements;
        int *pointer;
    public:
        Vector(int);
		Vector(const Vector&);
		Vector operator=(const Vector&);
		int getNumElements();
        int fillVector();
        void push_back(int);
        void pop_back();
        void printVector();
        int size();
        void insert(int,int);
        void erase(int);
        int operator[](int);
        Vector operator+(const Vector&);
    };
}


#endif //CLASSVECTOR_VECTOR_H
