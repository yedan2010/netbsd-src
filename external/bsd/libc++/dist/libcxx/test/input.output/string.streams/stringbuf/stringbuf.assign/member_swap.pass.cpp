//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <sstream>

// template <class charT, class traits = char_traits<charT>, class Allocator = allocator<charT> >
// class basic_stringbuf

// void swap(basic_stringbuf& rhs);

#include <sstream>
#include <cassert>

int main()
{
    {
        std::stringbuf buf1("testing");
        std::stringbuf buf;
        buf.swap(buf1);
        assert(buf.str() == "testing");
        assert(buf1.str() == "");
    }
    {
        std::stringbuf buf1("testing", std::ios_base::in);
        std::stringbuf buf;
        buf.swap(buf1);
        assert(buf.str() == "testing");
        assert(buf1.str() == "");
    }
    {
        std::stringbuf buf1("testing", std::ios_base::out);
        std::stringbuf buf;
        buf.swap(buf1);
        assert(buf.str() == "testing");
        assert(buf1.str() == "");
    }
    {
        std::wstringbuf buf1(L"testing");
        std::wstringbuf buf;
        buf.swap(buf1);
        assert(buf.str() == L"testing");
        assert(buf1.str() == L"");
    }
    {
        std::wstringbuf buf1(L"testing", std::ios_base::in);
        std::wstringbuf buf;
        buf.swap(buf1);
        assert(buf.str() == L"testing");
        assert(buf1.str() == L"");
    }
    {
        std::wstringbuf buf1(L"testing", std::ios_base::out);
        std::wstringbuf buf;
        buf.swap(buf1);
        assert(buf.str() == L"testing");
        assert(buf1.str() == L"");
    }
}
