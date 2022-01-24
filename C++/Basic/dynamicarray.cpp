#include <iostream>
#include <sstream>
#include <algorithm>

template <typename T>
class dynamic_array
{
    T* data;
    size_t n;    

    public:
    dynamic_array(int n) //배열 크기를 인자로 받는 생성자
    {
        this->n = n;
        data = new T[n];
    }

    dynamic_array(const dynamic_array<T>& other) //복사 생성자
    {
        n = other.n;
        data = new T[n];

        for (int i=0;i<n;i++)
        {
            data[i] = other[i];
        }
    }
    T& operator[](int index)
    {
        return data[index];
    }
    const T& operator[](int index) const
    {
        return data[index];
    }

    T& at(int index)
    {
        if (index < n)
        {
            return data[index];
        }
        throw "Index out of range";
    }

    size_t size() const //배열의 크기 반환
    {
        return n;
    }
    ~dynamic_array() //메모리 릭 방지위해 할당된 메모리 해제하는 소멸자
    {
        delete[] data;
    }
    //dynamic_array의 배열 원소 순회할 때 사용할 반복자 관련 함수 정의
    T* begin() {return data;}
    const T* begin() const {return data;}
    T* end() {return data + n;}
    const T* end() const {return data + n;}

    friend dynamic_array<T> operator+(const dynamic_array<T>& arr1, dynamic_array<T>& arr2)
    {//두 배열 하나로 합치는 연산 수행하는 함수 정의
        dynamic_array<T> result(arr1.size() + arr2.size());
        std::copy(arr1.begin(), arr1.end(), result.begin());
        std::copy(arr2.begin(), arr2.end(), result.begin() + arr1.size());

        return result;
    }

    std::string to_string(const std::string& sep = ", ")//배열에 저장된 모든 데이터를 문자열로 반환
    {
        if(n==0)
        {
            return "";
        }
        std::ostringstream os;
        os << data[0];

        for(int i = 1;i<n;i++)
        {
            os << sep << data[i];
        }
        return os.str();
    }
};

struct student
{
    std::string name;
    int standard;
};

std::ostream& operator<<(std::ostream& os, const student& s)
{
    return (os << "[" << s.name << ", "<<s.standard << "]");
}

int main()
{
    int nStudents;
    std::cout << "Enter the number of students in class 1: ";
    std::cin >> nStudents;

    dynamic_array<student> class1(nStudents);
    for (int i =0; i< nStudents; i++)
    {
        std::string name;
        int standard;
        std::cout << "Enter the name and age of " <<i + 1 <<"th student: " ;
        std::cin >> name >> standard;
        class1[i] = student{name, standard};
    }

    try //배열 크기보다 큰 인덱스의 학생에 접근
    {
        //class1[nStudents] = student {"John",8}; //예상할 수 없는 동작. 주석 해제시 프로그램 비정상 종료
        class1.at(nStudents) = student{"John",8}; //예외 발생
    }
    catch (...)
    {
        std::cout << "Exception occurred!"<<std::endl;
    }
    // 깊은 복사
    auto class2 = class1;
    std::cout <<"copy class1 and create class2: "<<class2.to_string() << std::endl;
    // 두 학급 합쳐서 새로운 큰 학급 생성
    auto class3 = class1+class2;
    std::cout << "combine class1 with class2 to create class3: "<< class3.to_string()<<std::endl;

    return 0;
}