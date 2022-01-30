# command to run file is bash -f hello.sh
#!/bin/bash

echo "Enter first character of platform only"
echo "Like L for Leetcode, A for AtCoder and C for Codeforces"
read platform_name

if [ "$platform_name" == "l" ] || [ "$platform_name" == "L" ]
# here space between bracket, operator and operand is necessary
# otherwise it will give error
then
    platform_name="Leetcode"
    read_file="LeetCode.cpp"

elif [ "$platform_name" == "a" ] || [ "$platform_name" == "A" ]
then
    platform_name="AtCoder"
    read_file="Cf.cpp"

elif [ "$platform_name" == "c" ] || [ "$platform_name" == "C" ]
then
    platform_name="Codeforces"
    read_file="Cf.cpp"

else
    platform_name="unkown"
    read_file="Cf.cpp"
fi



# to create file with given name
# touch ch.txt
echo "how many file you want to create"
read no_of_file
echo "platform name is $platform_name"

# for loop
for i in $(seq 1 $no_of_file)
do
    filename="$platform_name"_"$i.cpp"
    echo "file name is "$filename
    touch $filename
    command_to_run=`cat $read_file`
    # command which you want to run
    echo "$command_to_run" > $filename
    # file with correct file name is created

done

echo "done"
