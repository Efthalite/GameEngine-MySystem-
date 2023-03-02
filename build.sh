

if [[ $@ == -r ]]
then 
    cd build && ./AlexEngine
elif [[ $@ == -rm ]]
then
    rm -r build
else
    cmake -S . -B build
    cd build && make
fi
