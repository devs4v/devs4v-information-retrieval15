#ifndef org_apache_lucene_search_spell_DirectSpellChecker_H
#define org_apache_lucene_search_spell_DirectSpellChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class IndexReader;
      }
      namespace search {
        namespace spell {
          class SuggestMode;
          class SuggestWord;
          class StringDistance;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Comparator;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class DirectSpellChecker : public ::java::lang::Object {
          public:
            enum {
              mid_init$_54c6a166,
              mid_getAccuracy_54c6a176,
              mid_getComparator_5a7ff2fc,
              mid_getDistance_a5face5e,
              mid_getLowerCaseTerms_54c6a16a,
              mid_getMaxEdits_54c6a179,
              mid_getMaxInspections_54c6a179,
              mid_getMaxQueryFrequency_54c6a176,
              mid_getMinPrefix_54c6a179,
              mid_getMinQueryLength_54c6a179,
              mid_getThresholdFrequency_54c6a176,
              mid_setAccuracy_06298cab,
              mid_setComparator_6ffdd545,
              mid_setDistance_9c934047,
              mid_setLowerCaseTerms_bb0c767f,
              mid_setMaxEdits_39c7bd3c,
              mid_setMaxInspections_39c7bd3c,
              mid_setMaxQueryFrequency_06298cab,
              mid_setMinPrefix_39c7bd3c,
              mid_setMinQueryLength_39c7bd3c,
              mid_setThresholdFrequency_06298cab,
              mid_suggestSimilar_45727077,
              mid_suggestSimilar_cd50864e,
              mid_suggestSimilar_96cb19cd,
              mid_suggestSimilar_dc649c5f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DirectSpellChecker(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            DirectSpellChecker(const DirectSpellChecker& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::search::spell::StringDistance *INTERNAL_LEVENSHTEIN;

            DirectSpellChecker();

            jfloat getAccuracy() const;
            ::java::util::Comparator getComparator() const;
            ::org::apache::lucene::search::spell::StringDistance getDistance() const;
            jboolean getLowerCaseTerms() const;
            jint getMaxEdits() const;
            jint getMaxInspections() const;
            jfloat getMaxQueryFrequency() const;
            jint getMinPrefix() const;
            jint getMinQueryLength() const;
            jfloat getThresholdFrequency() const;
            void setAccuracy(jfloat) const;
            void setComparator(const ::java::util::Comparator &) const;
            void setDistance(const ::org::apache::lucene::search::spell::StringDistance &) const;
            void setLowerCaseTerms(jboolean) const;
            void setMaxEdits(jint) const;
            void setMaxInspections(jint) const;
            void setMaxQueryFrequency(jfloat) const;
            void setMinPrefix(jint) const;
            void setMinQueryLength(jint) const;
            void setThresholdFrequency(jfloat) const;
            JArray< ::org::apache::lucene::search::spell::SuggestWord > suggestSimilar(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::index::IndexReader &) const;
            JArray< ::org::apache::lucene::search::spell::SuggestWord > suggestSimilar(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::spell::SuggestMode &) const;
            JArray< ::org::apache::lucene::search::spell::SuggestWord > suggestSimilar(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::spell::SuggestMode &, jfloat) const;
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
          extern PyTypeObject PY_TYPE(DirectSpellChecker);

          class t_DirectSpellChecker {
          public:
            PyObject_HEAD
            DirectSpellChecker object;
            static PyObject *wrap_Object(const DirectSpellChecker&);
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
