class Array
{
private:
	int* data;
	int size;
public:
	Array()
	{
		data = NULL;
		size = 0;
	};
	Array(Array &arr)
	{
		this->data = new int[arr.size];
		this->size = arr.size;
		for (int i = 0; i < this->size; i++)
		{
			this->data[i] = arr.data[i];
		}
	};
	Array(int size, int * arr = NULL)
	{
		data = new int[size];
		if (arr != NULL)
		{
			for (int i = 0; i < size; i++)
			{
				data[i] = arr[i];
			}
		}
		this->size = size;
	};
	int operator[](int index)
	{
		return this->data[index];
	}
	friend Array operator+(int* l, Array r);
}

operator+(int* l, Array r)
{
	Array ret = Array(r.size*2);
	for (int i = 0; i < r.size; i++)
	{
		ret.data[i]=l[i];
		ret.data[r.size+i] = r[i];
	}
	return ret;
}
