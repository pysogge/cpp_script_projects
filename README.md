# C++ Scripts and Exercise Files

## Compile and Run with Input File
```bash
sh build.sh -x classes_structs

Generic:
sh build.sh -x <project_name_without_extension>
```

## Compile and Run without Input File
```bash
sh build.sh -c classes_structs

Generic:
sh build.sh -c <project_name_without_extension>
```

## Just Run a Program by Name
```bash
./exec/intro_for_loop.out

Generic:
./exec/<project_name>.out
```

## Run Projects
```bash
intro_arrays
intro_for_loop
intro_io_scanf_printf
intro_pointer
classes_structs
```

## Lessons

Note: Unlike C, C++ allows dynamic allocation of arrays at runtime without special calls like malloc(). If , int arr[n] will create an array with space for  integers.
Accessing elements of an array.  E.g. c would require int arr[10] explicitily without malloc();

Note: In C++ data members of a class are private by default and the members of a structure are public by default.