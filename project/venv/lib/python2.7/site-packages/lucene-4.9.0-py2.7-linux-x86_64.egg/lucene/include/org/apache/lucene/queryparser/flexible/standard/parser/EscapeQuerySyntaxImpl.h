#ifndef org_apache_lucene_queryparser_flexible_standard_parser_EscapeQuerySyntaxImpl_H
#define org_apache_lucene_queryparser_flexible_standard_parser_EscapeQuerySyntaxImpl_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace util {
              class UnescapedCharSequence;
            }
            namespace parser {
              class EscapeQuerySyntax;
              class EscapeQuerySyntax$Type;
            }
          }
          namespace standard {
            namespace parser {
              class ParseException;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace parser {

              class EscapeQuerySyntaxImpl : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_discardEscapeChar_31714ed7,
                  mid_escape_dd58ce7f,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit EscapeQuerySyntaxImpl(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                EscapeQuerySyntaxImpl(const EscapeQuerySyntaxImpl& obj) : ::java::lang::Object(obj) {}

                EscapeQuerySyntaxImpl();

                static ::org::apache::lucene::queryparser::flexible::core::util::UnescapedCharSequence discardEscapeChar(const ::java::lang::CharSequence &);
                ::java::lang::CharSequence escape(const ::java::lang::CharSequence &, const ::java::util::Locale &, const ::org::apache::lucene::queryparser::flexible::core::parser::EscapeQuerySyntax$Type &) const;
              };
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace parser {
              extern PyTypeObject PY_TYPE(EscapeQuerySyntaxImpl);

              class t_EscapeQuerySyntaxImpl {
              public:
                PyObject_HEAD
                EscapeQuerySyntaxImpl object;
                static PyObject *wrap_Object(const EscapeQuerySyntaxImpl&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
