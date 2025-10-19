workspace "Kernel"
    architecture"x64"

    configurations {
        "Debug",
        "Release"
    }

    startproject "src"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%(cfg.architecture)"

include "src"