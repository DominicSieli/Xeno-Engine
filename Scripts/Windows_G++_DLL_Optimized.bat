cd ..

mkdir Binaries

echo #pragma once > Source\Configuration.h
echo #define WINDOWS >> Source\Configuration.h
echo #define DLL_EXPORT >> Source\Configuration.h

for %%I in (.) do set project=%%~nxI
set file=%project%_%~n0

g++ -c -DDLL_EXPORT Source/*.cpp
g++ -shared -o file.dll file.o -Wl,--out-implib,libfile.a