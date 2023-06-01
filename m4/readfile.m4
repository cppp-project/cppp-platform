# readfile.m4
dnl Copyright (C) 2023 ChenPi11.
dnl This file is free software; The C++ Plus Project
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl From ChenPi11.

dnl Read file data into variables.

dnl Usage: READ_FILE(["file"])
dnl Output in variable 'file_data'
AC_DEFUN([READ_FILE],
[
  AC_MSG_CHECKING([file '$1' contents])
  $2=$(cat $1)
  AC_MSG_RESULT([done])
  AC_SUBST([$2])
])
