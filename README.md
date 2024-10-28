导入字符串
导入getopt
导入系统
字符串2=“”
克=0
你=0
a=0
列表=[]
列表2=[]
定义方便（）：
    print("-h ,重新最有效打印")
    print("-w 请输入字符串")
    print("-r 默认模式请输入")
    print(" -s 输入输出字符串长度")
    print('-o 输入输出文件')
    print（ “不要使用-r” ）
    系统退出( 0 )
def ds():
    全局字符串2
    格格
    全球你
    全局列表
    全局列表2
    如果不是 len(sys.argv [ 1: ] ):
        最好（）
    尝试：
        opts,argc = getopt.getopt(sys.argv [ 1: ] ,"h :w: s:r", [ "help","wr","smask","rlenth" ] )
    另外 getopt.GetoptError 为错误：
        打印（str（错误））
        最好（）
    对于选项中的t,y：
         if t in ("-h","--help"):
             最好（）
         elif t in ("-w","--wr"):
             字符串2=y
         elif t in ("-s","--smask"):
             g = int(y)
             u = len(字符串2)
             main2(字符串2,g,u)
         elif t in ("-r","--rlenth"):

             u = len(字符串2)
             克=4
             main2(字符串2,g,u)
         另外：
             断言False，“未处理的选项”
def main2(字符串2,g,u):
    对于范围(0,g)内的_：
        新列表= []
        列表.append(new_list)
    对于范围(0,g)内的_：
        new2_list=[]
        list2.append(new2_list)
    统计 = 0
    我=你**你
    0=0
    i1=i+1
    u1=u+1
    n=0
    g1=g+1
    y=0
    对于范围(0,g)内的v：
      0=0
      而o<u：
          列表[ v ] .append(string2 [ o ] )
          o=o+1
    对于范围(0,g)内的n：
          list2 [ n ] =str(列表[ 0 ]   [ 0 ] )
    当计数<1时：
           米=0
           统计数=统计数+1
           当m<u时：
               米=米+1
               y=0
               对于范围(0,g)内的y：
                 对于范围(0,u)内的x：
                    list2 [ y ] =str(列表[ y ]  [ x ] )  
                    ts(列表2)
                    对于范围(y,0,-1)内的j：
                     对于范围(0,u)内的x1：
                        list2 [ j ] =str(列表[ j ]   [ x1 ] )
                        ts(列表2)
                        
    如果统计==i：
          list2.clear()
          new_list.clear()
          new2_list.clear()
          列表.clear()  
          打印（'完成'）
def ts(列表2):
                w = len(list2)//g
                if isinstance(w,int):
                           r= open("f.txt","a")
                           string3=''.join(map(str,list2))
                           r.write(string3+'\n')
                           r.close()
                           
ds （ )
<--这是一个关于文件读写的python代码-->
<--想问一下能救一下吗?-->
<--除去文件中的重复字符串-->
