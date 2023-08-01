⟫⇛ Inheritance : 

Inheritance is the procedure in which one class inherits the
attributes and methods of another class. The class whose
properties and methods are inherited is known as the Parent/Base/Main
class. And the class that inherits the properties from the
parent class is the Child class.

Inheritance allows us to define a class in terms of another class, which makes it easier to
create and maintain an application. This also provides an opportunity to reuse the code
functionality and fast implementation time.


When creating a class, instead of writing completely new data members and member
functions, the programmer can designate that the new class should inherit the
members of an existing class. This existing class is called the base class, and the new
class is referred to as the derived class.

⟫⇛ Inheritance:
⟫⇛ Inheritance is the procedure in which one class inherits the
attributes and methods of another class. The class whose
properties and methods are inherited is known as the Parent/Base/Main
class. And the class that inherits the properties from the
parent class is the Child class.
eg : Animal class ==> dog class,cat class,cow class

⟫⇛ Why we use inheritance:
The main advantage Of inheritance is code reusability. We can reuse the code when we inherit the existing
class's methods and fields into a new class.

• The runtime polymorphism (method overriding) can be achieved by inheritance only.
   Important terminology of inheritance
• Sub Class: The class that inherits properties from another class is called Subclass or Derived Class.
• Super Class: The class whose properties ore inherited by the subclass is called Base Class or Superclass.


Animal class ===> parent/super/main/base class
dog class ==> sub-class /child class.



Syntax:
class parent_class {
//Body of parent class
};
class child_class: access_modifier parent_class {
//Body of child class
};


eg : Animal class ==> dog class,cat class,cow class

⟫⇛ Modes of Inheritance :

1. Public mode: If we derive a subclass from a public base class. Then. the base class's public members will
become public in the derived class, and protected class members will become protected in the derived class.

2. Protected mode: tf we derive a subclass from a Protected base class. Then both public members and
protected members of the base class will become protected in the derived class.

3. Private mode: If we derive a from a Private base class. Then both public members and protected
members of the base class will becéme Private in the derived class.
==similar to private / child class can access /accessible inside the class


Base Class member Access
 
⟫⇛ private data members of any class cannot be inherited
















