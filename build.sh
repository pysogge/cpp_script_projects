isinputfile=false
output=false
issourcefile=false
iscompileandrun=false
sourcefile="default.cpp"
inputfilename="default.txt"
runfile="default.out"
runonly=false;

while getopts i:s:c:x:r: flag
do
    case "${flag}" in
        i) isinputfile=true;;
        s) sourcefile="${OPTARG}.cpp"
        issourcefile=true;;
        c) sourcefile="${OPTARG}.cpp"
        issourcefile=true
        iscompileandrun=true;;
        x)
        sourcename=${OPTARG}
        sourcefile="$sourcename.cpp"
        inputfilename="$sourcename-input.txt"
        isinputfile=true
        issourcefile=true;;
        r) 
        sourcename=${OPTARG}
        runfile="$sourcename.out"
        runonly=true;;
    esac
done

if [ "$issourcefile" = true ] ; then
    echo "Building source: $sourcefile";
    echo "g++ $sourcefile -o ./exec/$sourcefile.out"
    g++ $sourcefile -o ./exec/$sourcefile.out

    if [ "$iscompileandrun" = true ] ; then
        echo "Running program: $sourcefile";
        echo "./exec/$sourcefile.out"
        echo "===Program output:==="
        ./exec/$sourcefile.out
    fi
fi

if [ "$isinputfile" = true ] ; then
    echo "Using input: $inputfilename"
    echo "cat ./inputs/$inputfilename | ./exec/$sourcefile.out"
    echo "===Program output:==="
    touch ./inputs/$inputfilename
    cat ./inputs/$inputfilename | ./exec/$sourcefile.out
fi


if [ "$runonly" = true ] ; then
    echo "Running: $runfile"
    echo "./exec/$runfile"   
    echo "===Program output:==="
    ./exec/$runfile 
fi

echo "\n===/Build and Program output==="