## ��ϰ9.1
### (a) 
> ��list��forward_list ���ɡ�
### (b)
> ��deque 
### (c)
> ��vector��Ȼ����sort����
> ��(a)��֮ͬ�����ڲ��ر���˳����룬�ҳ���ռ俪������

## ��ϰ9.2
```c++
	std::list<std::deque<int>> stuff;
```

## ��ϰ9.3
>�������һ��������begin��end����һ��������Χ��
>����ָ��ͬһ�������е�Ԫ�ػ������������һ��Ԫ��֮���λ�á������������滻Ϊ��Ԫ��֮ǰ��λ�ã�
>����ͨ����������begin ���ﵽend.(��������Ϊ�����ݼ�begin����end).
*  ����������ǿ����ЩҪ��ȷ�����������ЩԼ���ǳ���Ա�����Ρ�

## ��ϰ9.4
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

## ��ϰ9.5
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

## ��ϰ9.6
```c++
list<int> lst1;
list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
while (iter1 < iter2)
```
> �������������֧�� ``` < <= > >=```�ȡ�
> ��Ϊ
```c++
while(iter1!=iter2)
```

## ��ϰ9.7
>vector<int>::const_iterator

## ��ϰ9.8
>list<string>::const_iterator list<string>::iterator

## ��ϰ9.9
>begin ���� iterator, cbegin ���� const_iterator 
>һ����д��һ��ֻ����

## ��ϰ9.10
```c++
vector<int> v1;
const vector<int> v2;
auto it1 = v1.begin(), it2=v2.begin();
auto it3 = v1.cbegin(), it4=v2.cbegin();
```
>it1 Ϊ vector<int>::iterator ,������Ϊvector::<int>::const_iterator��
>�����������ᱨ����
>��Ϊ��
```c++
vector<int> v1;
const vector<int> v2;
auto it1 = v1.begin();
auto it2=v2.begin(),it3 = v1.cbegin(), it4=v2.cbegin();
```

## ��ϰ9.11
```c++
vector<int> v1;//Ĭ�Ϲ��캯����ֵΪ�ա�
vector<int> v2(v1);//�������캯����������ʼ�����ȼ���vector<int> v2=v1
vector<int> v3{0,1,3,4};//�б��캯�����б��ʼ�����ȼ���vector<int>v3={0,1,2,3}
vector<int> v4(3,1);//����3����ʼ��Ϊ1��Ԫ��
vector<int> v5(3);//����3��Ԫ�ء�ֵ��ʼ��
vector<int> v6(v4.begin(),b4.end());//��ʼ��Ϊ����ȥ��Χ�е�Ԫ�صĿ�����
```
## ��ϰ9.12
>Ϊ�˴���һ������Ϊ��һ�������Ŀ���(v2)�����������������Լ�Ԫ�����ͱ�����ͬ��
>�����ݵ���������������һ����Χ�Ͳ�Ҫ��������ͬ��Ҳ��Ҫ��Ԫ��������ͬ��ֻҪ
>��ת��ΪҪ��ʼ����������Ԫ�����;Ϳ��ԡ�




































