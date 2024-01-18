// Class: {class-name}

Class {class-name} is a {superclass}
    
    Procedure Construct_Object
        Forward Send Construct_Object    // Important

        // Define new Properties:
        // Property {Type} {pxName} {initial_value}

        // Create child objects:
        // Object {name} Is A {class}
        // End_Object // {name}

        // Set property values:
        // Set {property} To {value}
    End_Procedure  // Construct_Object

    Procedure End_Construct_Object
        Forward Send End_Construct_Object

        // Add your code that needs to be executed at the end of the object construction here:
    End_Procedure // End_Construct_Object

    // Create and augment procedures and functions
End_Class