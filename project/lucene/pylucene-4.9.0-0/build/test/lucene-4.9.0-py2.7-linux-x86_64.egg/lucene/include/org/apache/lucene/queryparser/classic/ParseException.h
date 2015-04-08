#ifndef org_apache_lucene_queryparser_classic_ParseException_H
#define org_apache_lucene_queryparser_classic_ParseException_H

#include "java/lang/Exception.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {
          class Token;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {

          class ParseException : public ::java::lang::Exception {
          public:
            enum {
              mid_init$_54c6a166,
              mid_init$_5fdc3f48,
              mid_init$_8f0beb0f,
              max_mid
            };

            enum {
              fid_currentToken,
              fid_expectedTokenSequences,
              fid_tokenImage,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ParseException(jobject obj) : ::java::lang::Exception(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            ParseException(const ParseException& obj) : ::java::lang::Exception(obj) {}

            ::org::apache::lucene::queryparser::classic::Token _get_currentToken() const;
            void _set_currentToken(const ::org::apache::lucene::queryparser::classic::Token &) const;
            JArray< JArray< jint > > _get_expectedTokenSequences() const;
            void _set_expectedTokenSequences(const JArray< JArray< jint > > &) const;
            JArray< ::java::lang::String > _get_tokenImage() const;
            void _set_tokenImage(const JArray< ::java::lang::String > &) const;

            ParseException();
            ParseException(const ::java::lang::String &);
            ParseException(const ::org::apache::lucene::queryparser::classic::Token &, const JArray< JArray< jint > > &, const JArray< ::java::lang::String > &);
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
      namespace queryparser {
        namespace classic {
          extern PyTypeObject PY_TYPE(ParseException);

          class t_ParseException {
          public:
            PyObject_HEAD
            ParseException object;
            static PyObject *wrap_Object(const ParseException&);
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
