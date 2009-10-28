/*
 *  Copyright 2008-2009 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */


#pragma once

namespace cusp
{
namespace blas
{

template <typename ForwardIterator,
          typename ForwardIterator2,
          typename ScalarType>
void axpy(ForwardIterator first1,
          ForwardIterator last1,
          ForwardIterator first2,
          ScalarType alpha);

template <typename Array,
          typename ScalarType>
void axpy(const Array& array1,
                Array& array2,
          ScalarType alpha);


template <typename InputIterator,
          typename ForwardIterator>
void copy(InputIterator   first1,
          InputIterator   last1,
          ForwardIterator first2);

template <typename Array1,
          typename Array2>
void copy(const Array1& array1,
                Array2& array2);


template <typename ForwardIterator>
typename thrust::iterator_value<ForwardIterator>::type
    dot(ForwardIterator first1,
        ForwardIterator last1,
        ForwardIterator first2);

template <typename Array>
typename Array::value_type
    dot(const Array& array1,
        const Array& array2);


template <typename ForwardIterator,
          typename ScalarType>
void fill(ForwardIterator first,
          ForwardIterator last,
          ScalarType alpha);

template <typename Array,
          typename ScalarType>
void fill(Array& array,
          ScalarType alpha);


template <typename InputIterator>
typename thrust::iterator_value<InputIterator>::type
    nrm2(InputIterator first,
         InputIterator last);

template <typename Array>
typename Array::value_type
    nrm2(const Array& array);


template <typename ForwardIterator,
          typename ScalarType>
void scal(ForwardIterator first,
          ForwardIterator last,
          ScalarType alpha);

template <typename Array,
          typename ScalarType>
void scal(Array& array,
          ScalarType alpha);


} // end namespace blas
} // end namespace cusp

#include <cusp/detail/blas.inl>

