# Makefile for libplatform
# Written by ChenPi11 <wushengwuxi-msctinoulk@outlook.com>

# Prefix settings
PREFIX ?= /usr/local
SRCDIR ?= $(PWD)/src
PWD ?= .

# Command settings
CAT ?= cat
MKDIR ?= mkdir -p
INSTALL ?= install
RM ?= rm -f

# Source path
SRC_FILES = \
	$(SRCDIR)/lparchs.h \
	$(SRCDIR)/lpcomps.h \
	$(SRCDIR)/lpplat.h \
	$(SRCDIR)/lpstds.h
SRC_FILE_TITLE = $(SRCDIR)/title.h
SRC_FILE_END = $(SRCDIR)/end.h

# Build path
BUILD_OUTPUT = $(PWD)/build
OUT_INCLUDE_DIR = $(BUILD_OUTPUT)/include
OUT_RUNIME_DIR = $(BUILD_OUTPUT)/bin
OUT_LIBRARY_DIR = $(BUILD_OUTPUT)/lib

# Install path
INSTALL_INCLUDE_DIR = $(PREFIX)/include
INSTALL_RUNTIME_DIR = $(PREFIX)/bin
INSTALL_LIBRARY_DIR = $(PREFIX)/lib
INSTALL_LIST = $(PWD)/install.list

# Targets
# All build
all: platform_predef.h

# Build 'platform_predef.h' to 'build/include'
platform_predef.h:
	$(MKDIR) $(OUT_INCLUDE_DIR)
	$(CAT) $(SRC_FILE_TITLE) $(SRC_FILES) $(SRC_FILE_END) > $(OUT_INCLUDE_DIR)/$@

# Clean up build results
clean:
	$(RM) -r $(BUILD_OUTPUT)

# Install 'platform_predef.h'
install-platform_predef.h:
	$(MKDIR) $(INSTALL_INCLUDE_DIR)
	$(INSTALL) $(OUT_INCLUDE_DIR)/platform_predef.h $(INSTALL_INCLUDE_DIR)
	echo $(INSTALL_INCLUDE_DIR)/platform_predef.h >> $(INSTALL_LIST)

# Uninstall build results
uninstall:
	$(RM) $(shell $(CAT) $(INSTALL_LIST))
	$(RM) $(INSTALL_LIST)

# Install build results
install: install-platform_predef.h