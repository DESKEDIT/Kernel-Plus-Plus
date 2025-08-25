make : main.cpp utils.h utils.cpp splitstring.cpp splitstring.h
	@echo Making project...
	@cl /EHsc /c utils.cpp /Ycutils.h
	@cl /EHsc /c splitstring.cpp /Yuutils.h
	@cl /EHsc /c main.cpp /Yuutils.h
	@link /out:Kernel++.exe main.obj utils.obj splitstring.obj
clear :
	@echo Cleaning project...
	@del Kernel++.exe main.obj utils.obj splitstring.obj utils.pch