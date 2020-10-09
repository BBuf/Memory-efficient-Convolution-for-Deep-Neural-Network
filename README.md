# MEC:（ICML 2017)

MEC: Memory-efficient Convolution for Deep Neural Network C++个人实现，[论文地址](https://arxiv.org/abs/1706.06873v1)

# 测试环境和依赖

- Ubuntu18.04
- BLAS的免费版本ATLAS（安装命令：`sudo apt-get install libatlas-base-dev`）
- OpenMP

# 编译&运行
- g++ -o demo1 Im2ColOrigin.cpp /usr/lib/atlas-base/libcblas.so.3.0 -fopenmp & ./demo1
- g++ -o demo2 Im2ColMEC.cpp /usr/lib/atlas-base/libcblas.so.3.0 -fopenmp & ./demo2

# 速度测试、内存占用测试








