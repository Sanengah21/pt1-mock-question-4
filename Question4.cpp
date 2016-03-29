///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 
///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:Abraham Sanenga
// Student No:214576463
// Date: 29 March 2016
///////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>

using namespace std;

class Animal
{
public:
	Animal();
	virtual void name();
	virtual void does();
	~Animal();
};

Animal::Animal()
{

}
void Animal::name() {
	cout << "I am an animal my name is; " << endl;
}

void Animal::does() {
	cout << "I does this; " << endl;
}

Animal::~Animal()
{


}

class Bird : public Animal {
public:
	Bird();
	void name();
	void does();
	~Bird();
};
 
Bird::Bird()
{


}

void Bird::name() {
	cout << "I am an animal my name is a bird; " << endl;
}

void Bird::does() {
	cout << "I do fly " << endl;
}

Bird::~Bird()
{


}


class Dog : public Animal {
public:
	Dog();
	void name();
	void does();
	~Dog();
};


Dog::Dog()
{


}

void Dog::name() {
	cout << "I am an animal my name is a dog! " << endl;
}


void Dog::does() {
	cout << "I do buck " << endl;
}

Dog::~Dog()
{


}


int main()
{
	Bird flamingo;
	Dog pitbull;

	flamingo.name();
	flamingo.does();

	pitbull.name();
	pitbull.does();

	return 0;


}
