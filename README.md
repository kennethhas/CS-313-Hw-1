# Hw-1 q 11
q 11
Create a class called Restaurant. Give it the necessary structure, variables, and
functions, and create a pure virtual function called menu. Create a class called
Italian_Restaurant, Greek_Restaurant, and Chinese_Restaurant as derived classes.
Use the parent classes constructor as well as any other variables that need to be
created. Create a templated class called Reader_Robot. It should take in any kind of
restaurant and use polymorphism to read the menu (that you overrode). Show how this
works in main.

for this question i used vectors because vectors in c++ are preferable when managing 
ever-changing data elements. with that being said i think this a straight forward problem 
it ask you to make a restaurant class with a pure virtual function. A pure virtual function
is a way that to include a virtual function in a base class so that it may be redefined in
a derived class to suit the objects of that class. And using polymorphism which occurs when 
there is a hierarchy of classes which will call to a member of a function in this case 
the restaurant class and the Greek Chinese Italian restaurant to print them out . 
 First making a class restaurant with get and set in public and i put the virtual function (The = 0 tells the compiler that the function has no body and 
above virtual function will be called pure virtual function. (tutorialpoint))The private variable is name and location this would help us with the name 
of the restaurant and the location (however some menu don’t put their location). secondly i make an derived class in the restaurant class (pure virtual) 
which is the Italian Greek and Chinese restaurant, then using vectors to create the menu 
and store the element in the vector’s menu. after i am done putting the element in the menu
i put a loop inside the derived class for each element in the vector print the element.
thirdly it ask us to make a reader robot function which basically print out the menu. Then in the main
we name our Greek Chinese and Italian restaurant for the reader to call. Then use the reader robot function to print 
menu in each restaurant
