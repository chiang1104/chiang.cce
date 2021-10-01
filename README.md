# chiang.cce
資傳上課程式

這一段解釋 README.md 是用 MarkDown 語法

#第一週

程式碼要放到文件中, 要原汁原味, 要用特殊引用 裡面的字就是引用
在數字 1,2,3,4 的左邊, 有個特別的小點 backquote ` 

如果有 3個小點 ``` 就可以引用一大段

```C
#include <stdio.h>
int main() ///在main()裡面,可以省略!!
{
printf("Hello World\n");
return 0; ///Q1: 書上有啊!!! 有寫比較好
} ///Q2: 要用大括號來結尾
///學習步驟:
///(0)學習前準備
///(1)我說給你聽(馬上忘)
///(2)我做給你看(慢慢做/截圖) 10分鐘
///(3)換你做做看(作業) 10分鐘 (卡住了/問題)
///(4)成效追蹤
```

```C
// 兩個斜線 slash
///Q3: 三個斜線 slash 可以寫中文的解釋,方便理解
/// (3)寫完程式,按上方的 Build&Run (齒輪+綠三角)
/// (1) 每次開一個新的 Empty File
///   File-New-Empty File (Ctrl-Shift-N)
/// (2) 存檔案 File-SaveAs 另存新檔
///   1016xxxx-1.cpp 不要有空格,都用英數符號
       ///小心,不要拼錯,不是 studio
#include <stdio.h>  /// #(大寫3) <>(大寫逗號/句號)
int main() ///圓括號在大寫9,0
{                  ///反斜線 backslash
    printf( "Hello World\n" );
}/// 有個f  雙引號在大寫的 Enter旁
```

#第二週
#include <stdio.h>
int main()
{
    printf("Hello World\n");
    printf("Hello World\n");
}
#include <stdio.h>
int main()
{
    int a, b;
    scanf( "%d%d", &a, &b);
    printf( "%d", a+b );
}
#include <stdio.h>
int main()
{
    printf( "Hello World\n");
    printf( "%d" ,300 );
}
#include <stdio.h>
int main()
{
    printf( "Hello World\n");
    printf( "Hello%dWorld\n", 300);
    printf( "%d %d    %d" , 300, 200, 100 );
}
#include <stdio.h>
int main()
{
    int a;
    printf("請輸入一個整數a的值:");
    scanf("%d", &a);

    printf("a的值是:%d\n" ,  a);
}
