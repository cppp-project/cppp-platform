dnl Copyright (C) 2023 ChenPi11.
dnl This file is part of the libplatform library.
dnl 
dnl The libplatform library is free software; you can redistribute it
dnl and/or modify it under the terms of the The Unlicense
dnl as published by the unlicense.org.
dnl 
dnl The libplatform library is distributed in the hope that it will be
dnl useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
dnl MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the The
dnl Unlicense for more details.
dnl 
dnl You should have received a copy of the The Unlicense
dnl along with the libplatform library; see the file LICENSE.
dnl If not, see <https://unlicense.org>.

AC_PREREQ([2.64])
AC_INIT([libplatform], [2.0.0], [cpppteam@email.cn], [libplatform-2.0.0.tar.gz], [https://github.com/cppp-project/libplatform])
AC_CONFIG_AUX_DIR([build-aux])
AC_PROG_INSTALL

dnl Assemble libplatform.h
READ_FILE([include/platform_predef/architectures.h], [ARCHITECTURES])
READ_FILE([include/platform_predef/compilers.h], [COMPILERS])
READ_FILE([include/platform_predef/languagestandards.h], [LANGUAGESTANDARDS])
READ_FILE([include/platform_predef/platforms.h], [PLATFORMS])
AC_CONFIG_FILES([include/libplatform.h])

AC_CONFIG_FILES([Makefile])

AC_OUTPUT
