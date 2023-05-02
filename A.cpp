class A{
	public:
		template<typename T>
		A(T&& t)
		:b_(std::move(t))
		{}
	private:
		B b_;


};

