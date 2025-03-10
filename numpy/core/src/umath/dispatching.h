#ifndef _NPY_DISPATCHING_H
#define _NPY_DISPATCHING_H

#define _UMATHMODULE

#include <numpy/ufuncobject.h>
#include "array_method.h"


NPY_NO_EXPORT PyArrayMethodObject *
promote_and_get_ufuncimpl(PyUFuncObject *ufunc,
        PyArrayObject *const ops[],
        PyArray_DTypeMeta *signature[],
        PyArray_DTypeMeta *op_dtypes[],
        npy_bool force_legacy_promotion,
        npy_bool allow_legacy_promotion);

NPY_NO_EXPORT PyObject *
add_and_return_legacy_wrapping_ufunc_loop(PyUFuncObject *ufunc,
        PyArray_DTypeMeta *operation_dtypes[], int ignore_duplicate);

#endif  /*_NPY_DISPATCHING_H */
