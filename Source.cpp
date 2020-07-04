#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string species;
	int speed;
	double weight;
	string residence;

public:
	Animal()
		: species("Bird"), speed(46), weight(0.025), residence("Europe") {}
	Animal(string type, int speed, double weight, string residence)
		: species(type), speed(speed), weight(weight), residence(residence) {}	

	void Say()
	{
		cout << "I`m an animal, I can say something" << endl;
	}

	void Move() {

		cout << "I`m an animal, I can move" << endl;
	}

	void Show() const {
		
		cout << "My species - "<< species << endl;
		cout << "My speed - " << speed <<" km/h" <<endl;
		cout << "My weight - " << weight << " kg"<<endl;
		cout << "My residence - " << residence << endl;
	}
};

class Bird : public Animal
{
protected:
	float flightHeight;
public:
	Bird() : flightHeight(0), Animal() {}
	Bird(float height, string type, int speed, double weight, string residence) 
		: flightHeight(height), Animal(type, speed,  weight, residence) {}

	void Fly()
	{
		cout << "I`m a bird, I can fly high!" << endl;
	}
	
	void Show() const {

		cout << "I'm a bird!" << endl;
		Animal::Show();
		cout << "My flight height - " << flightHeight << " m"<< endl;		
	}

};
class Reptile : public Animal
{
protected:
	string rank;
public:
	Reptile() : rank("Turtle"), Animal() {}
	Reptile(string rank, string type, int speed, double weight, string residence)
		: rank(rank), Animal(type, speed, weight, residence) {}

	void Ñrawl() {

		cout << "I`m a reptile, I can crawl!" << endl;
	}	

	void Show() const {

		cout << "I'm a reptile!" << endl;
		Animal::Show();
		cout << "And I am  - " << rank << endl;
	}

};
class Fish : public Animal
{
protected:
	string rank;
public:	
	Fish() : rank("Carp"), Animal() {}
	Fish(string rank, string type, int speed, double weight, string residence)
		: rank(rank), Animal(type, speed, weight, residence) {}


	void Swim() {

		cout << "I`m a fish, I can swim!" << endl;
	}

	void Show() const {

		cout << "I'm a fish!" << endl;
		Animal::Show();
		cout << "And I am  - " << rank << endl;
	}
};

class Sparrow : public Bird
{
private:
public:
	Sparrow()
		: Bird(150, "Bird", 46,  0.025, "Europe") {}

	void Show() const {
		cout << "I'm the sparrow!" << endl;
		Bird::Show();
	}
};

class HermanTurtle : public Reptile
{
private:
public:
	HermanTurtle()
		: Reptile("Turtle", "Reptile", 1, 3, "Spain, Southern France, Italy, the Balkans") {}

	void Show() const {
		cout << "I'm the Herman Turtle!" << endl;
		Reptile::Show();
	}
};

class WhiteShark : public Fish
{
private:
public:
	WhiteShark()
		: Fish("Shark", "Fish", 40, 1000, "Surface coastal and open waters of all oceans of the Earth") {}

	void Show() const {
		cout << "I'm the White Shark!" << endl;
		Fish::Show();
	}
};

int main()
{
	Sparrow sp;
	sp.Show();
	cout << endl << endl;
	HermanTurtle ht;
	ht.Show();
	cout << endl << endl;
	WhiteShark wh;
	wh.Show();
	system("pause");
	return 0;
}