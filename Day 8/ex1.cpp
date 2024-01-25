int *pOne; // a
// this one is a pointer to an integer that is not initialized

int vTwo; // b
// this one is an integer that is not initialized

int *pThree = &vTwo; // c
                     // this one is a pointer to an integer that is initialized to the address of vTwo