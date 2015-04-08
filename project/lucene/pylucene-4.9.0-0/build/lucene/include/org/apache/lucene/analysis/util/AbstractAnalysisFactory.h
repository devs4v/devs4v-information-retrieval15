#ifndef org_apache_lucene_analysis_util_AbstractAnalysisFactory_H
#define org_apache_lucene_analysis_util_AbstractAnalysisFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Set;
    class Collection;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class AbstractAnalysisFactory : public ::java::lang::Object {
          public:
            enum {
              mid_get_4630d771,
              mid_get_4be9e858,
              mid_get_c717d02f,
              mid_get_bc17366a,
              mid_get_7fb22fcf,
              mid_getChar_2bcf84e7,
              mid_getClassArg_14c7b5c5,
              mid_getLuceneMatchVersion_a83d688e,
              mid_getOriginalArgs_db60befd,
              mid_getSet_3ddefc5b,
              mid_isExplicitLuceneMatchVersion_54c6a16a,
              mid_require_4630d771,
              mid_require_4be9e858,
              mid_require_203fb939,
              mid_requireChar_68876213,
              mid_setExplicitLuceneMatchVersion_bb0c767f,
              mid_getBoolean_53e7fc33,
              mid_getInt_29d335db,
              mid_getFloat_a7ea7213,
              mid_getWordSet_94dc101c,
              mid_assureMatchVersion_54c6a166,
              mid_requireInt_68876219,
              mid_requireBoolean_6887620a,
              mid_requireFloat_68876216,
              mid_getPattern_222e4d23,
              mid_getLines_161f664b,
              mid_getSnowballWordSet_94dc101c,
              mid_splitFileNames_0feb8f08,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractAnalysisFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            AbstractAnalysisFactory(const AbstractAnalysisFactory& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *LUCENE_MATCH_VERSION_PARAM;

            ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &) const;
            ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &) const;
            ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &, const ::java::lang::String &) const;
            ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &, const ::java::lang::String &) const;
            ::java::lang::String get(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &, const ::java::lang::String &, jboolean) const;
            jchar getChar(const ::java::util::Map &, const ::java::lang::String &, jchar) const;
            ::java::lang::String getClassArg() const;
            ::org::apache::lucene::util::Version getLuceneMatchVersion() const;
            ::java::util::Map getOriginalArgs() const;
            ::java::util::Set getSet(const ::java::util::Map &, const ::java::lang::String &) const;
            jboolean isExplicitLuceneMatchVersion() const;
            ::java::lang::String require(const ::java::util::Map &, const ::java::lang::String &) const;
            ::java::lang::String require(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &) const;
            ::java::lang::String require(const ::java::util::Map &, const ::java::lang::String &, const ::java::util::Collection &, jboolean) const;
            jchar requireChar(const ::java::util::Map &, const ::java::lang::String &) const;
            void setExplicitLuceneMatchVersion(jboolean) const;
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
      namespace analysis {
        namespace util {
          extern PyTypeObject PY_TYPE(AbstractAnalysisFactory);

          class t_AbstractAnalysisFactory {
          public:
            PyObject_HEAD
            AbstractAnalysisFactory object;
            static PyObject *wrap_Object(const AbstractAnalysisFactory&);
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
