# sln
1. 是什么？ CMake工程的解决方案模板
2. 做什么？ CMake工程规范化
3. 意义？ 写给自己玩/给其它人参考

### 目录结构
* cmake -- 存放cmake公共配置
* docs -- 存放文档
* src -- 存放代码文件
* test -- 存放测试代码文件
* tools -- 存放一些工程相关工具
* 3rdparty -- 存放第三方库
* build -- 存放构建临时目录，加到.gitignore中

### 文件结构
* CMakeLists.txt -- 主工程
* SlnOptions.cmake -- 一些配置选项