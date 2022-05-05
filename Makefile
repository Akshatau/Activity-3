#Target : Dependencies
#<TAB>commands
	
PROJ_NAME=main
SRC=main.c 

unit_testing : 

build : $(SRC)
	gcc $(SRC)  

Run : build
	./$($(SRC).$(OUT))

static_analysis:
	cppcheck --enable = all $(SRC)

dynamic_analysis: build
	valgrind ./$(call FixPath ,$(PROJ_NAME).$(EXEC))

coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm ./${PROJECT_NAME}
	gcov -a main.c 

clean:
	$(RM) $(call FixPath.$(BUILD_DIR)/*.out)
