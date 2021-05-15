# This repo stores 'hello_world' compilation of UPC++, LibTorch, OpenCV

1. Download prebuilt libtorch **with cxx11 ABI option** (the lastest version may be updated). Here, I use Torch v1.7.1 with CUDA-10.1 (I referenced from [here](https://blog.csdn.net/weixin_43742643/article/details/114156298)):

| Platform       | Download |
|-----------|----------|
| CPU |[v1.7.1](https://download.pytorch.org/libtorch/cpu/libtorch-cxx11-abi-shared-with-deps-1.7.1%2Bcpu.zip) ---- [v1.8.0](https://download.pytorch.org/libtorch/cpu/libtorch-cxx11-abi-shared-with-deps-1.8.0%2Bcpu.zip) ---- [v1.8.1](https://download.pytorch.org/libtorch/cpu/libtorch-cxx11-abi-shared-with-deps-1.8.1%2Bcpu.zip)|
| CUDA-10.1 |[v1.7.1](https://download.pytorch.org/libtorch/cu101/libtorch-cxx11-abi-shared-with-deps-1.7.1%2Bcu101.zip) ---- [v1.8.0](https://download.pytorch.org/libtorch/cu101/libtorch-cxx11-abi-shared-with-deps-1.8.0%2Bcu101.zip) ---- [v1.8.1](https://download.pytorch.org/libtorch/cu101/libtorch-cxx11-abi-shared-with-deps-1.8.1%2Bcu101.zip)|
| CUDA-10.2 |[v1.8.1](https://download.pytorch.org/libtorch/cu102/libtorch-cxx11-abi-shared-with-deps-1.8.1%2Bcu102.zip)|
| CUDA-11.0 |[v1.7.1](https://download.pytorch.org/libtorch/cu110/libtorch-cxx11-abi-shared-with-deps-1.7.1%2Bcu110.zip)|
| CUDA-11.1 |[v1.8.0](https://download.pytorch.org/libtorch/cu110/libtorch-cxx11-abi-shared-with-deps-1.8.0%2Bcu110.zip) ---- [v1.8.1](https://download.pytorch.org/libtorch/cu111/libtorch-cxx11-abi-shared-with-deps-1.8.1%2Bcu111.zip)|

2. Unzip libtorch to `<libtorch-root-dir>`, mine is `~/Downloads/libtorch`
3. Build OpenCV from source, instruction was updated [here](https://github.com/phithangcung/Installation-Notes/blob/main/Install_OpenCV4_with_CUDA.md). I tested with OpenCV-4.5.2 with contrib stuffs
4. Setup UPC++ as following the instruction at  [here](https://bitbucket.org/berkeleylab/upcxx/wiki/INSTALL)

5. There are three framework in this repo
 - Compile a "hello world" program with LibTorch-CPU
 - Compile a "hello world" program with LibTorch-GPU
 - Compile a "hello world" program with Libtorch + UPCXX
 - Compile a "hello world" program with Libtorch + UPCXX + OpenCV

6. For script compilation with Jupyter Notebook, instruction was updated at [here](https://github.com/phithangcung/Installation-Notes/blob/main/Install-Jupyter-LibTorch.md)


