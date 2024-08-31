#include <iostream>

// We have a Vechile class and its child are Car, MotorCycle, and Bicycle class

// now let say drive function in Car class and MotorCycle class are same but not same as parent;
// so we are duplicating the codes
// To resolve this Stategy Design suggest that make a new class where these functions are used and then use those here to avoide any duplication