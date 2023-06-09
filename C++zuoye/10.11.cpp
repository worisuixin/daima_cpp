/*(1) 以上程序段输出结果为： 1 4 5

虽然输出结果看起来已经去重，但实际上unique函数只是将重复的元素移动到了容器末尾，并没有真正地删除重复元素。正确的做法是使用容器的erase方法，如下所示：

int arr[] = {1, 1, 4, 4, 5}; vector s(arr, arr+5); auto iter = unique(s.begin(), s.end()); s.erase(iter, s.end()); copy(s.begin(), s.end(), ostream_iterator(cout, "\n"));

这样输出结果才真正达到了去除重复元素的目的。

(2) 如果s是列表，则可以使用列表提供的unique函数来完成去重操作：

list s = {1, 1, 4, 4, 5}; s.unique(); copy(s.begin(), s.end(), ostream_iterator(cout, "\n"));

这样即可方便地对列表进行去重。值得注意的是，这里的unique函数只能用于列表容器，而不是算法库中的unique函数。*/