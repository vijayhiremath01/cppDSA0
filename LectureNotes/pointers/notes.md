in our computer when we create a variable it have a adress and that adress is in form of hexadecimal number and we print it by using & .
pointers - special variables that stores adress of other variables 
int a = 10 ;
int* ptr = &a ; -----> this is pointer syntax 
dereference operator  means value at adress 
its llike 
cout << *(&a) << endl ; 
Null pointer - pointer that doesnt point to any location 
pass by referencee in CPP will happen through pointer or alias 
let create an array 
arr = {1 , 2, 3, 3,4}
when we cout << arr << endl ; some adress will print but the adress is of the ndex arr[0] th element 

if we do arr + 1 we get contiguos arrays valuse adress like 
arr = { 1 , 2, 3,4,5, 6}
*arr ---> 1 
*arr+1 -> 2
*(arr +2)>3

array is one tye of pointer in cpp 
array pointer is constant it should be a modifiable value 

arithmetic operations on pointers 
like p++ and p-- eample 
cout < ptr « endl;
ptr++;
cout « ptr « endl;

in cpp we cannot add two pointer directly but we can substract them if there types are same 
we can comapre the pointers also and if its true it gives 1 else gives 0 