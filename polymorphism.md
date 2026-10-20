
    /*Paragraph Explanation

    The diagram demonstrates polymorphism in C++.
    The Snake class acts as the parent class and contains a virtual function called displayVenomEffect().
    Two derived classes, Cobra and Boomslang, inherit from the Snake class and override the virtual function with their own implementations. 
    Although the same function name is used, each class produces different behaviour when the function is called. 
    Using a base-class pointer of type Snake*, the program can refer to either a Cobra object or a Boomslang object.
    When running the code, C++ automatically executes the appropriate overridden function based on the actual object being referenced. 
    This demonstrates runtime polymorphism because the same function call results in different outputs depending on the type of snake object being used.*/
