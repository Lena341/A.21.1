# A.21.1
C++ exercise

Set the classes A and B and class C which is produced with public access from the classes A and B. Set class D which is produced with public access from B. Set class E which is
produced with public access from C and D. Let's assume that an E object is created (e.g e). Set the classes in such way so that e contains only one subject of class B. In which order do you think the subjects of the classes will be created and destroyed? Write a program which implements the form of heredity above. Each class shoudld contain one constractor and one destructor which show the right messages, so that you can your answer about the order of creation and destruction of the objects. The program should show:

B() A() C() D() E()
~E() ~D() ~C() ~A() ~B()

Note: 
The exercises are not mine, only the solution. They are part of the book "C++ from theory to practice" written by G. S. Tselikis.
