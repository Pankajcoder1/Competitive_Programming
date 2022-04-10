# Developer: Pankaj Kumar

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

elif [ "$platform_name" == "a" ] || [ "$platform_name" == "A" ]
then
    platform_name="AtCoder"

elif [ "$platform_name" == "c" ] || [ "$platform_name" == "C" ]
then
    platform_name="Codeforces"

else
    echo "You want to mention platform name, Y/N ? "
    read answer
    if [ "$answer" == "Y" ] || [ "$answer" == "y" ]
    then
        echo "Enter platform name: "
        read platform_name
    else
        echo "deafult platform name is 'unknown' "
        platform_name="unkown"
    fi
fi


# -----------------------------------------------------------------------------------


# assign read file
if [ "$platform_name" == "Leetcode" ]
then
    read_file="LeetCode.cpp"

elif [ "$platform_name" == "AtCoder" ]
then
    read_file="../../Atcoder.cpp"

else
    read_file="Cf.cpp"
fi

# -----------------------------------------------------------------------------------


# to create file with given name
echo "how many file you want to create"
read no_of_file

for i in $(seq 1 $no_of_file)
do
    filename="$platform_name"_"$i.cpp"
    touch $filename
    command_to_run=`cat $read_file`
    # command which you want to run
    echo "$command_to_run" > $filename
    # file with correct file name is created

done

echo "done"
