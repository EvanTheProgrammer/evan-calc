#include "main.h"

int main() {

	// Defines Types From exprtx.hpp (A Math Parser)
	typedef exprtk::expression<double> expression_type;
	typedef exprtk::parser<double> parser_type;
	
	// Sets Types
	expression_type expression;
	parser_type parser;

	// Vars
	std::string input;

	// Inital Prompt
	std::cout << "Evan Calculator 1.0" << std::endl;
	std::cout << "Use exit() to close the program." << std::endl;

	while (true) {
		// Prompt User For Input
		std::cout << "Calculator> ";

		// Get User Input
		getline(std::cin, input);

		// Exit Command
		if (input == "exit()") {
			return 0;
		}

		// Prints Output
		if (parser.compile(input, expression)) {
			std::cout << expression.value() << std::endl;
		}
	}
	return 0;
}