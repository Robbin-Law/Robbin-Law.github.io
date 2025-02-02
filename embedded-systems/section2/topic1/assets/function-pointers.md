# Function Pointers

Function pointer declaration examples:

```C
void (*pFunction)(void) - Pointer to a function that takes no parameters and does not return anything 

void (*pFunction)(int) - Pointer to a function that takes one int parameter and does not return anything 

void (*pFunction)() - Pointer to a function that takes any parameter and does not return anything 

int (*pFunction)(void) - Pointer to a function that takes no parameters and returns an int 

int (*pFunction)(int) - Pointer to a function that takes one int parameter and returns an int 

int (*pFunction)() - Pointer to a function that takes any parameter and returns an int
```

## Understanding the void* type

There are times when the type of a pointer is not known. This occurs primarily in C library functions.

For this reason, the void* pointer type represents a generic, as yet unspecified pointer – in other words, a pointer whose type is not known at declaration. Any pointer type can be assigned to a pointer variable of the void* type. However, before that pointer variable can be accessed, the type of the data being accessed must be specified through the use of a casting operation:

```C
// we don't yet know what it points to.
void* aPtr = NULL;
// it has the address of height, but no type yet.
aPtr = &height;
// with casting, we can now go to that
// address and fetch an integer value.     
int h = *(int*)aPtr; 
```

In the first statement of the preceding code block, we can see how aPtr is declared as a pointer, but we don't yet know its type or what it points to. In the next statement, aPtr is given the address of height, but we still don't know the type of the object that aPtr points to. You might think that the type could be inferred from the named variable, but C is not that smart, in other words, the compiler does not keep that kind of information about variables around for use at runtime. In the last statement, there is quite a bit going on. First, we must cast void* aPtr to int* aPtr. Having done that, we can then get the target of the integer pointer by dereferencing the properly typed pointer to get the value of height, which is the correct number of bytes for int. Casting tells the compiler exactly how many bytes to fetch and exactly how to interpret those bytes.

```C
int main( void)  {
  int height = 10;
  void* aPtr = NULL;
  aPtr = &height;
  int h = *(int*)aPtr;
  printf( "             height = [%d]\n" , height );
  printf( "        *(int*)aPtr = [%d]\n" , *(int*)aPtr );
  printf( "                  h = [%d]\n" , h );
  printf( "   sizeof( height ) = %lu\n" , sizeof( height ) );
  printf( "sizeof(*(int*)aPtr) = %lu\n" , sizeof( *(int*)aPtr ) );
  *(int*)aPtr = 3;
  printf( "        *(int*)aPtr = [%d]\n" , *(int*)aPtr );
  printf( "             height = [%d]\n\n" , height );
  return 0;
}
```
