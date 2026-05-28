workspace "QuizAssessment"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "QuizApp"

   filter "system:windows"
      buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus" }

OutputDir = "%{cfg.system}-%{cfg.architecture}/%{cfg.buildcfg}"

include "QuizApp/Build-QuizApp.lua"