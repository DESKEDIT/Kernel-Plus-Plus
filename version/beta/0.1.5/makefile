all: help

linux: *.cpp *.hpp ## Compile the code for Linux using G++
	echo "Compiling for linux..."
	g++ -o out.out *.cpp *.hpp

clear: ## Clear the folder of artifacts of compilation
	rm *.o *.out *.swp *.exe

help: ## Show the help prompt.
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | sort | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'
