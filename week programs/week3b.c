/*Problem statement :Write the shell script that deletes 
all lines containing a specified word in one
 or more files supplied as arguments to it  */
 
Source code:
if [ $# -eq 0 ]
then
echo "Please enter one or more filenames as arguments"
exit
fi
echo "Enter the word to be searched in files"
read word
for file in $*
do
sed "/$word/d" $file | tee tmp
mv tmp $file
done


/*Input-Output:
 sh week3b.sh f1
Enter the word to be searched in files
apple
hello
principal
pleach
world
[17121a05e1@cse-rhel ~]$ cat f1
hello
principal
pleach
world
*/
