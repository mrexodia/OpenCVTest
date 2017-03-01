# OpenCVTest

A test CLion/CMake project for OpenCV 3.20 on OS X.

## Install OpenCV

```
brew install homebrew/science/opencv3
brew link --force homebrew/science/opencv3
```

## Building (CMake)

```
mkdir build
cd build
cmake -DCMAKE_PREFIX_PATH=/usr/local/opt/opencv3/share/OpenCV ..
make
```

## Building (CLion)

1. Open the directory in CLion
2. Go to Preferences -> Build, Execution, Deployment -> CMake
3. Add `-DCMAKE_PREFIX_PATH=/usr/local/opt/opencv3/share/OpenCV` to CMake options


