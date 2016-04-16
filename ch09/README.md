##练习9.1
###(a) 
> 用list和forward_list 均可。
###(b)
> 用deque 
###(c)
> 用vector，然后用sort排序。
> 与(a)不同之处在于不必保持顺序插入，且程序空间开销增大。

##练习9.2
```c++
	std::list<std::deque<int>> stuff;
```

##练习9.3
>如果满足一下条件，begin和end构成一个迭代范围。
>它们指向同一个容器中的元素或者是容器最后一个元素之后的位置。（反向容器替换为首元素之前的位置）
>可以通过反复递增begin 来达到end.(反向容器为反复递减begin到达end).
* 编译器不会强制这些要求。确保程序符合这些约定是程序员的责任。

##练习9.4
```c++
	bool findnumber(vector<int>::const_iterator first,vector<int>::const_iterator end, int number){
		while(first<end){
			if(*first == number)
				return true;
			++first;
		}
		return false;
	}
```

##练习9.5
```c++
	auto findnumber(vector<int>::const_iterator first,vector<int>::const_iterator end, int number){
		while(first<end){
			if(*first == number)
				return first;
			++first;
		}
		return end;
	}
```

##练习9.6
```c++
list<int> lst1;
list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
while (iter1 < iter2)
```
> 无序关联容器不支持 ``` < <= > >=```等。
>改为
```c++
while(iter1!=iter2)
```

##练习9.7
>vector<int>::const_iterator

##练习9.8
>list<string>::const_iterator list<string>::iterator

##练习9.9
>begin 返回 iterator, cbegin 返回 const_iterator 
>一个可写，一个只读。

##练习9.10
```c++
vector<int> v1;
const vector<int> v2;
auto it1 = v1.begin(), it2=v2.begin();
auto it3 = v1.cbegin(), it4=v2.cbegin();
```
>it1 为 vector<int>::iterator ,其他均为vector::<int>::const_iterator。
>所以这个程序会报错啊。
>改为：
```c++
vector<int> v1;
const vector<int> v2;
auto it1 = v1.begin();
auto it2=v2.begin(),it3 = v1.cbegin(), it4=v2.cbegin();
```





































