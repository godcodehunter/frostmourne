
#ifndef FROSTMOURNE_AST_DUMP_HPP
#define FROSTMOURNE_AST_DUMP_HPP

#include <functional>

#include "../utils.hpp"
#include "ast_builder.hpp"

namespace ast::dump {

class dump_stream_t;

dump_stream_t& get_down(dump_stream_t& stream) noexcept { 
    return stream; 
}

dump_stream_t& get_up(dump_stream_t& stream) noexcept { 
    return stream; 
}

class dump_stream_t {
    std::string line{"|"}, ender{"`-"}, branch{"|-"};
    
    dump_stream_t& operator << (std::function<dump_stream_t&(dump_stream_t&)> manipulator) noexcept {
        std::cout 
        << ender << "psin" << std::endl 
        << "  " << branch << "pes2" << std::endl
        << "  | " << branch << "pes2" << std::endl
        << "  | " << ender << "pes2" << std::endl
        << "  " << ender << "pes2" << std::endl;    
        return manipulator(*this);
    }
} dump_stream;   

void dump(const ast_builder_t& ast_builder) noexcept {
    //  ast::func_t main_func {
    //     ast::identifier_t {"main"},
    //     new ast::func_signature_t {
    //         ast::fd_types::_int, 
    //         {}
    //     },
    //     ast::func_body_t {
    //         new scope_t {

    //         },
    //         ast::statements_t {
    //             ast::declaration_t {ast::fd_types::_int, "counter"},
    //             new ast::binary_op_t {
    //                 ast::operators::binary_t::assign_basic
    //             },
    //             new ast::binary_op_t {
    //                 ast::operators::binary_t::assign_add
    //             },
    //             new ast::unary_op_t {
    //                 ast::operators::unary_t::inc_dec_pre_inc
    //             },
    //             ast::jump_t {} 
    //         }
    //     }
    // };
    
    // for(auto&& expr : main_func.body.statements){
    //     boost::apply_visitor(overloaded {
    //         [](ast::declaration_t arg){std::cout << "declaration_t" << " ";}, 
    //         [](ast::expression_t arg){
    //             std::cout << "expression_t" << " ";
    //             boost::apply_visitor(overloaded {
    //                 [](ast::binary_op_t* binary_op){
    //                     std::cout << "binary_op";
    //                     switch(binary_op->type){
    //                         case ast::operators::binary_t::assign_basic:
    //                             std::cout << " " << "assign_basic" << std::endl;
    //                             break;
    //                         case ast::operators::binary_t::assign_add:
    //                             std::cout << " " << "assign_add" << std::endl;
    //                             break;
    //                     }
    //                 },
    //                 [](ast::unary_op_t* unary_op){ std::cout << "unary_op";},
    //                 [](auto&& ether){ std::cout << "unknow" << std::endl;}
    //             }, arg);
    //         },
    //         [](ast::jump_t arg){std::cout << "jump_t" << std::endl;},
    //         [](auto&& arg){ std::cout << "unknow" << std::endl;}
    //     }, expr);
    // }
}

}

#endif //FROSTMOURNE_AST_DUMP_HPP