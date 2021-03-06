#ifndef FROSTMOURNE_DEFENITION_HPP
#define FROSTMOURNE_DEFENITION_HPP

#include <boost/variant.hpp>

#include "base.hpp"

namespace ast { //TODO: namespace definition

struct defenition_class_t {
    identifier_t type; 
    identifier_t name;
};

struct array_t {
    std::size_t size;
    identifier_t type_name;
    identifier_t _variable_name;
public:
    identifier_t& variable_name() noexcept {
        return _variable_name;
    }
};

struct pointer_t {
    std::size_t size;
    identifier_t type_name;
    identifier_t _variable_name;
    
    identifier_t& variable_name() noexcept {
        return _variable_name;
    }
};

struct references_t {
    identifier_t _variable_name;
};

struct pointer_to_member_t {
    identifier_t type_name;
    identifier_t _variable_name;
};

} 
#endif //FROSTMOURNE_DEFENITION_HPP



