# include<iostream>

using namespace std;

class animals{
	public:
	int legs;
	int eyes;
	animals(){
		legs=4;
		eyes=2;
	}
};

class wild_animals:public animals{
	public:
	void place(){
		cout<<"jungle";
	}
};

class carnivores: public wild_animals {
	public:
	void food(){
		cout<<"Meat";
	}
};

class tiger : public carnivores {
	public:
	void speak(){
		cout<<"roar";
	}
	void colour(){
		cout<<"orange with black strips";
	}
};

class lion: public carnivores {
	public:
	void speak(){
        	cout<<"Roar";
	}
	void colour(){
        	cout<<"Yellow";
	}
};
class fox: public carnivores{
	public:
	void speak(){
		cout<<"howl";
	}
	void colour(){
		cout<<"reddish brown";
	}
};
class herbivores: public wild_animals{
	public:
	void food(){
		cout<<"plant based";
	}
};
class dear: public herbivores{
	public:
	void speak(){
		cout<<"dummy value";
	}
	void colour(){
		cout<<"brown";
	}
};
class elephants: public herbivores{
	public:
	void speak(){
		cout<<"dummy value";
	}
	void colour(){
		cout<<"gray";
	}
};
class zebra: public herbivores{
	public:
	void speak(){
		cout<<"idk";
	}
	void colour(){
		cout<<"black and white";
	}
};


int main(){
	lion l1;
	l1.speak();
	cout<<endl;
	l1.colour();
	return 0;
}
