# 序
Markdown 简洁好用是毋庸置疑的。但是在使用中碰到过以下几个困惑：

1. 第一次想在 wiz 中使用 Markdown 笔记时，查阅 [为知笔记 Markdown 新手指南][1] 发现代码的渲染效果挺好，挺喜欢的。可实际上把我在 MarkdownPad2 中写好的笔记拷贝过去时，发现代码的渲染效果和 MarkdownPad2 中一样素净，并没有语法高亮。进而发现两者关于代码的语法定义是有区别的。
2. 不单单代码，在 [为知笔记 Markdown 新手指南][1] 中提到的好些特性我在 MarkdownPad2 中并不能使用：
	> 如果你是名程序员，那么可以用 ``` 把代码块包起来，渲染后可以关键字高亮
	> 
	> 删除线：在文字前后添加 ~~
	> 
	> 目录

3. 在手机上购买 [jotterpad][2] 之后，发现代码部分的渲染效果和 MarkdownPad2 也不一样，更加的不起眼，导致最开始时我还以为 jotterpad 不识别代码语法呢。

# 正文
直到今天（2016年6月1号）才发现，Markdown 是存在标准之乱的。从最早的 [Markdown诞生][3]（称为传统 Markdown，Markdown Basics等），流行起来之后各种扩展，在 GitHub 上最盛行的 [GitHub Flavored Markdown (GFM)][4]， 做标准的 [CommonMark][6]。

其中，做标准让大家欣喜，[Markdown 发布标准了][8]（借此理解行末两空格的意义），但也遇到了 [极大的困难][7]，理解英文有困难的话可以看 [Markdown的标准化之路][9]。

## 应用

关于三款应用：

1. 为知笔记使用哪种标准？在其官网未找到相关说明。猜测至少是以GFM为蓝本的，甚至就是用的GFM。
2. MarkdownPad2 可以更改“Markdown 处理器”。默认使用第一个

	![Markdown 处理器][5]
3. 在 [jotterpad][2] 的官网提示如下：

	> JotterPad renders Markdown (CommonMark) syntax. 

## 语法

关于语法（中文）：

1. [传统 Markdown][12]
2. [GFM 格式说明][11]
3. [CommonMark Spec][15]
4. [* Markdown 书写风格指南][10]
5. [Markdown标准语法与GitHub Flavored Markdown语法大全][14]

## 选择

关于 CommonMark：虽然不读英文，想来是撕逼过的。
> CommonMark，最早的名字叫 Standard Markdown，后来迫于 Markdown 原作者 John Gruber 的压力而改名。

有人觉得“无规矩不成方圆”，没有标准的话未来发展空间有限；也有同志认为正是因为没有标准，才会出现各种扩展，百花齐放。

扩展阅读：

1. [Markdown and CommonMark](http://blog.chrisyip.im/markdown-and-commonmark)
2. [互联网中的左派与右派](http://ju.outofmemory.cn/entry/141265)

其实，操那么多心做什么，作为程序员，哪块用得着拿哪块，用不着的少参与。

争论并不重要，重要的是 [选择使用正确的 Markdown Parser](https://github.com/xitu/gold-miner/blob/master/TODO/choosing-right-markdown-parser.md)


[1]:http://www.wiz.cn/feature-markdown.html
[2]:http://2appstudio.com/jotterpad/
[3]:http://daringfireball.net/projects/markdown/
[4]:https://help.github.com/enterprise/11.10.340/user/articles/github-flavored-markdown/
[5]:https://raw.githubusercontent.com/nielong0610/MarkdownPhotos/master/MarkdownPad2_choices.png
[6]:http://commonmark.org/
[7]:https://blog.codinghorror.com/standard-markdown-is-now-common-markdown/
[8]:https://ruby-china.org/topics/21391
[9]:http://www.infoq.com/cn/news/2014/09/markdown-commonmark
[10]:http://einverne.github.io/markdown-style-guide/zh.html
[11]:https://www.zybuluo.com/techird/note/46064
[12]:https://github.com/younghz/Markdown
[14]:http://www.debug4.me/%E5%B7%A5%E5%85%B7/markdown-learning/
[15]:http://yanxyz.github.io/commonmark-spec/