class A{
	public:
		template<typename T>
		A(T&& t)
		:b_(std::move(t))
		{}
	private:
		B b_;


};
template<typename T>
class A{
	public:
		A(T&& t)
		:b_(std::forward<T>(t))
		{}
	private:
		B b_;
};
