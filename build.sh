# Build and Run CPP File

##  sh build.sh -x <filename> (with or without extension)

## -x build and then run with an input file
## -c build and then run without an input file
## -b build only
## -i run only with input file
## -r run only without input file

## DEFINE
sourcedir="."
inputdir="./inputs"
runfiledir="./exec"

## Globals

sourcename="default"
sourcefile="default.cpp"
inputfile="default.txt"
runfile="default.out"

isrun=false
isbuild=false
isuseinputfile=false;


# isinputfile=false
# output=false
# issourcefile=false
# iscompileandrun=false
# sourcefile="default.cpp"
# inputfile="default.txt"
# runfile="default.out"
# runonly=false;

while getopts x:c:b:r:i: opt
do
    sourcename=${OPTARG}
    sourcename=$(echo "$sourcename" | cut -f 1 -d '.') || $sourcename
    sourcefile="$sourcedir/$sourcename.cpp"
    inputfile="$inputdir/$sourcename-input.txt"
    runfile="$runfiledir/$sourcename.out"
    case "${opt}" in
        x)
            isbuild=true
            isrun=true
            isuseinputfile=true;;
        c)
            isbuild=true
            isrun=true;;
        b)
            isbuild=true;;
        r) 
            isrun=true;;
        i) 
            isrun=true
            isuseinputfile=true;;
    esac
done

if [ "$isbuild" = true ] ; then
    echo "Building source: $sourcefile";
    echo "g++ $sourcefile -o $runfile"
    g++ $sourcefile -o $runfile
fi

if [ "$isrun" = true ] ; then
    echo "Running program: $sourcefile";
    if [ "$isuseinputfile" = true ]
    then
        echo "Using input: $inputfile"
        echo "cat $inputfile | $runfile"
        echo "===Program output:==="
        cat $inputfile | $runfile
    else
        echo "With no input file"
        echo "$runfile";
        echo "===Program output:==="
        $runfile
    fi
    echo "\n===/Build and Program output==="
fi