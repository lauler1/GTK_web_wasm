# GTK_web_wasm/learn

Back to [home](../README.md)

 - [wasm hello world c](wasm_hello_world_c/readme.md)
 - [wasm hello world c shell minimal](wasm_hello_world_c_shell_minimal/readme.md)
 - [wasm hello world c multiple sources](wasm_hello_world_c_multiple_sources/readme.md)
 - [wasm hello world c makefile](wasm_hello_world_c_makefile/readme.md)
 - [wasm hello world c makefile Dynamic Linking](wasm_hello_world_c_makefile_Dynamic_Linking/readme.md)



## Installing the C Emscripten SDK (emsdk)

 - [Instructions](https://emscripten.org/docs/getting_started/downloads.html)


On Linux

```bash
# Get the emsdk repo
git clone https://github.com/emscripten-core/emsdk.git

# Enter that directory
cd emsdk

# Fetch the latest version of the emsdk (not needed the first time you clone)
git pull

# Download and install the latest SDK tools.
./emsdk install latest

# Make the "latest" SDK "active" for the current user. (writes .emscripten file)
./emsdk activate latest

# Activate PATH and other environment variables in the current terminal
source ./emsdk_env.sh
```


