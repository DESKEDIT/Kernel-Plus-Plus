project "Kernel"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++17"
    staticruntime "on"

    targetdir("../bin/" .. outputdir .. "/%{prj.name}")
    targetdir("../obj/" .. outputdir .. "/%{prj.name}")

    files {
        "cpp/**.cpp",
        "include/**.hpp"
    }

    includedirs {
        "include"
    }
        
    filter {"configurations:Debug"}
        defines {
            "DEBUGREL"
        }
        buildoptions ""
        runtime "Debug"
        symbols "on"

    filter {"configurations:Release"}
        buildoptions "/MT"
        runtime "Release"
        optimize "on"