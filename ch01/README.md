##练习1.1
>在开始菜单的vs文件夹下找到 vs2015开发人员命令提示 编译完成。```cl /EHsc ex1_1.cpp```
>所利用到的文档： 
* [google命名规范](http://zh-google-styleguide.readthedocs.org/en/latest/google-cpp-styleguide/contents/)
* [生成 C/C++ 程序](https://msdn.microsoft.com/zh-cn/library/f35ctcxw.aspx)

##练习1.2
>运行程序:
```c++
int main()
{
	return -1;
}
```
>后在屏幕输入：```echo %errorlevel%```查看输出。

##练习1.6
>不合法。```<<" and " << v2 ``` 上一行末尾有```;```已经结束。左移操作符缺少左操作数。