/* STD C94 */
#define __stdc_c94__ 199409L
/* STD C99 */
#define __stdc_c99__ 199901L
/* STD C11 */
#define __stdc_c11__ 201112L
/* STD C17/C18 */
#define __stdc_c18__ 201710L

#ifdef __STDC_VERSION__
#define __has_c94__ 1
#define __has_c99__ (__STDC_VERSION__ >= __stdc_c99__)
#define __has_c11__ (__STDC_VERSION__ >= __stdc_c11__)
#define __has_c18__ (__STDC_VERSION__ >= __stdc_c18__)
#else
#define __has_c94__ 0
#define __has_c99__ 0
#define __has_c11__ 0
#define __has_c18__ 0
#endif

/* Usually C17 means C18. */
#define __has_c17__ __has_c18__

/* C++98 */
#define __stdcpp_cpp98__ 199711L
/* C++11 */
#define __stdcpp_cpp11__ 201103L
/* C++14 */
#define __stdcpp_cpp14__ 201402L
/* C++17 */
#define __stdcpp_cpp17__ 201703L
/* C++20 */
#define __stdcpp_cpp20__ 202002L

/* C++ predefines */
#ifdef __cplusplus

/* Fix MSVC++ __cplusplus's feature. */
#ifdef _MSVC_LANG
#define __cpp_version__ _MSVC_LANG
#else
#define __cpp_version__ __cplusplus
#endif

/* C++ version */
#define __has_cpp98__ (__cpp_version__ >= __stdcpp_cpp98__)
#define __has_cpp11__ (__cpp_version__ >= __stdcpp_cpp11__)
#define __has_cpp14__ (__cpp_version__ >= __stdcpp_cpp14__)
#define __has_cpp17__ (__cpp_version__ >= __stdcpp_cpp17__)
#define __has_cpp20__ (__cpp_version__ >= __stdcpp_cpp20__)
#else
#define __cpp_version__ 0
#define __has_cpp98__ 0
#define __has_cpp11__ 0
#define __has_cpp14__ 0
#define __has_cpp17__ 0
#define __has_cpp20__ 0
#endif
