# Build New Source Files

#  sh makenew.sh -x <filename> (with or without extension)
## Removes all files with file basename (.cpp, .out, .txt)
## Makes a new cpp source file <filename>.cpp and input file <filename>-input.txt

## -n make  (touch) new source and input files only (.cpp, .txt)
## -r remove old files (.cpp, .out, .txt) only
## -x remove and make new files (.cpp, .out, .txt)

## DEFINE
sourcedir="."
inputdir="./inputs"
runfiledir="./exec"

## Globals
makenewinputfile=false
output=false
makenewsourcefile=false
iscompileandrun=false
sourcefile="default.cpp"
inputfile="default.txt"
runfile="default.out"
removefiles=false;

## Argument Parsing - "Requires OPTARG"
while getopts n:r:x: opt
do
    # echo "opt: $opt"
    # echo "{OPTARG}: ${OPTARG}"
    sourcename=$(echo "$sourcename" | cut -f 1 -d '.') || $sourcename
    sourcefile="$sourcedir/$sourcename.cpp"
    inputfile="$inputdir/$sourcename-input.txt"
    runfile="$runfiledir/$sourcename.out"
    case "${opt}" in
        n)
        makenewinputfile=true
        makenewsourcefile=true;;
        r)
        removefiles=true;;
        x)
        makenewinputfile=true
        makenewsourcefile=true
        removefiles=true;;
        *)
        echo "Invalid Option"
        exit 1;;
    esac
done


if [ "$removefiles" = true ] ; then
    echo "Removing sourcefile: $sourcefile";
    rm $sourcefile || true
    echo "Removing runfile: $runfile";
    rm $runfile || true
    echo "Removing input-file: $inputfile";
    rm $inputfile || true
    echo ""
fi

if [ "$makenewsourcefile" = true ] ; then
    echo "Creating sourcefile: $sourcefile";
    touch $sourcefile
fi

if [ "$makenewinputfile" = true ] ; then
    echo "Creating inputfile: $inputfile";
    touch $inputfile
fi

echo "\n===/Makenew output==="