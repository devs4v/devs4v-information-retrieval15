#ifndef org_apache_lucene_queryparser_flexible_standard_parser_FastCharStream_H
#define org_apache_lucene_queryparser_flexible_standard_parser_FastCharStream_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace parser {
              class CharStream;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
    class Reader;
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

              class FastCharStream : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_cf2e3c10,
                  mid_BeginToken_54c6a173,
                  mid_Done_54c6a166,
                  mid_GetImage_14c7b5c5,
                  mid_GetSuffix_b4292e99,
                  mid_backup_39c7bd3c,
                  mid_getBeginColumn_54c6a179,
                  mid_getBeginLine_54c6a179,
                  mid_getColumn_54c6a179,
                  mid_getEndColumn_54c6a179,
                  mid_getEndLine_54c6a179,
                  mid_getLine_54c6a179,
                  mid_readChar_54c6a173,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FastCharStream(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                FastCharStream(const FastCharStream& obj) : ::java::lang::Object(obj) {}

                FastCharStream(const ::java::io::Reader &);

                jchar BeginToken() const;
                void Done() const;
                ::java::lang::String GetImage() const;
                JArray< jchar > GetSuffix(jint) const;
                void backup(jint) const;
                jint getBeginColumn() const;
                jint getBeginLine() const;
                jint getColumn() const;
                jint getEndColumn() const;
                jint getEndLine() const;
                jint getLine() const;
                jchar readChar() const;
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
              extern PyTypeObject PY_TYPE(FastCharStream);

              class t_FastCharStream {
              public:
                PyObject_HEAD
                FastCharStream object;
                static PyObject *wrap_Object(const FastCharStream&);
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
