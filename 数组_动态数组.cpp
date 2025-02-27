//#include<iostream>
//#include<vector>
//#include<stdexcept>
//using namespace std;
//
//template<typename E>
//class MyArrayList {
//private:
//	真正存储数据的底层数组
//	E* data;
//	当前元素个数
//	int size;
//	最大元素容量
//	int cap;
//	默认初始容量
//	static const int INIT_CAP = 1;
//	
//public:
//	MyArrayList() {
//		this->data = new E[INIT_CAP];
//		this->size = 0;
//		this->cap = INIT_CAP;
//	}
//	MyArrayList(int initCapacity) {
//		this->data = new E[initCapacity];
//		this->size = 0;
//		this->cap = initCapacity;
//	}
//
//	增
//	void addLast(E e) {
//		if (size == cap) {
//			resize(2 * cap); //扩容为原来的两倍
//		}
//
//		data[size] = e;
//		size++;
//	}
//
//	插
//	void insert(int index, E e) {
//		检查索引越界
//		checkPositionIndex(index);
//
//		if (size == cap) {
//			resize(2 * cap);
//		}
//
//		for (int i = size-1; i >= index; i--) {
//			data[i+1] = data[i];
//		}
//
//		data[index] = e;
//		size++;
//	}
//	void addFirst(E e) {
//		insert(0, e);
//	}
//
//	删除
//	E removeLast() {
//		if (size == 0) {
//			throw std::out_of_range("NoSuchElementException");
//		}
//
//		if (size == (cap / 4)) {
//			resize(cap / 2); //缩容
//		}
//
//		E deletedVal = data[size - 1];
//		最后一个元素置为null，否则会内存泄露
//		data[size - 1] = NULL;
//		size--;
//		return deletedVal;
//
//	}
//	
//	删除指定索引
//	E remove(int index) {
//		checkElementIndex(index);
//		
//		 可以缩容，节约空间
//		if (size == cap / 4) {
//			resize(cap / 2);
//		}
//
//		E deletedVal = data[index];
//
//		for (int i = index+1; i < size; i++) {
//			data[i - 1] = data[i];
//		}
//	
//		data[size - 1] = NULL;
//		size--;
//		return deletedVal;
//	}
//
//	E removeFist() {
//		return remove(0);
//	}
//
//	E get(int index) {
//		checkElementIndex(index);
//		return data[index];
//	}
//	
//	改
//	E set(int index, E element) {
//		checkElementIndex(index);
//
//		E oldVal = data[index];
//
//		data[index] = element;
//		return oldVal;
//	}
//
//	工具方法
//	int getSize() {
//		return size;
//	}
//
//	bool isEmpty() {
//		return size == 0;
//	}
//
//	void resize(int newCap) {
//		E* temp = new E[newCap];
//		
//		for (int i = 0; i < size; i++) {
//			temp[i] = data[i];
//		}
//		delete[] data;
//
//		data = temp;
//		cap = newCap;
//	}
//
//	bool isElementIndex(int index) {
//		return index >= 0 && index < size;
//	}
//
//	bool isPositionIndex(int index) {
//		return index >= 0 && index <= size;
//	}
//
//	void checkElementIndex(int index) {
//		if (!isElementIndex(index)) {
//			throw std::out_of_range("Index out of bounds");
//		}
//	}
//
//	void checkPositionIndex(int index) {
//		if (!isPositionIndex(index)) {
//			throw std::out_of_range("Index out of bounds");
//		}
//	}
//
//	void display() {
//		cout << "size = " << size << ",cap = " << cap << endl;
//		for (int i = 0; i < size; i++) {
//			cout << data[i] << " ";
//		}
//		cout << endl;
//	}
//
//	~MyArrayList() {
//		delete[]data;
//	}
//
//};
//
//int main() {
//	MyArrayList<int> arr(3);
//
//	for (int i = 1; i <= 5; i++) {
//		arr.addLast(i);
//	}
//
//	arr.display();
//
//	arr.remove(3);
//	arr.display();
//
//	arr.insert(1, 9);
//	arr.display();
//	
//
//
//}
