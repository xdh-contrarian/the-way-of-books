using namespace std;

// 建议7 变量应该力求简洁
// 建议7-1 尽量不要在一个声明中声明超过一个的变量,建议尽可能在声明变量的同时初始化该变量
// 建议7-2 避免在嵌套的代码块之间使用相同的变量名
// C语言允许在同一源文件中全局变量和局部变量同名，但在局部变量的作用域内，全局变量不起作用

class AdviseSeven
{
public:
	AdviseSeven() {};
	~AdviseSeven() {};

	void test_01_error();
	void test_01_right();
};

// 建议8 正确地选择变量的存储类型
// 在计算机中，保存变量当前值的存储单元有两类：一类是内存，二类是CPU的寄存器
// 在C语言中，为变量提供了4中存储类型：auto(自动)型，static(静态)型，rigister(寄存器)型和exter(外部)型

// 变量的保存时间又称为生存期
// 从时间角度来看，可将变量分为静态存储和动态存储
// 静态存储指变量存储在内存的静态存储区中，在编译时为它分配存储空间
//     在整个程序运行期间，该变量占有固定的存储单元，程序执行结束后，这部分空间才会释放，变量的值在整个程序中声中存在
// 动态存储指变量存储在内存的动态存储区中，在程序运行过程中，只有当变量所在的函数被调用时，编译系统才临时为该变量分配一段内存单元
//		函数调用结束时，该变量空间就会释放，变量的值只在函数调用期存在。
// 局部变量生存期是函数运行时，全局变量生存期是程序运行时

// 建议8-1 定义局部变量时应该省略 auto 关键字
// 在默认情况下，所有的局部变量都是 auto 型的变量
// 调用函数时，系统为该函数的自动变量分配内存，等程序从该函数返回，即调用过程结束时，系统就会释放所有该函数的自动变量
// 这个过程是通过 一个 堆栈机制 实现的，为自动变量分配内存就是压栈，当函数返回时则退栈

// 建议8-2 慎用 extern 声明外部变量
// 在函数之外定义的变量则成为外部变量，外部变量也就是我们所讲的全局变量。
// 全局变量的存储方式为静态存储，其生存周期为整个程序的生存周期
// 全局变量可以为本文件中的其他函数所共用，它的有效范围为从定义变量的位置开始到本源文件结束
// 注意：如果全局变量不在文件的开头定义，有效的作用范围将只限于其定义处到文件结束。
// 如果在引用之前将关键字 extern 对该变量作“外部变量声明”，表示该变量是一个已经定义的外部变量。

// 建议8-3 不要混淆 static 变量的作用
// 静态变量属于静态存储方式，属于静态存储方式的变量不一定是静态变量(有可能是全局变量)
// 1.隐藏及隔离的作用
// 如果使全局变量只在该变量的源文件有效，而在同一源程序的其他源文件中不能使用，可以将全局变量声明为静态全局变量
// 2.保持变量内容的持久性
// 静态局部变量，从原来的栈中改存放为静态存储区
// 使用场景：a.需要保留函数上一次调用结束的值。b.如果初始化后，变量指挥被引用而不会改变其值，则这时用静态局部变量比较方便，以免每次调用重新赋值

// 建议8-4 尽量少使用 register 变量
// register 变量将值存储到 cpu 寄存器中
// 寄存器变量比存储于内存的变量 访问效率 更高
// 编译器不一定理睬 register 关键字
class AdviseEight
{
public:
	AdviseEight() {};
	~AdviseEight() {};

	void test_01_right();

	void test_02_right();
};

// 建议9 尽量不要在可重入函数中使用静态(或全局)变量
// 可重入函数是指函数可以由多于一个的任务并发使用，而不必担心数据错误
// 反之，不可重入函数不能由超过一个的任务所共享，除非能够确保函数的互斥性(或者使用信号量,或者在抵达吗的关键部分禁用中断)
// 如果有时候函数需要返回局部变量的指针，为避免地址被销毁，外部拿到空指针，可以声明为静态变量，然后取地址。

class AdviseNine
{
public:
	AdviseNine() {};
	~AdviseNine() {};

	void test_01_right();


};