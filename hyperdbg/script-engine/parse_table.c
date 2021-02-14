#include "parse_table.h"
#include "common.h"
#include "ScriptEngineCommonDefinitions.h"
const struct _TOKEN Lhs[RULES_COUNT]= 
{
	{NON_TERMINAL, "S"},
	{NON_TERMINAL, "S'"},
	{NON_TERMINAL, "S'"},
	{NON_TERMINAL, "C"},
	{NON_TERMINAL, "C"},
	{NON_TERMINAL, "C"},
	{NON_TERMINAL, "C"},
	{NON_TERMINAL, "C"},
	{NON_TERMINAL, "C"},
	{NON_TERMINAL, "C"},
	{NON_TERMINAL, "C"},
	{NON_TERMINAL, "VA"},
	{NON_TERMINAL, "VA"},
	{NON_TERMINAL, "C'"},
	{NON_TERMINAL, "E0"},
	{NON_TERMINAL, "E0'"},
	{NON_TERMINAL, "E0'"},
	{NON_TERMINAL, "E1"},
	{NON_TERMINAL, "E1'"},
	{NON_TERMINAL, "E1'"},
	{NON_TERMINAL, "E2"},
	{NON_TERMINAL, "E2'"},
	{NON_TERMINAL, "E2'"},
	{NON_TERMINAL, "E3"},
	{NON_TERMINAL, "E3'"},
	{NON_TERMINAL, "E3'"},
	{NON_TERMINAL, "E4"},
	{NON_TERMINAL, "E4'"},
	{NON_TERMINAL, "E4'"},
	{NON_TERMINAL, "E5"},
	{NON_TERMINAL, "E5'"},
	{NON_TERMINAL, "E5'"},
	{NON_TERMINAL, "E6"},
	{NON_TERMINAL, "E6'"},
	{NON_TERMINAL, "E6'"},
	{NON_TERMINAL, "E7"},
	{NON_TERMINAL, "E7'"},
	{NON_TERMINAL, "E7'"},
	{NON_TERMINAL, "E8"},
	{NON_TERMINAL, "E8'"},
	{NON_TERMINAL, "E8'"},
	{NON_TERMINAL, "E9"},
	{NON_TERMINAL, "E9'"},
	{NON_TERMINAL, "E9'"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E11"}
};
const struct _TOKEN Rhs[RULES_COUNT][MAX_RHS_LEN]= 
{
	{{NON_TERMINAL, "C"},{SPECIAL_TOKEN, ";"},{NON_TERMINAL, "S'"}},
	{{NON_TERMINAL, "C"},{SPECIAL_TOKEN, ";"},{NON_TERMINAL, "S'"}},
	{{EPSILON, "eps"}},
	{{SEMANTIC_RULE, "@PUSH"},{ID, "_id"},{SPECIAL_TOKEN, "="},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@MOV"},{NON_TERMINAL, "C'"}},
	{{KEYWORD, "print"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@PRINT"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "formats"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@FORMATS"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "disableevent"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@DISABLEEVENT"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "enableevent"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@ENABLEEVENT"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "json"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E11"},{SPECIAL_TOKEN, ","},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@JSON"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "printf"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E11"},{SEMANTIC_RULE, "@VARGSTART"},{NON_TERMINAL, "VA"},{SEMANTIC_RULE, "@PRINTF"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "break"},{SPECIAL_TOKEN, "("},{SEMANTIC_RULE, "@BREAK"},{SPECIAL_TOKEN, ")"}},
	{{SPECIAL_TOKEN, ","},{NON_TERMINAL, "E0"},{NON_TERMINAL, "VA"}},
	{{EPSILON, "eps"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E1"},{NON_TERMINAL, "E0'"}},
	{{SPECIAL_TOKEN, "|"},{NON_TERMINAL, "E1"},{SEMANTIC_RULE, "@OR"},{NON_TERMINAL, "E0'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E2"},{NON_TERMINAL, "E1'"}},
	{{SPECIAL_TOKEN, "^"},{NON_TERMINAL, "E2"},{SEMANTIC_RULE, "@XOR"},{NON_TERMINAL, "E1'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E3"},{NON_TERMINAL, "E2'"}},
	{{SPECIAL_TOKEN, "&"},{NON_TERMINAL, "E3"},{SEMANTIC_RULE, "@AND"},{NON_TERMINAL, "E2'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E4"},{NON_TERMINAL, "E3'"}},
	{{SPECIAL_TOKEN, ">>"},{NON_TERMINAL, "E4"},{SEMANTIC_RULE, "@ASR"},{NON_TERMINAL, "E3'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E5"},{NON_TERMINAL, "E4'"}},
	{{SPECIAL_TOKEN, "<<"},{NON_TERMINAL, "E5"},{SEMANTIC_RULE, "@ASL"},{NON_TERMINAL, "E4'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E6"},{NON_TERMINAL, "E5'"}},
	{{SPECIAL_TOKEN, "+"},{NON_TERMINAL, "E6"},{SEMANTIC_RULE, "@ADD"},{NON_TERMINAL, "E5'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E7"},{NON_TERMINAL, "E6'"}},
	{{SPECIAL_TOKEN, "-"},{NON_TERMINAL, "E7"},{SEMANTIC_RULE, "@SUB"},{NON_TERMINAL, "E6'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E8"},{NON_TERMINAL, "E7'"}},
	{{SPECIAL_TOKEN, "*"},{NON_TERMINAL, "E8"},{SEMANTIC_RULE, "@MUL"},{NON_TERMINAL, "E7'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E9"},{NON_TERMINAL, "E8'"}},
	{{SPECIAL_TOKEN, "/"},{NON_TERMINAL, "E9"},{SEMANTIC_RULE, "@DIV"},{NON_TERMINAL, "E8'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E10"},{NON_TERMINAL, "E9'"}},
	{{SPECIAL_TOKEN, "%"},{NON_TERMINAL, "E10"},{SEMANTIC_RULE, "@MOD"},{NON_TERMINAL, "E9'"}},
	{{EPSILON, "eps"}},
	{{KEYWORD, "poi"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@POI"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "db"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@DB"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "dd"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@DD"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "dw"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@DW"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "dq"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@DQ"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "str"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@STR"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "wstr"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@WSTR"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "sizeof"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@SIZEOF"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "neg"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@NEG"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "hi"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@HI"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "low"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@LOW"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "not"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@NOT"},{SPECIAL_TOKEN, ")"}},
	{{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SPECIAL_TOKEN, ")"}},
	{{SEMANTIC_RULE, "@PUSH"},{REGISTER, "_register"}},
	{{SEMANTIC_RULE, "@PUSH"},{HEX, "_hex"}},
	{{SEMANTIC_RULE, "@PUSH"},{DECIMAL, "_decimal"}},
	{{SEMANTIC_RULE, "@PUSH"},{OCTAL, "_octal"}},
	{{SEMANTIC_RULE, "@PUSH"},{BINARY, "_binary"}},
	{{SEMANTIC_RULE, "@PUSH"},{PSEUDO_REGISTER, "_pseudo_register"}},
	{{SEMANTIC_RULE, "@PUSH"},{STRING, "_string"}}
};
const unsigned int RhsSize[RULES_COUNT]= 
{
3,
3,
1,
6,
5,
5,
5,
5,
7,
7,
4,
3,
1,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
3,
2,
2,
2,
2,
2,
2,
2
};
const char* NoneTerminalMap[NONETERMINAL_COUNT]= 
{
"E1'",
"E8'",
"E1",
"E10",
"E3",
"E2",
"E0'",
"E11",
"E6",
"E0",
"VA",
"C'",
"S'",
"E2'",
"E8",
"E7",
"E9'",
"E3'",
"E5'",
"C",
"E4",
"E4'",
"E6'",
"E9",
"E5",
"E7'",
"S"
};
const char* TerminalMap[TERMINAL_COUNT]= 
{
"(",
"formats",
"disableevent",
"_pseudo_register",
"$",
"low",
"|",
">>",
"neg",
"&",
"+",
"not",
"/",
"poi",
"_hex",
"=",
"sizeof",
"print",
"-",
"printf",
"_binary",
"_string",
"_register",
",",
"_octal",
"break",
"json",
")",
"*",
"_id",
"str",
"_decimal",
"dd",
"db",
"hi",
"dw",
"%",
"^",
";",
"enableevent",
"dq",
"<<",
"wstr"
};
const int ParseTable[NONETERMINAL_COUNT][TERMINAL_COUNT]= 
{
	{-1		,-1		,-1		,-1		,-1		,-1		,19		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,19		,-1		,-1		,-1		,19		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,18		,19		,-1		,-1		,-1		,-1	},
	{-1		,-1		,-1		,-1		,-1		,-1		,40		,40		,-1		,40		,40		,-1		,39		,-1		,-1		,-1		,-1		,-1		,40		,-1		,-1		,-1		,-1		,40		,-1		,-1		,-1		,40		,40		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,40		,40		,-1		,-1		,40		,-1	},
	{17		,-1		,-1		,17		,-1		,17		,-1		,-1		,17		,-1		,-1		,17		,-1		,17		,17		,-1		,17		,-1		,-1		,-1		,17		,-1		,17		,-1		,17		,-1		,-1		,-1		,-1		,-1		,17		,17		,17		,17		,17		,17		,-1		,-1		,-1		,-1		,17		,-1		,17	},
	{56		,-1		,-1		,62		,-1		,54		,-1		,-1		,52		,-1		,-1		,55		,-1		,44		,58		,-1		,51		,-1		,-1		,-1		,61		,-1		,57		,-1		,60		,-1		,-1		,-1		,-1		,-1		,49		,59		,46		,45		,53		,47		,-1		,-1		,-1		,-1		,48		,-1		,50	},
	{23		,-1		,-1		,23		,-1		,23		,-1		,-1		,23		,-1		,-1		,23		,-1		,23		,23		,-1		,23		,-1		,-1		,-1		,23		,-1		,23		,-1		,23		,-1		,-1		,-1		,-1		,-1		,23		,23		,23		,23		,23		,23		,-1		,-1		,-1		,-1		,23		,-1		,23	},
	{20		,-1		,-1		,20		,-1		,20		,-1		,-1		,20		,-1		,-1		,20		,-1		,20		,20		,-1		,20		,-1		,-1		,-1		,20		,-1		,20		,-1		,20		,-1		,-1		,-1		,-1		,-1		,20		,20		,20		,20		,20		,20		,-1		,-1		,-1		,-1		,20		,-1		,20	},
	{-1		,-1		,-1		,-1		,-1		,-1		,15		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,16		,-1		,-1		,-1		,16		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,16		,-1		,-1		,-1		,-1	},
	{-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,63		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1	},
	{32		,-1		,-1		,32		,-1		,32		,-1		,-1		,32		,-1		,-1		,32		,-1		,32		,32		,-1		,32		,-1		,-1		,-1		,32		,-1		,32		,-1		,32		,-1		,-1		,-1		,-1		,-1		,32		,32		,32		,32		,32		,32		,-1		,-1		,-1		,-1		,32		,-1		,32	},
	{14		,-1		,-1		,14		,-1		,14		,-1		,-1		,14		,-1		,-1		,14		,-1		,14		,14		,-1		,14		,-1		,-1		,-1		,14		,-1		,14		,-1		,14		,-1		,-1		,-1		,-1		,-1		,14		,14		,14		,14		,14		,14		,-1		,-1		,-1		,-1		,14		,-1		,14	},
	{-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,11		,-1		,-1		,-1		,12		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1	},
	{-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,13		,-1		,-1		,-1		,-1	},
	{-1		,1		,1		,-1		,2		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,1		,-1		,1		,-1		,-1		,-1		,-1		,-1		,1		,1		,-1		,-1		,1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,1		,-1		,-1		,-1	},
	{-1		,-1		,-1		,-1		,-1		,-1		,22		,-1		,-1		,21		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,22		,-1		,-1		,-1		,22		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,22		,22		,-1		,-1		,-1		,-1	},
	{38		,-1		,-1		,38		,-1		,38		,-1		,-1		,38		,-1		,-1		,38		,-1		,38		,38		,-1		,38		,-1		,-1		,-1		,38		,-1		,38		,-1		,38		,-1		,-1		,-1		,-1		,-1		,38		,38		,38		,38		,38		,38		,-1		,-1		,-1		,-1		,38		,-1		,38	},
	{35		,-1		,-1		,35		,-1		,35		,-1		,-1		,35		,-1		,-1		,35		,-1		,35		,35		,-1		,35		,-1		,-1		,-1		,35		,-1		,35		,-1		,35		,-1		,-1		,-1		,-1		,-1		,35		,35		,35		,35		,35		,35		,-1		,-1		,-1		,-1		,35		,-1		,35	},
	{-1		,-1		,-1		,-1		,-1		,-1		,43		,43		,-1		,43		,43		,-1		,43		,-1		,-1		,-1		,-1		,-1		,43		,-1		,-1		,-1		,-1		,43		,-1		,-1		,-1		,43		,43		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,42		,43		,43		,-1		,-1		,43		,-1	},
	{-1		,-1		,-1		,-1		,-1		,-1		,25		,24		,-1		,25		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,25		,-1		,-1		,-1		,25		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,25		,25		,-1		,-1		,-1		,-1	},
	{-1		,-1		,-1		,-1		,-1		,-1		,31		,31		,-1		,31		,30		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,31		,-1		,-1		,-1		,31		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,31		,31		,-1		,-1		,31		,-1	},
	{-1		,5		,6		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,4		,-1		,9		,-1		,-1		,-1		,-1		,-1		,10		,8		,-1		,-1		,3		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,7		,-1		,-1		,-1	},
	{26		,-1		,-1		,26		,-1		,26		,-1		,-1		,26		,-1		,-1		,26		,-1		,26		,26		,-1		,26		,-1		,-1		,-1		,26		,-1		,26		,-1		,26		,-1		,-1		,-1		,-1		,-1		,26		,26		,26		,26		,26		,26		,-1		,-1		,-1		,-1		,26		,-1		,26	},
	{-1		,-1		,-1		,-1		,-1		,-1		,28		,28		,-1		,28		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,28		,-1		,-1		,-1		,28		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,28		,28		,-1		,-1		,27		,-1	},
	{-1		,-1		,-1		,-1		,-1		,-1		,34		,34		,-1		,34		,34		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,33		,-1		,-1		,-1		,-1		,34		,-1		,-1		,-1		,34		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,34		,34		,-1		,-1		,34		,-1	},
	{41		,-1		,-1		,41		,-1		,41		,-1		,-1		,41		,-1		,-1		,41		,-1		,41		,41		,-1		,41		,-1		,-1		,-1		,41		,-1		,41		,-1		,41		,-1		,-1		,-1		,-1		,-1		,41		,41		,41		,41		,41		,41		,-1		,-1		,-1		,-1		,41		,-1		,41	},
	{29		,-1		,-1		,29		,-1		,29		,-1		,-1		,29		,-1		,-1		,29		,-1		,29		,29		,-1		,29		,-1		,-1		,-1		,29		,-1		,29		,-1		,29		,-1		,-1		,-1		,-1		,-1		,29		,29		,29		,29		,29		,29		,-1		,-1		,-1		,-1		,29		,-1		,29	},
	{-1		,-1		,-1		,-1		,-1		,-1		,37		,37		,-1		,37		,37		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,37		,-1		,-1		,-1		,-1		,37		,-1		,-1		,-1		,37		,36		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,37		,37		,-1		,-1		,37		,-1	},
	{-1		,0		,0		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,0		,-1		,0		,-1		,-1		,-1		,-1		,-1		,0		,0		,-1		,-1		,0		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,0		,-1		,-1		,-1	}
};
const char* KeywordList[]= {
"print",
"formats",
"disableevent",
"enableevent",
"json",
"printf",
"break",
"poi",
"db",
"dd",
"dw",
"dq",
"str",
"wstr",
"sizeof",
"neg",
"hi",
"low",
"not"
};
const char* OperatorsList[]= {
"@OR",
"@XOR",
"@AND",
"@ASR",
"@ASL",
"@ADD",
"@SUB",
"@MUL",
"@DIV",
"@MOD"
};
const char* OneOpFunc1[] = {
"@POI",
"@DB",
"@DD",
"@DW",
"@DQ",
"@STR",
"@WSTR",
"@SIZEOF",
"@NEG",
"@HI",
"@LOW",
"@NOT",
};
const char* OneOpFunc2[] = {
"@PRINT",
"@FORMATS",
"@DISABLEEVENT",
"@ENABLEEVENT",
};
const char* TwoOpFunc1[] = {
"@JSON"
};
const char* ZeroOpFunc1[] = {
"@BREAK"
};
const char* VarArgFunc1[] = {
"@PRINTF"
};
const SYMBOL_MAP SemanticRulesMapList[]= {
{"@OR", FUNC_OR},
{"@XOR", FUNC_XOR},
{"@AND", FUNC_AND},
{"@ASR", FUNC_ASR},
{"@ASL", FUNC_ASL},
{"@ADD", FUNC_ADD},
{"@SUB", FUNC_SUB},
{"@MUL", FUNC_MUL},
{"@DIV", FUNC_DIV},
{"@MOD", FUNC_MOD},
{"@PRINT", FUNC_PRINT},
{"@FORMATS", FUNC_FORMATS},
{"@DISABLEEVENT", FUNC_DISABLEEVENT},
{"@ENABLEEVENT", FUNC_ENABLEEVENT},
{"@JSON", FUNC_JSON},
{"@PRINTF", FUNC_PRINTF},
{"@BREAK", FUNC_BREAK},
{"@POI", FUNC_POI},
{"@DB", FUNC_DB},
{"@DD", FUNC_DD},
{"@DW", FUNC_DW},
{"@DQ", FUNC_DQ},
{"@STR", FUNC_STR},
{"@WSTR", FUNC_WSTR},
{"@SIZEOF", FUNC_SIZEOF},
{"@NEG", FUNC_NEG},
{"@HI", FUNC_HI},
{"@LOW", FUNC_LOW},
{"@NOT", FUNC_NOT},
{"@MOV", FUNC_MOV},
{"@VARGSTART", FUNC_VARGSTART}
};
const SYMBOL_MAP RegisterMapList[]= {
{"rax", REGISTER_RAX},
{"rcx", REGISTER_RCX},
{"rdx", REGISTER_RDX},
{"rbx", REGISTER_RBX},
{"rsp", REGISTER_RSP},
{"rbp", REGISTER_RBP},
{"rsi", REGISTER_RSI},
{"rdi", REGISTER_RDI},
{"r8", REGISTER_R8},
{"r9", REGISTER_R9},
{"r10", REGISTER_R10},
{"r11", REGISTER_R11},
{"r12", REGISTER_R12},
{"r13", REGISTER_R13},
{"r14", REGISTER_R14},
{"r15", REGISTER_R15}
};
const SYMBOL_MAP PseudoRegisterMapList[]= {
{"pid", PSEUDO_REGISTER_PID},
{"tid", PSEUDO_REGISTER_TID},
{"proc", PSEUDO_REGISTER_PROC},
{"thread", PSEUDO_REGISTER_THREAD},
{"peb", PSEUDO_REGISTER_PEB},
{"teb", PSEUDO_REGISTER_TEB},
{"ip", PSEUDO_REGISTER_IP},
{"buffer", PSEUDO_REGISTER_BUFFER},
{"context", PSEUDO_REGISTER_CONTEXT}
};
