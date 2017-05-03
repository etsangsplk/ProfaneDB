/*
 * ProfaneDB - A Protocol Buffer database.
 * Copyright (C) 2017  "Giorgio Azzinnaro" <giorgio.azzinnaro@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef PROFANEDB_STORAGE_NORMALIZER_H
#define PROFANEDB_STORAGE_NORMALIZER_H

#include <map>

#include <google/protobuf/descriptor_database.h>

#include "parser.h"

namespace profanedb {
namespace storage {

class Normalizer
{
public:
    Normalizer(Parser & parser);
    
private:
    std::shared_ptr<google::protobuf::DescriptorPool> schemaPool;
    
    std::unique_ptr<google::protobuf::MergedDescriptorDatabase> normalizedMergedDescriptorDb;
    std::shared_ptr<google::protobuf::DescriptorPool> normalizedPool;
};
}
}

#endif // PROFANEDB_STORAGE_NORMALIZER_H
