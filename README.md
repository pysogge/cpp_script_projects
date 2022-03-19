# C++ Scripts and Exercise Files

## Compile and Run with Input File
```bash
sh build.sh -x classes_structs.cpp

##  sh build.sh -x <filename> (with or without extension)

## -x build and then run with an input file
## -c build and then run without an input file
## -b build only
## -i run only with input file
## -r run only without input file
```

## Make new files and input files
```bash
sh makenew.sh -x classes_structs.cpp

##  sh makenew.sh -x <filename> (with or without extension)
## Removes all files with file basename (.cpp, .out, .txt)
## Makes a new cpp source file <filename>.cpp and input file <filename>-input.txt

## -n make  (touch) new source and input files only (.cpp, .txt)
## -r remove old files (.cpp, .out, .txt) only
## -x remove and make new files (.cpp, .out, .txt)
```



## Lessons

Note: Unlike C, C++ allows dynamic allocation of arrays at runtime without special calls like malloc(). If , int arr[n] will create an array with space for  integers.
Accessing elements of an array.  E.g. c would require int arr[10] explicitily without malloc();

Note: In C++ data members of a class are private by default and the members of a structure are public by default.