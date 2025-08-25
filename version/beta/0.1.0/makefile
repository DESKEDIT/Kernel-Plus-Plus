make : main.cpp utils.h utils.cpp
	@echo Making project...
	@cl /EHsc /c utils.cpp /Ycutils.h
	@cl /EHsc /c main.cpp /Yuutils.h
	@link /out:Kernel.exe main.obj utils.obj