#ifndef AST_ACTION_FACTORY
#define AST_ACTION_FACTORY

#include "clang/Tooling/Tooling.h"

#include "data/parser/cxx/ASTAction.h"
#include "utility/file/FileRegister.h"

class ASTActionFactory : public clang::tooling::FrontendActionFactory
{
public:
	explicit ASTActionFactory(ParserClient* client, FileRegister* fileRegister);
	virtual ~ASTActionFactory();

	virtual clang::FrontendAction* create();

private:
	ParserClient* m_client;
	FileRegister* m_fileRegister;
};

#endif // AST_ACTION_FACTORY