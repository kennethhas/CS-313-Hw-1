#include <iostream>
#include <vector>
using namespace std;
// the Resaturant class 
class Restaurant {
public:

//get 
	string getName() {
		return name;
	}
	string getLocation() {
		return location;
	}
	//set 
	void setName(string name_param) {
		name = name_param;
	}
	void setLocation(string loc_param) {
		location = loc_param;
	}
	// pure vitural funtion menu 
	virtual vector<string> menu() = 0;

private:

	string name;
	string location;


};

class Italian_Restaurant :Restaurant {
// vector that store the menu for the italian restaurant  due to because when managing ever-changing data elements we can use vector c++
public:
	// using vector string element tos store the name of the food in the menu 
	vector<string> menu() {
		vector<string> menu_vect;
		//using push back to string from the back 
		menu_vect.push_back(" pizza");
		menu_vect.push_back(" pasta");
		menu_vect.push_back(" garlic bread");

		for (string x : menu_vect)
			cout << x << " " << endl;
		return menu_vect;
	}
};

class Greek_Restaurant :Restaurant {
// vector that store the greek menu
public:
	vector<string> menu() {
		vector<string> menu_vect;
		menu_vect.push_back(" Taramasalata");
		menu_vect.push_back(" Moussaka");
		menu_vect.push_back(" Courgette balls");

		for (string x : menu_vect)
			cout << x << " " << endl;
		return menu_vect;
	}

};

class Chinese_Restaurant :Restaurant {
	// vectore that store the chinese menu 
public:
	vector<string> menu() {
		vector<string> menu_vect;
		menu_vect.push_back(" kung pow chiken ");
		menu_vect.push_back(" brocoli beef ");
		menu_vect.push_back(" fried rice ");

		for (string x : menu_vect)
			cout << x << " " << endl;
		return menu_vect;
	}

};
// the template class for the reader robot 
template <class Restaurant>
class Reader_Robot {
public:
	void readMenu(Restaurant rest) {
		rest.menu();
	}

};
// main function fo the program 
int main() {
	// nameing the italian restaurant for the robot reader 
	Italian_Restaurant pizzahut;

	Greek_Restaurant nostimos;

	Chinese_Restaurant panda;

	// printing out the menu of all th inside of the menu 

	Reader_Robot<Italian_Restaurant> pizzahut_reader;
	pizzahut_reader.readMenu(pizzahut);
	Reader_Robot<Greek_Restaurant > nostimos_reader;
	nostimos_reader.readMenu(nostimos);
	Reader_Robot<Chinese_Restaurant> panda_reader;
	panda_reader.readMenu(panda);


	return 0;
}
