//
//  ur.cpp
//
//  Copyright © 2020 by Blockchain Commons, LLC
//  Licensed under the "BSD-2-Clause Plus Patent License"
//

#include "ur_.hpp"

#include <iostream>

using namespace std;

namespace ur_arduino {

UR::UR(const std::string &type, const ByteVector &cbor)
    : type_(type), cbor_(cbor)
{
    if (!is_ur_type(type)) {
        //throw invalid_type();
        assert(0);
    }
}

bool operator==(const UR& lhs, const UR& rhs) {
    return lhs.type() == rhs.type() && lhs.cbor() == rhs.cbor();
}

} // namespace ur
