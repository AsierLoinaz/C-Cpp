#include "ArrayInt.h"
#define DEFAULT_CAPACITY 10
using namespace containers;

ArrayInt::ArrayInt(){
    this->capacity = DEFAULT_CAPACITY;
    this->array = new int[DEFAULT_CAPACITY];
}

ArrayInt::ArrayInt(unsigned int capacity){
    this->capacity = capacity;
    this->array = new int[capacity]; // new equivale a malloc
}

ArrayInt::~ArrayInt(){
    delete[] this->array; // liberar la memoria del array. Hacer delete[] le dice al compilador que es un array
}
void ArrayInt::setValue(unsigned int index, int data){
    if (index >-1 && index < this->capacity){
    this->array[index] = data;}
}
int ArrayInt::getValue(unsigned int index){
    if (index >-1 && index < this->capacity){
        return this->array[index];}
}
void ArrayInt::setCapacity(unsigned int capacity){
    if (capacity > 0){ // Comprobar capacidad

        int newArray[capacity];

        if(capacity >= this->capacity){ // Nuevo array mas grande o igual que el anterior
            for (int i = 0; i < this->capacity; i++){
                newArray[i] = this->array[i];
            }
        }
        else {
            for (int i = 0; i < capacity; i++){ // Nuevo array menor que el anterior
                newArray[i] = this->array[i];
            }
        }
        this->capacity = capacity;
        this->array = newArray;
       
    }
}
unsigned int ArrayInt::getCapacity(){
    return this->capacity;
}