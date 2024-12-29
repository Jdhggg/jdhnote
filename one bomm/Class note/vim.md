# normal --> insert 转换

首先，按下 `i` 进入插入模式，然后输入内容。

按下 `ESC` 键退出插入模式。

# normal --> visual 转换

按下 `v` 进入可视模式，然后选择要操作的文本。

按下 `ESC` 键退出可视模式。

# insert --> command 转换

按下 `:` 进入命令模式，然后输入命令。

按下 `ESC` 键退出命令模式。

## 常用快捷键

- `de` 删除当前行
- `yy` 复制当前行
- `p` 粘贴
- `u` 撤销
- `i` 选中不包括符号 `()`、`[]`、`{}` 的内容
- `a` 选中包括符号 `()`、`[]`、`{}` 的及其里面内容
  @import "D:\学习文件\note\one bomm\Class note\img\屏幕截图 2024-12-15 114829.png"

## motion

常用命令 | 功能
![] (D:\学习文件\note\one bomm\Class note\img\屏幕截图 2024-12-15 115620.png)
![] (D:\学习文件\note\one bomm\Class note\img\屏幕截图_15-12-2024_14333_marketplace.visualstudio.com.jpg)
- `w` 移动到下一个词的开头
- `e` 移动到下一个词的结尾
- `b` 移动到上一个词的开头
- `ge` 移动到上一个词的结尾
- `0` 移动到行首
- `$` 移动到行尾
- `gg` 移动到文件首 
- `G` 移动到文件尾
---
- `f{char}` 移动到下一个 char 出现的位置
- `F{char}` 移动到上一个 char 出现的位置
- `t{char}` 移动到下一个 char 之前的位置
- `T{char}` 移动到上一个 char 之前的位置
- `;` 重复上一次 f、F、t、T 命令
---
>gd 跳转到定义处
>gh 显示鼠标悬浮的内容 例如:1gt 跳第一个标签页 2gt跳第二个标签页
>gt 切换标签页(tab)
>ctrl+0 跳到侧边栏
>按 l 从侧边栏跳入编辑栏(可以理解为->,因为vim的l是->)
>ctrl+数字 切换分屏 例如 ctrl+2 跳到第2个分屏
>gd转到定义
>gh鼠标悬浮
>gt
>gT
>4gt