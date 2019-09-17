/*problem statement:Write a shell script that accepts one or more file
names as arguments and converts all of them to
uppercase, provided they exist in the current
directory.*/
source code:
for i in $*

do
echo Contents of $i file before converting to uppercase
echo -------------------------------------------------------------
cat $i
echo contents of $i file after converting to uppercase
echo -------------------------------------------------------------
tr '[ a-z ]' '[ A-Z ]' < $i
done

/*Expected input-output
sh week2b.sh aaa.txt
Contents of aaa.txt file before converting to uppercase
-------------------------------------------------------------
this is a shell script uesd to convert the inner case into uper case
contents of aaa.txt file after converting to uppercase
-------------------------------------------------------------
THIS IS A SHELL SCRIPT UESD TO CONVERT THE INNER CASE INTO UPER CASE
*/