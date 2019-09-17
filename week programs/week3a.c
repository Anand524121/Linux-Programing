/*problem statement:Write a shell script that accepts a filename starting and ending line numbers
as arguments and displays all the lines between the given line numbers*/

source code
echo "enter the filename"
read fname
echo "enter the starting line number"
read s
echo "enter the ending line number"
read n
head -$n $fname | tail -$[n-s+1]

/*Input-Output:
[17121a05e1@cse-rhel ~]$ vi week3a.sh
[17121a05e1@cse-rhel ~]$ sh week3a.sh
enter the filename&quot
fruits
enter the starting line number&quot
2
enter the ending line number&quot
5
orange
grapes
promagranate
banana
*/