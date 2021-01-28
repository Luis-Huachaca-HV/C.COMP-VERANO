#ifndef __INTEGER_ARRAY__
#define __INTEGER_ARRAY__
#include <iostream>
using namespace std;
class IntegerArray {

    private:
        int *data;
        int size;
    public:
        IntegerArray(int size);
        IntegerArray(IntegerArray &o);
        ~IntegerArray();

				void push_back(int n){
					
					for (int i =0; i < size; i++){
						if (i == size-1){
							data[i] = n;
						} else {
							data[i] = data[i+1];
						}
					}
				};
				void remove(){
					IntegerArray aux(size);
					for (int i=0; i < size ; i++){
						aux.data[i] = data[i];
					}
					for (int j = 0; j < size; j++){
						data[j] = aux.data[j-1];
					}
					

				};
				void print(){
					
					for (int i= 0; i < size ; i++){
						cout << data[i] << " ";
					}
				};

};

#endif