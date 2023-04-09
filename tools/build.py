#!/bin/env python
# -*- coding: utf-8 -*-
"""
    libplatform builder by Python.

    Authors:
        ChenPi11 <wushengwuxi-msctinoulk@outlook.com>
"""
# Package includes
import sys
import os
import platform
import shutil

# Prefix settings
USAGE = """Usage: python ./tools/build.py [OPTION] [TARGETS] ...
    Defaults for the options are specified in brackets.

    Configuration:
        -h, --help              display this help and exit
        -v, --version           display version information and exit
        -q, --quiet             do not print messages

    Installation directories:
        --prefix=PREFIX         install build files in PREFIX
                                    [/usr/local]

    Targets:
        all:                        All build.
        platform_predef.h:          Build 'platform_predef.h' to 'build/include'.
        clean:                      Clean up build results.
        install-platform_predef.h:  Install 'platform_predef.h'.
        uninstall:                  Uninstall build results.
        install:                    Install build results.

    Report bugs to the package provider.
"""
PREFIX = "/usr/local"
SRCDIR = "../src"
TARGET = "all"

PWD = os.path.abspath(".")
BUILD_OUTPUT = os.path.join(PWD, "build")
OUT_INCLUDE_DIR = os.path.join(BUILD_OUTPUT, "include")
OUT_RUNIME_DIR = os.path.join(BUILD_OUTPUT, "bin")
OUT_LIBRARY_DIR = os.path.join(BUILD_OUTPUT, "lib")

# Install path
INSTALL_INCLUDE_DIR = os.path.join(PREFIX, "include")
INSTALL_RUNTIME_DIR = os.path.join(PREFIX, "bin")
INSTALL_LIBRARY_DIR = os.path.join(PREFIX, "lib")
INSTALL_LIST = os.path.join(PWD, "install.list")

# Source path
SRC_FILES = ["{SRCDIR}/src/lparchs.h", "{SRCDIR}/src/lpcomps.h", "{SRCDIR}/src/lpplat.h", "{SRCDIR}/src/lpstds.h"]
SRC_FILE_TITLE = "{SRCDIR}/src/title.h"
SRC_FILE_END = "{SRCDIR}/src/end.h"

# Function defines
def output_line(text):
    """
    Output some text to stdout and add a line break.

    Parameter:
        - text (str): The text to be output.

    Return:
        - None
    """
    sys.stdout.write(text+"\n")
    sys.stdout.flush()

def error_line(text):
    """
    Output some text to stderr and add a line break.

    Parameter:
        - text (str): The text to be output.

    Return:
        - None
    """
    sys.stderr.write(text+"\n")
    sys.stderr.flush()

def output_usage():
    """
    Output usage and exit.
    """
    error_line(USAGE)
    sys.exit(1)

def output_version():
    """
    Output version and exit.
    """
    error_line("libplatform builder v1.0")
    sys.exit(1)

def load_argv():
    """
    Load argv.
    """
    global output_line, PREFIX, TARGET
    _argv = sys.argv[1:]
    for arg in _argv:
        arg = arg.strip()
        if arg == "-h" or arg == "--help":
            output_usage()
        elif arg == "-v" or arg == "--version":
            output_version()
        elif arg == "-q" or arg == "--quiet":
            def nullfun(*args, **kwargs):
                pass
            output_line = nullfun
        elif arg.startswith("--prefix="):
            PREFIX = os.path.abspath(arg.replace("--prefix=", ""))
            if not os.path.isdir(PREFIX):
                raise ValueError("Cannot find prefix directory: %s" % (PREFIX, ))
        else:
            TARGET = arg
    output_line("Set prefix to: '%s' ..." % (PREFIX, ))
    output_line("Set target to: '%s' ..." % (TARGET, ))

def load_srcs():
    """
    Load sources path.
    """
    global SRC_FILES, SRC_FILE_TITLE, SRC_FILE_END
    _ = [SRC_FILE_TITLE.replace("{SRCDIR}", SRCDIR)]
    for i in SRC_FILES:
        _.append(i.replace("{SRCDIR}", SRCDIR))
    _.append(SRC_FILE_END.replace("{SRCDIR}", SRCDIR))
    SRC_FILES = _

def add_target(name, call):
    """
    Add or set target.

    Parameter:
        - name (str): Target name.
        - call (function): Target event
    
    Return:
        - None
    """
    target[name] = call

def read_file(path):
    """
    Read file and return file data

    Args:
        path (str): file path

    Returns:
        str: file data
    """
    f = open(path, "rb")
    ret = f.read().decode("utf-8")
    f.close()
    return ret

def init():
    """
    Initialize program.
    """
    global SRCDIR
    # Load argv
    load_argv()
    # Find source directory
    # If build.py at project root
    SRCDIR = os.path.abspath(os.path.join(__file__, ".."))
    # If build.py at project ./tools/ (default)
    if not os.path.isdir(os.path.join(SRCDIR, "src")):
        SRCDIR = os.path.abspath(os.path.join(SRCDIR, ".."))
    if not os.path.isdir(os.path.join(SRCDIR, "src")):
        raise ValueError("Cannot find source directory: %s" % (SRCDIR, ))
    output_line("Find source directory at '%s' ..." % (SRCDIR, ))
    
    # Init sources path
    load_srcs()
    
    # Add targets to targets map
    add_target("all", target_all)
    add_target("platform_predef.h", target_platform_predef_h)
    add_target("clean", target_clean)
    add_target("install-platform_predef.h", target_install_platform_predef_h)
    add_target("uninstall", target_uninstall)
    add_target("install", target_install)

def main():
    """
    Builder main.

    Returns:
        int: return code
    """
    try:
        target[TARGET]()
        output_line("Successfully built target: '%s'." % (TARGET, ))
        return 0
    except KeyError:
        error_line("Error: No rule to make target '%s'." % (TARGET, ))
        return 1

# Targets map
target={}

# Targets
def target_all():
    """
    Build target: all
    """
    return target_platform_predef_h()

_data = ""
def target_platform_predef_h():
    """
    Build target: platform_predef.h
    """
    global _data
    if not os.path.exists(OUT_INCLUDE_DIR):
        os.makedirs(OUT_INCLUDE_DIR)
    for file in SRC_FILES:
        _data += read_file(file)
    f = open(os.path.join(OUT_INCLUDE_DIR, "platform_predef.h"), "wb")
    _data = _data.encode("utf-8")
    if platform.uname()[0] == "Windows":
        # Avoid CR LF problem
        _data.replace(b'\r\n', '\n')
        _data.replace(b'\n', b'\r\n')
    f.write(_data)
    f.flush()
    f.close()

def target_clean():
    """
    Build target: clean
    """
    if(os.path.exists(BUILD_OUTPUT)):
        shutil.rmtree(BUILD_OUTPUT)

def target_install_platform_predef_h():
    """
    Build target: install-platform_predef.h
    """
    if not os.path.exists(INSTALL_INCLUDE_DIR):
        os.makedirs(INSTALL_INCLUDE_DIR)
    dst = os.path.join(INSTALL_INCLUDE_DIR, "platform_predef.h")
    shutil.copyfile(os.path.join(OUT_INCLUDE_DIR, "platform_predef.h"), dst)
    
    f = open(INSTALL_LIST, "wb")
    f.write(dst.encode("utf-8"))
    f.close()

def target_uninstall():
    """
    Build target: uninstall
    """
    if not os.path.isfile(INSTALL_LIST):
        output_line("Their is nothing to do.")
        return 0
    f = open(INSTALL_LIST, "rb")
    file_list = f.read().decode('utf-8').strip().split(" ")
    f.close()
    for file in file_list:
        output_line("Removing '%s' ..." % (file, ))
        os.remove(file)
    os.remove(INSTALL_LIST)

def target_install():
    """
    Build target: install
    """
    return target_install_platform_predef_h()

# Main invoke
if __name__ == "__main__":
    init()
    sys.exit(main())