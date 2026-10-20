//Explanation

/*The diagram demonstrates multilevel inheritance in C++.
 The Reptile class is the base class and contains the common characteristics of reptiles, namely colour and age.
 The Snake class inherits from Reptile, meaning itgains access to these attributes while adding its own attributes: name, length, and venomous.
 The Cobra class then inherits from Snake, allowing it to access all attributes from both Reptile and Snake while introducing an additional attribute, hoodSize. 
 In my program, two different objects are created: King Cobra and Boomslang.
 Although both objects belong to the Cobra class, they store different values for their attributes, demonstrating how multiple objects of the same class can represent different real-world entities.
 This example clearly shows chained (multilevel) inheritance because the inheritance follows the hierarchy Reptile → Snake → Cobra, and a Cobra object can access members from every level of the inheritance chain.*/
