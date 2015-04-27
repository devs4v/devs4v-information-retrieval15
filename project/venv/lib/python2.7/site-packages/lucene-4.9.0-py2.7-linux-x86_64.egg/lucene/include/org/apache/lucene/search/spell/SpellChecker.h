#ifndef org_apache_lucene_search_spell_SpellChecker_H
#define org_apache_lucene_search_spell_SpellChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriterConfig;
        class IndexReader;
      }
      namespace search {
        namespace spell {
          class SuggestMode;
          class SuggestWord;
          class StringDistance;
          class Dictionary;
        }
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Comparator;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class SpellChecker : public ::java::lang::Object {
          public:
            enum {
              mid_init$_2e261ef2,
              mid_init$_234c1a23,
              mid_init$_eced4abc,
              mid_clearIndex_54c6a166,
              mid_close_54c6a166,
              mid_exist_5fdc3f44,
              mid_getAccuracy_54c6a176,
              mid_getComparator_5a7ff2fc,
              mid_getStringDistance_a5face5e,
              mid_indexDictionary_dcfa1d99,
              mid_setAccuracy_06298cab,
              mid_setComparator_6ffdd545,
              mid_setSpellIndex_2e261ef2,
              mid_setStringDistance_9c934047,
              mid_suggestSimilar_3384fe85,
              mid_suggestSimilar_4d5d7778,
              mid_suggestSimilar_f64ed82d,
              mid_suggestSimilar_b90725e0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpellChecker(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            SpellChecker(const SpellChecker& obj) : ::java::lang::Object(obj) {}

            static jfloat DEFAULT_ACCURACY;
            static ::java::lang::String *F_WORD;

            SpellChecker(const ::org::apache::lucene::store::Directory &);
            SpellChecker(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::spell::StringDistance &);
            SpellChecker(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::spell::StringDistance &, const ::java::util::Comparator &);

            void clearIndex() const;
            void close() const;
            jboolean exist(const ::java::lang::String &) const;
            jfloat getAccuracy() const;
            ::java::util::Comparator getComparator() const;
            ::org::apache::lucene::search::spell::StringDistance getStringDistance() const;
            void indexDictionary(const ::org::apache::lucene::search::spell::Dictionary &, const ::org::apache::lucene::index::IndexWriterConfig &, jboolean) const;
            void setAccuracy(jfloat) const;
            void setComparator(const ::java::util::Comparator &) const;
            void setSpellIndex(const ::org::apache::lucene::store::Directory &) const;
            void setStringDistance(const ::org::apache::lucene::search::spell::StringDistance &) const;
            JArray< ::java::lang::String > suggestSimilar(const ::java::lang::String &, jint) const;
            JArray< ::java::lang::String > suggestSimilar(const ::java::lang::String &, jint, jfloat) const;
            JArray< ::java::lang::String > suggestSimilar(const ::java::lang::String &, jint, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::search::spell::SuggestMode &) const;
            JArray< ::java::lang::String > suggestSimilar(const ::java::lang::String &, jint, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::search::spell::SuggestMode &, jfloat) const;
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
        namespace spell {
          extern PyTypeObject PY_TYPE(SpellChecker);

          class t_SpellChecker {
          public:
            PyObject_HEAD
            SpellChecker object;
            static PyObject *wrap_Object(const SpellChecker&);
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
