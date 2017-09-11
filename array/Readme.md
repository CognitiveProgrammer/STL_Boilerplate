# std::array - Sequence Container

_A sequence container preserves the insertion sequence of the elements into the container_ 

## Array memory layout
_std::array is stored in stack as contiguous memory_

## Creating Array Container

__std::array__ _requires following header file_
```
#include <array>
```
__std::array__ _takes two template arguments, the first being type of the array and second being the size of the array. For example, to create and integer array of size 5 can be done in one of the  following way_

```
std::array<int, 5> arrInit = { 1,2,3,4,5 };
std::array<int, 5> arrInit2 { 5,2,3,4,5 };

```
_The elements of an array can be accessed by using C++11 for-loop_

```
for (auto &val : arrInit2)
  std::cout << val << std::endl;
```
_or by using_ __Iterator__ _based for-loop_
```
for (std::array<int, 5>::iterator itr = arrInit.begin(); itr != arrInit.end(); itr++)
		std::cout << *itr << std::endl;
```
_Alternativey the array elements could also be accessed by subscript operator as well as by using .at(...) member function_

### Using subscript operator

```
std::cout << arrInit[3] << std::endl;
```
_The subscript operator can also be used to update the values in a non-const arrays_

```
arrInit[3] = 100;
```
### Using .at(array_index) function
```
std::cout << arrInit.at(3) << std::endl;
```
_The .at(...) function can also be used to update the values in a non-const arrays_

```
arrInit.at(3) = 300;
```

## Modifying the values in std::array

_Apart from_ ```[]``` _and_ ```.at(...)``` _the values can be modified in one go using_ ```.fill(...)``` _function. This function sets the uniform values in the array as passed in the function_
```
arrInit.fill(-45); // sets all elements of integer array as -45
```
_The array can also be swapped with another array of same size using_ ```.swap(...)``` _function_

```
arrInit2.swap(arrInit);

```
## Deleting the array container

_Array container allocated on stack and doesn't have any explicit free call. The size of the array shall remain the same throught its lifetime which is decided by the stack_
