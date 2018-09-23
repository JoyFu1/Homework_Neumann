# 冯诺依曼班提交作业说明

<不要重复生成公钥，切忌修改公钥，请勿丢失公钥>

<不要重复生成公钥，切忌修改公钥，请勿丢失公钥>

<不要重复生成公钥，切忌修改公钥，请勿丢失公钥>

**重要的事情说3遍**。

![ssh](https://github.com/tsingke/Homework_Neumann/blob/master/%E3%80%90%E4%BD%9C%E4%B8%9A%E4%BB%BB%E5%8A%A1%E3%80%91/%E5%AE%9E%E9%AA%8C%E6%8A%A5%E5%91%8A%E6%A8%A1%E6%9D%BF/ssh.png)

>> 注意：请同学们打开自己c盘下面的.ssh文件夹，检查下有没有修改该目录下公钥文件id_rsa.pub的名字，如果已重命名，请再改回来，否则作业无法提交！！

----
### 1. 先-配置git信息（自报家门）
任何同学第一次使用git前，先给自己的机器配置好名字,这样你提交作业时，才知道作业的实际贡献者是谁

`$ git config --global user.name "写你的名字"`

`$ git config --global user.email "写你的邮箱"`

>注：只配置一次即可，后续提交作业时无须再配置

-----

### 2.后-提交作业（学会即可）
**说明1：**  `没有提交过作业，也就是第一次准备提交作业的同学，请依次执行下面的命令：`
```
1. 克隆远程作业: $ git clone git@github.com:tsingke/Homework_Neumann.git 

2. 在作业文件夹里添加个人文件夹，然后在里面添加已写好的作业(程序代码+程序结果截图)

3. 切换到集体作业目录，在该目录下右键打开git bash here，接着做个远程作业同步：
   $ git pull   <同步远程作业> ，一般会很快！
 
4. $ git add .  

5. $ git commit -m "第一次提交作业"

6. $ git push origin master

```
-----

**说明2：** `已完成作业提交的同学，如果想修改作业，请务必先执行$git pull 命令 以保持和远端仓库作业内容同步 ，具体操作过程如下`：

```
打开集体作业大目录，然后右键点击“git bash here”，接着依次执行下面的命令：

1. $ git pull

   > git pull 结束后 在本地作业目录下修改本人作业，添加源码，添加执行结果截图文件

2. $ git add .

3. $ git commit -m "modify my homework"

4. $ git push origin master

```
