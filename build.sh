#!/bin/bash

# =============== 配置区域 ===============
BUILD_DIR="build"          # CMake 构建目录
EXE_DIR="exe"              # 可执行文件输出目录
CMAKE_GENERATOR="Ninja"  # CMake 生成器
# =======================================

# 清理旧构建 - 强制删除 build 和 exe 目录
echo "删除旧构建目录: $BUILD_DIR 和 $EXE_DIR..."
rm -rf "$BUILD_DIR" "$EXE_DIR"

# 创建新目录结构
echo "创建新目录: $BUILD_DIR 和 $EXE_DIR..."
mkdir -p "$BUILD_DIR" "$EXE_DIR"

# 进入构建目录
cd "$BUILD_DIR" || exit 1

# 生成构建系统
echo "生成构建系统 (使用生成器: $CMAKE_GENERATOR)..."
cmake -G "$CMAKE_GENERATOR" ..

# 编译项目
echo "开始编译..."
if ninja; then
    echo "编译成功！"
    
    # 查找所有 .exe 文件
    echo "查找可执行文件..."
    exe_files=$(find . -type f -name "*.exe")
    
    if [ -n "$exe_files" ]; then
        # 移动文件到 exe 目录
        echo "移动可执行文件到 $EXE_DIR/ ..."
        while IFS= read -r file; do
            # 创建目标目录
            target_dir="../$EXE_DIR/$(dirname "$file")"
            mkdir -p "$target_dir"
            
            # 移动文件
            mv "$file" "$target_dir"
            echo "已移动: $file → $target_dir/"
        done <<< "$exe_files"
        
        # 显示结果
        echo "已移动以下可执行文件:"
        find "../$EXE_DIR" -name "*.exe" -exec ls -lh {} \;
    else
        echo "错误: 未找到任何 .exe 文件!"
        echo "可能的原因:"
        echo "1. 项目构建失败，没有生成可执行文件"
        echo "2. 可执行文件没有 .exe 后缀"
        echo "3. CMakeLists.txt 中的目标设置不正确"
        exit 1
    fi
    
    echo "构建完成! 可执行文件位于: $EXE_DIR/"
    exit 0
else
    echo "编译失败!"
    exit 1
fi