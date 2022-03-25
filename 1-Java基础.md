此笔记专注于Java语法，有关IDE、JDK、JVM、命令行的知识暂时略过

# 一、HelloWorld

## （一）代码

```java
public class TestHelloWorld {

	public static void main(String[] args) {
		
		System.out.println("Hello, motherfucker!");
		
	}
}
```

## （二）输出

![image-20211121163619818](C:\Users\25656\AppData\Roaming\Typora\typora-user-images\image-20211121163619818.png)

# 二、面向对象

![创建具体的英雄](https://stepimagewm.how2j.cn/582.png)

## （一）类和对象

英雄就是一个类，盖伦就是一个对象

## （二）属性

所有英雄都具有 生命、物攻、物抗、法强、法抗 等属性

## （三）方法

所有英雄都具有 攻击、回城、使用技能、购买装备 等方法

# 三、变量

## （一）基本变量类型

八种基本类型：
整型（4种）：byte,short,int,long
字符型（1种）：char
浮点型（2种）：float,double
布尔型（1种）：boolean

### 1.整型

![](https://stepimagewm.how2j.cn/513.png)

### 2.字符型

char类型用于存放一个字符

char类型和short类型都是16位

char类型的范围是0到65535

### 3.浮点型

![浮点型](https://stepimagewm.how2j.cn/515.png)

### 4.布尔型

![布尔型](https://stepimagewm.how2j.cn/516.png)

## （二）字面值

给基本类型变量赋值的方式叫做字面值

### 1.整数字面值

整数字面值默认类型是int类型，结尾加**L或者l**代表long类型

（1）十六进制：0x1a
（2）八进制：032
（3）二进制：0b11010
（4）十进制：26

### 2.浮点数字面值

浮点数字面值默认类型是double类型，结尾加**F或者f**代表float类型

科学计数法：1.234e2 = 123.4

### 3.字符和字符串字面值

字符的字面值放在单引号中

字符串字面值放在双引号中

\表示转义，比如\t表示制表符

## （三）类型转换

从低精度向高精度可以自动转换

从高精度向低精度需要强制转换

![转换规则](https://stepimagewm.how2j.cn/519.png)

## （四）命名规则

变量命名只能使用**字母 数字 $ _**
变量第一个字符 只能使用 字母 $ _
变量第一个字符 不能使用数字

## （五）final

当一个变量被final修饰的时候，该变量**只有一次赋值的机会**

# 四、操作符

## （一）算术操作符

算术操作符：\+ - * / % ++ --（加减乘除、取模、自增自减）

+ 如果有任何运算单元的长度超过int,那么运算结果就按照最长的长度计算
+ 如果任何运算单元的长度都不超过int,那么运算结果就按照int来计算

## （二）关系操作符

关系操作符：

+ \> 大于
+ \>= 大于或等于
+ < 小于
+ <= 小于或等于
+ == 是否相等
+ != 是否不等

## （三）逻辑操作符

| 关键字  |       简介       |                           示例代码                           |
| :-----: | :--------------: | :----------------------------------------------------------: |
|  & &&   | 长路与 和 短路与 | [示例代码](https://how2j.cn/k/operator/operator-logic/267.html#step537) |
| \| \|\| | 长路或 和 短路或 | [示例代码](https://how2j.cn/k/operator/operator-logic/267.html#step538) |
|    !    |       取反       | [示例代码](https://how2j.cn/k/operator/operator-logic/267.html#step539) |
|    ^    |      异或^       | [示例代码](https://how2j.cn/k/operator/operator-logic/267.html#step540) |

## （四）位操作符

| 关键字 |   简介    |                           示例代码                           |
| :----: | :-------: | :----------------------------------------------------------: |
|   \|   |   位或    | [示例代码](https://how2j.cn/k/operator/operator-bitwise/270.html#step541) |
|   &    |   位与    | [示例代码](https://how2j.cn/k/operator/operator-bitwise/270.html#step542) |
|   ^    |   异或    | [示例代码](https://how2j.cn/k/operator/operator-bitwise/270.html#step543) |
|   ~    |   取非    | [示例代码](https://how2j.cn/k/operator/operator-bitwise/270.html#step544) |
| << >>  | 左移 右移 | [示例代码](https://how2j.cn/k/operator/operator-bitwise/270.html#step545) |

## （五）赋值操作符

|                关键字                 |          简介          |                           示例代码                           |
| :-----------------------------------: | :--------------------: | :----------------------------------------------------------: |
|                   =                   |        赋值操作        | [示例代码](https://how2j.cn/k/operator/operator-assignment/268.html#step547) |
| += -= *= /= %= &= \|= ^= <<= >>= >>>= | 对本身进行运算，并赋值 | [示例代码](https://how2j.cn/k/operator/operator-assignment/268.html#step549) |

## （六）三元操作符

表达式 ? 值1 : 值2
如果表达式为真 返回值1
如果表达式为假 返回值2

## （七）Scanner

### 1.使用Scanner类

```java
import java.util.Scanner;
```

### 2.使用Scanner读取整数、浮点数

```java
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        float b = s.nextFloat();
```

### 3.使用Scanner读取字符串

```java
        Scanner s = new Scanner(System.in);
        String a = s.nextLine();
```

### 4.读取了整数后，再读取字符串

如果用nextInt()读取了整数后，接着读取字符串，读出来的是回车换行："\r\n"

所以，应该连续执行两次nextLine()，第一次是取走回车换行，第二次才是读取真正的字符串

# 五、控制流程

太基础的知识点已跳过

## （一）switch

switch可以使用 byte,short,int,char,String,enum

**注:** 每个表达式结束，都应该有一个break;
**注:** String在Java1.7之前是不支持的, Java从1.7开始支持switch用String的，编译后是把String转化为hash值，其实还是整数
**注:** enum是枚举类型，在[枚举](https://how2j.cn/k/class-object/class-object-enum/678.html)章节有详细讲解

## （二）结束外部循环

不常见的结束外部循环方式：标签

```java
		//标签结束外部循环
		outloop: // outloop这个标示是可以自定义的比如outloop1,ol2,out5
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				System.out.println(i + ":" + j);
				if (j == 5)
					break outloop;
			}
		}
```

![image-20211122091624841](C:\Users\25656\AppData\Roaming\Typora\typora-user-images\image-20211122091624841.png)

# 六、数组

## （一）创建数组

1.声明、创建数组

```java
int[] a;// 第一种写法
int b[];// 第二种写法
a = new int[5];
```

2.声明并创建数组

```java
int[] c = new int[5];
```

## （二）初始化数组

1.分配空间与赋值分步进行

```java
		int[] a = new int[5];
		for (int i = 0; i < a.length; i++) {
			a[i] = 100;
		}
```

2.分配空间，同时赋值

```java
		//写法一： 分配空间同时赋值
        int[] a = new int[]{100,102,444,836,3236};
        //写法二： 省略了new int[]
        int[] b = {100,102,444,836,3236};
```

## （三）增强型for循环

增强型for循环只能用来取值，不能用来修改数组里的值

```java
int values [] = new int[]{18,62,68,82,65,9};
//增强型for循环
for (int each : values) {
    System.out.println(each);
}
```

## （四）复制数组

```java
		//通过数组赋值把，a数组的前3位赋值到b数组
		int a[] = new int[]{18,62,68,82,65,9};
        int b[] = new int[3];//分配了长度是3的空间，但是没有赋值

        //System.arraycopy(src, srcPos, dest, destPos, length)
        //src:		源数组
        //srcPos:	从源数组复制数据的起始位置
        //dest:		目标数组
        //destPos:	复制到目标数组的启始位置
        //length:	复制的长度       
        System.arraycopy(a, 0, b, 0, 3);
```

## （五）二维数组

```java
//有2个长度为3的一维数组
int[][] a = new int[2][3]
```

```java
//有两个一维数组，每个一维数组的长度暂未分配
int[][] b = new int[2][];
```

```java
//指定内容的同时，分配空间
int[][] c = new int[][] { 
	{ 1, 2, 4 }, 
	{ 4, 5 }, 
	{ 6, 7, 8, 9 } 
};
```

## （六）Arrays

|    关键字    |     简介     |                           示例代码                           |
| :----------: | :----------: | :----------------------------------------------------------: |
| copyOfRange  |   数组复制   | [示例代码](https://how2j.cn/k/array/array-arrays/516.html#step1059) |
|  toString()  | 转换为字符串 | [示例代码](https://how2j.cn/k/array/array-arrays/516.html#step2225) |
|     sort     |     排序     | [示例代码](https://how2j.cn/k/array/array-arrays/516.html#step1063) |
| binarySearch |     搜索     | [示例代码](https://how2j.cn/k/array/array-arrays/516.html#step1060) |
|    equals    | 判断是否相同 | [示例代码](https://how2j.cn/k/array/array-arrays/516.html#step1061) |
|     fill     |     填充     | [示例代码](https://how2j.cn/k/array/array-arrays/516.html#step1062) |

# 七、类和对象

从这里开始就和“面向对象”关系很大了

## （一）引用

引用：如果一个变量的类型是 **类**类型，而非**基本**类型，那么该变量又叫做引用

## （二）继承

父类：

```java
package TestPolymorphism;

public class FatherClass {
	String fProperty = "这是FatherClass类的属性";

	void fMethod() {
		System.out.println("这是FatherClass类的方法");
	}
}
```

子类：

```java
package TestPolymorphism;

public class SonClass extends FatherClass {
	String sProperty = "这是SonClass类特有的属性";

	void sMethod() {
		System.out.println("这是SonClass类特有的方法");
	}

	public static void main(String[] args) {
		SonClass son = new SonClass();

		// 子类继承了类父类的属性和方法
		System.out.println(son.fProperty);
		son.fMethod();

		// 以下属性和方法子类有父类没有
		System.out.println(son.sProperty);
		son.sMethod();

	}
}
```

输出：

![](C:\Users\25656\AppData\Roaming\Typora\typora-user-images\image-20211123003553417.png)

## （三）方法重载

1.重载指的是方法名一样，但是参数类型或者数量不一样

2.可变数量的参数：

```java
    // 可变数量的参数
    public void attack(Hero... heros) {
        for (int i = 0; i < heros.length; i++) {
            System.out.println(name + " 攻击了 " + heros[i].name);
        }
    }
```

## （四）构造方法

+ 通过一个类创建一个对象，这个过程叫做**实例化**
+ 实例化是通过调用**构造方法**（又叫做**构造器**）实现的
+ 实例化一个对象的时候，必然调用构造方法
+ 如果不写构造方法，会默认提供一个无参构造方法
+ 一旦提供了一个有参构造方法，同时又**没有显式**地提供一个无参构造方法，那么默认的无参的构造方法，就无了
+ 和普通方法一样，构造方法也可以重载

## （五）this

+ this即代表当前对象

![this代表当前对象](https://stepimagewm.how2j.cn/597.png)

+ 可以通过this调用当前对象的属性和方法
+ 如果要在一个构造方法中，调用另一个构造方法，可以使用this()

## （六）访问修饰符

### 1.成员变量有四种修饰符

|         **private**          |  **私有的**  |
| :--------------------------: | :----------: |
| **package/friendly/default** |   **不写**   |
|        **protected**         | **受保护的** |
|          **public**          |  **公共的**  |

### 2.类和类之间的关系

**自身：**指自己
**同包子类：**是子类，并且和在同一个包下
**不同包子类：**是子类，但是在**另一个包下**
**同包类：** 在**同一个包**，但是彼此**没有继承关系**
**其他类：**在不同包，也没有继承关系的类

### 3.总结

![总结](https://stepimagewm.how2j.cn/612.png)

|   **访问范围**   | **private** | **friendly** | **protected** | **public** |
| :--------------: | :---------: | :----------: | :-----------: | :--------: |
|     同一个类     |      Y      |      Y       |       Y       |     Y      |
|     同一个包     |      N      |      Y       |       Y       |     Y      |
|  不同包中的子类  |      N      |      N       |       Y       |     Y      |
| 不同包中的非子类 |      N      |      N       |       N       |     Y      |

| **使用对象** | **private** | **friendly** | **protected** | **public** |
| :----------: | :---------: | :----------: | :-----------: | :--------: |
|      类      |      N      |      Y       |       N       |     Y      |
|     接口     |      N      |      Y       |       N       |     Y      |
|     变量     |      Y      |      Y       |       Y       |     Y      |
|     方法     |      Y      |      Y       |       Y       |     Y      |

### 4.使用修饰符

\1. 属性通常使用private封装起来
\2. 方法一般使用public用于被调用
\3. 会被子类继承的方法，通常使用protected
\4. package用的不多，一般新手会用package,因为还不知道有修饰符这个东西

**作用范围最小原则**
能用private就用private，不行就放大一级，用package,再不行就用protected，最后用public

## （七）属性初始化

### 1.对象属性初始化

对象属性初始化有3种
\1. 声明该属性的时候初始化
\2. 构造方法中初始化
\3. 初始化块

### 2.类属性初始化

类属性初始化有2种
\1. 声明该属性的时候初始化
\2. 静态初始化块

## （八）单例模式

单例模式有啥用？比如LOL里有一个怪叫大龙GiantDragon，只有一只，所以该类，只能被实例化一次

### 1.单例模式

单例模式又叫做 Singleton模式，指的是一个类，在一个JVM里，只有一个实例存在

```java
package Test;

public class TestGiantDragon {

	public static void main(String[] args) {
		// 通过new实例化会报错
		// GiantDragon g = new GiantDragon();

		// 只能通过getInstance得到对象
		GiantDragon g1 = GiantDragon.getInstance();
		GiantDragon g2 = GiantDragon.getInstance();
		GiantDragon g3 = GiantDragon.getInstance();

		// 都是同一个对象
		g1.name="小龙";
        
        // 本来是“大龙”
		System.out.println(g2.name);
		System.out.println(g3.name);
	}
}
```

![image-20211122152301835](C:\Users\25656\AppData\Roaming\Typora\typora-user-images\image-20211122152301835.png)

### 2.饿汉式

**饿汉式**单例模式，无论如何都会创建一个实例

```java
package Test;

public class GiantDragon {
	
	String name = "大龙";
	
	// 构造方法私有化
	private GiantDragon() {
	}

	// 饿汉式
	
	// 类变量指向一个实例
	private static GiantDragon instance = new GiantDragon();
	
	// 类方法返回实例
    public static GiantDragon getInstance(){
        return instance;
    }

}
```

### 3.懒汉式

**懒汉式**单例模式只有在调用getInstance的时候，才会创建实例

```java
package Test;

public class GiantDragon2 {
	
	//私有化构造方法使得该类无法在外部通过new 进行实例化
    private GiantDragon2(){       
    }
  
    //准备一个类属性，用于指向一个实例化对象，但是暂时指向null
    private static GiantDragon2 instance;
      
    //public static 方法，返回实例对象
    public static GiantDragon2 getInstance(){
        //第一次访问的时候，发现instance没有指向任何对象，这时实例化一个对象
        if(null==instance){
            instance = new GiantDragon2();
        }
        //返回 instance指向的对象
        return instance;
    }
}
```

### 4.两种模式的区别

1.**饿汉式**是立即加载的方式，无论是否会用到这个对象，都会加载。
如果在构造方法里写了性能消耗较大、占时较久的代码，比如建立与数据库的连接，那么就会在启动的时候感觉稍微有些卡顿。

2.**懒汉式**，是延迟加载的方式，只有使用的时候才会加载。 并且有[线程安全](https://how2j.cn/k/thread/thread-synchronized/355.html#step793)的考量。
使用懒汉式，在启动的时候，会感觉到比饿汉式略快，因为并没有做对象的实例化。 但是在第一次调用的时候，会进行实例化操作，感觉上就略慢。

3.总之，看业务需求，如果业务上允许有比较充分的启动和初始化时间，就使用饿汉式，否则就使用懒汉式。

### 5.单例模式三元素

单例模式三元素：
\1. 构造方法私有化
\2. 静态属性指向实例
\3. public static的 getInstance方法，返回第二步的静态属性

## （九）枚举类型

1.预先定义的常量

枚举enum是一种特殊的类，使用枚举可以很方便的定义常量
比如设计一个枚举类型 季节，里面有4种常量

```java
public enum Season {
    SPRING,SUMMER,AUTUMN,WINTER
}
```

2.常用的场合

在[switch](https://how2j.cn/k/control-flow/control-flow-switch/272.html)语句中，可以使用枚举来进行判断

```java
        Season season = Season.SPRING;
        switch (season) {
        case SPRING:
            System.out.println("春天");
            break;
        case SUMMER:
            System.out.println("夏天");
            break;
        case AUTUMN:
            System.out.println("秋天");
            break;
        case WINTER:
            System.out.println("冬天");
            break;
        }
```

3.增强型for循环遍历枚举

```java
        for (Season s : season.values()) {
			System.out.println(s);
		}
```

# 八、接口与继承

## （一）接口

Bathe接口中声明了方法bathe()，但是没有且不能有方法体

```java
package Test;

public interface Bathe {
	// 洗澡
	public void bathe();
}
```

当一个**非抽象类**实现了Bathe接口，则必须提供接口中声明的方法bathe()

```java
package Test;

public class SouthernPeople implements Bathe {
	public void bathe() {
		System.out.println("南方人一天洗一次");
	}
}
```

一个类可以implements多个接口

```java
public class NorthernPeople implements Bathe, Eat{
	....
}
```

## （二）对象转型

引用类型和对象类型一致，无需进行类型转换

```java
FatherClass	f = new FatherClass();
SonClass 	s = new SonClass();
```

当**引用类型**和**对象类型**不一致，需要进行类型转换

类型转换有时候会成功，有时候会失败

判别能否转换成功的办法：**把右边的当做左边来用**，看说得通不

### 1.子类转父类（向上转型）

```java
FatherClass	fs = new SonClass();
```

+ 子类转父类总能成功自动转换
+ fs只能调用父类的属性和方法
+ fs调用父类的**非静态方法**时，若该方法已被子类重写，则实际执行的是重写后的方法
+ fs只会调用父类的静态方法，所以静态方法并不具有多态性

### 2.父类转子类（向下转型）

父类直接强转子类：抛出ClassCastException异常

```java
SonClass sf = (SonClass)new FatherClass();
```

成功的向下转型

```java
FatherClass	fs = new SonClass();
SonClass s = (SonClass) fs;
```

+ fs指向的对象类型是FatherClass，但是原本的类型就是SonClass，所有能够强转成SonClass
+ 向下转型中new创建的应该是子类对象或其子孙对象，而不是父类对象
+ 向下转型后的s，能够调用子类的属性和方法

### 3.没有继承关系的两个类互转

兄弟类互强转编译失败

```java
SonClass fs = (SonClass)new SonClass2();
```

没有继承关系的两个类，互相转换，一定会失败

### 4.接口与实现类

接口与实现类的转换规律类似，把接口当父类、实现类当子类就可以了

### 5.instanceof关键字

**作用：**判断对象x是否是A类型或者A的子类

**语法：**对象x instanceof 类A

```java
		FatherClass	fs = new SonClass();// 向上转型
		boolean flag = (fs instanceof SonClass);
		System.out.println(flag);		// true
```

对Java对象的强制类型转换称为造型

造型前可以使用instanceof测试一个对象的类型

## （三）重写

子类继承父类的**对象方法**后，重复提供该方法，就叫做方法的重写，又叫覆盖 override

## （四）多态

```java
package TestPolymorphism;

public class Test {

	// 多态测试方法，以FatherClass类型的引用为参数
	public static void testF(FatherClass f) {
		f.fMethod();
	}

	public static void main(String[] args) {

		FatherClass f = new FatherClass();
		FatherClass fs2 = new SonClass2();
		FatherClass fs3 = new SonClass3();

		Test.testF(f);
		Test.testF(fs2);
		Test.testF(fs3);
	}
}
```

输出：

![image-20211123153106668](C:\Users\25656\AppData\Roaming\Typora\typora-user-images\image-20211123153106668.png)

多态实现的三个条件：

+ 继承
+ 重写
+ 父类引用指向子类对象

## （五）隐藏

**重写**，就是子类覆盖父类的**对象方法**

**隐藏**，就是子类覆盖父类的**类方法**

## （六）super关键字

+ 实例化子类，父类的构造方法一定会**先**被调用，默认调用super()

```java
new SonClass();
```

输出：

![image-20211123160320957](C:\Users\25656\AppData\Roaming\Typora\typora-user-images\image-20211123160320957.png)

+ 可以自行定义调用父类的哪一个构造方法

```java
	public SonClass() {
		super("hhhh");
		System.out.println("这是SonClass的无参构造方法");
	}
```

实例化子类，输出：

![image-20211123161219498](C:\Users\25656\AppData\Roaming\Typora\typora-user-images\image-20211123161219498.png)

+ 类似this，super可以调用从父类继承下来的属性和方法

+ super可以调用重写前的父类的属性方法

  ```java
  package TestPolymorphism;
  
  public class SonClass2 extends FatherClass {
  	// 重写父类的fProperty和fMethod()
  	String fProperty = "这是子类2重写之后的属性";
  
  	void fMethod() {
  		System.out.println("这是子类2重写之后的方法");
  	}
  	
  	void m1() {
  		super.fMethod();
  		this.fMethod();
  		System.out.println(super.fProperty);
  		System.out.println(this.fProperty);
  	}
  	
  	public static void main(String[] args) {
  		(new SonClass2()).m1();
  	}
  }
  ```

  输出：

  ![image-20211123164139696](C:\Users\25656\AppData\Roaming\Typora\typora-user-images\image-20211123164139696.png)

  ```java
  // 父类本来就有fProperty属性
  // 子类又重新定义一遍fProperty
  String fProperty = "这是子类2重新定义后的属性";
  // 相当于子类实质上有了两个fProperty属性，但是表面上看只有一个，因为来自父类的那个被隐藏住了，通过super可以调用它
  ```

## （七）Object类

Object类是所有类的父类

声明一个类的时候，默认继承了Object类

|                方法                 |                             作用                             |
| :---------------------------------: | :----------------------------------------------------------: |
|             toString()              |                 返回当前对象的**字符串表达**                 |
|             finalize()              |                   垃圾回收方法，由JVM调用                    |
|              equals()               |                  判断两个对象的内容是否相同                  |
|             hashCode()              |                     返回一个对象的哈希值                     |
| wait()<br/>notify()<br/>notifyAll() |                       线程同步相关方法                       |
|             getClass()              | 返回一个对象的[类对象](https://how2j.cn/k/reflection/reflection-class/108.html) |

## （八）final

1.修饰类：类不能被继承

2.修饰方法：方法不能被重写

3.修饰基本类型变量：该变量只有一次赋值机会

4.修饰引用：该引用只有**1**次指向对象的机会

5.常量：指的是可以公开，直接访问，不会变化的值

```java
public static final int itemTotalNumber = 6;//物品栏的数量
```

## （九）抽象类

一些知识：

+ 抽象方法：只有声明，没有实现体，是一个“空”方法
+ 抽象方法只能存在于抽象类中
+ 抽象类不能实例化
+ 抽象类被继承后，子类若不是抽象类，则必须实现抽象类中的抽象方法

抽象类和接口的区别：

+ 子类只能继承一个抽象类，但是可以实现**多个**接口
+ 抽象类可以定义
  public,protected,package,private
  静态和非静态属性
  final和非final属性
+ 接口中声明的属性，只能是
  public、静态、final的
  即便没有显式的声明

注：抽象类和接口都可以有实体方法。 接口中的实体方法，叫做[默认方法](https://how2j.cn/k/interface-inheritance/interface-inheritance-default-method/676.html)

## （十）内部类

### 1.成员内部类

+ 直接在一个类里面中定义，与属性、方法同等的地位

```java
package TestInnerClass;

public class Outter {
	private int i = 100;

	class Inner {
		private void show() {
			System.out.println("这是内部类的方法");
			System.out.println("Outter属性i的值是：" + i);
		}
	}
}
```

+ 可以直接访问外部类的**private**实例属性
+ 实例化语法：**new 外部类().new 内部类()**

```java
Outter o = new Outter();
Inner i = o.new Inner();
```

+ 外部类只能被public和包访问两种权限修饰

+ 当内部类和外部类拥有同名的成员变量或者方法时，会发生隐藏现象，即默认情况下访问的是成员内部类的成员。若要访问外部类的同名成员，需以下面形式进行访问：

  外部类.this.成员变量

  外部类.this.成员方法

### 2.静态内部类

+ 由static关键字修饰的内部类
+ **静态内部类**水晶类的实例化 **不需要一个外部类的实例为基础**

+ 实例化语法：**new 外部类.静态内部类();**
+ 类似静态方法、静态属性，静态内部类依附于外部类而存在，而不是依附于外部对象
+ 不可以访问外部类的实例属性和方法
+ 可以访问外部类的**私有静态成员**

### 3.匿名内部类

+ 通常情况下，要使用一个接口或者抽象类，都必须创建一个子类

+ 有的时候，为了快速使用，直接实例化一个抽象类，并**当场**实现其抽象方法

```java
package TestInnerClass;

public abstract class Human {
	abstract void eat();
	
	public static void main(String[] args) {
		Human h = new Human() {
			void eat() {
				System.out.println("吃饭");
			}
		};
		h.eat();
	}
}
```

+ 匿名内部类应该是我们用得最多的，在编写事件监听的代码时使用匿名内部类不但方便，而且使代码更加容易维护

+ 匿名内部类不能定义任何静态成员、方法
+ 匿名内部类中的方法不能是抽象的
+ 必须实现接口或抽象父类的所有抽象方法
+ 没有类名，因此不能定义构造器

### 4.局部内部类

+ 定义在方法或作用域内的类，仅限方法或该作用域内访问

+ 局部内部类就像是方法里面的一个局部变量一样，不能被public、protected、private以及static修饰

## （十一）默认方法

+ 默认方法指的是接口也可以提供具体方法

+ 假设没有默认方法这种机制，那么如果要为接口增加一个新的方法，那么所有实现了该接口的类，都需要做改动

# 九、数字与字符串

## （一）装箱拆箱

+ 所有基本类型，都有其对应的类。这样的类叫封装类。

+ 数字封装类有Byte,Short,Integer,Long,Float,Double
  这些类都是抽象类**Number**的子类

+ 封装类和基本类型互转：

  ```java
  int i = 5;
  Integer it = new Integer(i);
  int j = it.intValue();
  ```

+ 装箱：不需要调用构造方法，**通过=符号**自动把 基本类型 转换为 类类型

+ 拆箱：不需要调用Integer的intValue方法，通过=就自动转换成int类型

  ```java
  int i = 5;
  Integer it = i;// 装箱
  int j = it;// 拆箱
  ```

## （二）字符串数字互转

+ 数字转字符串

```java
		int i = 5;
		// 方法1
		String str1 = String.valueOf(i);
		// 方法2
		Integer it = i;// 装箱
		String str2 = it.toString();
```

+ 字符串转数字

```java
String str = "999";
int i = Integer.parseInt(str);
```

## （三）数学方法

|          方法or常量          |          作用          | 返回类型 |
| :--------------------------: | :--------------------: | :------: |
|     Math.round(float a)      |        四舍五入        |   int    |
|        Math.random()         |    0到1之间的随机数    |  double  |
|     Math.sqrt(double a)      |          开方          |  double  |
| Math.pow(double a, double b) |        a的b次方        |  double  |
|           Math.PI            | 3.14159265358979323846 |  double  |
|            Math.E            | 2.7182818284590452354  |  double  |

## （四）格式化输出

+ 类似C语言的格式化输出

```java
		String name = "盖伦";
		int kill = 8;
		String title = "超神";
		String sentenceFormat = "%s 在进行了连续 %d 次击杀后，获得了 %s 的称号%n";
        System.out.printf(sentenceFormat,name,kill,title);
```

+ printf和format能够达到一模一样的效果

```java
System.out.printf(sentenceFormat,name,kill,title);
System.out.format(sentenceFormat,name,kill,title);
```

+ 换行符

  **换行符**就是另起一行 --- '\n' 换行（newline）
  **回车符**就是回到一行的开头 --- '\r' 回车（return）
  在eclipse里敲一个回车，实际上是**回车换行符**
  然而在不同的操作系统，换行符是不一样的
  （1）在DOS和Windows中，每行结尾是 “\r\n”；
  （2）Linux系统里，每行结尾只有 “\n”；
  （3）Mac系统里，每行结尾是只有 "\r"。
  为了使得同一个java程序的换行符在所有的操作系统中都有一样的表现，使用**%n**，就可以做到平台无关的换行

  ```java
  System.out.printf("这是换行符%n");
  ```

## （五）字符

+ Character常见方法

|              方法               |      作用      |
| :-----------------------------: | :------------: |
|   Character.isLetter(``'a'``)   | 判断是否为字母 |
|   Character.isDigit(``'a'``)    | 判断是否为数字 |
| Character.isWhitespace(``' '``) | 判断是否为空白 |
| Character.isUpperCase(``'a'``)  | 判断是否是大写 |
| Character.isLowerCase(``'a'``)  | 判断是否是小写 |
| Character.toUpperCase(``'a'``)  |   转换为大写   |
| Character.toLowerCase(``'A'``)  |   转换为小写   |
|   Character.toString(``'a'``)   |  转换为字符串  |

+ 常见转义

| 字符表示 |  含义  |
| :------: | :----: |
|    \t    | 制表符 |
|    \n    |  换行  |
|   \\'    | 单引号 |
|   \\"    | 双引号 |
|   \\\    | 反斜杠 |

## （六）字符串

+ 字符串是一个类，我们见到的字符串都是对象
+ 每当有一个**字面值**出现的时候，虚拟机就会创建一个字符串
+ String 被修饰为final，不能被继承
+ immutable 是指不可改变的，比如创建了一个字符串对象

## （七）操纵字符串

|            关键字            |        简介        |                           示例代码                           |
| :--------------------------: | :----------------: | :----------------------------------------------------------: |
|            charAt            |      获取字符      | [示例代码](https://how2j.cn/k/number-string/number-string-manipulate/325.html#step712) |
|         toCharArray          | 获取对应的字符数组 | [示例代码](https://how2j.cn/k/number-string/number-string-manipulate/325.html#step719) |
|          subString           |    截取子字符串    | [示例代码](https://how2j.cn/k/number-string/number-string-manipulate/325.html#step713) |
|            split             |        分隔        | [示例代码](https://how2j.cn/k/number-string/number-string-manipulate/325.html#step714) |
|             trim             |    去掉首尾空格    | [示例代码](https://how2j.cn/k/number-string/number-string-manipulate/325.html#step715) |
|   toLowerCase toUpperCase    |       大小写       | [示例代码](https://how2j.cn/k/number-string/number-string-manipulate/325.html#step716) |
| indexOf lastIndexOf contains |        定位        | [示例代码](https://how2j.cn/k/number-string/number-string-manipulate/325.html#step717) |
|   replaceAll replaceFirst    |        替换        | [示例代码](https://how2j.cn/k/number-string/number-string-manipulate/325.html#step718) |

## （八）比较字符串

+ 特例

```java
		String str1 = "盖伦123";
		String str2 = "盖伦123";
		System.out.println(str1==str2);// true
```

+ == 用于判断是否是同一个字符串对象
+ 内容比较

```java
System.out.println(str1.equals(str2));// 完全一样返回true    
System.out.println(str1.equalsIgnoreCase(str3));// 忽略大小写的比较，返回true
```

+ 是否以子字符串开始或者结束

```java
		String str1 = "盖伦123";
		System.out.println(str1.startsWith("盖"));// true
		System.out.println(str1.endsWith("23"));// ture
```

## （九）StringBuffer

+ StringBuffer是可变长的字符串

|            关键字            |        简介         |                           示例代码                           |
| :--------------------------: | :-----------------: | :----------------------------------------------------------: |
| append delete insert reverse | 追加 删除 插入 反转 | [示例代码](https://how2j.cn/k/number-string/number-string-stringbuilder/328.html#step723) |
|       length capacity        |      长度 容量      | [示例代码](https://how2j.cn/k/number-string/number-string-stringbuilder/328.html#step724) |

+ 连接字符串性能对比

![image-20211125000420140](C:\Users\25656\AppData\Roaming\Typora\typora-user-images\image-20211125000420140.png)

# 十、日期

## （一）Date

+ Date类
  注意：是**java.util.Date**，而非 java.sql.Date

+ 时间原点：1970年1月1日 8点0分0秒

```java
package TestDate;

import java.util.Date;

public class TestDate {

	public static void main(String[] args) {
		Date d1 = new Date();
		Date d2 = new Date(5000);
		System.out.println("当前时间：\t\t" + d1.toString());
		System.out.println("原点过了5秒：\t" + d2.toString());
	}
}
```

输出：

![image-20211125002917592](C:\Users\25656\AppData\Roaming\Typora\typora-user-images\image-20211125002917592.png)

+ getTime() 得到一个long型的整数

```java
System.out.println(d1.getTime());
System.out.println(d2.getTime());
```

输出：

![image-20211125002932935](C:\Users\25656\AppData\Roaming\Typora\typora-user-images\image-20211125002932935.png)

+ System.currentTimeMillis()，返回当前日期的毫秒数

## （二）日期格式化

| 关键字 |     简介     |                           示例代码                           |
| :----: | :----------: | :----------------------------------------------------------: |
| format | 日期转字符串 | [示例代码](https://how2j.cn/k/date/date-format/348.html#step750) |
| parse  | 字符串转日期 | [示例代码](https://how2j.cn/k/date/date-format/348.html#step751) |

+ 日期转字符串

格式：

| 字母 | 日期或时间元素 |   表示   |     示例     |
| :--: | :------------: | :------: | :----------: |
|  y   |       年       |   Year   |   1996; 96   |
|  M   |       月       |  Month   | July; Jul;07 |
|  d   |       日       |  Number  |      10      |
|  H   |  24进制的小时  | （0-23） |   Number 0   |
|  h   |  12进制的小时  | （1-12） |  Number 12   |
|  m   |       分       |  Number  |      30      |
|  s   |       秒       |  Number  |      55      |
|  S   |      毫秒      |  Number  |     978      |

代码：

```java
		SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd hh:mm:ss S a");
		Date d = new Date();
		String str = sdf.format(d);
		System.out.println(str);
```

输出：

![image-20211125005353570](C:\Users\25656\AppData\Roaming\Typora\typora-user-images\image-20211125005353570.png)

+ 字符串转日期

模式（yyyy/MM/dd HH:mm:ss）需要和字符串格式保持严格一致

```java
		SimpleDateFormat sdf2 =new SimpleDateFormat("yyyy/MM/dd HH:mm:ss" );
        String str2 = "2016/1/5 12:12:12";
        try {
            Date d2 = sdf2.parse(str2);
            System.out.println(d2.toString());
        } catch (ParseException e) {
            e.printStackTrace();
        }
```

## （三）Calender

Calendar类即日历类，常用于进行“翻日历”，比如**下个月的今天是多久**

### 1.Calendar与Date进行转换

采用[单例模式](https://how2j.cn/k/class-object/class-object-singleton/349.html)获取日历对象Calendar.getInstance();

```java
		Calendar c = Calendar.getInstance(); // 单例模式
		Date d = c.getTime(); // Calendar转Date
		Date d2 = new Date(0);
		c.setTime(d2); // Date转Calendar
```

### 2.翻日历

add()方法，在原日期上增加年/月/日
set()方法，直接设置年/月/日

```java
c.add(Calendar.MONTH, 1); // 下一个月
c.add(Calendar.YEAR, -1); // 上一年
c.set(Calendar.DATE, 3);  // 设置成3号
```

## （四）练习

题目

```java
	/*
	 * 准备一个长度是9的日期数组 使用1970年-2000年之间的随机日期初始化该数组 按照这些日期的时间进行升序排序 
	 * 比如 1988-1-21 12:33:22 就会排在 1978-4-21 19:07:23 前面，因为它的时间更小，虽然日期更大
	 */
```

代码

```java
package TestDate;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Date;

public class Practice {

	public static void main(String[] args) throws ParseException {

		// 日期格式化类
		SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd hh:mm:ss");

		// 获取时间范围long整数
		String str1 = "1970-01-01 00:00:00";
		String str2 = "2000-01-01 00:00:00";
		Date start = sdf.parse(str1);
		Date end = sdf.parse(str2);
		long range = end.getTime() - start.getTime();

		// 获取9个随机日期
		Date[] dates = new Date[9];
		for (int i = 0; i < dates.length; i++) {
			long random = (long) (Math.random() * range);
			dates[i] = new Date(random);
		}

		// 给9个随机日期排序
		SimpleDateFormat sdf_sort = new SimpleDateFormat("hh:mm:ss");
		Comparator<Date> c = new Comparator<Date>() {
            public int compare(Date d1, Date d2) {
            	return (sdf_sort.format(d1).compareTo(sdf_sort.format(d2)));
            }
        };
        Arrays.sort(dates, c);
		
		// 输出9个随机日期
		for (Date date : dates) {
			System.out.println(sdf.format(date));
		}	
	}
}
```

输出

![image-20211125110414784](C:\Users\25656\AppData\Roaming\Typora\typora-user-images\image-20211125110414784.png)
