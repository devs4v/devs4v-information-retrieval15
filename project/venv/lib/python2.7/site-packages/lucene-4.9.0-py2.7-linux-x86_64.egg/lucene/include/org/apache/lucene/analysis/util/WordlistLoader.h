#ifndef org_apache_lucene_analysis_util_WordlistLoader_H
#define org_apache_lucene_analysis_util_WordlistLoader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace analysis {
        namespace util {
          class CharArraySet;
          class CharArrayMap;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class Reader;
    class IOException;
    class InputStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class WordlistLoader : public ::java::lang::Object {
          public:
            enum {
              mid_getSnowballWordSet_f4ba7807,
              mid_getSnowballWordSet_b3c09259,
              mid_getStemDict_a82ef4ef,
              mid_getWordSet_b3c09259,
              mid_getWordSet_f4ba7807,
              mid_getWordSet_47002787,
              mid_getWordSet_24df331d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WordlistLoader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            WordlistLoader(const WordlistLoader& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::analysis::util::CharArraySet getSnowballWordSet(const ::java::io::Reader &, const ::org::apache::lucene::analysis::util::CharArraySet &);
            static ::org::apache::lucene::analysis::util::CharArraySet getSnowballWordSet(const ::java::io::Reader &, const ::org::apache::lucene::util::Version &);
            static ::org::apache::lucene::analysis::util::CharArrayMap getStemDict(const ::java::io::Reader &, const ::org::apache::lucene::analysis::util::CharArrayMap &);
            static ::org::apache::lucene::analysis::util::CharArraySet getWordSet(const ::java::io::Reader &, const ::org::apache::lucene::util::Version &);
            static ::org::apache::lucene::analysis::util::CharArraySet getWordSet(const ::java::io::Reader &, const ::org::apache::lucene::analysis::util::CharArraySet &);
            static ::org::apache::lucene::analysis::util::CharArraySet getWordSet(const ::java::io::Reader &, const ::java::lang::String &, const ::org::apache::lucene::util::Version &);
            static ::org::apache::lucene::analysis::util::CharArraySet getWordSet(const ::java::io::Reader &, const ::java::lang::String &, const ::org::apache::lucene::analysis::util::CharArraySet &);
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
          extern PyTypeObject PY_TYPE(WordlistLoader);

          class t_WordlistLoader {
          public:
            PyObject_HEAD
            WordlistLoader object;
            static PyObject *wrap_Object(const WordlistLoader&);
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
