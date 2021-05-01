// constructor in derived class

// can use the consturctors in the derived class
// if base class constructor does not have any arguments ,no need of constructor in derived class
// if one or more arguemennts in base constructor derved class need to pass arguments to base class constructor
// if base + derive have constructor base class constructor will excecute first

// in multiple inheritance

// base class contruct in order they appear in class declaration
// constructor are ecxcecute in order of inheritance.


// special syntax
// the constructor of derived class receive all arguements 
// at once and then will pass the call to respective base classes
//  Derive-constructor(arg1,arg2,arg3.....),Base-1-constructor(arg1,arg2),.......{

// }



// special case of virtual base class

// these class consturctor innvolke before any non virtual base class
// multiple birtual base class then involke in order of their declaration
// any non virtul base class are then constructed before derived class constructor is excecuted.
