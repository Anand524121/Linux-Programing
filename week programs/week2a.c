/*problem statement:  Write a shell script that takes a command line
argument and reports on whether it is directory,
a file, or something else.*/

source code:
for f in $*
do
if [ -f $f ]
 then
                        echo "Given name is a File"
else if [ -d $f ]
 then
echo " Given name is a Directory"
       else
        echo " Not a File or Directory"
       fi
fi

done

/*Expected input-output:
 sh week2a.sh a
 Given name is a Directory*/