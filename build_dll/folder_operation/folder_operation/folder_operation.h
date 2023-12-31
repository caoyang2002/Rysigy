#pragma once

#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

#include <conio.h> // 获取输入后退出
#include <regex> //正则表达式

namespace fs = std::filesystem;
using namespace std;

class __declspec(dllexport) folder_operation{
public:
	// 查询文件夹版本
	int queryFolderVersions(string); 	
	// 创建文件夹版本
	int createFolderVresions(string);
	// 打开文件夹版本
	int openFolderVersions(string);
	// 忽略这个文件夹
	int ignoreThisFolder(string);	
	// 删除这个的指定文件夹版本
	int deleteFolderVersions(string);
	// 删除这个文件夹的所有版本
	int deleteAllFolderVersions(string);
	// 恢复指定版本的文件
};

