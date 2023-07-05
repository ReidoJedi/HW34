#include <string>
#include <type_traits>

template<typename T>
concept ComplexConcept = requires(T obj) {
    { std::declval<T>().hash() } -> std::convertible_to<long>;
    { std::declval<T>().toString() } -> std::same_as<std::string>;
        requires !std::is_polymorphic_v<T>;
};