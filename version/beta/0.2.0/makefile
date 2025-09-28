all: help

linux: *.cpp *.hpp ## Compile the code for Linux using G++
	echo "Compiling for linux..."
	g++ -o out.out *.cpp *.hpp

win: *.cpp *.hpp ## Compile the code for Windows using G++
	@echo "Compiling for windows..."
	g++ -o out.exe *.cpp *.hpp

clear: ## Clear the folder of artifacts of compilation on Unix-based systems
	rm *.o *.out *.swp *.exe *.gch

clearwin: ## Clear the folder of artifacts of compilation on Windows
	del *.o *.out *.swp *.exe *.gch

help: ## Show the help prompt.
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | sort | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'
