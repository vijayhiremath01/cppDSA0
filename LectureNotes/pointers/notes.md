in our computer when we create a variable it have a adress and that adress is in from of hexadecimal number and we print it by using & .
pointers - special variables that stores adress of other variables 
int a = 10 ;
int* ptr = &a ; -----> this is pointer syntax 
dereference operator  means value at adress 
its llike 
cout << *(&a) << endl ; 
Null pointer - pointer that doesnt point to any location 
pass by referencee in CPP will happen through pointer or alias 
let create and array 
arr = {1 , 2, 3, 3,4}
when we cout << arr << endl ; some adress will print but the adress is of the ndex arr[0] th element 

if we do arr + 1 we get contiguos arrays valuse adress like 
arr = { 1 , 2, 3,4,5, 6}
*arr ---> 1 
*arr+1 -> 2
*(arr +2)>3