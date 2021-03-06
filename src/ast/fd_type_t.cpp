#include "fd_type_t.hpp"

using namespace ast;

identifier_t& fd_type_t::variable_name() noexcept {
    return _variable_name;
}

std::size_t fd_type_t::memsize() noexcept {
    switch(fd_type_t){
        case fd_types::_signed_char:
            return 0; //TODO
        case fd_types::_short_int:
            return 0; //TODO
        case fd_types::_int:
            return 0; //TODO
        case fd_types::_long_int:
            return 0; //TODO
        case fd_types::_long_long_int:
            return 0; //TODO
        case fd_types::_unsigned_char:
            return 0; //TODO
        case fd_types::_unsigned_short_int:
            return 0; //TODO
        case fd_types::_unsigned_int:
            return 0; //TODO
        case fd_types::_unsigned_long_int:
            return 0; //TODO
        case fd_types::_unsigned_long_long_int:
            return 0; //TODO
    }
}