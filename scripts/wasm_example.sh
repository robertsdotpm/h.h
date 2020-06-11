echo "> Doing WASM build"


cd scripts

# Edit this
#source emsdk/emsdk_env.sh
source ~/.emscripten

rm -rf ../webasm
mkdir -p ../webasm
em++ -g -s ERROR_ON_UNDEFINED_SYMBOLS=0 -s DISABLE_EXCEPTION_CATCHING=0 -std=c++14 --emrun ../example.cpp -o ../webasm/hello.html
emrun --no_browser --port 8080 ./wasm