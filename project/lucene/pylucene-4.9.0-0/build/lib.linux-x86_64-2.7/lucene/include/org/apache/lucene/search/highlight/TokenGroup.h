#ifndef org_apache_lucene_search_highlight_TokenGroup_H
#define org_apache_lucene_search_highlight_TokenGroup_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Token;
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class TokenGroup : public ::java::lang::Object {
          public:
            enum {
              mid_init$_c7c794dc,
              mid_getEndOffset_54c6a179,
              mid_getNumTokens_54c6a179,
              mid_getScore_39c7bd2c,
              mid_getStartOffset_54c6a179,
              mid_getToken_2e456a21,
              mid_getTotalScore_54c6a176,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenGroup(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TokenGroup(const TokenGroup& obj) : ::java::lang::Object(obj) {}

            TokenGroup(const ::org::apache::lucene::analysis::TokenStream &);

            jint getEndOffset() const;
            jint getNumTokens() const;
            jfloat getScore(jint) const;
            jint getStartOffset() const;
            ::org::apache::lucene::analysis::Token getToken(jint) const;
            jfloat getTotalScore() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          extern PyTypeObject PY_TYPE(TokenGroup);

          class t_TokenGroup {
          public:
            PyObject_HEAD
            TokenGroup object;
            static PyObject *wrap_Object(const TokenGroup&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
